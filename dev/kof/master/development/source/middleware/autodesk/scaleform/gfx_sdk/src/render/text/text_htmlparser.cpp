#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stackmempool.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_msgformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_locale.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

enum Scaleform::Render::Text::HTMLElementsEnum
{
	GFxHTML_A = 0,
	GFxHTML_B = 1,
	GFxHTML_BR = 2,
	GFxHTML_FONT = 3,
	GFxHTML_I = 4,
	GFxHTML_IMG = 5,
	GFxHTML_LI = 6,
	GFxHTML_P = 7,
	GFxHTML_SPAN = 8,
	GFxHTML_TAB = 9,
	GFxHTML_TEXTFORMAT = 10,
	GFxHTML_U = 11,
	GFxHTML_ALIGN = 12,
	GFxHTML_ALPHA = 13,
	GFxHTML_BASELINE = 14,
	GFxHTML_BLOCKINDENT = 15,
	GFxHTML_CLASS = 16,
	GFxHTML_COLOR = 17,
	GFxHTML_FACE = 18,
	GFxHTML_HEIGHT = 19,
	GFxHTML_HREF = 20,
	GFxHTML_HSPACE = 21,
	GFxHTML_ID = 22,
	GFxHTML_INDENT = 23,
	GFxHTML_KERNING = 24,
	GFxHTML_LEADING = 25,
	GFxHTML_LEFTMARGIN = 26,
	GFxHTML_LETTERSPACING = 27,
	GFxHTML_RIGHTMARGIN = 28,
	GFxHTML_SRC = 29,
	GFxHTML_SIZE = 30,
	GFxHTML_TARGET = 31,
	GFxHTML_TABSTOPS = 32,
	GFxHTML_VSPACE = 33,
	GFxHTML_WIDTH = 34,
	GFxHTML_LEFT = 35,
	GFxHTML_RIGHT = 36,
	GFxHTML_CENTER = 37,
	GFxHTML_JUSTIFY = 38,
};
struct Scaleform::Render::Text::SGMLElementDesc
{
	const char * ElemName; // 0x0
	Scaleform::Render::Text::HTMLElementsEnum ElemId; // 0x8
	bool ReqEndElement; // 0xC
	bool EmptyElement; // 0xD
};
const Scaleform::Render::Text::SGMLElementDesc * Scaleform::Render::Text::SGMLElementDesc::FindElem<wchar_t>(const wchar_t * lookForElemName, unsigned long long nameSize, const Scaleform::Render::Text::SGMLElementDesc * ptable, unsigned long long tableSize); // 0x1403870C0
struct Scaleform::Render::Text::SGMLElementDesc::Comparable<wchar_t>
{
	const wchar_t * Str; // 0x0
	unsigned long long Size; // 0x8
	Comparable<wchar_t>(const wchar_t *, unsigned long long);
};
struct Scaleform::Render::Text::SGMLElementDesc::Comparator<wchar_t>
{
	static long Compare(const Scaleform::Render::Text::SGMLElementDesc &, const Scaleform::Render::Text::SGMLElementDesc::Comparable<wchar_t> &);
	static long Less(const Scaleform::Render::Text::SGMLElementDesc &, const Scaleform::Render::Text::SGMLElementDesc::Comparable<wchar_t> &);
};
bool Scaleform::Render::Text::StyledText::ParseHtmlImpl<wchar_t>(const wchar_t * phtml, unsigned long long htmlSize, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> * pimgInfoArr, bool multiline, bool condenseWhite, const Scaleform::Render::Text::StyleManagerBase * pstyleMgr, const Scaleform::Render::Text::TextFormat * defTxtFmt, const Scaleform::Render::Text::ParagraphFormat * defParaFmt); // 0x140387190
Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>::SGMLStackElemDesc<wchar_t>(const Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> & __that); // 0x140388FE0
Scaleform::Render::Text::HTMLImageTagDesc::~HTMLImageTagDesc(); // 0x140389110
Scaleform::Render::Text::StyledText::HTMLImageTagInfo::~HTMLImageTagInfo(); // 0x140389190
struct Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>
{
	const wchar_t * pElemName; // 0x0
	unsigned long long ElemNameSize; // 0x8
	const Scaleform::Render::Text::SGMLElementDesc * pElemDesc; // 0x10
	unsigned long long StartPos; // 0x18
	Scaleform::Render::Text::TextFormat TextFmt; // 0x20
	Scaleform::Render::Text::ParagraphFormat ParaFmt; // 0x70
	SGMLStackElemDesc<wchar_t>(Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> &);
	SGMLStackElemDesc<wchar_t>(const Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> &);
	SGMLStackElemDesc<wchar_t>(Scaleform::MemoryHeap *, const wchar_t *, unsigned long long, const Scaleform::Render::Text::SGMLElementDesc *, unsigned long long);
	SGMLStackElemDesc<wchar_t>();
	~SGMLStackElemDesc<wchar_t>();
	Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> & operator=(Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> &);
	Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> & operator=(const Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> &);
};
class Scaleform::ArrayDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,Scaleform::AllocatorDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Render::Text::SGMLParser<wchar_t>
{
protected:
	Scaleform::MemoryHeap * pHeap; // 0x0
	long CurState; // 0x8
	Scaleform::Render::Text::SGMLCharIter<wchar_t> Iter; // 0x10
	wchar_t * pBuffer; // 0x30
	unsigned long long BufSize; // 0x38
	unsigned long long BufPos; // 0x40
	bool CondenseWhite; // 0x48
	void SkipName();
	void SkipSpaces();
	void SkipComment();
	void SkipAttribute();
	void ParseName(const wchar_t * *, unsigned long long *);
public:
	SGMLParser<wchar_t>(Scaleform::MemoryHeap *, const wchar_t *, unsigned long long);
	~SGMLParser<wchar_t>();
	void ResetBuf();
	void AppendToBuf(const wchar_t *, unsigned long long);
	void AppendCharToBuf(unsigned long);
	long GetNext();
	bool GetNextAttribute(const wchar_t * *, unsigned long long *);
	bool GetNextAttributeValue(const wchar_t * *, unsigned long long *);
	bool ParseStartElement(const wchar_t * *, unsigned long long *);
	bool ParseEndElement(const wchar_t * *, unsigned long long *);
	bool ParseContent(const wchar_t * *, unsigned long long *);
	bool HasAttributes();
	void SetCondenseWhite();
	static long StrCompare(const wchar_t *, unsigned long long, const wchar_t *, unsigned long long);
	static long StrCompare(const wchar_t *, const char *, unsigned long long);
	static bool ParseInt(long *, const wchar_t *, unsigned long long);
	static bool ParseHexInt(unsigned long *, const wchar_t *, unsigned long long);
	static bool ParseFloat(float *, const wchar_t *, unsigned long long);
};
bool Scaleform::Render::Text::StyledText::ParseHtml(const char * phtml, unsigned long long htmlSize, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> * pimgInfoArr, bool multiline, bool condenseWhite, const Scaleform::Render::Text::StyleManagerBase * pstyleMgr, const Scaleform::Render::Text::TextFormat * txtFmt, const Scaleform::Render::Text::ParagraphFormat * paraFmt); // 0x14038A510
bool Scaleform::Render::Text::StyledText::ParseHtml(const wchar_t * phtml, unsigned long long htmlSize, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> * pimgInfoArr, bool multiline, bool condenseWhite, const Scaleform::Render::Text::StyleManagerBase * pstyleMgr, const Scaleform::Render::Text::TextFormat * txtFmt, const Scaleform::Render::Text::ParagraphFormat * paraFmt); // 0x14038A5F0const Scaleform::Render::Text::SGMLElementDesc *__fastcall Scaleform::Render::Text::SGMLElementDesc::FindElem<wchar_t>(
        const wchar_t *lookForElemName,
        unsigned __int64 nameSize,
        const Scaleform::Render::Text::SGMLElementDesc *ptable,
        unsigned __int64 tableSize)
{
  unsigned __int64 v4; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi

  v4 = 0i64;
  v9 = tableSize;
  while ( v9 > 0 )
  {
    if ( Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(
           lookForElemName,
           ptable[(v9 >> 1) + v4].ElemName,
           nameSize) <= 0 )
    {
      v9 >>= 1;
    }
    else
    {
      v4 += (v9 >> 1) + 1;
      v9 += -1 - (v9 >> 1);
    }
  }
  if ( v4 >= tableSize )
    return 0i64;
  v10 = v4;
  if ( Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(lookForElemName, ptable[v10].ElemName, nameSize) )
    return 0i64;
  else
    return &ptable[v10];
}

char __fastcall Scaleform::Render::Text::StyledText::ParseHtmlImpl<wchar_t>(
        Scaleform::Render::Text::StyledText *this,
        const wchar_t *phtml,
        unsigned __int64 htmlSize,
        Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *pimgInfoArr,
        bool multiline,
        bool condenseWhite,
        const Scaleform::Render::Text::StyleManagerBase *pstyleMgr,
        const Scaleform::Render::Text::TextFormat *defTxtFmt,
        const Scaleform::Render::Text::ParagraphFormat *defParaFmt)
{
  Scaleform::Render::Text::StyledText *v11; // r13
  Scaleform::MemoryHeap *v13; // rax
  Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *v14; // r14
  unsigned __int64 Size; // r12
  const wchar_t *v16; // rcx
  wchar_t *v17; // rdi
  const Scaleform::Render::Text::TextFormat *pObject; // rdx
  bool v19; // al
  const Scaleform::Render::Text::SGMLElementDesc *v20; // rsi
  const Scaleform::Render::Text::ParagraphFormat *v21; // rdx
  int Next; // er15
  bool v23; // bl
  unsigned int v24; // eax
  unsigned __int64 v25; // rbx
  wchar_t *v26; // rsi
  const Scaleform::Render::Text::SGMLElementDesc *v27; // rax
  const Scaleform::Render::Text::SGMLElementDesc *v28; // rdi
  const Scaleform::Render::Text::SGMLElementDesc *pElemDesc; // rcx
  Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *v30; // rdi
  unsigned int v31; // ebx
  unsigned __int64 v32; // r14
  char v33; // si
  int v34; // ebx
  const char *v35; // rdx
  int v36; // ebx
  unsigned __int64 v37; // rbx
  const char *v38; // rdx
  const char *v39; // rdx
  unsigned __int64 v40; // rdi
  Scaleform::Render::Text::Paragraph *v41; // rax
  unsigned int v42; // eax
  Scaleform::Render::Text::SGMLElementDesc *v43; // rax
  int v44; // er15
  Scaleform::Render::Text::HTMLElementsEnum v45; // ecx
  const Scaleform::MemoryHeap *v46; // rdx
  unsigned __int64 v47; // r8
  Scaleform::Render::Text::StyledText::HTMLImageTagInfo *v48; // rbx
  Scaleform::Render::Text::ImageDesc *v49; // rax
  Scaleform::Render::Text::StyledText::HTMLImageTagInfo *v50; // r14
  unsigned __int64 v51; // rsi
  Scaleform::Render::Text::Paragraph *v52; // rbx
  const Scaleform::Render::Text::SGMLElementDesc *v53; // rbx
  Scaleform::StringDH *p_Id; // rcx
  const Scaleform::Render::Text::SGMLElementDesc *v55; // rax
  int v56; // eax
  int v57; // eax
  Scaleform::Render::Text::HTMLImageTagDesc *v58; // rax
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rdi
  char v61; // al
  Scaleform::RefCountNTSImpl *v62; // rcx
  __int64 v63; // rcx
  Scaleform::Render::Text::TextFormat *p_srcfmt; // rbx
  Scaleform::Render::Text::ParagraphFormat *pdefParaFmt; // rsi
  Scaleform::RefCountNTSImpl *v66; // rcx
  const char *v67; // rdx
  unsigned __int64 Length; // rbx
  Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *Data; // r14
  Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *v70; // rsi
  Scaleform::Render::Text::TextFormat *p_TextFmt; // r13
  Scaleform::Render::Text::TextFormat *v72; // rcx
  __int64 v73; // rbx
  Scaleform::Render::Text::ParagraphFormat *p_src; // rdx
  Scaleform::Render::Text::ParagraphFormat *p_ParaFmt; // r15
  const Scaleform::Render::Text::Style *v76; // rax
  const Scaleform::Render::Text::TextFormat *v77; // rbx
  const Scaleform::Render::Text::ParagraphFormat *v78; // rax
  const Scaleform::Render::Text::TextFormat *v79; // rax
  const Scaleform::Render::Text::SGMLElementDesc *v80; // rbx
  const Scaleform::Render::Text::Style *v81; // rax
  const Scaleform::Render::Text::TextFormat *v82; // rax
  const Scaleform::Render::Text::Style *v83; // rax
  const Scaleform::Render::Text::TextFormat *v84; // rax
  Scaleform::Render::Text::Paragraph *LastParagraph; // rax
  Scaleform::Render::Text::Paragraph *appended; // rbx
  const char *v87; // rdx
  Scaleform::Render::Text::Allocator *Allocator; // rax
  const Scaleform::Render::Text::Style *v89; // rax
  const Scaleform::Render::Text::TextFormat *v90; // rdi
  const Scaleform::Render::Text::ParagraphFormat *v91; // rax
  const Scaleform::Render::Text::TextFormat *v92; // rax
  Scaleform::Render::Text::Allocator *v93; // rax
  Scaleform::Render::Text::StyledText *v94; // r14
  Scaleform::Render::Text::Paragraph *v95; // rsi
  Scaleform::Render::Text::Paragraph *v96; // rax
  const char *v97; // rdx
  const wchar_t *v98; // r8
  const Scaleform::Render::Text::StyleManagerBase *v99; // rdi
  const Scaleform::Render::Text::Style *v100; // rax
  const Scaleform::Render::Text::TextFormat *v101; // rbx
  const Scaleform::Render::Text::ParagraphFormat *v102; // rax
  const Scaleform::Render::Text::TextFormat *v103; // rax
  const Scaleform::Render::Text::SGMLElementDesc *v104; // rbx
  Scaleform::Render::Text::HTMLElementsEnum ElemId; // eax
  const Scaleform::Render::Text::ParagraphFormat *v106; // rax
  const Scaleform::Render::Text::TextFormat *v107; // rbx
  const Scaleform::Render::Text::ParagraphFormat *v108; // rax
  const Scaleform::Render::Text::TextFormat *v109; // rax
  const Scaleform::Render::Text::SGMLElementDesc *v110; // rax
  int v111; // eax
  int v112; // eax
  int v113; // eax
  Scaleform::Render::Text::Allocator *v114; // rax
  const Scaleform::Render::Text::SGMLElementDesc *v115; // rbx
  float v116; // xmm0_4
  const Scaleform::Render::Text::SGMLElementDesc *v117; // rbx
  __int16 v118; // ax
  unsigned __int16 v119; // ax
  __int16 v120; // ax
  unsigned __int16 v121; // ax
  unsigned __int16 v122; // ax
  unsigned __int64 v123; // r14
  unsigned __int64 v124; // rdi
  wchar_t *i; // rsi
  unsigned __int64 v126; // rbx
  unsigned int v127; // edx
  unsigned __int64 j; // rcx
  wchar_t v129; // r8
  unsigned int v130; // eax
  unsigned int v131; // er12
  unsigned int v132; // edi
  int v133; // eax
  wchar_t v134; // cx
  unsigned __int64 v135; // rax
  int v136; // er8
  int v137; // eax
  wchar_t v138; // cx
  unsigned __int64 v139; // rax
  int v140; // er8
  int v141; // eax
  const Scaleform::Render::Text::SGMLElementDesc *v142; // rbx
  const Scaleform::Render::Text::Style *v143; // rax
  const Scaleform::Render::Text::TextFormat *v144; // rax
  Scaleform::Render::Text::Paragraph *v145; // rax
  __int64 k; // rdi
  Scaleform::Render::Text::Paragraph *pPara; // r14
  Scaleform::MemoryHeap *v148; // rsi
  __int64 v149; // rbx
  Scaleform::RefCountNTSImpl *v150; // rcx
  Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *v151; // rdi
  Scaleform::Render::Text::TextFormat *v152; // rbx
  wchar_t *v153; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v154; // [rsp+38h] [rbp-C8h]
  wchar_t *ppname; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 pattrValueSz; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t *ppattrValue; // [rsp+50h] [rbp-B0h] BYREF
  Scaleform::ArrayDataBase<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,Scaleform::AllocatorDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2>,Scaleform::ArrayDefaultPolicy> v158; // [rsp+58h] [rbp-A8h] BYREF
  void *pheapAddr; // [rsp+70h] [rbp-90h]
  wchar_t *pfontList; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 fontListSz; // [rsp+80h] [rbp-80h] BYREF
  wchar_t *pstr; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 len; // [rsp+90h] [rbp-70h] BYREF
  Scaleform::Render::Text::SGMLParser<wchar_t> v164; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 plen; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 nameSize; // [rsp+F8h] [rbp-8h] BYREF
  Scaleform::Render::Text::ParagraphFormat src; // [rsp+100h] [rbp+0h] BYREF
  int pdestVal; // [rsp+128h] [rbp+28h] BYREF
  int v169; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v170; // [rsp+130h] [rbp+30h] BYREF
  int v171; // [rsp+134h] [rbp+34h] BYREF
  unsigned int v172; // [rsp+138h] [rbp+38h] BYREF
  int v173; // [rsp+13Ch] [rbp+3Ch] BYREF
  int v174; // [rsp+140h] [rbp+40h] BYREF
  float v175; // [rsp+144h] [rbp+44h] BYREF
  unsigned int v176; // [rsp+148h] [rbp+48h] BYREF
  int v177; // [rsp+14Ch] [rbp+4Ch] BYREF
  int v178; // [rsp+150h] [rbp+50h] BYREF
  int v179; // [rsp+154h] [rbp+54h] BYREF
  int v180; // [rsp+158h] [rbp+58h] BYREF
  int v181; // [rsp+15Ch] [rbp+5Ch] BYREF
  Scaleform::Render::Text::StyledText::HTMLImageTagInfo v182; // [rsp+160h] [rbp+60h] BYREF
  wchar_t *lookForElemName; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned __int64 v184; // [rsp+1A8h] [rbp+A8h] BYREF
  wchar_t *v185; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned __int64 v186; // [rsp+1B8h] [rbp+B8h] BYREF
  wchar_t *v187; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned __int64 v188; // [rsp+1C8h] [rbp+C8h] BYREF
  wchar_t *v189; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned __int64 v190; // [rsp+1D8h] [rbp+D8h] BYREF
  wchar_t *v191; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned __int64 v192; // [rsp+1E8h] [rbp+E8h] BYREF
  wchar_t *v193; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned __int64 pattrNameSz; // [rsp+1F8h] [rbp+F8h] BYREF
  wchar_t *ppattrName; // [rsp+200h] [rbp+100h] BYREF
  Scaleform::MemoryHeap *pheap; // [rsp+208h] [rbp+108h]
  unsigned __int64 v197[2]; // [rsp+210h] [rbp+110h] BYREF
  Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> result; // [rsp+220h] [rbp+120h] BYREF
  unsigned __int64 v199; // [rsp+2C0h] [rbp+1C0h] BYREF
  wchar_t *v200; // [rsp+2C8h] [rbp+1C8h] BYREF
  wchar_t *ppContent; // [rsp+2D0h] [rbp+1D0h] BYREF
  unsigned __int64 urlSz; // [rsp+2D8h] [rbp+1D8h] BYREF
  wchar_t *purl; // [rsp+2E0h] [rbp+1E0h] BYREF
  unsigned __int64 pcontentSize; // [rsp+2E8h] [rbp+1E8h] BYREF
  Scaleform::Render::Text::TextFormat fmt; // [rsp+2F0h] [rbp+1F0h] BYREF
  Scaleform::Render::Text::TextFormat srcfmt; // [rsp+340h] [rbp+240h] BYREF
  int v208; // [rsp+3F0h] [rbp+2F0h]

  v11 = this;
  if ( !htmlSize )
  {
    Scaleform::Render::Text::StyledText::EnsureTermNull(this);
    return 0;
  }
  v13 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  v164.Iter.pNextChar = phtml;
  v14 = 0i64;
  memset(&v158, 0, sizeof(v158));
  Size = 0i64;
  v154 = 0i64;
  v164.CurState = 0;
  v16 = &phtml[htmlSize];
  v17 = 0i64;
  pheap = v13;
  pheapAddr = v13;
  v164.pHeap = v13;
  v164.Iter.pEnd = v16;
  v164.Iter.CurChar = 0;
  v164.Iter.DoContentParsing = 0;
  v164.Iter.pCurChar = phtml;
  if ( phtml < v16 )
  {
    v164.Iter.CurChar = *phtml;
    v164.Iter.pNextChar = phtml + 1;
  }
  pObject = defTxtFmt;
  v19 = 0;
  v20 = 0i64;
  if ( condenseWhite )
    v19 = 1;
  memset(&v164.pBuffer, 0, 24);
  v164.CondenseWhite = v19;
  v153 = 0i64;
  v208 = 0;
  if ( !defTxtFmt )
    pObject = v11->pDefaultTextFormat.pObject;
  Scaleform::Render::Text::TextFormat::TextFormat(&srcfmt, pObject, 0i64);
  v21 = defParaFmt;
  if ( !defParaFmt )
    v21 = v11->pDefaultParagraphFormat.pObject;
  src.pAllocator = 0i64;
  src.RefCount = 1;
  src.pTabStops = 0i64;
  src.BlockIndent = v21->BlockIndent;
  src.Indent = v21->Indent;
  src.Leading = v21->Leading;
  src.LeftMargin = v21->LeftMargin;
  src.RightMargin = v21->RightMargin;
  src.PresentMask = v21->PresentMask;
  Scaleform::Render::Text::ParagraphFormat::CopyTabStops(&src, v21->pTabStops);
  Scaleform::Render::Text::TextFormat::TextFormat(&fmt, &srcfmt, 0i64);
  Scaleform::Render::Text::TextFormat::SetUrl(&srcfmt, &pnewText, 0xFFFFFFFFFFFFFFFFui64);
  Next = Scaleform::Render::Text::SGMLParser<wchar_t>::GetNext(&v164);
  if ( Next == 0x8000 )
    goto LABEL_319;
  v23 = multiline;
  while ( Next != 1 )
  {
    switch ( Next )
    {
      case 2:
        v153 = 0i64;
        if ( v164.CurState == 2 )
        {
          Scaleform::Render::Text::SGMLParser<wchar_t>::ParseName(&v164, (const wchar_t **)&v153, &nameSize);
          if ( v164.Iter.CurChar == 62 )
          {
            v164.Iter.pCurChar = v164.Iter.pNextChar;
            v164.CurState = 32770;
            if ( v164.Iter.DoContentParsing && *v164.Iter.pNextChar == 38 )
            {
              Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&v164.Iter);
              goto LABEL_100;
            }
            v17 = v153;
            if ( v164.Iter.pNextChar < v164.Iter.pEnd )
            {
              v42 = *v164.Iter.pNextChar++;
              v164.Iter.CurChar = v42;
            }
          }
          else
          {
            if ( v164.Iter.CurChar == 47 )
            {
              v164.CurState = 6;
            }
            else
            {
              v164.CurState = 7;
              Scaleform::Render::Text::SGMLParser<wchar_t>::SkipSpaces(&v164);
            }
LABEL_100:
            v17 = v153;
          }
        }
        v43 = (Scaleform::Render::Text::SGMLElementDesc *)Scaleform::Render::Text::SGMLElementDesc::FindElem<wchar_t>(
                                                            v17,
                                                            nameSize,
                                                            `Scaleform::Render::Text::StyledText::ParseHtmlImpl<wchar_t>'::`2'::elementsTable,
                                                            0xDui64);
        v153 = (wchar_t *)v43;
        v20 = v43;
        v44 = Size - 1;
        if ( !v43 || !v43->EmptyElement )
        {
          Length = Scaleform::Render::Text::StyledText::GetLength(v11);
          result.pElemDesc = v20;
          result.ElemNameSize = nameSize;
          result.pElemName = v17;
          result.StartPos = 0i64;
          Scaleform::Render::Text::TextFormat::TextFormat(&result.TextFmt, pheap);
          result.ParaFmt.pAllocator = 0i64;
          result.ParaFmt.RefCount = 1;
          memset(&result.ParaFmt.pTabStops, 0, 20);
          Scaleform::ArrayDataBase<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,Scaleform::AllocatorDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
            &v158,
            pheapAddr,
            Size + 1);
          Size = v158.Size;
          Data = v158.Data;
          v154 = v158.Size;
          v70 = &v158.Data[v158.Size - 1];
          if ( v70 )
            Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>::SGMLStackElemDesc<wchar_t>(
              &v158.Data[v158.Size - 1],
              &result);
          Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&result.ParaFmt);
          Scaleform::Render::Text::TextFormat::~TextFormat(&result.TextFmt);
          v70->StartPos = Length;
          p_TextFmt = &v70->TextFmt;
          ppname = (wchar_t *)&v70->TextFmt;
          v72 = &v70->TextFmt;
          if ( v44 < 0 )
          {
            Scaleform::Render::Text::TextFormat::operator=(v72, &srcfmt);
            p_src = &src;
          }
          else
          {
            v73 = v44;
            Scaleform::Render::Text::TextFormat::operator=(v72, &Data[v73].TextFmt);
            p_src = &Data[v73].ParaFmt;
          }
          p_ParaFmt = &v70->ParaFmt;
          Scaleform::Render::Text::ParagraphFormat::operator=(&v70->ParaFmt, p_src);
          v20 = (const Scaleform::Render::Text::SGMLElementDesc *)v153;
          if ( v153 )
          {
            switch ( *((_DWORD *)v153 + 2) )
            {
              case 0:
                while ( Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute(
                          &v164,
                          (const wchar_t **)&lookForElemName,
                          v197) )
                {
                  v80 = Scaleform::Render::Text::SGMLElementDesc::FindElem<wchar_t>(
                          lookForElemName,
                          v197[0],
                          `Scaleform::Render::Text::StyledText::ParseHtmlImpl<wchar_t>'::`2'::attributesTable,
                          0x1Bui64);
                  if ( v80
                    && Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttributeValue(
                         &v164,
                         (const wchar_t **)&purl,
                         &urlSz)
                    && v80->ElemId == GFxHTML_HREF )
                  {
                    Scaleform::Render::Text::TextFormat::SetUrl(p_TextFmt, purl, urlSz);
                    this->RTFlags |= 1u;
                  }
                }
                if ( pstyleMgr )
                {
                  v81 = pstyleMgr->GetStyle(pstyleMgr, 0i64, "a", -1i64);
                  if ( v81 )
                  {
                    v82 = Scaleform::Render::Text::TextFormat::Merge(
                            p_TextFmt,
                            (Scaleform::Render::Text::TextFormat *)&result,
                            &v81->mTextFormat);
                    Scaleform::Render::Text::TextFormat::operator=(p_TextFmt, v82);
                    Scaleform::Render::Text::TextFormat::~TextFormat((Scaleform::Render::Text::TextFormat *)&result);
                  }
                  if ( Scaleform::Render::Text::TextFormat::IsUrlSet(p_TextFmt) )
                  {
                    v83 = pstyleMgr->GetStyle(pstyleMgr, 0i64, "a:link", -1i64);
                    if ( v83 )
                    {
                      v84 = Scaleform::Render::Text::TextFormat::Merge(
                              p_TextFmt,
                              (Scaleform::Render::Text::TextFormat *)&result,
                              &v83->mTextFormat);
                      Scaleform::Render::Text::TextFormat::operator=(p_TextFmt, v84);
                      Scaleform::Render::Text::TextFormat::~TextFormat((Scaleform::Render::Text::TextFormat *)&result);
                    }
                  }
                }
                goto LABEL_174;
              case 1:
                Scaleform::Render::Text::TextFormat::SetBold(p_TextFmt, 1);
                goto LABEL_174;
              case 3:
                if ( Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute(
                       &v164,
                       (const wchar_t **)&v189,
                       &v188) )
                {
                  do
                  {
                    v115 = Scaleform::Render::Text::SGMLElementDesc::FindElem<wchar_t>(
                             v189,
                             v188,
                             `Scaleform::Render::Text::StyledText::ParseHtmlImpl<wchar_t>'::`2'::attributesTable,
                             0x1Bui64);
                    if ( v115
                      && Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttributeValue(
                           &v164,
                           (const wchar_t **)&pfontList,
                           &fontListSz) )
                    {
                      switch ( v115->ElemId )
                      {
                        case GFxHTML_ALPHA:
                          if ( *pfontList == 35
                            && Scaleform::Render::Text::SGMLParser<wchar_t>::ParseHexInt(
                                 &v176,
                                 pfontList + 1,
                                 fontListSz - 1) )
                          {
                            p_TextFmt->ColorV &= 0xFFFFFFu;
                            p_TextFmt->ColorV |= (unsigned __int8)v176 << 24;
                            p_TextFmt->PresentMask |= 0x400u;
                          }
                          break;
                        case GFxHTML_COLOR:
                          if ( *pfontList == 35
                            && Scaleform::Render::Text::SGMLParser<wchar_t>::ParseHexInt(
                                 &v172,
                                 pfontList + 1,
                                 fontListSz - 1) )
                          {
                            p_TextFmt->ColorV &= 0xFF000000;
                            p_TextFmt->ColorV |= v172 & 0xFFFFFF;
                            p_TextFmt->PresentMask |= 1u;
                          }
                          break;
                        case GFxHTML_FACE:
                          Scaleform::Render::Text::TextFormat::SetFontList(p_TextFmt, pfontList, fontListSz);
                          break;
                        case GFxHTML_KERNING:
                          if ( Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt(&v174, pfontList, fontListSz)
                            && v174 >= 0 )
                          {
                            if ( v174 )
                            {
                              Scaleform::Render::Text::TextFormat::SetKerning(p_TextFmt, 1);
                            }
                            else
                            {
                              p_TextFmt->FormatFlags &= ~8u;
                              p_TextFmt->PresentMask &= ~0x80u;
                            }
                          }
                          break;
                        case GFxHTML_LETTERSPACING:
                          if ( Scaleform::Render::Text::SGMLParser<wchar_t>::ParseFloat(&v175, pfontList, fontListSz) )
                          {
                            v116 = v175;
                            p_TextFmt->PresentMask |= 2u;
                            p_TextFmt->LetterSpacing = v116 * 20.0;
                          }
                          break;
                        case GFxHTML_SIZE:
                          if ( Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt(&v173, pfontList, fontListSz)
                            && v173 >= 0 )
                          {
                            Scaleform::Render::Text::TextFormat::SetFontSize(p_TextFmt, (float)v173);
                          }
                          break;
                        default:
                          break;
                      }
                    }
                  }
                  while ( Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute(
                            &v164,
                            (const wchar_t **)&v189,
                            &v188) );
                  Size = v154;
                  v20 = (const Scaleform::Render::Text::SGMLElementDesc *)v153;
                }
                Scaleform::Render::Text::TextFormat::operator=(&fmt, p_TextFmt);
                goto LABEL_174;
              case 4:
                Scaleform::Render::Text::TextFormat::SetItalic(p_TextFmt, 1);
                goto LABEL_174;
              case 6:
                p_ParaFmt->PresentMask |= 0x8080u;
                LastParagraph = Scaleform::Render::Text::StyledText::GetLastParagraph(this);
                appended = LastParagraph;
                if ( LastParagraph )
                {
                  if ( Scaleform::Render::Text::Paragraph::GetLength(LastParagraph) )
                  {
                    if ( multiline )
                    {
                      v87 = "\n";
                      if ( (this->RTFlags & 2) != 0 )
                        v87 = "\r";
                      Scaleform::Render::Text::StyledText::AppendString(this, v87, 1ui64, NLP_ReplaceCRLF, &fmt, &src);
                    }
                    appended = Scaleform::Render::Text::StyledText::GetLastParagraph(this);
                  }
                  Allocator = Scaleform::Render::Text::StyledText::GetAllocator(this);
                  Scaleform::Render::Text::Paragraph::SetFormat(appended, Allocator, p_ParaFmt);
                }
                else
                {
                  appended = Scaleform::Render::Text::StyledText::AppendNewParagraph(this, p_ParaFmt);
                }
                if ( pstyleMgr )
                {
                  v89 = pstyleMgr->GetStyle(pstyleMgr, 0i64, v17, nameSize);
                  v90 = (const Scaleform::Render::Text::TextFormat *)v89;
                  if ( v89 )
                  {
                    v91 = Scaleform::Render::Text::ParagraphFormat::Merge(
                            p_ParaFmt,
                            (Scaleform::Render::Text::ParagraphFormat *)&v182,
                            &v89->mParagraphFormat);
                    Scaleform::Render::Text::ParagraphFormat::operator=(p_ParaFmt, v91);
                    Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat((Scaleform::Render::Text::ParagraphFormat *)&v182);
                    v92 = Scaleform::Render::Text::TextFormat::Merge(
                            p_TextFmt,
                            (Scaleform::Render::Text::TextFormat *)&result,
                            v90);
                    Scaleform::Render::Text::TextFormat::operator=(p_TextFmt, v92);
                    Scaleform::Render::Text::TextFormat::~TextFormat((Scaleform::Render::Text::TextFormat *)&result);
                    v93 = Scaleform::Render::Text::StyledText::GetAllocator(this);
                    Scaleform::Render::Text::Paragraph::SetFormat(appended, v93, p_ParaFmt);
                  }
                }
                goto LABEL_173;
              case 7:
                v94 = this;
                ppname = (wchar_t *)Scaleform::Render::Text::StyledText::GetLastParagraph(this);
                v95 = (Scaleform::Render::Text::Paragraph *)ppname;
                if ( ppname )
                {
                  if ( !v208 )
                    goto LABEL_209;
                  if ( multiline )
                  {
                    v97 = "\n";
                    if ( (this->RTFlags & 2) != 0 )
                      v97 = "\r";
                    Scaleform::Render::Text::StyledText::AppendString(this, v97, 1ui64, NLP_ReplaceCRLF, &fmt, &src);
                  }
                  v96 = Scaleform::Render::Text::StyledText::GetLastParagraph(this);
                }
                else
                {
                  v96 = Scaleform::Render::Text::StyledText::AppendNewParagraph(this, &src);
                }
                ppname = (wchar_t *)v96;
                v95 = v96;
LABEL_209:
                if ( pstyleMgr )
                {
                  v98 = v17;
                  v99 = pstyleMgr;
                  v100 = pstyleMgr->GetStyle(pstyleMgr, 0i64, v98, nameSize);
                  v101 = (const Scaleform::Render::Text::TextFormat *)v100;
                  if ( v100 )
                  {
                    v102 = Scaleform::Render::Text::ParagraphFormat::Merge(
                             p_ParaFmt,
                             (Scaleform::Render::Text::ParagraphFormat *)&v182,
                             &v100->mParagraphFormat);
                    Scaleform::Render::Text::ParagraphFormat::operator=(p_ParaFmt, v102);
                    Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat((Scaleform::Render::Text::ParagraphFormat *)&v182);
                    v103 = Scaleform::Render::Text::TextFormat::Merge(
                             p_TextFmt,
                             (Scaleform::Render::Text::TextFormat *)&result,
                             v101);
                    Scaleform::Render::Text::TextFormat::operator=(p_TextFmt, v103);
                    Scaleform::Render::Text::TextFormat::~TextFormat((Scaleform::Render::Text::TextFormat *)&result);
                  }
                }
                else
                {
                  v99 = 0i64;
                }
                if ( Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute(
                       &v164,
                       (const wchar_t **)&v187,
                       &v186) )
                {
                  do
                  {
                    v104 = Scaleform::Render::Text::SGMLElementDesc::FindElem<wchar_t>(
                             v187,
                             v186,
                             `Scaleform::Render::Text::StyledText::ParseHtmlImpl<wchar_t>'::`2'::attributesTable,
                             0x1Bui64);
                    if ( v104
                      && Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttributeValue(
                           &v164,
                           (const wchar_t **)&v185,
                           &v184) )
                    {
                      ElemId = v104->ElemId;
                      if ( ElemId == GFxHTML_ALIGN )
                      {
                        v110 = Scaleform::Render::Text::SGMLElementDesc::FindElem<wchar_t>(
                                 v185,
                                 v184,
                                 `Scaleform::Render::Text::StyledText::ParseHtmlImpl<wchar_t>'::`2'::attributesTable,
                                 0x1Bui64);
                        if ( v110 )
                        {
                          v111 = v110->ElemId - 35;
                          if ( v111 )
                          {
                            v112 = v111 - 1;
                            if ( v112 )
                            {
                              v113 = v112 - 1;
                              if ( v113 )
                              {
                                if ( v113 == 1 )
                                {
                                  p_ParaFmt->PresentMask &= ~0x200u;
                                  p_ParaFmt->PresentMask |= 0x401u;
                                }
                              }
                              else
                              {
                                p_ParaFmt->PresentMask |= 0x601u;
                              }
                            }
                            else
                            {
                              p_ParaFmt->PresentMask &= ~0x400u;
                              p_ParaFmt->PresentMask |= 0x201u;
                            }
                          }
                          else
                          {
                            p_ParaFmt->PresentMask &= 0xF9FFu;
                            p_ParaFmt->PresentMask |= 1u;
                          }
                        }
                      }
                      else if ( ElemId == GFxHTML_CLASS )
                      {
                        if ( v99 )
                        {
                          v106 = (const Scaleform::Render::Text::ParagraphFormat *)v99->GetStyle(
                                                                                     v99,
                                                                                     CSS_Class,
                                                                                     v185,
                                                                                     v184);
                          v107 = (const Scaleform::Render::Text::TextFormat *)v106;
                          if ( v106 )
                          {
                            v108 = Scaleform::Render::Text::ParagraphFormat::Merge(
                                     p_ParaFmt,
                                     (Scaleform::Render::Text::ParagraphFormat *)&v182,
                                     v106 + 2);
                            Scaleform::Render::Text::ParagraphFormat::operator=(p_ParaFmt, v108);
                            Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat((Scaleform::Render::Text::ParagraphFormat *)&v182);
                            v109 = Scaleform::Render::Text::TextFormat::Merge(
                                     p_TextFmt,
                                     (Scaleform::Render::Text::TextFormat *)&result,
                                     v107);
                            Scaleform::Render::Text::TextFormat::operator=(p_TextFmt, v109);
                            Scaleform::Render::Text::TextFormat::~TextFormat((Scaleform::Render::Text::TextFormat *)&result);
                          }
                        }
                      }
                    }
                  }
                  while ( Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute(
                            &v164,
                            (const wchar_t **)&v187,
                            &v186) );
                  v95 = (Scaleform::Render::Text::Paragraph *)ppname;
                  Size = v154;
                  v94 = this;
                }
                if ( !Scaleform::Render::Text::Paragraph::GetLength(v95) )
                {
                  v114 = Scaleform::Render::Text::StyledText::GetAllocator(v94);
                  Scaleform::Render::Text::Paragraph::SetFormat(v95, v114, p_ParaFmt);
                }
                ++v208;
                goto LABEL_173;
              case 8:
                while ( Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute(
                          &v164,
                          (const wchar_t **)&v193,
                          &v192) )
                {
                  v142 = Scaleform::Render::Text::SGMLElementDesc::FindElem<wchar_t>(
                           v193,
                           v192,
                           `Scaleform::Render::Text::StyledText::ParseHtmlImpl<wchar_t>'::`2'::attributesTable,
                           0x1Bui64);
                  if ( v142 )
                  {
                    if ( Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttributeValue(
                           &v164,
                           (const wchar_t **)&v200,
                           &v199)
                      && v142->ElemId == GFxHTML_CLASS )
                    {
                      if ( pstyleMgr )
                      {
                        v143 = pstyleMgr->GetStyle(pstyleMgr, 1i64, v200, v199);
                        if ( v143 )
                        {
                          v144 = Scaleform::Render::Text::TextFormat::Merge(
                                   p_TextFmt,
                                   (Scaleform::Render::Text::TextFormat *)&result,
                                   &v143->mTextFormat);
                          Scaleform::Render::Text::TextFormat::operator=(p_TextFmt, v144);
                          Scaleform::Render::Text::TextFormat::~TextFormat((Scaleform::Render::Text::TextFormat *)&result);
                          Scaleform::Render::Text::TextFormat::operator=(&fmt, p_TextFmt);
                        }
                      }
                    }
                  }
                }
                goto LABEL_174;
              case 0xA:
                if ( !Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute(
                        &v164,
                        (const wchar_t **)&v191,
                        &v190) )
                  goto LABEL_174;
                break;
              case 0xB:
                Scaleform::Render::Text::TextFormat::SetUnderline(p_TextFmt, 1);
                goto LABEL_174;
              default:
                goto LABEL_174;
            }
            do
            {
              v117 = Scaleform::Render::Text::SGMLElementDesc::FindElem<wchar_t>(
                       v191,
                       v190,
                       `Scaleform::Render::Text::StyledText::ParseHtmlImpl<wchar_t>'::`2'::attributesTable,
                       0x1Bui64);
              if ( v117
                && Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttributeValue(
                     &v164,
                     (const wchar_t **)&pstr,
                     &len) )
              {
                switch ( v117->ElemId )
                {
                  case GFxHTML_BLOCKINDENT:
                    if ( Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt(&v178, pstr, len) )
                    {
                      v119 = v178;
                      if ( v178 >= 0 )
                      {
                        p_ParaFmt->PresentMask |= 2u;
                        p_ParaFmt->BlockIndent = v119;
                      }
                    }
                    break;
                  case GFxHTML_INDENT:
                    if ( Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt(&v177, pstr, len) )
                    {
                      v118 = v177;
                      p_ParaFmt->PresentMask |= 4u;
                      p_ParaFmt->Indent = v118;
                    }
                    break;
                  case GFxHTML_LEADING:
                    if ( Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt(&v179, pstr, len) )
                    {
                      v120 = v179;
                      p_ParaFmt->PresentMask |= 8u;
                      p_ParaFmt->Leading = v120;
                    }
                    break;
                  case GFxHTML_LEFTMARGIN:
                    if ( Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt(&v180, pstr, len) )
                    {
                      v121 = v180;
                      if ( v180 >= 0 )
                      {
                        p_ParaFmt->PresentMask |= 0x10u;
                        p_ParaFmt->LeftMargin = v121;
                      }
                    }
                    break;
                  case GFxHTML_RIGHTMARGIN:
                    if ( Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt(&v181, pstr, len) )
                    {
                      v122 = v181;
                      if ( v181 >= 0 )
                      {
                        p_ParaFmt->PresentMask |= 0x20u;
                        p_ParaFmt->RightMargin = v122;
                      }
                    }
                    break;
                  case GFxHTML_TABSTOPS:
                    v123 = len;
                    v124 = 0i64;
                    for ( i = pstr; v124 < v123; ++v124 )
                    {
                      if ( !Scaleform::Render::Text::SGMLCharIter<wchar_t>::IsSpace(i[v124]) )
                        break;
                    }
                    v126 = v124 + 1;
                    v127 = 1;
                    if ( i[v124] != 91 )
                      v126 = v124;
                    for ( j = v126; j < v123; v127 = v130 )
                    {
                      v129 = i[j];
                      if ( v129 == 93 )
                        break;
                      ++j;
                      v130 = v127 + 1;
                      if ( v129 != 44 )
                        v130 = v127;
                    }
                    Scaleform::Render::Text::ParagraphFormat::AllocTabStops(p_ParaFmt, v127);
                    p_ParaFmt->PresentMask |= 0x40u;
                    v131 = 0;
                    while ( v126 < v123 )
                    {
                      if ( i[v126] == 93 )
                        break;
                      v132 = 0;
                      while ( isdigit(i[v126]) )
                      {
                        v133 = i[v126++];
                        v132 = v133 + 2 * (5 * v132 - 24);
                        if ( v126 >= v123 )
                          goto LABEL_300;
                      }
                      for ( ; v126 < v123; ++v126 )
                      {
                        v134 = i[v126];
                        v135 = (unsigned __int64)v134 >> 8;
                        v136 = Scaleform::UnicodeSpaceBits[v135];
                        if ( !Scaleform::UnicodeSpaceBits[v135] )
                          break;
                        if ( v136 != 1 )
                        {
                          v137 = Scaleform::UnicodeSpaceBits[v136 + ((unsigned __int8)v134 >> 4)];
                          if ( !_bittest(&v137, v134 & 0xF) )
                            break;
                        }
                      }
LABEL_300:
                      Scaleform::Render::Text::ParagraphFormat::SetTabStopsElement(p_ParaFmt, v131++, v132);
                      if ( i[v126] == 44 )
                      {
                        if ( ++v126 >= v123 )
                          goto LABEL_308;
                        while ( 1 )
                        {
                          v138 = i[v126];
                          v139 = (unsigned __int64)v138 >> 8;
                          v140 = Scaleform::UnicodeSpaceBits[v139];
                          if ( !Scaleform::UnicodeSpaceBits[v139] )
                            break;
                          if ( v140 != 1 )
                          {
                            v141 = Scaleform::UnicodeSpaceBits[v140 + ((unsigned __int8)v138 >> 4)];
                            if ( !_bittest(&v141, v138 & 0xF) )
                              break;
                          }
                          if ( ++v126 >= v123 )
                            goto LABEL_308;
                        }
                      }
                    }
                    break;
                  default:
                    break;
                }
              }
LABEL_308:
              ;
            }
            while ( Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute(
                      &v164,
                      (const wchar_t **)&v191,
                      &v190) );
            p_TextFmt = (Scaleform::Render::Text::TextFormat *)ppname;
            Size = v154;
          }
          else if ( pstyleMgr )
          {
            v76 = pstyleMgr->GetStyle(pstyleMgr, 0i64, v17, nameSize);
            v77 = (const Scaleform::Render::Text::TextFormat *)v76;
            if ( v76 )
            {
              v78 = Scaleform::Render::Text::ParagraphFormat::Merge(
                      p_ParaFmt,
                      (Scaleform::Render::Text::ParagraphFormat *)&v182,
                      &v76->mParagraphFormat);
              Scaleform::Render::Text::ParagraphFormat::operator=(p_ParaFmt, v78);
              Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat((Scaleform::Render::Text::ParagraphFormat *)&v182);
              v79 = Scaleform::Render::Text::TextFormat::Merge(
                      p_TextFmt,
                      (Scaleform::Render::Text::TextFormat *)&result,
                      v77);
              Scaleform::Render::Text::TextFormat::operator=(p_TextFmt, v79);
              Scaleform::Render::Text::TextFormat::~TextFormat((Scaleform::Render::Text::TextFormat *)&result);
            }
          }
LABEL_173:
          v20 = (const Scaleform::Render::Text::SGMLElementDesc *)v153;
LABEL_174:
          Scaleform::Render::Text::TextFormat::operator=(&fmt, p_TextFmt);
          v11 = this;
          v14 = v158.Data;
          v23 = multiline;
          break;
        }
        v45 = v43->ElemId;
        if ( v45 == GFxHTML_BR )
        {
          if ( v23 )
          {
            v67 = "\n";
            if ( (v11->RTFlags & 2) != 0 )
              v67 = "\r";
            Scaleform::Render::Text::StyledText::AppendString(v11, v67, 1ui64, NLP_ReplaceCRLF, &fmt, &src);
          }
          break;
        }
        if ( v45 != GFxHTML_IMG )
        {
          if ( v45 == GFxHTML_TAB )
            Scaleform::Render::Text::StyledText::AppendString(v11, "\t", 1ui64, NLP_ReplaceCRLF);
          break;
        }
        if ( pimgInfoArr )
        {
          v182.pTextImageDesc.pObject = 0i64;
          Scaleform::StringDH::StringDH(&v182.Url, pheap);
          Scaleform::StringDH::StringDH(&v182.Id, pheap);
          v46 = pimgInfoArr->Data.pHeap;
          v47 = pimgInfoArr->Data.Size + 1;
          *(_QWORD *)&v182.Width = 0i64;
          *(_QWORD *)&v182.VSpace = 0i64;
          v182.ParaId = -1;
          v182.Alignment = 0;
          Scaleform::ArrayDataBase<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,Scaleform::AllocatorDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
            &pimgInfoArr->Data,
            v46,
            v47);
          v48 = &pimgInfoArr->Data.Data[pimgInfoArr->Data.Size - 1];
          if ( v48 )
          {
            v49 = v182.pTextImageDesc.pObject;
            if ( v182.pTextImageDesc.pObject )
            {
              ++v182.pTextImageDesc.pObject->RefCount;
              v49 = v182.pTextImageDesc.pObject;
            }
            v48->pTextImageDesc.pObject = v49;
            Scaleform::StringDH::CopyConstructHelper(&v48->Url, &v182.Url, v182.Url.pHeap);
            Scaleform::StringDH::CopyConstructHelper(&v48->Id, &v182.Id, v182.Id.pHeap);
            v48->Width = v182.Width;
            v48->Height = v182.Height;
            v48->VSpace = v182.VSpace;
            v48->HSpace = v182.HSpace;
            v48->ParaId = v182.ParaId;
            v48->Alignment = v182.Alignment;
          }
          Scaleform::Render::Text::StyledText::HTMLImageTagInfo::~HTMLImageTagInfo(&v182);
          v50 = pimgInfoArr->Data.Data;
          v51 = pimgInfoArr->Data.Size << 6;
          v52 = Scaleform::Render::Text::StyledText::GetLastParagraph(v11);
          if ( !v52 )
            v52 = Scaleform::Render::Text::StyledText::AppendNewParagraph(v11, &src);
          Scaleform::Render::Text::TextFormat::TextFormat((Scaleform::Render::Text::TextFormat *)&result, &srcfmt, 0i64);
          *(_DWORD *)((char *)v50 + v51 - 8) = v52->UniqueId;
          if ( Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute(
                 &v164,
                 (const wchar_t **)&ppattrName,
                 &pattrNameSz) )
          {
            do
            {
              v53 = Scaleform::Render::Text::SGMLElementDesc::FindElem<wchar_t>(
                      ppattrName,
                      pattrNameSz,
                      `Scaleform::Render::Text::StyledText::ParseHtmlImpl<wchar_t>'::`2'::attributesTable,
                      0x1Bui64);
              if ( v53
                && Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttributeValue(
                     &v164,
                     (const wchar_t **)&ppattrValue,
                     &pattrValueSz) )
              {
                switch ( v53->ElemId )
                {
                  case GFxHTML_ALIGN:
                    v55 = Scaleform::Render::Text::SGMLElementDesc::FindElem<wchar_t>(
                            ppattrValue,
                            pattrValueSz,
                            `Scaleform::Render::Text::StyledText::ParseHtmlImpl<wchar_t>'::`2'::attributesTable,
                            0x1Bui64);
                    if ( v55 )
                    {
                      v56 = v55->ElemId - 14;
                      if ( v56 )
                      {
                        v57 = v56 - 21;
                        if ( v57 )
                        {
                          if ( v57 == 1 )
                            *((_BYTE *)v50 + v51 - 4) = 1;
                        }
                        else
                        {
                          *((_BYTE *)v50 + v51 - 4) = 2;
                        }
                      }
                      else
                      {
                        *((_BYTE *)v50 + v51 - 4) = 0;
                      }
                    }
                    break;
                  case GFxHTML_HEIGHT:
                    if ( Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt(&v169, ppattrValue, pattrValueSz)
                      && v169 >= 0 )
                    {
                      *(_DWORD *)((char *)v50 + v51 - 20) = 20 * v169;
                    }
                    break;
                  case GFxHTML_HSPACE:
                    if ( Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt(&v171, ppattrValue, pattrValueSz) )
                      *(_DWORD *)((char *)v50 + v51 - 12) = 20 * v171;
                    break;
                  case GFxHTML_ID:
                    p_Id = &v50[-1].Id;
                    goto LABEL_119;
                  case GFxHTML_SRC:
                    p_Id = &v50[-1].Url;
LABEL_119:
                    Scaleform::String::AppendString(
                      (Scaleform::StringDH *)((char *)p_Id + v51),
                      ppattrValue,
                      pattrValueSz);
                    break;
                  case GFxHTML_VSPACE:
                    if ( Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt(&v170, ppattrValue, pattrValueSz) )
                      *(_DWORD *)((char *)v50 + v51 - 16) = 20 * v170;
                    break;
                  case GFxHTML_WIDTH:
                    if ( Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt(&pdestVal, ppattrValue, pattrValueSz)
                      && pdestVal >= 0 )
                    {
                      *(_DWORD *)((char *)v50 + v51 - 24) = 20 * pdestVal;
                    }
                    break;
                  default:
                    break;
                }
              }
            }
            while ( Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute(
                      &v164,
                      (const wchar_t **)&ppattrName,
                      &pattrNameSz) );
            v11 = this;
          }
          LODWORD(plen) = 74;
          v58 = (Scaleform::Render::Text::HTMLImageTagDesc *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                               Scaleform::Memory::pGlobalHeap,
                                                               v11,
                                                               112i64,
                                                               &plen);
          if ( v58 )
          {
            Scaleform::Render::Text::HTMLImageTagDesc::HTMLImageTagDesc(v58);
            v60 = v59;
            if ( v59 )
              ++*(_DWORD *)(v59 + 8);
          }
          else
          {
            v60 = 0i64;
          }
          if ( result.TextFmt.FontList.HeapTypeBits )
            Scaleform::RefCountNTSImpl::Release((Scaleform::RefCountNTSImpl *)result.TextFmt.FontList.pData);
          result.TextFmt.FontList.HeapTypeBits = v60;
          WORD2(result.TextFmt.Url.pHeap) |= 0x200u;
          *(float *)(v60 + 32) = (float)*(int *)((char *)v50 + v51 - 24);
          *(float *)(v60 + 36) = (float)*(int *)((char *)v50 + v51 - 20);
          *(_DWORD *)(v60 + 96) = *(_DWORD *)((char *)v50 + v51 - 16);
          *(_DWORD *)(v60 + 100) = *(_DWORD *)((char *)v50 + v51 - 12);
          Scaleform::String::operator=(
            (Scaleform::String *)(v60 + 80),
            (const Scaleform::String *)((char *)&v50[-1].Url + v51));
          Scaleform::String::operator=(
            (Scaleform::String *)(v60 + 88),
            (const Scaleform::String *)((char *)&v50[-1].Id + v51));
          v61 = *((_BYTE *)v50 + v51 - 4);
          ++*(_DWORD *)(v60 + 8);
          *(_BYTE *)(v60 + 108) = v61;
          v62 = *(Scaleform::Render::Text::ImageDesc **)((char *)&v50[-1].pTextImageDesc.pObject + v51);
          if ( v62 )
            Scaleform::RefCountNTSImpl::Release(v62);
          *(Scaleform::Render::Text::ImageDesc **)((char *)&v50[-1].pTextImageDesc.pObject + v51) = (Scaleform::Render::Text::ImageDesc *)v60;
          v14 = v158.Data;
          if ( v44 < 0 )
          {
            p_srcfmt = &srcfmt;
            pdefParaFmt = &src;
          }
          else
          {
            v63 = v44;
            p_srcfmt = &v158.Data[v63].TextFmt;
            pdefParaFmt = &v158.Data[v63].ParaFmt;
          }
          if ( Scaleform::Render::Text::TextFormat::IsUrlSet(p_srcfmt) )
            Scaleform::Render::Text::TextFormat::SetUrl((Scaleform::Render::Text::TextFormat *)&result, &p_srcfmt->Url);
          Scaleform::Render::Text::StyledText::AppendString(
            v11,
            " ",
            1ui64,
            NLP_ReplaceCRLF,
            (const Scaleform::Render::Text::TextFormat *)&result,
            pdefParaFmt);
          v66 = p_srcfmt->pImageDesc.pObject;
          if ( v66 )
            Scaleform::RefCountNTSImpl::Release(v66);
          p_srcfmt->pImageDesc.pObject = 0i64;
          p_srcfmt->PresentMask |= 0x200u;
          if ( fmt.pImageDesc.pObject )
            Scaleform::RefCountNTSImpl::Release(fmt.pImageDesc.pObject);
          fmt.PresentMask |= 0x200u;
          fmt.pImageDesc.pObject = 0i64;
          Scaleform::Render::Text::StyledText::SetDefaultTextFormat(v11, p_srcfmt);
          if ( srcfmt.pImageDesc.pObject )
            Scaleform::RefCountNTSImpl::Release(srcfmt.pImageDesc.pObject);
          srcfmt.PresentMask |= 0x200u;
          srcfmt.pImageDesc.pObject = 0i64;
          Scaleform::RefCountNTSImpl::Release((Scaleform::RefCountNTSImpl *)v60);
          Scaleform::Render::Text::TextFormat::~TextFormat((Scaleform::Render::Text::TextFormat *)&result);
          goto LABEL_44;
        }
        break;
      case 3:
        if ( !Scaleform::Render::Text::SGMLParser<wchar_t>::ParseContent(
                &v164,
                (const wchar_t **)&ppContent,
                &pcontentSize) )
          goto LABEL_47;
        v40 = pcontentSize;
        if ( pcontentSize )
        {
          v41 = Scaleform::Render::Text::StyledText::GetLastParagraph(v11);
          if ( v41 )
            v41 = (Scaleform::Render::Text::Paragraph *)Scaleform::Render::Text::Paragraph::GetLength(v41);
          if ( !condenseWhite || v40 > 1 || *ppContent != 32 || v41 )
          {
            if ( Size )
            {
              Scaleform::Render::Text::StyledText::AppendString(
                v11,
                ppContent,
                v40,
                NLP_ReplaceCRLF,
                &v14[Size - 1].TextFmt,
                &v14[Size - 1].ParaFmt);
              Scaleform::Render::Text::TextFormat::operator=(&fmt, &v14[Size - 1].TextFmt);
              v23 = multiline;
            }
            else
            {
              Scaleform::Render::Text::StyledText::AppendString(v11, ppContent, v40, NLP_ReplaceCRLF, &srcfmt, &src);
              Scaleform::Render::Text::TextFormat::operator=(&fmt, &srcfmt);
            }
          }
        }
        break;
      case 4:
      case 32773:
        ppname = 0i64;
        plen = 0i64;
        if ( Next == 4 )
        {
          if ( Size )
            v17 = (wchar_t *)&v14[Size - 1];
          if ( v164.CurState == 4 )
          {
            Scaleform::Render::Text::SGMLParser<wchar_t>::ParseName(&v164, (const wchar_t **)&ppname, &plen);
            if ( v164.Iter.CurChar == 62 )
            {
              v164.Iter.pCurChar = v164.Iter.pNextChar;
              v164.CurState = 32772;
              if ( v164.Iter.DoContentParsing && *v164.Iter.pNextChar == 38 )
              {
                Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&v164.Iter);
              }
              else if ( v164.Iter.pNextChar < v164.Iter.pEnd )
              {
                v24 = *v164.Iter.pNextChar++;
                v164.Iter.CurChar = v24;
              }
            }
            else
            {
              v164.CurState = 1;
            }
          }
        }
        else
        {
          if ( v20 && v20->EmptyElement || !Size )
            break;
          v17 = (wchar_t *)&v14[Size - 1];
          ppname = *(wchar_t **)v17;
          plen = *((_QWORD *)v17 + 1);
        }
        if ( v17 )
        {
          v25 = plen;
          v26 = ppname;
          if ( !Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(
                  ppname,
                  plen,
                  *(const wchar_t **)v17,
                  *((_QWORD *)v17 + 1)) )
            goto LABEL_52;
          v27 = Scaleform::Render::Text::SGMLElementDesc::FindElem<wchar_t>(
                  v26,
                  v25,
                  `Scaleform::Render::Text::StyledText::ParseHtmlImpl<wchar_t>'::`2'::elementsTable,
                  0xDui64);
          v28 = v27;
          if ( !v27 || !v208 || (unsigned int)(v27->ElemId - 6) > 1 || !Size )
            goto LABEL_44;
          while ( 1 )
          {
            pElemDesc = v14[Size - 1].pElemDesc;
            if ( pElemDesc )
            {
              if ( v28->ElemId == pElemDesc->ElemId )
                break;
            }
            Scaleform::ArrayDataBase<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,Scaleform::AllocatorDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
              &v158,
              pheapAddr,
              Size - 1);
            v14 = v158.Data;
            if ( Size - 1 > Size )
              Scaleform::ConstructorMov<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>>::ConstructArray(
                &v158.Data[Size],
                0xFFFFFFFFFFFFFFFFui64);
            Size = v158.Size;
            v154 = v158.Size;
            if ( !v158.Size )
              goto LABEL_44;
          }
          if ( Size )
          {
            v17 = (wchar_t *)&v14[Size - 1];
LABEL_52:
            v31 = v17[73];
            v32 = *((_QWORD *)v17 + 3);
            v33 = BYTE1(v31) & 1;
            v34 = (v31 >> 11) & 3;
            v153 = (wchar_t *)*((_QWORD *)v17 + 2);
            Scaleform::ArrayDataBase<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,Scaleform::AllocatorDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
              &v158,
              pheapAddr,
              Size - 1);
            if ( Size - 1 > Size )
              Scaleform::ConstructorMov<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>>::ConstructArray(
                &v158.Data[Size],
                0xFFFFFFFFFFFFFFFFui64);
            if ( v153 )
            {
              v20 = (const Scaleform::Render::Text::SGMLElementDesc *)v153;
              if ( *((_DWORD *)v153 + 2) == 6 || *((_DWORD *)v153 + 2) == 7 && (--v208, Next != 32773) )
              {
                v23 = multiline;
                if ( multiline )
                {
                  v35 = "\n";
                  if ( (v11->RTFlags & 2) != 0 )
                    v35 = "\r";
                  Scaleform::Render::Text::StyledText::AppendString(v11, v35, 1ui64, NLP_ReplaceCRLF, &fmt, &src);
                  Size = v158.Size;
                  v14 = v158.Data;
                  v154 = v158.Size;
                  break;
                }
                goto LABEL_77;
              }
LABEL_76:
              v23 = multiline;
LABEL_77:
              Size = v158.Size;
              v14 = v158.Data;
              v154 = v158.Size;
              break;
            }
            if ( !pstyleMgr || !v33 )
            {
LABEL_75:
              v20 = (const Scaleform::Render::Text::SGMLElementDesc *)v153;
              goto LABEL_76;
            }
            v36 = v34 - 1;
            if ( v36 )
            {
              if ( v36 != 1 )
                goto LABEL_75;
              v37 = Scaleform::Render::Text::StyledText::GetLength(v11);
              if ( multiline )
              {
                v38 = "\n";
                if ( (v11->RTFlags & 2) != 0 )
                  v38 = "\r";
                Scaleform::Render::Text::StyledText::AppendString(v11, v38, 1ui64, NLP_ReplaceCRLF, &fmt, &src);
              }
              Scaleform::Render::Text::StyledText::Remove(v11, v32, v37 - v32);
              Size = v158.Size;
              v14 = v158.Data;
              v154 = v158.Size;
              goto LABEL_44;
            }
            v23 = multiline;
            if ( !multiline )
            {
              Size = v158.Size;
              v20 = (const Scaleform::Render::Text::SGMLElementDesc *)v153;
              v14 = v158.Data;
              v154 = v158.Size;
              break;
            }
            v39 = "\n";
            if ( (v11->RTFlags & 2) != 0 )
              v39 = "\r";
            Scaleform::Render::Text::StyledText::AppendString(v11, v39, 1ui64, NLP_ReplaceCRLF, &fmt, &src);
            Size = v158.Size;
            v14 = v158.Data;
            v154 = v158.Size;
          }
          else
          {
LABEL_44:
            v23 = multiline;
          }
          v20 = (const Scaleform::Render::Text::SGMLElementDesc *)v153;
        }
        break;
      default:
        goto LABEL_47;
    }
    v17 = 0i64;
LABEL_47:
    Next = Scaleform::Render::Text::SGMLParser<wchar_t>::GetNext(&v164);
    if ( Next == 0x8000 )
      break;
  }
  if ( !Size )
  {
LABEL_319:
    Scaleform::Render::Text::StyledText::SetDefaultTextFormat(v11, &srcfmt);
    Scaleform::Render::Text::StyledText::SetDefaultParagraphFormat(v11, &src);
    goto LABEL_320;
  }
  v30 = &v14[Size];
  Scaleform::Render::Text::StyledText::SetDefaultTextFormat(v11, &v30[-1].TextFmt);
  Scaleform::Render::Text::StyledText::SetDefaultParagraphFormat(v11, &v14[Size - 1].ParaFmt);
  Scaleform::Render::Text::TextFormat::operator=(&fmt, &v30[-1].TextFmt);
LABEL_320:
  Scaleform::Render::Text::StyledText::EnsureTermNull(v11);
  v145 = Scaleform::Render::Text::StyledText::GetLastParagraph(v11);
  if ( v145 && !Scaleform::Render::Text::Paragraph::GetLength(v145) )
  {
    for ( k = v11->Paragraphs.Data.Size - 1; k >= 0; --k )
    {
      if ( k >= SLODWORD(v11->Paragraphs.Data.Size) )
        break;
      pPara = v11->Paragraphs.Data.Data[k].pPara;
      if ( Scaleform::Render::Text::Paragraph::GetLength(pPara) > 1 )
        break;
      if ( !v11->pTextAllocator.pObject )
      {
        v148 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, v11);
        v149 = (__int64)v148->Alloc(v148, 144ui64, 0i64);
        if ( v149 )
        {
          *(_QWORD *)v149 = &Scaleform::Render::Text::Allocator::`vftable';
          *(_DWORD *)(v149 + 8) = 1;
          *(_QWORD *)(v149 + 16) = 0i64;
          *(_QWORD *)(v149 + 24) = 0i64;
          *(_DWORD *)(v149 + 32) = 100;
          *(_DWORD *)(v149 + 36) = 100;
          *(_DWORD *)(v149 + 40) = 1;
          *(_QWORD *)(v149 + 48) = v148;
          Scaleform::Render::Text::TextFormat::TextFormat((Scaleform::Render::Text::TextFormat *)(v149 + 56), v148);
          *(_BYTE *)(v149 + 136) = 0;
        }
        else
        {
          v149 = 0i64;
        }
        v150 = v11->pTextAllocator.pObject;
        if ( v150 )
          Scaleform::RefCountNTSImpl::Release(v150);
        v11->pTextAllocator.pObject = (Scaleform::Render::Text::Allocator *)v149;
      }
      Scaleform::Render::Text::Paragraph::SetTextFormat(
        pPara,
        v11->pTextAllocator.pObject,
        &fmt,
        0i64,
        0xFFFFFFFFFFFFFFFFui64);
    }
    Size = v154;
  }
  Scaleform::Render::Text::TextFormat::~TextFormat(&fmt);
  Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&src);
  Scaleform::Render::Text::TextFormat::~TextFormat(&srcfmt);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v164.pBuffer);
  v151 = v158.Data;
  if ( Size )
  {
    v152 = &v158.Data[Size - 1].TextFmt;
    do
    {
      Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat((Scaleform::Render::Text::ParagraphFormat *)&v152[1]);
      Scaleform::Render::Text::TextFormat::~TextFormat(v152);
      v152 = (Scaleform::Render::Text::TextFormat *)((char *)v152 - 152);
      --Size;
    }
    while ( Size );
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v151);
  return 1;
}

void __fastcall Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>::SGMLStackElemDesc<wchar_t>(
        Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *this,
        const Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *__that)
{
  this->pElemName = __that->pElemName;
  this->ElemNameSize = __that->ElemNameSize;
  this->pElemDesc = __that->pElemDesc;
  this->StartPos = __that->StartPos;
  Scaleform::Render::Text::TextFormat::TextFormat(&this->TextFmt, &__that->TextFmt, 0i64);
  this->ParaFmt.RefCount = 1;
  this->ParaFmt.pAllocator = 0i64;
  this->ParaFmt.pTabStops = 0i64;
  this->ParaFmt.BlockIndent = __that->ParaFmt.BlockIndent;
  this->ParaFmt.Indent = __that->ParaFmt.Indent;
  this->ParaFmt.Leading = __that->ParaFmt.Leading;
  this->ParaFmt.LeftMargin = __that->ParaFmt.LeftMargin;
  this->ParaFmt.RightMargin = __that->ParaFmt.RightMargin;
  this->ParaFmt.PresentMask = __that->ParaFmt.PresentMask;
  Scaleform::Render::Text::ParagraphFormat::CopyTabStops(&this->ParaFmt, __that->ParaFmt.pTabStops);
}

void __fastcall Scaleform::Render::Text::HTMLImageTagDesc::HTMLImageTagDesc(
        Scaleform::Render::Text::HTMLImageTagDesc *this)
{
  this->RefCount = 1;
  this->pImage.pObject = 0i64;
  *(_QWORD *)&this->BaseLineX = 0i64;
  *(_QWORD *)&this->ScreenWidth = 0i64;
  *(_OWORD *)&this->Matrix.M[0][0] = 0x3F800000ui64;
  this->Matrix.M[1][0] = 0.0;
  *(_QWORD *)&this->Matrix.M[1][1] = 1065353216i64;
  this->Matrix.M[1][3] = 0.0;
  this->__vftable = (Scaleform::Render::Text::HTMLImageTagDesc_vtbl *)&Scaleform::Render::Text::HTMLImageTagDesc::`vftable';
  Scaleform::StringLH::StringLH(&this->Url);
  Scaleform::StringLH::StringLH(&this->Id);
  *(_QWORD *)&this->VSpace = 0i64;
  this->ParaId = -1;
  this->Alignment = 0;
}

void __fastcall Scaleform::Render::Text::HTMLImageTagDesc::~HTMLImageTagDesc(
        Scaleform::Render::Text::HTMLImageTagDesc *this)
{
  volatile int *v2; // rbx
  volatile int *v3; // rbx
  Scaleform::Render::Image *pObject; // rcx

  v2 = (volatile int *)(this->Id.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v2 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v2);
  v3 = (volatile int *)(this->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v3 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v3);
  pObject = this->pImage.pObject;
  if ( pObject )
    pObject->Release(pObject);
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(this);
}

void __fastcall Scaleform::Render::Text::StyledText::HTMLImageTagInfo::~HTMLImageTagInfo(
        Scaleform::Render::Text::StyledText::HTMLImageTagInfo *this)
{
  volatile int *v2; // rbx
  volatile int *v3; // rbx

  v2 = (volatile int *)(this->Id.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v2 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v2);
  v3 = (volatile int *)(this->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v3 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v3);
  if ( this->pTextImageDesc.pObject )
    Scaleform::RefCountNTSImpl::Release(this->pTextImageDesc.pObject);
}

void __fastcall Scaleform::Render::Text::SGMLCharIter<wchar_t>::operator++(
        Scaleform::Render::Text::SGMLCharIter<wchar_t> *this)
{
  bool v1; // zf
  const wchar_t *pNextChar; // rdx

  v1 = !this->DoContentParsing;
  pNextChar = this->pNextChar;
  this->pCurChar = pNextChar;
  if ( !v1 && *pNextChar == 38 )
  {
    Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(this);
  }
  else if ( pNextChar < this->pEnd )
  {
    this->CurChar = *pNextChar;
    this->pNextChar = pNextChar + 1;
  }
}

void __fastcall Scaleform::Render::Text::SGMLParser<wchar_t>::AppendToBuf(
        Scaleform::Render::Text::SGMLParser<wchar_t> *this,
        const wchar_t *pstr,
        unsigned __int64 sz)
{
  unsigned __int64 BufSize; // rcx
  wchar_t *pBuffer; // rdx
  unsigned __int64 v8; // r8
  wchar_t *v9; // rax

  BufSize = this->BufSize;
  if ( sz + this->BufPos > BufSize )
  {
    pBuffer = this->pBuffer;
    v8 = BufSize + sz;
    this->BufSize = v8;
    if ( pBuffer )
      v9 = (wchar_t *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, pBuffer, 2 * v8);
    else
      v9 = (wchar_t *)this->pHeap->Alloc(this->pHeap, 2 * v8, 0i64);
    this->pBuffer = v9;
  }
  memmove(&this->pBuffer[this->BufPos], pstr, 2 * sz);
  this->BufPos += sz;
}

void __fastcall Scaleform::ConstructorMov<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>>::ConstructArray(
        void *p,
        unsigned __int64 count)
{
  unsigned __int64 v2; // rdi
  char *v3; // rbx
  Scaleform::MemoryHeap *v4; // rax

  if ( count )
  {
    v2 = count;
    v3 = (char *)p + 128;
    do
    {
      if ( v3 != (char *)128 )
      {
        *((_QWORD *)v3 - 16) = 0i64;
        *((_QWORD *)v3 - 15) = 0i64;
        *((_QWORD *)v3 - 14) = 0i64;
        v4 = (Scaleform::MemoryHeap *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL)(Scaleform::Memory::pGlobalHeap);
        Scaleform::Render::Text::TextFormat::TextFormat((Scaleform::Render::Text::TextFormat *)(v3 - 96), v4);
        *((_QWORD *)v3 - 2) = 0i64;
        *((_DWORD *)v3 - 2) = 1;
        *(_QWORD *)v3 = 0i64;
        *((_QWORD *)v3 + 1) = 0i64;
        *((_DWORD *)v3 + 4) = 0;
      }
      v3 += 152;
      --v2;
    }
    while ( v2 );
  }
}

__int64 __fastcall Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(
        Scaleform::Render::Text::SGMLCharIter<wchar_t> *this)
{
  const wchar_t *pCurChar; // rax
  const wchar_t *pEnd; // rcx
  wchar_t *v4; // rbp
  __int64 v5; // r15
  const char *v6; // rsi
  __int64 v7; // r14
  int v8; // eax
  int v9; // edi
  int v10; // eax
  wchar_t *pNextChar; // rbp
  const char *v12; // rsi
  __int64 v13; // r14
  int v14; // eax
  int v15; // edi
  int v16; // eax
  wchar_t *v17; // rbp
  const char *v18; // rsi
  int v19; // eax
  int v20; // edi
  int v21; // eax
  const wchar_t *v22; // rbp
  __int64 v23; // r14
  const char *v24; // rsi
  int v25; // eax
  int v26; // edi
  int v27; // eax
  const wchar_t *v28; // rbp
  __int64 v29; // r15
  const char *v30; // rsi
  __int64 v31; // r14
  int v32; // eax
  int v33; // edi
  int v34; // eax
  wchar_t *v35; // rbp
  const char *v36; // rsi
  int v37; // eax
  int v38; // edi
  int v39; // eax
  const wchar_t *v40; // rsi
  unsigned int v41; // edi
  const wchar_t *v42; // rax
  __int16 v43; // ax
  int v44; // eax
  wchar_t v46; // cx
  const wchar_t *v47; // rdx
  int v48; // ecx
  int v49; // edi

  pCurChar = this->pCurChar;
  pEnd = this->pEnd;
  if ( pCurChar >= pEnd )
    return 0i64;
  this->pNextChar = pCurChar;
  if ( *pCurChar != 38 )
    return this->CurChar;
  v4 = (wchar_t *)(pCurChar + 1);
  this->CurChar = 38;
  this->pNextChar = pCurChar + 1;
  if ( pCurChar + 6 <= pEnd )
  {
    v5 = 5i64;
    v6 = "quot;";
    v7 = 5i64;
    do
    {
      v8 = Scaleform::SFtowlower(*v4++);
      v9 = v8;
      v10 = Scaleform::SFtowlower(*v6++);
      if ( !--v7 || !v9 )
        break;
      if ( v9 != v10 )
        goto LABEL_12;
    }
    while ( *v6 );
    if ( v9 == v10 && (v7 || *v6) )
    {
LABEL_13:
      this->pNextChar += 5;
      this->CurChar = 34;
      return this->CurChar;
    }
LABEL_12:
    if ( v9 == v10 )
      goto LABEL_13;
    pNextChar = (wchar_t *)this->pNextChar;
    v12 = "apos;";
    v13 = 5i64;
    do
    {
      v14 = Scaleform::SFtowlower(*pNextChar++);
      v15 = v14;
      v16 = Scaleform::SFtowlower(*v12++);
      if ( !--v13 || !v15 )
        break;
      if ( v15 != v16 )
        goto LABEL_22;
    }
    while ( *v12 );
    if ( v15 == v16 && (v13 || *v12) )
    {
LABEL_23:
      this->pNextChar += 5;
      this->CurChar = 39;
      return this->CurChar;
    }
LABEL_22:
    if ( v15 == v16 )
      goto LABEL_23;
    v17 = (wchar_t *)this->pNextChar;
    v18 = "nbsp;";
    do
    {
      v19 = Scaleform::SFtowlower(*v17++);
      v20 = v19;
      v21 = Scaleform::SFtowlower(*v18++);
      if ( !--v5 || !v20 )
        break;
      if ( v20 != v21 )
        goto LABEL_32;
    }
    while ( *v18 );
    if ( v20 == v21 && (v5 || *v18) )
    {
LABEL_33:
      this->pNextChar += 5;
      this->CurChar = 160;
      return this->CurChar;
    }
LABEL_32:
    if ( v20 == v21 )
      goto LABEL_33;
  }
  v22 = this->pNextChar;
  if ( v22 + 4 <= this->pEnd )
  {
    v23 = 4i64;
    v24 = "amp;";
    do
    {
      v25 = Scaleform::SFtowlower(*v22++);
      v26 = v25;
      v27 = Scaleform::SFtowlower(*v24++);
      if ( !--v23 || !v26 )
        break;
      if ( v26 != v27 )
        goto LABEL_43;
    }
    while ( *v24 );
    if ( v26 == v27 && (v23 || *v24) )
    {
LABEL_44:
      this->pNextChar += 4;
      this->CurChar = 38;
      return this->CurChar;
    }
LABEL_43:
    if ( v26 == v27 )
      goto LABEL_44;
  }
  v28 = this->pNextChar;
  if ( v28 + 3 <= this->pEnd )
  {
    v29 = 3i64;
    v30 = "lt;";
    v31 = 3i64;
    do
    {
      v32 = Scaleform::SFtowlower(*v28++);
      v33 = v32;
      v34 = Scaleform::SFtowlower(*v30++);
      if ( !--v31 || !v33 )
        break;
      if ( v33 != v34 )
        goto LABEL_54;
    }
    while ( *v30 );
    if ( v33 == v34 && (v31 || *v30) )
    {
LABEL_55:
      this->pNextChar += 3;
      this->CurChar = 60;
      return this->CurChar;
    }
LABEL_54:
    if ( v33 == v34 )
      goto LABEL_55;
    v35 = (wchar_t *)this->pNextChar;
    v36 = "gt;";
    do
    {
      v37 = Scaleform::SFtowlower(*v35++);
      v38 = v37;
      v39 = Scaleform::SFtowlower(*v36++);
      if ( !--v29 || !v38 )
        break;
      if ( v38 != v39 )
        goto LABEL_64;
    }
    while ( *v36 );
    if ( v38 == v39 && (v29 || *v36) )
    {
LABEL_65:
      this->pNextChar += 3;
      this->CurChar = 62;
      return this->CurChar;
    }
LABEL_64:
    if ( v38 == v39 )
      goto LABEL_65;
  }
  v40 = this->pNextChar;
  if ( v40 + 2 > this->pEnd || *v40 != 35 )
    return this->CurChar;
  v41 = 0;
  this->pNextChar = v40 + 1;
  if ( !(unsigned int)Scaleform::SFtowlower(v40[1] == 120) )
  {
    if ( isdigit(*this->pNextChar) )
    {
      if ( this->pNextChar >= this->pEnd )
        goto LABEL_87;
      do
      {
        v46 = *this->pNextChar;
        if ( v46 == 59 )
          break;
        if ( !isdigit(v46) )
          goto LABEL_79;
        v47 = this->pNextChar;
        v48 = 5 * v41;
        v49 = *v47 - 48;
        this->pNextChar = v47 + 1;
        v41 = v49 + 2 * v48;
      }
      while ( v47 + 1 < this->pEnd );
      if ( v41 != -1 )
      {
LABEL_87:
        v42 = this->pNextChar;
        goto LABEL_88;
      }
    }
LABEL_79:
    this->pNextChar = v40;
    return this->CurChar;
  }
  v42 = ++this->pNextChar;
  if ( v42 >= this->pEnd )
    goto LABEL_88;
  while ( *v42 != 59 )
  {
    if ( !isxdigit(*v42) )
      goto LABEL_79;
    v41 *= 16;
    v43 = Scaleform::SFtowlower(*this->pNextChar);
    if ( (unsigned __int16)(v43 - 48) <= 9u )
    {
      v44 = v43 & 0xF;
LABEL_76:
      v41 |= v44;
      goto LABEL_77;
    }
    if ( (unsigned __int16)(v43 - 97) <= 5u )
    {
      v44 = (((_BYTE)v43 - 1) & 0xF) + 10;
      goto LABEL_76;
    }
LABEL_77:
    v42 = ++this->pNextChar;
    if ( v42 >= this->pEnd )
      break;
  }
  if ( v41 == -1 )
    goto LABEL_79;
LABEL_88:
  if ( *v42 == 59 )
    this->pNextChar = v42 + 1;
  this->CurChar = v41;
  return this->CurChar;
}

__int64 __fastcall Scaleform::Render::Text::SGMLParser<wchar_t>::GetNext(
        Scaleform::Render::Text::SGMLParser<wchar_t> *this)
{
  __int64 result; // rax
  bool v3; // zf
  const wchar_t *pNextChar; // rcx
  const wchar_t *v5; // rcx
  unsigned int v6; // esi
  unsigned int CurChar; // eax
  const wchar_t *v8; // rcx
  unsigned int v9; // eax
  const wchar_t *v10; // rcx
  int CurState; // eax
  const wchar_t *v12; // rcx
  const wchar_t *v13; // rcx

  result = (unsigned int)this->CurState;
  if ( (_DWORD)result != 1 )
  {
    if ( (result & 0x8000) == 0 )
    {
      switch ( (int)result )
      {
        case 2:
          Scaleform::Render::Text::SGMLParser<wchar_t>::SkipName(this);
          goto $LL4;
        case 3:
          while ( this->Iter.pCurChar < this->Iter.pEnd )
          {
            if ( this->Iter.CurChar == 60 )
              break;
            v3 = !this->Iter.DoContentParsing;
            pNextChar = this->Iter.pNextChar;
            this->Iter.pCurChar = pNextChar;
            if ( v3 || *pNextChar != 38 )
            {
              if ( pNextChar < this->Iter.pEnd )
              {
                this->Iter.CurChar = *pNextChar;
                this->Iter.pNextChar = pNextChar + 1;
              }
            }
            else
            {
              Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
            }
          }
          this->CurState = 32771;
          goto LABEL_29;
        case 4:
          if ( this->Iter.pCurChar >= this->Iter.pEnd )
            goto LABEL_26;
          break;
        case 7:
        case 8:
$LL4:
          while ( (unsigned int)(this->CurState - 7) <= 1 )
            Scaleform::Render::Text::SGMLParser<wchar_t>::SkipAttribute(this);
          goto $LN193_1;
        case 9:
$LN193_1:
          if ( this->Iter.CurChar == 62 )
          {
            Scaleform::Render::Text::SGMLCharIter<wchar_t>::operator++(&this->Iter);
            this->CurState = 32770;
          }
          goto LABEL_29;
        default:
          goto LABEL_29;
      }
      do
      {
        if ( this->Iter.CurChar == 62 )
          goto LABEL_27;
        v3 = !this->Iter.DoContentParsing;
        v5 = this->Iter.pNextChar;
        this->Iter.pCurChar = v5;
        if ( v3 || *v5 != 38 )
        {
          if ( v5 < this->Iter.pEnd )
          {
            this->Iter.CurChar = *v5;
            this->Iter.pNextChar = v5 + 1;
          }
        }
        else
        {
          Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
        }
      }
      while ( this->Iter.pCurChar < this->Iter.pEnd );
LABEL_26:
      if ( this->Iter.CurChar == 62 )
      {
LABEL_27:
        Scaleform::Render::Text::SGMLCharIter<wchar_t>::operator++(&this->Iter);
        this->CurState = 32772;
        goto LABEL_29;
      }
      this->CurState = 1;
    }
LABEL_29:
    if ( this->CurState == 1 )
      return 1i64;
    v6 = 0;
    if ( this->Iter.pCurChar < this->Iter.pEnd )
    {
      while ( 1 )
      {
        if ( v6 )
        {
LABEL_70:
          result = v6;
          this->CurState = v6;
          return result;
        }
        CurChar = this->Iter.CurChar;
        if ( !CurChar )
          goto LABEL_67;
        if ( CurChar != 47 )
        {
          if ( CurChar == 60 )
          {
            v3 = !this->Iter.DoContentParsing;
            v8 = this->Iter.pNextChar;
            this->Iter.pCurChar = v8;
            if ( v3 || *v8 != 38 )
            {
              if ( v8 < this->Iter.pEnd )
              {
                this->Iter.CurChar = *v8;
                this->Iter.pNextChar = v8 + 1;
              }
            }
            else
            {
              Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
            }
            v9 = this->Iter.CurChar;
            if ( v9 == 33 )
            {
              Scaleform::Render::Text::SGMLParser<wchar_t>::SkipComment(this);
            }
            else if ( v9 == 47 )
            {
              v3 = !this->Iter.DoContentParsing;
              v10 = this->Iter.pNextChar;
              this->Iter.pCurChar = v10;
              if ( v3 || *v10 != 38 )
              {
                if ( v10 < this->Iter.pEnd )
                {
                  this->Iter.CurChar = *v10;
                  this->Iter.pNextChar = v10 + 1;
                }
                v6 = 4;
              }
              else
              {
                Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
                v6 = 4;
              }
            }
            else
            {
              v6 = 2;
            }
          }
          else
          {
            v6 = 3;
          }
          goto LABEL_68;
        }
        CurState = this->CurState;
        if ( CurState == 9 || CurState == 6 )
          break;
        v6 = 3;
LABEL_68:
        if ( this->Iter.pCurChar >= this->Iter.pEnd )
        {
          if ( !v6 )
            goto LABEL_71;
          goto LABEL_70;
        }
      }
      v3 = !this->Iter.DoContentParsing;
      v12 = this->Iter.pNextChar;
      this->Iter.pCurChar = v12;
      if ( v3 || *v12 != 38 )
      {
        if ( v12 < this->Iter.pEnd )
        {
          this->Iter.CurChar = *v12;
          this->Iter.pNextChar = v12 + 1;
        }
      }
      else
      {
        Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
      }
      if ( this->Iter.CurChar == 62 )
      {
        v3 = !this->Iter.DoContentParsing;
        v13 = this->Iter.pNextChar;
        this->Iter.pCurChar = v13;
        if ( v3 || *v13 != 38 )
        {
          if ( v13 < this->Iter.pEnd )
          {
            this->Iter.CurChar = *v13;
            this->Iter.pNextChar = v13 + 1;
          }
          v6 = 32773;
        }
        else
        {
          Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
          v6 = 32773;
        }
        goto LABEL_68;
      }
LABEL_67:
      v6 = 1;
      goto LABEL_68;
    }
LABEL_71:
    this->CurState = 0x8000;
    return (unsigned int)this->CurState;
  }
  return result;
}

char __fastcall Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttribute(
        Scaleform::Render::Text::SGMLParser<wchar_t> *this,
        const wchar_t **ppattrName,
        unsigned __int64 *pattrNameSz)
{
  int CurState; // eax
  char v8; // si
  unsigned int CurChar; // ecx
  unsigned __int64 v10; // rax
  int v11; // er8
  int v12; // ecx
  bool v13; // zf
  const wchar_t *pNextChar; // rcx
  const wchar_t *pEnd; // rax
  const wchar_t *v16; // rcx

  CurState = this->CurState;
  if ( CurState == 1 )
    return 0;
  if ( CurState == 8 )
    Scaleform::Render::Text::SGMLParser<wchar_t>::SkipAttribute(this);
  v8 = 0;
  while ( this->CurState == 7 )
  {
    if ( this->Iter.pCurChar >= this->Iter.pEnd )
      break;
    Scaleform::Render::Text::SGMLParser<wchar_t>::ParseName(this, ppattrName, pattrNameSz);
    while ( this->Iter.pCurChar < this->Iter.pEnd )
    {
      CurChar = this->Iter.CurChar;
      v10 = (unsigned __int64)(unsigned __int16)CurChar >> 8;
      v11 = Scaleform::UnicodeSpaceBits[v10];
      if ( !Scaleform::UnicodeSpaceBits[v10] )
        break;
      if ( v11 != 1 )
      {
        v12 = Scaleform::UnicodeSpaceBits[v11 + (((unsigned __int16)CurChar >> 4) & 0xF)];
        if ( !_bittest(&v12, this->Iter.CurChar & 0xF) )
          break;
      }
      v13 = !this->Iter.DoContentParsing;
      pNextChar = this->Iter.pNextChar;
      this->Iter.pCurChar = pNextChar;
      if ( v13 || *pNextChar != 38 )
      {
        if ( pNextChar < this->Iter.pEnd )
        {
          this->Iter.CurChar = *pNextChar;
          this->Iter.pNextChar = pNextChar + 1;
        }
      }
      else
      {
        Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
      }
    }
    pEnd = this->Iter.pEnd;
    if ( this->Iter.pCurChar < pEnd )
    {
      if ( this->Iter.CurChar == 61 )
      {
        v13 = !this->Iter.DoContentParsing;
        v16 = this->Iter.pNextChar;
        this->Iter.pCurChar = v16;
        if ( v13 || *v16 != 38 )
        {
          if ( v16 < pEnd )
          {
            this->Iter.CurChar = *v16;
            this->Iter.pNextChar = v16 + 1;
          }
        }
        else
        {
          Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
        }
        Scaleform::Render::Text::SGMLParser<wchar_t>::SkipSpaces(this);
        this->CurState = 8;
        v8 = 1;
      }
      else
      {
        Scaleform::Render::Text::SGMLParser<wchar_t>::SkipAttribute(this);
      }
    }
  }
  if ( this->Iter.pCurChar >= this->Iter.pEnd )
    this->CurState = 1;
  return v8;
}

__int64 __fastcall Scaleform::Render::Text::SGMLParser<wchar_t>::GetNextAttributeValue(
        Scaleform::Render::Text::SGMLParser<wchar_t> *this,
        const wchar_t **ppattrValue,
        unsigned __int64 *pattrValueSz)
{
  unsigned __int8 v3; // r13
  unsigned int CurChar; // er15
  bool v8; // zf
  const wchar_t *pNextChar; // rcx
  char v10; // si
  bool DoContentParsing; // al
  unsigned __int64 BufSize; // rcx
  unsigned int v13; // ebp
  wchar_t *pBuffer; // rdx
  unsigned __int64 v15; // r8
  wchar_t *v16; // rax
  const wchar_t *v17; // rcx
  const wchar_t *pEnd; // rax
  const wchar_t *v19; // rcx
  unsigned int v20; // eax
  __int64 result; // rax

  v3 = 0;
  if ( this->CurState == 8 )
  {
    CurChar = this->Iter.CurChar;
    if ( CurChar == 34 || CurChar == 39 )
    {
      v8 = !this->Iter.DoContentParsing;
      pNextChar = this->Iter.pNextChar;
      this->Iter.pCurChar = pNextChar;
      if ( v8 || *pNextChar != 38 )
      {
        if ( pNextChar < this->Iter.pEnd )
        {
          this->Iter.CurChar = *pNextChar;
          this->Iter.pNextChar = pNextChar + 1;
        }
      }
      else
      {
        Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
      }
      v10 = 0;
      *ppattrValue = this->Iter.pCurChar;
      *pattrValueSz = 0i64;
      DoContentParsing = this->Iter.DoContentParsing;
      this->Iter.DoContentParsing = 1;
      if ( !DoContentParsing && *this->Iter.pCurChar == 38 )
        Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
      while ( this->Iter.pCurChar < this->Iter.pEnd )
      {
        if ( this->Iter.CurChar == CurChar )
          break;
        if ( this->Iter.DoContentParsing && *this->Iter.pCurChar == 38 )
        {
          if ( !v10 )
          {
            this->BufPos = 0i64;
            Scaleform::Render::Text::SGMLParser<wchar_t>::AppendToBuf(this, *ppattrValue, *pattrValueSz);
            v10 = 1;
          }
          BufSize = this->BufSize;
          v13 = this->Iter.CurChar;
          if ( this->BufPos + 6 > BufSize )
          {
            pBuffer = this->pBuffer;
            v15 = BufSize + 6;
            this->BufSize = BufSize + 6;
            if ( pBuffer )
              v16 = (wchar_t *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, pBuffer, 2 * v15);
            else
              v16 = (wchar_t *)this->pHeap->Alloc(this->pHeap, 2 * v15, 0i64);
            this->pBuffer = v16;
          }
          this->pBuffer[this->BufPos++] = v13;
        }
        else if ( v10 )
        {
          Scaleform::Render::Text::SGMLParser<wchar_t>::AppendToBuf(
            this,
            this->Iter.pCurChar,
            (unsigned int)(this->Iter.pNextChar - this->Iter.pCurChar));
        }
        else
        {
          *pattrValueSz += (unsigned int)(this->Iter.pNextChar - this->Iter.pCurChar);
        }
        v8 = !this->Iter.DoContentParsing;
        v17 = this->Iter.pNextChar;
        this->Iter.pCurChar = v17;
        if ( v8 || *v17 != 38 )
        {
          if ( v17 < this->Iter.pEnd )
          {
            this->Iter.CurChar = *v17;
            this->Iter.pNextChar = v17 + 1;
          }
        }
        else
        {
          Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
        }
      }
      this->Iter.DoContentParsing = 0;
      if ( v10 )
      {
        *ppattrValue = this->pBuffer;
        *pattrValueSz = this->BufPos;
      }
      pEnd = this->Iter.pEnd;
      if ( this->Iter.pCurChar < pEnd )
      {
        v8 = !this->Iter.DoContentParsing;
        v3 = 1;
        v19 = this->Iter.pNextChar;
        this->Iter.pCurChar = v19;
        if ( v8 || *v19 != 38 )
        {
          if ( v19 < pEnd )
          {
            this->Iter.CurChar = *v19;
            this->Iter.pNextChar = v19 + 1;
          }
        }
        else
        {
          Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
        }
        Scaleform::Render::Text::SGMLParser<wchar_t>::SkipSpaces(this);
        v20 = this->Iter.CurChar;
        if ( v20 == 62 || v20 == 47 )
          this->CurState = 9;
        else
          this->CurState = 7;
      }
      else
      {
        this->CurState = 1;
      }
    }
    else
    {
      this->CurState = 1;
    }
  }
  result = v3;
  if ( this->Iter.pCurChar >= this->Iter.pEnd )
    this->CurState = 1;
  return result;
}

__int64 __fastcall Scaleform::Render::Text::SGMLCharIter<wchar_t>::IsSpace(unsigned int c)
{
  unsigned __int64 v1; // rax
  int v2; // er8
  unsigned int v4; // edx
  int v5; // ecx

  v1 = (unsigned __int64)(unsigned __int16)c >> 8;
  v2 = Scaleform::UnicodeSpaceBits[v1];
  if ( !Scaleform::UnicodeSpaceBits[v1] )
    return 0i64;
  if ( v2 == 1 )
    return 1i64;
  v4 = c & 0xF;
  v5 = Scaleform::UnicodeSpaceBits[v2 + (((unsigned __int16)c >> 4) & 0xF)];
  return _bittest(&v5, v4);
}

bool __fastcall Scaleform::Render::Text::SGMLParser<wchar_t>::ParseContent(
        Scaleform::Render::Text::SGMLParser<wchar_t> *this,
        const wchar_t **ppContent,
        unsigned __int64 *pcontentSize)
{
  char v6; // si
  bool DoContentParsing; // al
  unsigned int CurChar; // ecx
  unsigned __int64 v9; // rax
  int v10; // er8
  int v11; // ecx
  unsigned __int64 BufSize; // rcx
  wchar_t *pBuffer; // rdx
  unsigned __int64 v14; // r8
  wchar_t *v15; // rax
  unsigned __int64 v16; // rcx
  unsigned int v17; // ebp
  wchar_t *v18; // rdx
  unsigned __int64 v19; // r8
  wchar_t *v20; // rax
  const wchar_t *pNextChar; // rcx

  if ( this->CurState == 3 )
  {
    v6 = 0;
    *ppContent = this->Iter.pCurChar;
    *pcontentSize = 0i64;
    DoContentParsing = this->Iter.DoContentParsing;
    this->Iter.DoContentParsing = 1;
    if ( !DoContentParsing && *this->Iter.pCurChar == 38 )
      Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
    if ( this->Iter.pCurChar < this->Iter.pEnd )
    {
      do
      {
        CurChar = this->Iter.CurChar;
        if ( CurChar == 60 && (!this->Iter.DoContentParsing || *this->Iter.pCurChar != 38) )
          break;
        if ( (v9 = (unsigned __int64)(unsigned __int16)CurChar >> 8, (v10 = Scaleform::UnicodeSpaceBits[v9]) != 0)
          && (v10 == 1
           || (v11 = Scaleform::UnicodeSpaceBits[v10 + (((unsigned __int16)CurChar >> 4) & 0xF)],
               _bittest(&v11, this->Iter.CurChar & 0xF)))
          && this->CondenseWhite )
        {
          if ( !v6 )
          {
            this->BufPos = 0i64;
            Scaleform::Render::Text::SGMLParser<wchar_t>::AppendToBuf(this, *ppContent, *pcontentSize);
            v6 = 1;
          }
          BufSize = this->BufSize;
          if ( this->BufPos + 6 > BufSize )
          {
            pBuffer = this->pBuffer;
            v14 = BufSize + 6;
            this->BufSize = BufSize + 6;
            if ( pBuffer )
              v15 = (wchar_t *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, pBuffer, 2 * v14);
            else
              v15 = (wchar_t *)this->pHeap->Alloc(this->pHeap, 2 * v14, 0i64);
            this->pBuffer = v15;
          }
          this->pBuffer[this->BufPos++] = 32;
          Scaleform::Render::Text::SGMLParser<wchar_t>::SkipSpaces(this);
        }
        else
        {
          if ( this->Iter.DoContentParsing && *this->Iter.pCurChar == 38 )
          {
            if ( !v6 )
            {
              this->BufPos = 0i64;
              Scaleform::Render::Text::SGMLParser<wchar_t>::AppendToBuf(this, *ppContent, *pcontentSize);
              v6 = 1;
            }
            v16 = this->BufSize;
            v17 = this->Iter.CurChar;
            if ( this->BufPos + 6 > v16 )
            {
              v18 = this->pBuffer;
              v19 = v16 + 6;
              this->BufSize = v16 + 6;
              if ( v18 )
                v20 = (wchar_t *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, v18, 2 * v19);
              else
                v20 = (wchar_t *)this->pHeap->Alloc(this->pHeap, 2 * v19, 0i64);
              this->pBuffer = v20;
            }
            this->pBuffer[this->BufPos++] = v17;
          }
          else if ( v6 )
          {
            Scaleform::Render::Text::SGMLParser<wchar_t>::AppendToBuf(
              this,
              this->Iter.pCurChar,
              (unsigned int)(this->Iter.pNextChar - this->Iter.pCurChar));
          }
          else
          {
            *pcontentSize += (unsigned int)(this->Iter.pNextChar - this->Iter.pCurChar);
          }
          pNextChar = this->Iter.pNextChar;
          this->Iter.pCurChar = pNextChar;
          if ( this->Iter.DoContentParsing && *pNextChar == 38 )
          {
            Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
          }
          else if ( pNextChar < this->Iter.pEnd )
          {
            this->Iter.CurChar = *pNextChar;
            this->Iter.pNextChar = pNextChar + 1;
          }
        }
      }
      while ( this->Iter.pCurChar < this->Iter.pEnd );
      if ( v6 )
      {
        *ppContent = this->pBuffer;
        *pcontentSize = this->BufPos;
      }
    }
    if ( this->Iter.pCurChar < this->Iter.pEnd
      && (this->Iter.CurChar != 60 || this->Iter.DoContentParsing && *this->Iter.pCurChar == 38) )
    {
      this->CurState = 1;
    }
    else
    {
      this->CurState |= 0x8000u;
    }
    this->Iter.DoContentParsing = 0;
  }
  return this->CurState != 1;
}

bool __fastcall Scaleform::Render::Text::SGMLParser<wchar_t>::ParseFloat(
        float *pdestVal,
        const wchar_t *pstr,
        unsigned __int64 len)
{
  const wchar_t *v3; // rbx
  bool result; // al
  const wchar_t *v6; // rdi
  double v7; // xmm7_8
  double v8; // xmm6_8
  double v9; // xmm9_8
  int v10; // eax
  const wchar_t *v11; // rbx
  int v12; // eax
  float v13; // xmm0_4

  v3 = pstr;
  if ( !len )
    return 0;
  v6 = &pstr[len];
  v7 = 0.0;
  v8 = 0.0;
  v9 = DOUBLE_1_0;
  if ( *pstr == 45 )
  {
    v9 = DOUBLE_N1_0;
LABEL_6:
    v3 = pstr + 1;
    goto LABEL_7;
  }
  if ( *pstr == 43 )
    goto LABEL_6;
LABEL_7:
  if ( v3 < v6 )
  {
    while ( ((*v3 - 44) & 0xFFFD) != 0 )
    {
      if ( !isdigit(*v3) )
        return 0;
      v10 = *v3++;
      v8 = (double)(v10 - 48) + v8 * 10.0;
      if ( v3 >= v6 )
        goto LABEL_18;
    }
    if ( v3 < v6 && ((*v3 - 44) & 0xFFFD) == 0 )
    {
      v11 = v3 + 1;
      if ( v11 >= v6 )
      {
LABEL_17:
        v8 = v8 + v7;
        goto LABEL_18;
      }
      while ( isdigit(*v11) )
      {
        v12 = *v11++;
        v7 = ((double)(v12 - 48) + v7) * 0.1;
        if ( v11 >= v6 )
          goto LABEL_17;
      }
      return 0;
    }
  }
LABEL_18:
  result = 1;
  v13 = v9 * v8;
  *pdestVal = v13;
  return result;
}

char __fastcall Scaleform::Render::Text::SGMLParser<wchar_t>::ParseHexInt(
        unsigned int *pdestVal,
        const wchar_t *pstr,
        unsigned __int64 len)
{
  unsigned int v7; // ebx
  unsigned __int64 v8; // rsi
  __int16 v9; // ax
  int v10; // eax

  if ( !len )
    return 0;
  v7 = 0;
  v8 = 0i64;
  while ( isxdigit(*pstr) )
  {
    v7 *= 16;
    v9 = Scaleform::SFtowlower(*pstr);
    if ( (unsigned __int16)(v9 - 48) <= 9u )
    {
      v10 = v9 & 0xF;
LABEL_9:
      v7 |= v10;
      goto LABEL_10;
    }
    if ( (unsigned __int16)(v9 - 97) <= 5u )
    {
      v10 = (((_BYTE)v9 - 1) & 0xF) + 10;
      goto LABEL_9;
    }
LABEL_10:
    ++v8;
    ++pstr;
    if ( v8 >= len )
    {
      *pdestVal = v7;
      return 1;
    }
  }
  return 0;
}

__int64 __fastcall Scaleform::Render::Text::StyledText::ParseHtml(
        Scaleform::Render::Text::StyledText *this,
        const char *phtml,
        unsigned __int64 htmlSize,
        Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *pimgInfoArr,
        bool multiline,
        bool condenseWhite,
        const Scaleform::Render::Text::StyleManagerBase *pstyleMgr,
        const Scaleform::Render::Text::TextFormat *txtFmt,
        const Scaleform::Render::Text::ParagraphFormat *paraFmt)
{
  __int64 v11; // rbx
  wchar_t *v13; // rsi
  __int64 v14; // rax

  v11 = htmlSize;
  v13 = (wchar_t *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 2 * htmlSize + 2, 0i64);
  v14 = Scaleform::UTF8Util::DecodeStringSafe(v13, v11 + 1, phtml, v11);
  LOBYTE(v11) = Scaleform::Render::Text::StyledText::ParseHtmlImpl<wchar_t>(
                  this,
                  v13,
                  v14,
                  pimgInfoArr,
                  multiline,
                  condenseWhite,
                  pstyleMgr,
                  txtFmt,
                  paraFmt);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v13);
  return (unsigned __int8)v11;
}

char __fastcall Scaleform::Render::Text::StyledText::ParseHtml(
        Scaleform::Render::Text::StyledText *this,
        const wchar_t *phtml,
        unsigned __int64 htmlSize,
        Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *pimgInfoArr,
        bool multiline,
        bool condenseWhite,
        const Scaleform::Render::Text::StyleManagerBase *pstyleMgr,
        const Scaleform::Render::Text::TextFormat *txtFmt,
        const Scaleform::Render::Text::ParagraphFormat *paraFmt)
{
  return Scaleform::Render::Text::StyledText::ParseHtmlImpl<wchar_t>(
           this,
           phtml,
           htmlSize,
           pimgInfoArr,
           multiline,
           condenseWhite,
           pstyleMgr,
           txtFmt,
           paraFmt);
}

bool __fastcall Scaleform::Render::Text::SGMLParser<wchar_t>::ParseInt(
        int *pdestVal,
        const wchar_t *pstr,
        unsigned __int64 len)
{
  unsigned __int64 v3; // rdi
  const wchar_t *v4; // rbx
  bool result; // al
  int v7; // esi
  int v8; // er14
  unsigned __int64 v9; // rbp
  int v10; // eax

  v3 = len;
  v4 = pstr;
  if ( !len )
    return 0;
  v7 = 0;
  v8 = 1;
  if ( *pstr == 45 )
  {
    v8 = -1;
  }
  else if ( *pstr != 43 )
  {
    goto LABEL_7;
  }
  v4 = pstr + 1;
  v3 = len - 1;
LABEL_7:
  v9 = 0i64;
  if ( v3 )
  {
    while ( isdigit(*v4) )
    {
      v10 = *v4;
      ++v9;
      ++v4;
      v7 = v10 + 2 * (5 * v7 - 24);
      if ( v9 >= v3 )
        goto LABEL_10;
    }
    return 0;
  }
  else
  {
LABEL_10:
    result = 1;
    *pdestVal = v7 * v8;
  }
  return result;
}

void __fastcall Scaleform::Render::Text::SGMLParser<wchar_t>::ParseName(
        Scaleform::Render::Text::SGMLParser<wchar_t> *this,
        const wchar_t **ppname,
        unsigned __int64 *plen)
{
  char v3; // si
  unsigned int CurChar; // ecx
  unsigned __int64 v8; // rax
  int v9; // er8
  int v10; // ecx
  unsigned __int64 BufSize; // rcx
  unsigned int v12; // ebp
  wchar_t *pBuffer; // rdx
  unsigned __int64 v14; // r8
  wchar_t *v15; // rax
  const wchar_t *pNextChar; // rcx

  *ppname = this->Iter.pCurChar;
  v3 = 0;
  *plen = 0i64;
  if ( this->Iter.pCurChar < this->Iter.pEnd )
  {
    do
    {
      CurChar = this->Iter.CurChar;
      if ( CurChar - 60 <= 2 )
        break;
      if ( CurChar == 47 )
        break;
      v8 = (unsigned __int64)(unsigned __int16)CurChar >> 8;
      v9 = Scaleform::UnicodeSpaceBits[v8];
      if ( Scaleform::UnicodeSpaceBits[v8] )
      {
        if ( v9 == 1 )
          break;
        v10 = Scaleform::UnicodeSpaceBits[v9 + (((unsigned __int16)CurChar >> 4) & 0xF)];
        if ( _bittest(&v10, this->Iter.CurChar & 0xF) )
          break;
      }
      if ( this->Iter.DoContentParsing && *this->Iter.pCurChar == 38 )
      {
        if ( !v3 )
        {
          this->BufPos = 0i64;
          Scaleform::Render::Text::SGMLParser<wchar_t>::AppendToBuf(this, *ppname, *plen);
          v3 = 1;
        }
        BufSize = this->BufSize;
        v12 = this->Iter.CurChar;
        if ( this->BufPos + 6 > BufSize )
        {
          pBuffer = this->pBuffer;
          v14 = BufSize + 6;
          this->BufSize = BufSize + 6;
          if ( pBuffer )
            v15 = (wchar_t *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, pBuffer, 2 * v14);
          else
            v15 = (wchar_t *)this->pHeap->Alloc(this->pHeap, 2 * v14, 0i64);
          this->pBuffer = v15;
        }
        this->pBuffer[this->BufPos++] = v12;
      }
      else if ( v3 )
      {
        Scaleform::Render::Text::SGMLParser<wchar_t>::AppendToBuf(
          this,
          this->Iter.pCurChar,
          (unsigned int)(this->Iter.pNextChar - this->Iter.pCurChar));
      }
      else
      {
        *plen += (unsigned int)(this->Iter.pNextChar - this->Iter.pCurChar);
      }
      pNextChar = this->Iter.pNextChar;
      this->Iter.pCurChar = pNextChar;
      if ( this->Iter.DoContentParsing && *pNextChar == 38 )
      {
        Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
      }
      else if ( pNextChar < this->Iter.pEnd )
      {
        this->Iter.CurChar = *pNextChar;
        this->Iter.pNextChar = pNextChar + 1;
      }
    }
    while ( this->Iter.pCurChar < this->Iter.pEnd );
    if ( v3 )
    {
      *ppname = this->pBuffer;
      *plen = this->BufPos;
    }
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,Scaleform::AllocatorDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,Scaleform::AllocatorDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *Data; // rdx
  unsigned __int64 v6; // rdi
  Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *v7; // rax
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v7 = (Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *, unsigned __int64, const void *))Scaleform::Memory::pGlobalHeap->Realloc)(
                                                                      Scaleform::Memory::pGlobalHeap,
                                                                      Data,
                                                                      152 * v6,
                                                                      pheapAddr);
        this->Policy.Capacity = v6;
        this->Data = v7;
        return;
      }
      v8 = *(_QWORD *)pheapAddr;
      v9 = 2;
      this->Data = (Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *)(*(__int64 (__fastcall **)(const void *, unsigned __int64, int *))(v8 + 80))(
                                                                            pheapAddr,
                                                                            152 * v6,
                                                                            &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Render::Text::SGMLStackElemDesc<wchar_t> *, _QWORD, const void *))Scaleform::Memory::pGlobalHeap->Free)(
          Scaleform::Memory::pGlobalHeap,
          Data,
          0i64,
          pheapAddr);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::TextMeshLayer,Scaleform::AllocatorDH<Scaleform::Render::TextMeshLayer,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::TextMeshLayer,Scaleform::AllocatorDH<Scaleform::Render::TextMeshLayer,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::TextMeshLayer *Data; // rdx
  unsigned __int64 v6; // rdi
  Scaleform::Render::TextMeshLayer *v7; // rax
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v7 = (Scaleform::Render::TextMeshLayer *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Render::TextMeshLayer *, unsigned __int64, const void *))Scaleform::Memory::pGlobalHeap->Realloc)(
                                                   Scaleform::Memory::pGlobalHeap,
                                                   Data,
                                                   v6 << 6,
                                                   pheapAddr);
        this->Policy.Capacity = v6;
        this->Data = v7;
        return;
      }
      v8 = *(_QWORD *)pheapAddr;
      v9 = 2;
      this->Data = (Scaleform::Render::TextMeshLayer *)(*(__int64 (__fastcall **)(const void *, unsigned __int64, int *))(v8 + 80))(
                                                         pheapAddr,
                                                         v6 << 6,
                                                         &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Render::TextMeshLayer *, _QWORD, const void *))Scaleform::Memory::pGlobalHeap->Free)(
          Scaleform::Memory::pGlobalHeap,
          Data,
          0i64,
          pheapAddr);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,Scaleform::AllocatorDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,Scaleform::AllocatorDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // r14
  unsigned __int64 v7; // r14
  Scaleform::Render::Text::TextFormat *p_TextFmt; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,Scaleform::AllocatorDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    if ( v7 )
    {
      p_TextFmt = &this->Data[v7 - 1 + newSize].TextFmt;
      do
      {
        Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat((Scaleform::Render::Text::ParagraphFormat *)&p_TextFmt[1]);
        Scaleform::Render::Text::TextFormat::~TextFormat(p_TextFmt);
        p_TextFmt = (Scaleform::Render::Text::TextFormat *)((char *)p_TextFmt - 152);
        --v7;
      }
      while ( v7 );
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,Scaleform::AllocatorDH<Scaleform::Render::Text::SGMLStackElemDesc<wchar_t>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,Scaleform::AllocatorDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,Scaleform::AllocatorDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2>,Scaleform::ArrayDefaultPolicy> *this,
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
      Scaleform::ArrayDataBase<Scaleform::Render::TextMeshLayer,Scaleform::AllocatorDH<Scaleform::Render::TextMeshLayer,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::TextMeshLayer,Scaleform::AllocatorDH<Scaleform::Render::TextMeshLayer,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    Scaleform::ConstructorMov<Scaleform::Render::Text::StyledText::HTMLImageTagInfo>::DestructArray(
      &this->Data[newSize],
      Size - newSize);
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::TextMeshLayer,Scaleform::AllocatorDH<Scaleform::Render::TextMeshLayer,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::TextMeshLayer,Scaleform::AllocatorDH<Scaleform::Render::TextMeshLayer,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::Render::Text::TextFormat::SetFontSize(
        Scaleform::Render::Text::TextFormat *this,
        float fontSize)
{
  this->PresentMask |= 8u;
  if ( fontSize >= 3276.8 )
    this->FontSize = -1;
  else
    this->FontSize = (int)(float)(fontSize * 20.0);
}

void __fastcall Scaleform::Render::Text::SGMLParser<wchar_t>::SkipAttribute(
        Scaleform::Render::Text::SGMLParser<wchar_t> *this)
{
  unsigned int CurChar; // er8
  unsigned __int64 v3; // rax
  int v4; // er9
  int v5; // ecx
  bool v6; // zf
  const wchar_t *pNextChar; // rcx
  unsigned int v8; // eax
  const wchar_t *v9; // rcx
  unsigned int v10; // esi
  const wchar_t *v11; // rcx
  const wchar_t *pEnd; // rax
  const wchar_t *v13; // rcx
  unsigned int v14; // eax

  if ( this->CurState == 7 )
  {
    Scaleform::Render::Text::SGMLParser<wchar_t>::SkipSpaces(this);
    while ( this->Iter.pCurChar < this->Iter.pEnd )
    {
      CurChar = this->Iter.CurChar;
      v3 = (unsigned __int64)(unsigned __int16)CurChar >> 8;
      v4 = Scaleform::UnicodeAlnumBits[v3];
      if ( !Scaleform::UnicodeAlnumBits[v3] )
        break;
      if ( v4 != 1 )
      {
        v5 = Scaleform::UnicodeAlnumBits[v4 + (((unsigned __int16)CurChar >> 4) & 0xF)];
        if ( !_bittest(&v5, this->Iter.CurChar & 0xF) )
          break;
      }
      if ( CurChar == 61 )
        break;
      v6 = !this->Iter.DoContentParsing;
      pNextChar = this->Iter.pNextChar;
      this->Iter.pCurChar = pNextChar;
      if ( v6 || *pNextChar != 38 )
      {
        if ( pNextChar < this->Iter.pEnd )
        {
          this->Iter.CurChar = *pNextChar;
          this->Iter.pNextChar = pNextChar + 1;
        }
      }
      else
      {
        Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
      }
    }
    if ( this->Iter.pCurChar >= this->Iter.pEnd )
    {
LABEL_14:
      this->CurState = 1;
      return;
    }
    v8 = this->Iter.CurChar;
    if ( v8 == 61 )
    {
      v6 = !this->Iter.DoContentParsing;
      v9 = this->Iter.pNextChar;
      this->Iter.pCurChar = v9;
      if ( v6 || *v9 != 38 )
      {
        if ( v9 < this->Iter.pEnd )
        {
          this->Iter.CurChar = *v9;
          this->Iter.pNextChar = v9 + 1;
        }
        Scaleform::Render::Text::SGMLParser<wchar_t>::SkipSpaces(this);
        this->CurState = 8;
      }
      else
      {
        Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
        Scaleform::Render::Text::SGMLParser<wchar_t>::SkipSpaces(this);
        this->CurState = 8;
      }
    }
    else if ( v8 == 47 || v8 == 62 )
    {
      this->CurState = 9;
    }
    else
    {
      this->CurState = 1;
    }
  }
  if ( this->CurState == 8 )
  {
    v10 = this->Iter.CurChar;
    if ( v10 == 34 || v10 == 39 )
    {
      while ( 1 )
      {
        v6 = !this->Iter.DoContentParsing;
        v11 = this->Iter.pNextChar;
        this->Iter.pCurChar = v11;
        if ( v6 || *v11 != 38 )
        {
          if ( v11 < this->Iter.pEnd )
          {
            this->Iter.CurChar = *v11;
            this->Iter.pNextChar = v11 + 1;
          }
        }
        else
        {
          Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
        }
        pEnd = this->Iter.pEnd;
        if ( this->Iter.pCurChar >= pEnd )
          break;
        if ( this->Iter.CurChar == v10 )
        {
          if ( this->Iter.pCurChar >= pEnd )
            goto LABEL_14;
          v6 = !this->Iter.DoContentParsing;
          v13 = this->Iter.pNextChar;
          this->Iter.pCurChar = v13;
          if ( v6 || *v13 != 38 )
          {
            if ( v13 < pEnd )
            {
              this->Iter.CurChar = *v13;
              this->Iter.pNextChar = v13 + 1;
            }
          }
          else
          {
            Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
          }
          Scaleform::Render::Text::SGMLParser<wchar_t>::SkipSpaces(this);
          v14 = this->Iter.CurChar;
          if ( v14 == 62 || v14 == 47 )
            this->CurState = 9;
          else
            this->CurState = 7;
          return;
        }
      }
    }
    goto LABEL_14;
  }
}

void __fastcall Scaleform::Render::Text::SGMLParser<wchar_t>::SkipComment(
        Scaleform::Render::Text::SGMLParser<wchar_t> *this)
{
  int v1; // edi
  bool v3; // zf
  const wchar_t *pNextChar; // rcx
  unsigned int CurChar; // eax
  int v6; // eax
  int v7; // eax
  const wchar_t *pEnd; // rax
  const wchar_t *v9; // rcx

  v1 = 0;
  while ( this->Iter.pCurChar < this->Iter.pEnd )
  {
    if ( !this->Iter.CurChar || v1 == 3 )
      break;
    v3 = !this->Iter.DoContentParsing;
    pNextChar = this->Iter.pNextChar;
    this->Iter.pCurChar = pNextChar;
    if ( v3 || *pNextChar != 38 )
    {
      if ( pNextChar < this->Iter.pEnd )
      {
        this->Iter.CurChar = *pNextChar;
        this->Iter.pNextChar = pNextChar + 1;
      }
    }
    else
    {
      Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
    }
    CurChar = this->Iter.CurChar;
    if ( CurChar == 45 )
    {
      v6 = v1 + 1;
      if ( v1 >= 2 )
        v6 = v1;
      v1 = v6;
    }
    else if ( CurChar == 62 )
    {
      v7 = 3;
      if ( v1 != 2 )
        v7 = v1;
      v1 = v7;
    }
    else
    {
      v1 = 0;
    }
  }
  pEnd = this->Iter.pEnd;
  if ( this->Iter.pCurChar < pEnd && v1 == 3 )
  {
    v3 = !this->Iter.DoContentParsing;
    v9 = this->Iter.pNextChar;
    this->Iter.pCurChar = v9;
    if ( v3 || *v9 != 38 )
    {
      if ( v9 < pEnd )
      {
        this->Iter.CurChar = *v9;
        this->Iter.pNextChar = v9 + 1;
      }
    }
    else
    {
      Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
    }
  }
}

void __fastcall Scaleform::Render::Text::SGMLParser<wchar_t>::SkipName(
        Scaleform::Render::Text::SGMLParser<wchar_t> *this)
{
  unsigned int CurChar; // ecx
  unsigned __int64 v3; // rax
  int v4; // er8
  int v5; // ecx
  bool v6; // zf
  const wchar_t *pNextChar; // rcx

  if ( this->CurState == 2 && this->Iter.pCurChar < this->Iter.pEnd )
  {
    do
    {
      CurChar = this->Iter.CurChar;
      if ( CurChar - 60 <= 2 )
        break;
      if ( CurChar == 47 )
        break;
      v3 = (unsigned __int64)(unsigned __int16)CurChar >> 8;
      v4 = Scaleform::UnicodeSpaceBits[v3];
      if ( Scaleform::UnicodeSpaceBits[v3] )
      {
        if ( v4 == 1 )
          break;
        v5 = Scaleform::UnicodeSpaceBits[v4 + (((unsigned __int16)CurChar >> 4) & 0xF)];
        if ( _bittest(&v5, this->Iter.CurChar & 0xF) )
          break;
      }
      v6 = !this->Iter.DoContentParsing;
      pNextChar = this->Iter.pNextChar;
      this->Iter.pCurChar = pNextChar;
      if ( v6 || *pNextChar != 38 )
      {
        if ( pNextChar < this->Iter.pEnd )
        {
          this->Iter.CurChar = *pNextChar;
          this->Iter.pNextChar = pNextChar + 1;
        }
      }
      else
      {
        Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
      }
    }
    while ( this->Iter.pCurChar < this->Iter.pEnd );
  }
}

void __fastcall Scaleform::Render::Text::SGMLParser<wchar_t>::SkipSpaces(
        Scaleform::Render::Text::SGMLParser<wchar_t> *this)
{
  unsigned int CurChar; // edx
  unsigned __int64 v3; // rax
  int v4; // er8
  int v5; // ecx
  bool v6; // zf
  const wchar_t *pNextChar; // rcx

  while ( this->Iter.pCurChar < this->Iter.pEnd )
  {
    CurChar = this->Iter.CurChar;
    v3 = (unsigned __int64)(unsigned __int16)CurChar >> 8;
    v4 = Scaleform::UnicodeSpaceBits[v3];
    if ( !Scaleform::UnicodeSpaceBits[v3] )
      break;
    if ( v4 != 1 )
    {
      v5 = Scaleform::UnicodeSpaceBits[v4 + (((unsigned __int16)CurChar >> 4) & 0xF)];
      if ( !_bittest(&v5, this->Iter.CurChar & 0xF) )
        break;
    }
    v6 = !this->Iter.DoContentParsing;
    pNextChar = this->Iter.pNextChar;
    this->Iter.pCurChar = pNextChar;
    if ( v6 || *pNextChar != 38 )
    {
      if ( pNextChar < this->Iter.pEnd )
      {
        this->Iter.CurChar = *pNextChar;
        this->Iter.pNextChar = pNextChar + 1;
      }
    }
    else
    {
      Scaleform::Render::Text::SGMLCharIter<wchar_t>::DecodeEscapedChar(&this->Iter);
    }
  }
}

__int64 __fastcall Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(
        const wchar_t *wstr,
        const char *str,
        unsigned __int64 len)
{
  unsigned __int64 v3; // rsi
  const char *v4; // rbx
  int v7; // er15
  int v8; // eax
  int v9; // edi
  int v10; // eax
  __int64 v11; // rax
  __int64 v13; // rax

  v3 = len;
  v4 = str;
  if ( len )
  {
    v7 = len;
    do
    {
      v8 = Scaleform::SFtowlower(*wstr++);
      v9 = v8;
      v10 = Scaleform::SFtowlower(*v4++);
      if ( !--v3 || !v9 )
        break;
      if ( v9 != v10 )
        return (unsigned int)(v9 - v10);
    }
    while ( *v4 );
    if ( v9 != v10 || !v3 && !*v4 )
      return (unsigned int)(v9 - v10);
    v11 = -1i64;
    do
      ++v11;
    while ( str[v11] );
    return (unsigned int)(v7 - v11);
  }
  else
  {
    v13 = -1i64;
    do
      ++v13;
    while ( str[v13] );
    return (unsigned int)-(int)v13;
  }
}

__int64 __fastcall Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(
        const wchar_t *dst,
        unsigned __int64 dstlen,
        const wchar_t *src,
        unsigned __int64 srclen)
{
  unsigned __int64 v4; // rdi
  wchar_t *v5; // rsi
  unsigned __int64 v6; // rbp
  signed __int64 v7; // r14
  int v8; // er12
  int v9; // er15
  int v10; // ebx
  int v11; // eax

  v4 = srclen;
  v5 = (wchar_t *)src;
  v6 = dstlen;
  if ( !dstlen )
    return (unsigned int)-(int)srclen;
  v7 = (char *)dst - (char *)src;
  v8 = srclen;
  v9 = dstlen;
  do
  {
    v10 = Scaleform::SFtowlower(*(wchar_t *)((char *)v5 + v7));
    v11 = Scaleform::SFtowlower(*v5++);
    if ( !--v6 || !v10 )
      break;
    if ( v10 != v11 )
      return (unsigned int)(v10 - v11);
    --v4;
  }
  while ( v4 );
  if ( v10 == v11 && (v6 || v4) )
    return (unsigned int)(v9 - v8);
  return (unsigned int)(v10 - v11);
}

