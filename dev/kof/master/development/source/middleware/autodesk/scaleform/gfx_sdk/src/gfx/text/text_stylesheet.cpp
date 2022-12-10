#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/text/text_stylesheet.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

struct Scaleform::GFx::Text::CSSToken<char>
{
	enum TokenType
	{
		TT_Name = 0,
		TT_QString = 1,
		TT_WhiteSpace = 2,
		TT_Number = 3,
		TT_HexNumber = 4,
		TT_Comma = 5,
		TT_OpenBrace = 6,
		TT_CloseBrace = 7,
		TT_SemiColon = 8,
		TT_Colon = 9,
		TT_EOF = 10,
		TT_Unknown = 11,
	};
	Scaleform::GFx::Text::CSSToken<char>::TokenType Type; // 0x0
	const char * pBase; // 0x8
	unsigned long long Length; // 0x10
	CSSToken<char>(Scaleform::GFx::Text::CSSToken<char>::TokenType, const char *, unsigned long long);
	CSSToken<char>(Scaleform::GFx::Text::CSSToken<char>::TokenType);
	CSSToken<char>();
	bool operator==(Scaleform::GFx::Text::CSSToken<char>::TokenType);
	void operator+=(const Scaleform::GFx::Text::CSSToken<char> &);
};
struct Scaleform::GFx::Text::CSSToken<wchar_t>
{
	enum TokenType
	{
		TT_Name = 0,
		TT_QString = 1,
		TT_WhiteSpace = 2,
		TT_Number = 3,
		TT_HexNumber = 4,
		TT_Comma = 5,
		TT_OpenBrace = 6,
		TT_CloseBrace = 7,
		TT_SemiColon = 8,
		TT_Colon = 9,
		TT_EOF = 10,
		TT_Unknown = 11,
	};
	Scaleform::GFx::Text::CSSToken<wchar_t>::TokenType Type; // 0x0
	const wchar_t * pBase; // 0x8
	unsigned long long Length; // 0x10
	CSSToken<wchar_t>(Scaleform::GFx::Text::CSSToken<wchar_t>::TokenType, const wchar_t *, unsigned long long);
	CSSToken<wchar_t>(Scaleform::GFx::Text::CSSToken<wchar_t>::TokenType);
	CSSToken<wchar_t>();
	bool operator==(Scaleform::GFx::Text::CSSToken<wchar_t>::TokenType);
	void operator+=(const Scaleform::GFx::Text::CSSToken<wchar_t> &);
};
class Scaleform::GFx::Text::CSSTokenizer<char>
{
public:
	CSSTokenizer<char>(const char *, unsigned long long);
	Scaleform::GFx::Text::CSSToken<char> GetNextToken();
	unsigned long long GetLineNo();
	unsigned long long GetColNo();
private:
	const char * pCurr; // 0x0
	const char * pEnd; // 0x8
	Scaleform::GFx::Text::CSSToken<char> CurrentToken; // 0x10
	unsigned long long LineNo; // 0x28
	unsigned long long ColNo; // 0x30
	unsigned long long LineDev; // 0x38
	unsigned long long ColDev; // 0x40
	long IsSpace(char);
	long IsDigit(char);
	long IsXDigit(char);
	long IsAlpha(char);
	long IsAlNum(char);
};
class Scaleform::GFx::Text::CSSTokenizer<wchar_t>
{
public:
	CSSTokenizer<wchar_t>(const wchar_t *, unsigned long long);
	Scaleform::GFx::Text::CSSToken<wchar_t> GetNextToken();
	unsigned long long GetLineNo();
	unsigned long long GetColNo();
private:
	const wchar_t * pCurr; // 0x0
	const wchar_t * pEnd; // 0x8
	Scaleform::GFx::Text::CSSToken<wchar_t> CurrentToken; // 0x10
	unsigned long long LineNo; // 0x28
	unsigned long long ColNo; // 0x30
	unsigned long long LineDev; // 0x38
	unsigned long long ColDev; // 0x40
	long IsSpace(wchar_t);
	long IsDigit(wchar_t);
	long IsXDigit(wchar_t);
	long IsAlpha(wchar_t);
	long IsAlNum(wchar_t);
};
long Scaleform::GFx::Text::CSSTokenizer<wchar_t>::IsDigit(wchar_t c); // 0x1406FA380
long Scaleform::GFx::Text::CSSTokenizer<wchar_t>::IsXDigit(wchar_t c); // 0x1406FA3D0
long Scaleform::GFx::Text::CSSTokenizer<wchar_t>::IsAlpha(wchar_t c); // 0x1406FA330
Scaleform::GFx::Text::CSSToken<wchar_t> Scaleform::GFx::Text::CSSTokenizer<wchar_t>::GetNextToken(); // 0x1406F8F30
class Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::Text::CSSToken<wchar_t>,Scaleform::AllocatorGH<Scaleform::GFx::Text::CSSToken<wchar_t>,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::Text::CSSHandler<wchar_t>
{
public:
	~CSSHandler<wchar_t>();
	void OpenCSSSelectorBlock(const Scaleform::GFx::Text::CSSToken<wchar_t> &, void *);
	void CloseCSSSelectorBlock(void *);
	void PushCSSSelectorProperty(const Scaleform::GFx::Text::CSSToken<wchar_t> &, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &, void *);
	CSSHandler<wchar_t>(const Scaleform::GFx::Text::CSSHandler<wchar_t> &);
	CSSHandler<wchar_t>();
	Scaleform::GFx::Text::CSSHandler<wchar_t> & operator=(const Scaleform::GFx::Text::CSSHandler<wchar_t> &);
};
bool Scaleform::GFx::Text::CSSParser<wchar_t>::Parse(const wchar_t * buffer, unsigned long long len, Scaleform::GFx::Text::CSSHandler<wchar_t> * handler, void * pdata); // 0x1406FA620
class Scaleform::GFx::Text::TextStyleParserHandlerBase
{
protected:
	TextStyleParserHandlerBase(Scaleform::GFx::Text::StyleManager *);
	Scaleform::Render::Text::Style * GetStyle(const Scaleform::GFx::Text::StyleKey &);
	void AddStyle(const Scaleform::GFx::Text::StyleKey &, Scaleform::Render::Text::Style *);
	const Scaleform::GFx::Text::StyleKey & GetTempStyleKey(Scaleform::Render::Text::StyleManagerBase::KeyType, const Scaleform::String &);
	Scaleform::GFx::Text::StyleManager * GetTextStyleManager();
private:
	Scaleform::GFx::Text::StyleManager * pManager; // 0x0
};
Scaleform::Render::Text::Style * Scaleform::GFx::Text::TextStyleParserHandlerBase::GetStyle(const Scaleform::GFx::Text::StyleKey & key); // 0x1406F9600
class Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::Style *,Scaleform::AllocatorGH<Scaleform::Render::Text::Style *,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::Render::Text::Style ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy>();
};
void Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::OpenCSSSelectorBlock(const Scaleform::GFx::Text::CSSToken<wchar_t> & name, void * pdata); // 0x1406FA420
void Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::CloseCSSSelectorBlock(void * pdata); // 0x1406F8EC0
void Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::PushCSSSelectorProperty(const Scaleform::GFx::Text::CSSToken<wchar_t> & name, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> & value, void * pdata); // 0x1406FAA60
void Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleColor(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> & styles, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> & value); // 0x1406F9670
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
void Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleDisplay(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> & styles, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> & value); // 0x1406F9700
void Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleFontFamily(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> & styles, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> & value); // 0x1406F9840
void Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleFontSize(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> & styles, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> & value); // 0x1406F9990
void Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleFontStyle(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> & styles, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> & value); // 0x1406F9A50
void Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleFontWeight(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> & styles, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> & value); // 0x1406F9B50
void Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleKerning(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> & styles, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> & value); // 0x1406F9C50
void Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleLeading(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> & styles, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> & value); // 0x1406F9D50
void Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleLetterSpacing(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> & styles, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> & value); // 0x1406F9DF0
void Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleMarginLeft(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> & styles, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> & value); // 0x1406F9E90
void Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleMarginRight(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> & styles, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> & value); // 0x1406F9F30
void Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleTextAlign(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> & styles, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> & value); // 0x1406F9FD0
void Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleTextDecoration(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> & styles, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> & value); // 0x1406FA190
void Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleTextIndent(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> & styles, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> & value); // 0x1406FA290
Scaleform::GFx::Text::StyleManager::~StyleManager(); // 0x1406F8A30
bool Scaleform::GFx::Text::StyleManager::ParseCSSImpl<wchar_t>(const wchar_t * buffer, unsigned long long len); // 0x1406F8340
class Scaleform::GFx::Text::CSSParser<wchar_t>
{
	enum ParseState
	{
		PS_ReadStyleName = 0,
		PS_ReadPropertyName = 1,
		PS_ReadPropertyValue = 2,
		PS_Success = 3,
		PS_Error = 4,
	};
private:
	Scaleform::GFx::Text::CSSToken<wchar_t> SelectorName; // 0x0
	Scaleform::GFx::Text::CSSToken<wchar_t> PropertyName; // 0x18
	Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> PropertyValue; // 0x30
	bool bPseudoClass; // 0x48
	bool bPropValSpool; // 0x49
	unsigned long long PropValLinePos; // 0x50
	unsigned long long PropValColPos; // 0x58
public:
	CSSParser<wchar_t>(Scaleform::GFx::Text::CSSParser<wchar_t> &);
	CSSParser<wchar_t>(const Scaleform::GFx::Text::CSSParser<wchar_t> &);
	CSSParser<wchar_t>();
	bool Parse(const wchar_t *, unsigned long long, Scaleform::GFx::Text::CSSHandler<wchar_t> *, void *);
	~CSSParser<wchar_t>();
	Scaleform::GFx::Text::CSSParser<wchar_t> & operator=(Scaleform::GFx::Text::CSSParser<wchar_t> &);
	Scaleform::GFx::Text::CSSParser<wchar_t> & operator=(const Scaleform::GFx::Text::CSSParser<wchar_t> &);
};
class Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> :
	Scaleform::GFx::Text::CSSHandler<wchar_t>,
	Scaleform::GFx::Text::TextStyleParserHandlerBase
{
public:
	TextStyleParserHandler<wchar_t>(const Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> &);
	TextStyleParserHandler<wchar_t>(Scaleform::GFx::Text::StyleManager *);
	virtual ~TextStyleParserHandler<wchar_t>();
	virtual void OpenCSSSelectorBlock(const Scaleform::GFx::Text::CSSToken<wchar_t> &, void *);
	virtual void CloseCSSSelectorBlock(void *);
	virtual void PushCSSSelectorProperty(const Scaleform::GFx::Text::CSSToken<wchar_t> &, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &, void *);
private:
	void HandleColor(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> &, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &);
	void HandleDisplay(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> &, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &);
	void HandleFontFamily(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> &, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &);
	void HandleFontSize(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> &, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &);
	void HandleFontStyle(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> &, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &);
	void HandleFontWeight(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> &, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &);
	void HandleKerning(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> &, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &);
	void HandleLeading(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> &, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &);
	void HandleLetterSpacing(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> &, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &);
	void HandleMarginLeft(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> &, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &);
	void HandleMarginRight(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> &, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &);
	void HandleTextAlign(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> &, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &);
	void HandleTextDecoration(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> &, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &);
	void HandleTextIndent(const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> &, const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> &);
	long StrNCmpChar(const char *, const wchar_t *, unsigned long long);
public:
	Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> & operator=(const Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> &);
};
bool Scaleform::GFx::Text::StyleManager::ParseCSS(const char * buffer, unsigned long long len); // 0x1406FA9D0
const Scaleform::Render::Text::Style * Scaleform::GFx::Text::StyleManager::GetStyle(Scaleform::Render::Text::StyleManagerBase::KeyType type, const Scaleform::String & name); // 0x1406F9400
const Scaleform::Render::Text::Style * Scaleform::GFx::Text::StyleManager::GetStyle(Scaleform::Render::Text::StyleManagerBase::KeyType type, const char * name, unsigned long long len); // 0x1406F94D0
const Scaleform::Render::Text::Style * Scaleform::GFx::Text::StyleManager::GetStyle(Scaleform::Render::Text::StyleManagerBase::KeyType type, const wchar_t * name, unsigned long long len); // 0x1406F9560
const Scaleform::HashUncachedLH<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>,325> & Scaleform::GFx::Text::StyleManager::GetStyles(); // 0x1400D7970
void Scaleform::GFx::Text::StyleManager::ClearStyle(Scaleform::Render::Text::StyleManagerBase::KeyType type, const Scaleform::String & name); // 0x1406F8C50
void Scaleform::GFx::Text::StyleManager::ClearStyle(Scaleform::Render::Text::StyleManagerBase::KeyType type, const char * name, unsigned long long len); // 0x1406F8D40
void Scaleform::GFx::Text::StyleManager::ClearStyles(); // 0x1406F8DC0_BOOL8 __fastcall Scaleform::GFx::Text::StyleManager::ParseCSSImpl<wchar_t>(
        Scaleform::GFx::Text::StyleManager *this,
        const wchar_t *buffer,
        unsigned __int64 len)
{
  bool v3; // bl
  Scaleform::GFx::Text::CSSHandler<wchar_t> handler; // [rsp+30h] [rbp-98h] BYREF
  Scaleform::GFx::Text::StyleManager *v6; // [rsp+38h] [rbp-90h]
  __int64 pdata[4]; // [rsp+40h] [rbp-88h] BYREF
  Scaleform::GFx::Text::CSSParser<wchar_t> v8; // [rsp+60h] [rbp-68h] BYREF

  v8.SelectorName.Type = TT_Unknown;
  memset(pdata, 0, 24);
  v8.SelectorName.pBase = 0i64;
  v8.SelectorName.Length = 0i64;
  v8.PropertyName.Type = TT_Unknown;
  memset(&v8.PropertyName.pBase, 0, 42);
  handler.__vftable = (Scaleform::GFx::Text::CSSHandler<wchar_t>_vtbl *)&Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::`vftable';
  v6 = this;
  v3 = Scaleform::GFx::Text::CSSParser<wchar_t>::Parse(&v8, buffer, len, &handler, pdata);
  handler.__vftable = (Scaleform::GFx::Text::CSSHandler<wchar_t>_vtbl *)&Scaleform::Render::GlyphCacheConfig::`vftable';
  if ( pdata[0] )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  if ( v8.PropertyValue.Data.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  return v3;
}

char __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::RemoveAlt<Scaleform::GFx::Text::StyleKey>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> > *this,
        const Scaleform::GFx::Text::StyleKey *key)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> >::TableType *pTable; // r10
  unsigned __int64 SizeMask; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int8 *v11; // rax
  int v12; // ecx
  int v13; // edx
  unsigned __int64 v14; // rax
  char *v15; // rbx

  pTable = this->pTable;
  if ( !this->pTable )
    return 0;
  SizeMask = pTable->SizeMask;
  v7 = SizeMask & key->HashValue;
  v8 = (__int64)&pTable[1] + 40 * v7;
  if ( *(_QWORD *)v8 == -2i64 || (SizeMask & *(_QWORD *)(v8 + 24)) != v7 )
    return 0;
  v9 = -1i64;
  v10 = SizeMask & key->HashValue;
  while ( 1 )
  {
    if ( (pTable->SizeMask & *(_QWORD *)(v8 + 24)) == v10 && *(_DWORD *)(v8 + 8) == key->Type )
    {
      v11 = (unsigned __int8 *)((*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCui64) + 12);
      do
      {
        v12 = v11[(key->Value.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) - (*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCui64)];
        v13 = *v11 - v12;
        if ( v13 )
          break;
        ++v11;
      }
      while ( v12 );
      if ( !v13 )
        break;
    }
    v9 = v7;
    v7 = *(_QWORD *)v8;
    if ( *(_QWORD *)v8 == -1i64 )
      return 0;
    v8 = (__int64)&pTable[2 * v7 + 1] + 8 * v7;
  }
  v14 = *(_QWORD *)v8;
  if ( v10 == v7 )
  {
    if ( v14 != -1i64 )
    {
      v15 = (char *)pTable + 40 * v14;
      Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>::Clear((Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> *)v8);
      Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>(
        (Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> *)v8,
        (const Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> *)(v15 + 16));
      v8 = (__int64)(v15 + 16);
    }
  }
  else
  {
    *(&pTable[1].EntryCount + 5 * v9) = v14;
  }
  Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>::Clear((Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> *)v8);
  --this->pTable->EntryCount;
  return 1;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> > *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // r15
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> >::TableType *pTable; // rdx
  __int64 v9; // r8
  char *v10; // rdi
  unsigned __int64 SizeMask; // rcx
  __int64 v12; // rbx
  Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> *v13; // rbp
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  bool v16; // zf
  unsigned __int64 *i; // rsi
  __int64 v18; // rsi

  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = *(&this->pTable[1].EntryCount + 5 * v7);
  v10 = (char *)this->pTable + 40 * v7;
  if ( v9 == -2 )
  {
    *((_QWORD *)v10 + 2) = -1i64;
    *((_DWORD *)v10 + 6) = key->First.Type;
    Scaleform::StringLH::CopyConstructHelper((Scaleform::StringLH *)v10 + 4, &key->First.Value);
    *((_QWORD *)v10 + 5) = key->First.HashValue;
    *((_QWORD *)v10 + 6) = key->Second;
  }
  else
  {
    SizeMask = pTable->SizeMask;
    v12 = v7;
    do
      v12 = SizeMask & (v12 + 1);
    while ( *(&pTable[1].EntryCount + 5 * v12) != -2i64 );
    v13 = (Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> *)(&pTable[2 * v12 + 1].EntryCount + v12);
    v14 = SizeMask & *((_QWORD *)v10 + 5);
    if ( v14 == v7 )
    {
      if ( v13 )
        Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>(
          v13,
          (const Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> *)(v10 + 16));
      *((_DWORD *)v10 + 6) = key->First.Type;
      Scaleform::String::operator=((Scaleform::String *)v10 + 4, &key->First.Value);
      *((_QWORD *)v10 + 5) = key->First.HashValue;
      *((_QWORD *)v10 + 6) = key->Second;
      *((_QWORD *)v10 + 2) = v12;
    }
    else
    {
      v15 = v14 + 4 * v14 + 2;
      v16 = *(&pTable->EntryCount + v15) == v7;
      for ( i = &pTable->EntryCount + v15; !v16; i = &pTable->EntryCount + v18 )
      {
        v18 = *i + 4 * *i + 2;
        v16 = *(&pTable->EntryCount + v18) == v7;
      }
      if ( v13 )
      {
        v13->NextInChain = v9;
        v13->Value.First.Type = *((_DWORD *)v10 + 6);
        Scaleform::StringLH::CopyConstructHelper(&v13->Value.First.Value, (const Scaleform::String *)v10 + 4);
        v13->Value.First.HashValue = *((_QWORD *)v10 + 5);
        v13->Value.Second = (Scaleform::Render::Text::Style *)*((_QWORD *)v10 + 6);
      }
      *i = v12;
      *((_DWORD *)v10 + 6) = key->First.Type;
      Scaleform::String::operator=((Scaleform::String *)v10 + 4, &key->First.Value);
      *((_QWORD *)v10 + 5) = key->First.HashValue;
      *((_QWORD *)v10 + 6) = key->Second;
      *((_QWORD *)v10 + 2) = -1i64;
    }
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // r14
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> >::TableType *v11; // rdx
  __int64 v12; // r8
  char *v13; // rsi
  const Scaleform::GFx::Text::StyleKey *pFirst; // rbx
  Scaleform::StringLH *p_Value; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> *v18; // r15
  unsigned __int64 v19; // rax
  const Scaleform::GFx::Text::StyleKey *v20; // rbx
  Scaleform::StringLH *v21; // rdx
  unsigned __int64 v22; // rbx
  bool v23; // zf
  unsigned __int64 *i; // rbx
  __int64 v25; // rbx
  const Scaleform::GFx::Text::StyleKey *v26; // rbx
  Scaleform::StringLH *v27; // rdx

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
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 5 * v10);
  v13 = (char *)this->pTable + 40 * v10;
  if ( v12 == -2 )
  {
    *((_QWORD *)v13 + 2) = -1i64;
    pFirst = key->pFirst;
    p_Value = &key->pFirst->Value;
    *((_DWORD *)v13 + 6) = key->pFirst->Type;
    Scaleform::StringLH::CopyConstructHelper((Scaleform::StringLH *)v13 + 4, p_Value);
    *((_QWORD *)v13 + 5) = pFirst->HashValue;
    *((_QWORD *)v13 + 6) = *key->pSecond;
  }
  else
  {
    v16 = v11->SizeMask;
    v17 = v10;
    do
      v17 = v16 & (v17 + 1);
    while ( *(&v11[1].EntryCount + 5 * v17) != -2i64 );
    v18 = (Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> *)(&v11[2 * v17 + 1].EntryCount + v17);
    v19 = v16 & *((_QWORD *)v13 + 5);
    if ( v19 == v10 )
    {
      if ( v18 )
        Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>(
          v18,
          (const Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> *)(v13 + 16));
      v20 = key->pFirst;
      v21 = &key->pFirst->Value;
      *((_DWORD *)v13 + 6) = key->pFirst->Type;
      Scaleform::String::operator=((Scaleform::String *)v13 + 4, v21);
      *((_QWORD *)v13 + 5) = v20->HashValue;
      *((_QWORD *)v13 + 6) = *key->pSecond;
      *((_QWORD *)v13 + 2) = v17;
    }
    else
    {
      v22 = v19 + 4 * v19 + 2;
      v23 = *(&v11->EntryCount + v22) == v10;
      for ( i = &v11->EntryCount + v22; !v23; i = &v11->EntryCount + v25 )
      {
        v25 = *i + 4 * *i + 2;
        v23 = *(&v11->EntryCount + v25) == v10;
      }
      if ( v18 )
      {
        v18->NextInChain = v12;
        v18->Value.First.Type = *((_DWORD *)v13 + 6);
        Scaleform::StringLH::CopyConstructHelper(&v18->Value.First.Value, (const Scaleform::String *)v13 + 4);
        v18->Value.First.HashValue = *((_QWORD *)v13 + 5);
        v18->Value.Second = (Scaleform::Render::Text::Style *)*((_QWORD *)v13 + 6);
      }
      *i = v17;
      v26 = key->pFirst;
      v27 = &key->pFirst->Value;
      *((_DWORD *)v13 + 6) = key->pFirst->Type;
      Scaleform::String::operator=((Scaleform::String *)v13 + 4, v27);
      *((_QWORD *)v13 + 5) = v26->HashValue;
      *((_QWORD *)v13 + 6) = *key->pSecond;
      *((_QWORD *)v13 + 2) = -1i64;
    }
  }
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::findIndexCore<Scaleform::GFx::Text::StyleKey>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> > *this,
        const Scaleform::GFx::Text::StyleKey *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> >::TableType *pTable; // rbx
  unsigned __int64 v4; // r9
  bool v5; // zf
  unsigned __int64 v7; // r10
  unsigned __int64 *v8; // r9
  unsigned __int8 *v9; // rax
  int v10; // ecx
  int v11; // edx

  pTable = this->pTable;
  v4 = hashValue + 4 * hashValue + 2;
  v5 = *(&this->pTable->EntryCount + v4) == -2i64;
  v7 = hashValue;
  v8 = &this->pTable->EntryCount + v4;
  if ( v5 || (v8[3] & pTable->SizeMask) != hashValue )
    return -1i64;
  while ( 1 )
  {
    if ( (pTable->SizeMask & v8[3]) == hashValue && *((_DWORD *)v8 + 2) == key->Type )
    {
      v9 = (unsigned __int8 *)((v8[2] & 0xFFFFFFFFFFFFFFFCui64) + 12);
      do
      {
        v10 = v9[(key->Value.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) - (v8[2] & 0xFFFFFFFFFFFFFFFCui64)];
        v11 = *v9 - v10;
        if ( v11 )
          break;
        ++v9;
      }
      while ( v10 );
      if ( !v11 )
        return v7;
    }
    v7 = *v8;
    if ( *v8 == -1i64 )
      break;
    v8 = &pTable[2 * v7 + 1].EntryCount + v7;
  }
  return -1i64;
}

void __fastcall Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>(
        Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> *this,
        const Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> *e)
{
  this->NextInChain = e->NextInChain;
  this->Value.First.Type = e->Value.First.Type;
  Scaleform::StringLH::CopyConstructHelper(&this->Value.First.Value, &e->Value.First.Value);
  this->Value.First.HashValue = e->Value.First.HashValue;
  this->Value.Second = e->Value.Second;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> > *this)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> >::TableType *pTable; // rdi
  volatile int *v5; // rbx

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      pTable = this->pTable;
      if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) != -2i64 )
      {
        v5 = (volatile int *)(*(unsigned __int64 *)((_BYTE *)&pTable[2].EntryCount + v2) & 0xFFFFFFFFFFFFFFFCui64);
        if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v5 + 2, -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v5);
        *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v2) = -2i64;
      }
      v2 += 40i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::GFx::Text::StyleManager::~StyleManager(Scaleform::GFx::Text::StyleManager *this)
{
  volatile int *v2; // rbx

  this->__vftable = (Scaleform::GFx::Text::StyleManager_vtbl *)&Scaleform::GFx::Text::StyleManager::`vftable';
  Scaleform::GFx::Text::StyleManager::ClearStyles(this);
  v2 = (volatile int *)(this->TempKey.Value.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v2 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v2);
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>(&this->Styles.mHash);
  this->__vftable = (Scaleform::GFx::Text::StyleManager_vtbl *)&Scaleform::Render::GlyphCacheConfig::`vftable';
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>::Clear(
        Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> *this)
{
  volatile int *v2; // rbx

  v2 = (volatile int *)(this->Value.First.Value.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v2 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v2);
  this->NextInChain = -2i64;
}

void __fastcall Scaleform::GFx::Text::StyleManager::ClearStyle(
        Scaleform::GFx::Text::StyleManager *this,
        Scaleform::Render::Text::StyleManagerBase::KeyType type,
        const Scaleform::String *name)
{
  unsigned __int64 v5; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> >::TableType *pTable; // rbx
  signed __int64 v7; // rax
  unsigned __int64 *v8; // rcx
  __int64 *v9; // rbx
  __int64 v10; // rbx

  this->TempKey.Type = type;
  Scaleform::String::operator=(&this->TempKey.Value, name);
  v5 = Scaleform::String::BernsteinHashFunction(
         (const void *)((name->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
         *(_QWORD *)(name->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
         0x1505ui64)
     + (int)this->TempKey.Type;
  this->TempKey.HashValue = v5;
  pTable = this->Styles.mHash.pTable;
  if ( pTable
    && (v7 = Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::findIndexCore<Scaleform::GFx::Text::StyleKey>(
               &this->Styles.mHash,
               &this->TempKey,
               v5 & pTable->SizeMask),
        v7 >= 0) )
  {
    v8 = &pTable[2 * v7 + 1].SizeMask + v7;
  }
  else
  {
    v8 = 0i64;
  }
  v9 = (__int64 *)(v8 + 3);
  if ( !v8 )
    v9 = 0i64;
  if ( v9 )
  {
    v10 = *v9;
    if ( v10 )
    {
      Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat((Scaleform::Render::Text::ParagraphFormat *)(v10 + 80));
      Scaleform::Render::Text::TextFormat::~TextFormat((Scaleform::Render::Text::TextFormat *)v10);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v10);
    }
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::RemoveAlt<Scaleform::GFx::Text::StyleKey>(
      &this->Styles.mHash,
      &this->TempKey);
  }
}

void __fastcall Scaleform::GFx::Text::StyleManager::ClearStyle(
        Scaleform::GFx::Text::StyleManager *this,
        Scaleform::Render::Text::StyleManagerBase::KeyType type,
        const char *name,
        unsigned __int64 len)
{
  void *v6; // rbx
  Scaleform::String namea; // [rsp+48h] [rbp+20h] BYREF

  if ( len == -1i64 )
  {
    do
      ++len;
    while ( name[len] );
  }
  Scaleform::String::String(&namea, name, len);
  Scaleform::GFx::Text::StyleManager::ClearStyle(this, type, &namea);
  v6 = (void *)(namea.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((namea.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v6);
}

void __fastcall Scaleform::GFx::Text::StyleManager::ClearStyles(Scaleform::GFx::Text::StyleManager *this)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> >::TableType *pTable; // rax
  Scaleform::HashUncachedLH<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>,325> *p_Styles; // r14
  unsigned __int64 v3; // rbx
  Scaleform::HashUncachedLH<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>,325> *v4; // rsi
  unsigned __int64 SizeMask; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> >::TableType *v6; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> >::TableType *v7; // rcx
  __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // rcx

  pTable = this->Styles.mHash.pTable;
  p_Styles = &this->Styles;
  if ( pTable )
  {
    SizeMask = pTable->SizeMask;
    v3 = 0i64;
    v6 = pTable + 1;
    do
    {
      if ( v6->EntryCount != -2i64 )
        break;
      ++v3;
      v6 = (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> >::TableType *)((char *)v6 + 40);
    }
    while ( v3 <= SizeMask );
    v4 = p_Styles;
  }
  else
  {
    v3 = 0i64;
    v4 = 0i64;
  }
  while ( v4 )
  {
    v7 = v4->mHash.pTable;
    if ( !v4->mHash.pTable || (signed __int64)v3 > (signed __int64)v7->SizeMask )
      break;
    v8 = *(&v7[3].EntryCount + 5 * v3);
    if ( v8 )
    {
      Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat((Scaleform::Render::Text::ParagraphFormat *)(v8 + 80));
      Scaleform::Render::Text::TextFormat::~TextFormat((Scaleform::Render::Text::TextFormat *)v8);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v8);
    }
    v9 = v4->mHash.pTable->SizeMask;
    if ( (__int64)v3 <= (__int64)v9 && ++v3 <= v9 )
    {
      v10 = &v4->mHash.pTable[1].EntryCount + 5 * v3;
      do
      {
        if ( *v10 != -2i64 )
          break;
        ++v3;
        v10 += 5;
      }
      while ( v3 <= v9 );
    }
  }
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>(&p_Styles->mHash);
}

void __fastcall Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::CloseCSSSelectorBlock(
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> *this,
        void *pdata)
{
  __int64 v3; // rax

  if ( *((_QWORD *)pdata + 1) && (v3 = *((_QWORD *)pdata + 2), (v3 & 0xFFFFFFFFFFFFFFFEui64) != 0) && v3 )
  {
    if ( *(_QWORD *)pdata )
    {
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      *(_QWORD *)pdata = 0i64;
    }
    *((_QWORD *)pdata + 2) = 0i64;
    *((_QWORD *)pdata + 1) = 0i64;
  }
  else
  {
    *((_QWORD *)pdata + 1) = 0i64;
  }
}

Scaleform::GFx::Text::CSSToken<wchar_t> *__fastcall Scaleform::GFx::Text::CSSTokenizer<wchar_t>::GetNextToken(
        Scaleform::GFx::Text::CSSTokenizer<wchar_t> *this,
        Scaleform::GFx::Text::CSSToken<wchar_t> *result)
{
  Scaleform::GFx::Text::CSSToken<wchar_t> *v4; // rax
  const wchar_t *pEnd; // rbp
  const wchar_t *v6; // rdi
  int v7; // er14
  unsigned __int64 v8; // rax
  int v9; // er8
  int v10; // eax
  wchar_t v11; // cx
  unsigned __int64 v12; // rax
  int v13; // er8
  int v14; // eax
  const wchar_t *v15; // rdi
  char v16; // al
  unsigned __int64 ColDev; // rdx
  __int64 v18; // rcx
  const wchar_t *v19; // rdi
  wchar_t *v20; // rdi
  wchar_t *v21; // rdi
  wchar_t v22; // si
  wchar_t *v23; // rdi
  const wchar_t *v24; // rdi
  wchar_t v25; // r8
  unsigned __int64 v26; // rax
  int v27; // er9
  int v28; // eax
  unsigned __int64 Length; // xmm1_8
  unsigned __int64 v30; // [rsp+20h] [rbp-38h]

  if ( this->CurrentToken.Type == TT_EOF )
  {
    result->Type = TT_EOF;
    v4 = result;
    result->pBase = 0i64;
    result->Length = 0i64;
  }
  else
  {
    pEnd = this->pEnd;
    v6 = &this->pCurr[this->CurrentToken.Length];
    this->CurrentToken.Length = 1i64;
    this->LineNo += this->LineDev;
    this->ColNo += this->ColDev;
    this->pCurr = v6;
    this->CurrentToken.pBase = v6;
    this->LineDev = 0i64;
    this->ColDev = 0i64;
    if ( v6 == pEnd )
    {
      LODWORD(v30) = 10;
      *(_OWORD *)&this->CurrentToken.Type = v30;
      this->CurrentToken.Length = 0i64;
    }
    else
    {
      v7 = *v6;
      v8 = (unsigned __int64)*v6 >> 8;
      v9 = Scaleform::UnicodeSpaceBits[v8];
      if ( Scaleform::UnicodeSpaceBits[v8]
        && (v9 == 1
         || (v10 = Scaleform::UnicodeSpaceBits[v9 + (((unsigned __int16)v7 >> 4) & 0xF)], _bittest(&v10, v7 & 0xF))) )
      {
        while ( 1 )
        {
          if ( *v6 == 10 )
          {
            ++this->LineDev;
            this->ColDev = 0i64;
          }
          ++this->ColDev;
          if ( ++v6 == pEnd )
            break;
          v11 = *v6;
          v12 = (unsigned __int64)*v6 >> 8;
          v13 = Scaleform::UnicodeSpaceBits[v12];
          if ( !Scaleform::UnicodeSpaceBits[v12] )
            break;
          if ( v13 != 1 )
          {
            v14 = Scaleform::UnicodeSpaceBits[v13 + ((v11 >> 4) & 0xF)];
            if ( !_bittest(&v14, v11 & 0xF) )
              break;
          }
          ++this->CurrentToken.Length;
        }
        this->CurrentToken.Type = TT_WhiteSpace;
      }
      else if ( (_WORD)v7 == 47 )
      {
        v15 = v6 + 1;
        this->CurrentToken.Type = TT_WhiteSpace;
        this->ColDev = 1i64;
        if ( *v15 == 42 )
        {
          this->CurrentToken.Length = 2i64;
          v16 = 0;
          this->CurrentToken.Type = TT_WhiteSpace;
          while ( 1 )
          {
            if ( *v15 == 10 )
            {
              ++this->LineDev;
              this->ColDev = 0i64;
            }
            ++this->ColDev;
            ++v15;
            ColDev = this->ColDev;
            if ( v15 == pEnd )
              break;
            if ( *v15 == 42 )
            {
              ++this->CurrentToken.Length;
              v16 = 1;
            }
            else
            {
              if ( v16 && *v15 == 47 )
              {
                ++this->CurrentToken.Length;
                this->ColDev = ColDev + 1;
                break;
              }
              v16 = 0;
              ++this->CurrentToken.Length;
            }
          }
        }
        else
        {
          this->pCurr = pEnd;
          this->CurrentToken.Type = TT_EOF;
        }
      }
      else if ( Scaleform::GFx::Text::CSSTokenizer<wchar_t>::IsAlpha(this, v7)
             || (unsigned __int16)(v7 - 36) <= 0x3Bu
             && (v18 = 0x800000000000401i64, _bittest64(&v18, (unsigned int)(v7 - 36))) )
      {
        v24 = v6 + 1;
        this->ColDev = 1i64;
        if ( v24 != pEnd )
        {
          do
          {
            v25 = *v24;
            v26 = (unsigned __int64)*v24 >> 8;
            v27 = Scaleform::UnicodeAlnumBits[v26];
            if ( !Scaleform::UnicodeAlnumBits[v26]
              || v27 != 1 && (v28 = Scaleform::UnicodeAlnumBits[v27 + ((v25 >> 4) & 0xF)], !_bittest(&v28, v25 & 0xF)) )
            {
              if ( v25 != 45 && v25 != 95 )
                break;
            }
            ++this->CurrentToken.Length;
            ++v24;
            ++this->ColDev;
          }
          while ( v24 != this->pEnd );
        }
        this->CurrentToken.Type = TT_Name;
      }
      else if ( (_WORD)v7 == 34 )
      {
        v19 = v6 + 1;
        this->ColDev = 1i64;
        if ( v19 != pEnd )
        {
          do
          {
            if ( *v19 == 34 )
              break;
            ++this->CurrentToken.Length;
            ++v19;
            ++this->ColDev;
          }
          while ( v19 != this->pEnd );
        }
        ++this->ColDev;
        ++this->CurrentToken.Length;
        this->CurrentToken.Type = TT_QString;
      }
      else if ( Scaleform::GFx::Text::CSSTokenizer<wchar_t>::IsDigit(this, v7) || (_WORD)v7 == 45 )
      {
        v21 = (wchar_t *)(v6 + 1);
        this->ColDev = 1i64;
        if ( v21 != pEnd )
        {
          do
          {
            v22 = *v21;
            if ( !Scaleform::GFx::Text::CSSTokenizer<wchar_t>::IsDigit(this, *v21) && v22 != 46 )
              break;
            ++this->CurrentToken.Length;
            ++v21;
            ++this->ColDev;
          }
          while ( v21 != this->pEnd );
        }
        this->CurrentToken.Type = TT_Number;
        if ( *v21 == 46 )
        {
          ++this->CurrentToken.Length;
          v23 = v21 + 2;
          for ( this->ColDev += 2i64; v23 != this->pEnd; ++this->ColDev )
          {
            if ( !Scaleform::GFx::Text::CSSTokenizer<wchar_t>::IsDigit(this, *v23) )
              break;
            ++this->CurrentToken.Length;
            ++v23;
          }
        }
      }
      else if ( (_WORD)v7 == 35 )
      {
        v20 = (wchar_t *)(v6 + 1);
        this->ColDev = 1i64;
        if ( v20 != pEnd )
        {
          do
          {
            if ( !Scaleform::GFx::Text::CSSTokenizer<wchar_t>::IsXDigit(this, *v20) )
              break;
            ++this->CurrentToken.Length;
            ++v20;
            ++this->ColDev;
          }
          while ( v20 != this->pEnd );
        }
        this->CurrentToken.Type = TT_HexNumber;
      }
      else if ( (unsigned __int16)v7 == 44 )
      {
        this->CurrentToken.Type = TT_Comma;
        this->ColDev = 1i64;
      }
      else if ( (unsigned __int16)v7 == 58 )
      {
        this->CurrentToken.Type = TT_Colon;
        this->ColDev = 1i64;
      }
      else if ( (unsigned __int16)v7 == 59 )
      {
        this->CurrentToken.Type = TT_SemiColon;
        this->ColDev = 1i64;
      }
      else if ( (unsigned __int16)v7 == 123 )
      {
        this->CurrentToken.Type = TT_OpenBrace;
        this->ColDev = 1i64;
      }
      else
      {
        if ( (unsigned __int16)v7 == 125 )
          this->CurrentToken.Type = TT_CloseBrace;
        else
          this->CurrentToken.Type = TT_Unknown;
        this->ColDev = 1i64;
      }
    }
    v4 = result;
    Length = this->CurrentToken.Length;
    *(_OWORD *)&result->Type = *(_OWORD *)&this->CurrentToken.Type;
    result->Length = Length;
  }
  return v4;
}

const Scaleform::Render::Text::Style *__fastcall Scaleform::GFx::Text::StyleManager::GetStyle(
        Scaleform::GFx::Text::StyleManager *this,
        Scaleform::Render::Text::StyleManagerBase::KeyType type,
        const Scaleform::String *name)
{
  Scaleform::GFx::Text::StyleKey *p_TempKey; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> >::TableType *pTable; // rbx
  signed __int64 v7; // rax
  unsigned __int64 *v8; // rcx
  unsigned __int64 *v9; // rax

  p_TempKey = &this->TempKey;
  this->TempKey.Type = type;
  Scaleform::String::operator=(&this->TempKey.Value, name);
  p_TempKey->HashValue = Scaleform::String::BernsteinHashFunction(
                           (const void *)((name->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                           *(_QWORD *)(name->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
                           0x1505ui64)
                       + (int)p_TempKey->Type;
  pTable = this->Styles.mHash.pTable;
  if ( pTable
    && (v7 = Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::findIndexCore<Scaleform::GFx::Text::StyleKey>(
               &this->Styles.mHash,
               p_TempKey,
               p_TempKey->HashValue & pTable->SizeMask),
        v7 >= 0) )
  {
    v8 = &pTable[2 * v7 + 1].SizeMask + v7;
  }
  else
  {
    v8 = 0i64;
  }
  v9 = v8 + 3;
  if ( !v8 )
    v9 = 0i64;
  if ( v9 )
    return (const Scaleform::Render::Text::Style *)*v9;
  else
    return 0i64;
}

const Scaleform::Render::Text::Style *__fastcall Scaleform::GFx::Text::StyleManager::GetStyle(
        Scaleform::GFx::Text::StyleManager *this,
        Scaleform::Render::Text::StyleManagerBase::KeyType type,
        const char *name,
        unsigned __int64 len)
{
  const Scaleform::Render::Text::Style *v6; // rax
  void *v7; // rbx
  const Scaleform::Render::Text::Style *v8; // rdi
  Scaleform::String v10; // [rsp+30h] [rbp+8h] BYREF

  if ( len == -1i64 )
  {
    do
      ++len;
    while ( name[len] );
  }
  Scaleform::String::String(&v10, name, len);
  v6 = this->GetStyle(this, (unsigned int)type, &v10);
  v7 = (void *)(v10.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  v8 = v6;
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v10.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v7);
  return v8;
}

const Scaleform::Render::Text::Style *__fastcall Scaleform::GFx::Text::StyleManager::GetStyle(
        Scaleform::GFx::Text::StyleManager *this,
        Scaleform::Render::Text::StyleManagerBase::KeyType type,
        const wchar_t *name,
        unsigned __int64 len)
{
  __int64 v4; // rbx
  const Scaleform::Render::Text::Style *v8; // rax
  void *v9; // rbx
  const Scaleform::Render::Text::Style *v10; // rdi
  Scaleform::String v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = len;
  if ( len == -1i64 )
    v4 = Scaleform::SFwcslen(name);
  Scaleform::String::String(&v12);
  Scaleform::String::AppendString(&v12, name, v4);
  v8 = this->GetStyle(this, (unsigned int)type, &v12);
  v9 = (void *)(v12.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  v10 = v8;
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v12.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v9);
  return v10;
}

Scaleform::Render::Text::Style *__fastcall Scaleform::GFx::Text::TextStyleParserHandlerBase::GetStyle(
        Scaleform::GFx::Text::TextStyleParserHandlerBase *this,
        const Scaleform::GFx::Text::StyleKey *key)
{
  Scaleform::HashUncachedLH<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>,325> *p_Styles; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> > v3; // rbx
  signed __int64 v4; // rax
  unsigned __int64 *v5; // rcx
  unsigned __int64 *v6; // rax

  p_Styles = &this->pManager->Styles;
  v3.pTable = p_Styles->mHash.pTable;
  if ( p_Styles->mHash.pTable
    && (v4 = Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::findIndexCore<Scaleform::GFx::Text::StyleKey>(
               &p_Styles->mHash,
               key,
               key->HashValue & v3.pTable->SizeMask),
        v4 >= 0) )
  {
    v5 = &v3.pTable[2 * v4 + 1].SizeMask + v4;
  }
  else
  {
    v5 = 0i64;
  }
  v6 = v5 + 3;
  if ( !v5 )
    v6 = 0i64;
  if ( v6 )
    return (Scaleform::Render::Text::Style *)*v6;
  else
    return 0i64;
}

std::_Align_type<double,64> *__fastcall __Get____Func_impl_U_unnamed_type_nothing___1__InstallGFxInterface_extension__YAXXZ_V__allocator_H_std__VValue_GFx_Scaleform__AEAVGFXIMovieContext_3_PEBV678_I_std__EEBAPEBXXZ(
        _Mtx_internal_imp_t *mtx)
{
  return &mtx->cs;
}

void __fastcall Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleColor(
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> *this,
        const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *styles,
        const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> *value)
{
  unsigned __int64 v3; // rbx
  Scaleform::GFx::Text::CSSToken<wchar_t> *Data; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  const wchar_t *v8; // rdx
  unsigned int v9; // edx
  Scaleform::Render::Text::Style *v10; // rcx
  unsigned int pdestVal; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0i64;
  Data = value->Data.Data;
  v6 = 0i64;
  if ( value->Data.Data->Type != TT_WhiteSpace || (v6 = 1i64, value->Data.Size >= 2) )
  {
    v7 = v6;
    if ( Data[v7].Type == TT_HexNumber && Data[v7].Length == 7 )
    {
      v8 = Data[v7].pBase + 1;
      pdestVal = 0;
      Scaleform::Render::Text::SGMLParser<wchar_t>::ParseHexInt(&pdestVal, v8, 6ui64);
      if ( styles->Data.Size )
      {
        v9 = pdestVal & 0xFFFFFF;
        do
        {
          v10 = styles->Data.Data[v3++];
          v10->mTextFormat.ColorV &= 0xFF000000;
          v10->mTextFormat.ColorV |= v9;
          v10->mTextFormat.PresentMask |= 1u;
        }
        while ( v3 < styles->Data.Size );
      }
    }
  }
}

void __fastcall Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleDisplay(
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> *this,
        const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *styles,
        const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> *value)
{
  Scaleform::GFx::Text::CSSToken<wchar_t> *Data; // rsi
  unsigned __int64 v4; // rbx
  __int64 v6; // rax
  char v7; // di
  __int64 v8; // rax
  Scaleform::GFx::Text::CSSToken<wchar_t>::TokenType Type; // ecx
  const wchar_t *pBase; // rbp
  unsigned __int64 Length; // rsi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r8
  __int16 v15; // di
  Scaleform::Render::Text::Style *v16; // rcx

  Data = value->Data.Data;
  v4 = 0i64;
  v6 = 0i64;
  v7 = 1;
  if ( value->Data.Data->Type != TT_WhiteSpace || (v6 = 1i64, value->Data.Size >= 2) )
  {
    v8 = v6;
    Type = Data[v8].Type;
    if ( Type == TT_Name || Type == TT_QString && Data[v8].Length > 2 )
    {
      pBase = Data[v8].pBase;
      Length = Data[v8].Length;
      if ( Type == TT_QString )
      {
        ++pBase;
        Length -= 2i64;
      }
      v12 = 6i64;
      if ( Length < 6 )
        v12 = Length;
      if ( Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(pBase, "inline", v12) )
      {
        v13 = 5i64;
        if ( Length < 5 )
          v13 = Length;
        if ( Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(pBase, "block", v13) )
        {
          v14 = 4i64;
          if ( Length < 4 )
            v14 = Length;
          v7 = 0;
          if ( !Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(pBase, "none", v14) )
            v7 = 2;
        }
      }
      else
      {
        v7 = 0;
      }
      if ( styles->Data.Size )
      {
        v15 = (v7 & 3) << 11;
        do
        {
          v16 = styles->Data.Data[v4++];
          v16->mParagraphFormat.PresentMask &= 0xE7FFu;
          v16->mParagraphFormat.PresentMask |= v15 | 0x100;
        }
        while ( v4 < styles->Data.Size );
      }
    }
  }
}

void __fastcall Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleFontFamily(
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> *this,
        const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *styles,
        const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> *value)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  Scaleform::GFx::Text::CSSToken<wchar_t> *Data; // r8
  unsigned __int64 v9; // rdi
  Scaleform::GFx::Text::CSSToken<wchar_t>::TokenType Type; // eax
  const wchar_t *pBase; // rdx
  __int64 Length; // r8
  Scaleform::GFx::Text::CSSToken<wchar_t>::TokenType v13; // ecx
  char *pData; // rdx
  Scaleform::StringBuffer v15; // [rsp+20h] [rbp-48h] BYREF

  Size = value->Data.Size;
  v5 = 0i64;
  v6 = 0i64;
  Scaleform::StringBuffer::StringBuffer(&v15, Scaleform::Memory::pGlobalHeap);
  if ( !Size )
  {
LABEL_15:
    if ( styles->Data.Size )
    {
      do
      {
        pData = (char *)&pnewText;
        if ( v15.pData )
          pData = v15.pData;
        Scaleform::Render::Text::TextFormat::SetFontList(
          &styles->Data.Data[v5++]->mTextFormat,
          pData,
          0xFFFFFFFFFFFFFFFFui64);
      }
      while ( v5 < styles->Data.Size );
    }
    goto LABEL_19;
  }
LABEL_2:
  if ( v15.Size )
    Scaleform::StringBuffer::AppendChar(&v15, 0x2Cu);
  Data = value->Data.Data;
  if ( value->Data.Data[v6].Type != TT_WhiteSpace || (++v6, Size >= v6 + 1) )
  {
    v9 = v6;
    Type = Data[v6].Type;
    if ( Type == TT_Name || Type == TT_QString && Data[v9].Length > 2 )
    {
      pBase = Data[v9].pBase;
      Length = Data[v9].Length;
      if ( Type == TT_QString )
      {
        ++pBase;
        Length -= 2i64;
      }
      Scaleform::StringBuffer::AppendString(&v15, pBase, Length);
      while ( v6 < Size )
      {
        ++v6;
        v13 = value->Data.Data[v9++].Type;
        if ( v13 == TT_Comma )
        {
          if ( v6 < Size )
            goto LABEL_2;
          goto LABEL_15;
        }
      }
      goto LABEL_15;
    }
  }
LABEL_19:
  Scaleform::StringBuffer::~StringBuffer(&v15);
}

void __fastcall Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleFontSize(
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> *this,
        const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *styles,
        const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> *value)
{
  unsigned __int64 v3; // rbx
  Scaleform::GFx::Text::CSSToken<wchar_t> *Data; // rdx
  __int64 v6; // rax
  unsigned __int64 Length; // r8
  const wchar_t *pBase; // rdx
  float v9; // xmm1_4
  Scaleform::Render::Text::Style *v10; // rcx
  int v11; // eax
  float pdestVal; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0i64;
  Data = value->Data.Data;
  v6 = 0i64;
  if ( value->Data.Data->Type != TT_WhiteSpace || (v6 = 1i64, value->Data.Size >= 2) )
  {
    if ( Data[v6].Type == TT_Number )
    {
      Length = Data[v6].Length;
      pBase = Data[v6].pBase;
      pdestVal = 0.0;
      Scaleform::Render::Text::SGMLParser<wchar_t>::ParseFloat(&pdestVal, pBase, Length);
      v9 = pdestVal;
      if ( pdestVal != 0.0 )
      {
        if ( styles->Data.Size )
        {
          do
          {
            v10 = styles->Data.Data[v3];
            if ( v9 >= 3276.8 )
              LOWORD(v11) = -1;
            else
              v11 = (int)(float)(v9 * 20.0);
            v10->mTextFormat.PresentMask |= 8u;
            ++v3;
            v10->mTextFormat.FontSize = v11;
          }
          while ( v3 < styles->Data.Size );
        }
      }
    }
  }
}

void __fastcall Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleFontStyle(
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> *this,
        const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *styles,
        const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> *value)
{
  Scaleform::GFx::Text::CSSToken<wchar_t> *Data; // rcx
  unsigned __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  Scaleform::GFx::Text::CSSToken<wchar_t>::TokenType Type; // edx
  const wchar_t *pBase; // rsi
  unsigned __int64 Length; // rcx
  unsigned __int64 v11; // rbp

  Data = value->Data.Data;
  v4 = 0i64;
  v6 = 0i64;
  if ( value->Data.Data->Type != TT_WhiteSpace || (v6 = 1i64, value->Data.Size >= 2) )
  {
    v7 = v6;
    Type = Data[v7].Type;
    if ( Type == TT_Name || Type == TT_QString && Data[v7].Length > 2 )
    {
      pBase = Data[v7].pBase;
      Length = Data[v7].Length;
      if ( Type == TT_QString )
      {
        ++pBase;
        Length -= 2i64;
      }
      v11 = 6i64;
      if ( Length < 6 )
        v11 = Length;
      if ( Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(pBase, "normal", v11) )
      {
        if ( !Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(pBase, "italic", v11) && styles->Data.Size )
        {
          do
            Scaleform::Render::Text::TextFormat::SetItalic(&styles->Data.Data[v4++]->mTextFormat, 1);
          while ( v4 < styles->Data.Size );
        }
      }
      else if ( styles->Data.Size )
      {
        do
          Scaleform::Render::Text::TextFormat::SetItalic(&styles->Data.Data[v4++]->mTextFormat, 0);
        while ( v4 < styles->Data.Size );
      }
    }
  }
}

void __fastcall Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleFontWeight(
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> *this,
        const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *styles,
        const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> *value)
{
  Scaleform::GFx::Text::CSSToken<wchar_t> *Data; // rsi
  unsigned __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  Scaleform::GFx::Text::CSSToken<wchar_t>::TokenType Type; // ecx
  const wchar_t *pBase; // rbp
  unsigned __int64 Length; // rsi
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8

  Data = value->Data.Data;
  v4 = 0i64;
  v6 = 0i64;
  if ( value->Data.Data->Type != TT_WhiteSpace || (v6 = 1i64, value->Data.Size >= 2) )
  {
    v7 = v6;
    Type = Data[v7].Type;
    if ( Type == TT_Name || Type == TT_QString && Data[v7].Length > 2 )
    {
      pBase = Data[v7].pBase;
      Length = Data[v7].Length;
      if ( Type == TT_QString )
      {
        ++pBase;
        Length -= 2i64;
      }
      v11 = 6i64;
      if ( Length < 6 )
        v11 = Length;
      if ( Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(pBase, "normal", v11) )
      {
        v12 = 4i64;
        if ( Length < 4 )
          v12 = Length;
        if ( !Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(pBase, "bold", v12) && styles->Data.Size )
        {
          do
            Scaleform::Render::Text::TextFormat::SetBold(&styles->Data.Data[v4++]->mTextFormat, 1);
          while ( v4 < styles->Data.Size );
        }
      }
      else if ( styles->Data.Size )
      {
        do
          Scaleform::Render::Text::TextFormat::SetBold(&styles->Data.Data[v4++]->mTextFormat, 0);
        while ( v4 < styles->Data.Size );
      }
    }
  }
}

void __fastcall Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleKerning(
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> *this,
        const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *styles,
        const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> *value)
{
  Scaleform::GFx::Text::CSSToken<wchar_t> *Data; // rsi
  unsigned __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  Scaleform::GFx::Text::CSSToken<wchar_t>::TokenType Type; // ecx
  const wchar_t *pBase; // rbp
  unsigned __int64 Length; // rsi
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8

  Data = value->Data.Data;
  v4 = 0i64;
  v6 = 0i64;
  if ( value->Data.Data->Type != TT_WhiteSpace || (v6 = 1i64, value->Data.Size >= 2) )
  {
    v7 = v6;
    Type = Data[v7].Type;
    if ( Type == TT_Name || Type == TT_QString && Data[v7].Length > 2 )
    {
      pBase = Data[v7].pBase;
      Length = Data[v7].Length;
      if ( Type == TT_QString )
      {
        ++pBase;
        Length -= 2i64;
      }
      v11 = 4i64;
      if ( Length < 4 )
        v11 = Length;
      if ( Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(pBase, "true", v11) )
      {
        v12 = 5i64;
        if ( Length < 5 )
          v12 = Length;
        if ( !Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(pBase, "false", v12) && styles->Data.Size )
        {
          do
            Scaleform::Render::Text::TextFormat::SetKerning(&styles->Data.Data[v4++]->mTextFormat, 0);
          while ( v4 < styles->Data.Size );
        }
      }
      else if ( styles->Data.Size )
      {
        do
          Scaleform::Render::Text::TextFormat::SetKerning(&styles->Data.Data[v4++]->mTextFormat, 1);
        while ( v4 < styles->Data.Size );
      }
    }
  }
}

void __fastcall Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleLeading(
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> *this,
        const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *styles,
        const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> *value)
{
  unsigned __int64 v3; // rbx
  Scaleform::GFx::Text::CSSToken<wchar_t> *Data; // rdx
  __int64 v6; // rax
  unsigned __int64 Length; // r8
  const wchar_t *pBase; // rdx
  int v9; // edx
  Scaleform::Render::Text::Style *v10; // rcx
  float pdestVal; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0i64;
  Data = value->Data.Data;
  v6 = 0i64;
  if ( value->Data.Data->Type != TT_WhiteSpace || (v6 = 1i64, value->Data.Size >= 2) )
  {
    if ( Data[v6].Type == TT_Number )
    {
      Length = Data[v6].Length;
      pBase = Data[v6].pBase;
      pdestVal = 0.0;
      Scaleform::Render::Text::SGMLParser<wchar_t>::ParseFloat(&pdestVal, pBase, Length);
      if ( pdestVal != 0.0 )
      {
        if ( styles->Data.Size )
        {
          v9 = (int)pdestVal;
          do
          {
            v10 = styles->Data.Data[v3++];
            v10->mParagraphFormat.PresentMask |= 8u;
            v10->mParagraphFormat.Leading = v9;
          }
          while ( v3 < styles->Data.Size );
        }
      }
    }
  }
}

void __fastcall Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleLetterSpacing(
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> *this,
        const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *styles,
        const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> *value)
{
  unsigned __int64 v3; // rbx
  Scaleform::GFx::Text::CSSToken<wchar_t> *Data; // rdx
  __int64 v6; // rax
  unsigned __int64 Length; // r8
  const wchar_t *pBase; // rdx
  float v9; // xmm0_4
  Scaleform::Render::Text::Style *v10; // rcx
  float pdestVal; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0i64;
  Data = value->Data.Data;
  v6 = 0i64;
  if ( value->Data.Data->Type != TT_WhiteSpace || (v6 = 1i64, value->Data.Size >= 2) )
  {
    if ( Data[v6].Type == TT_Number )
    {
      Length = Data[v6].Length;
      pBase = Data[v6].pBase;
      pdestVal = 0.0;
      Scaleform::Render::Text::SGMLParser<wchar_t>::ParseFloat(&pdestVal, pBase, Length);
      if ( pdestVal != 0.0 )
      {
        if ( styles->Data.Size )
        {
          v9 = pdestVal * 20.0;
          do
          {
            v10 = styles->Data.Data[v3++];
            v10->mTextFormat.PresentMask |= 2u;
            v10->mTextFormat.LetterSpacing = v9;
          }
          while ( v3 < styles->Data.Size );
        }
      }
    }
  }
}

void __fastcall Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleMarginLeft(
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> *this,
        const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *styles,
        const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> *value)
{
  unsigned __int64 v3; // rbx
  Scaleform::GFx::Text::CSSToken<wchar_t> *Data; // rdx
  __int64 v6; // rax
  unsigned __int64 Length; // r8
  const wchar_t *pBase; // rdx
  int v9; // edx
  Scaleform::Render::Text::Style *v10; // rcx
  float pdestVal; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0i64;
  Data = value->Data.Data;
  v6 = 0i64;
  if ( value->Data.Data->Type != TT_WhiteSpace || (v6 = 1i64, value->Data.Size >= 2) )
  {
    if ( Data[v6].Type == TT_Number )
    {
      Length = Data[v6].Length;
      pBase = Data[v6].pBase;
      pdestVal = 0.0;
      Scaleform::Render::Text::SGMLParser<wchar_t>::ParseFloat(&pdestVal, pBase, Length);
      if ( pdestVal != 0.0 )
      {
        if ( styles->Data.Size )
        {
          v9 = (int)pdestVal;
          do
          {
            v10 = styles->Data.Data[v3++];
            v10->mParagraphFormat.PresentMask |= 0x10u;
            v10->mParagraphFormat.LeftMargin = v9;
          }
          while ( v3 < styles->Data.Size );
        }
      }
    }
  }
}

void __fastcall Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleMarginRight(
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> *this,
        const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *styles,
        const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> *value)
{
  unsigned __int64 v3; // rbx
  Scaleform::GFx::Text::CSSToken<wchar_t> *Data; // rdx
  __int64 v6; // rax
  unsigned __int64 Length; // r8
  const wchar_t *pBase; // rdx
  int v9; // edx
  Scaleform::Render::Text::Style *v10; // rcx
  float pdestVal; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0i64;
  Data = value->Data.Data;
  v6 = 0i64;
  if ( value->Data.Data->Type != TT_WhiteSpace || (v6 = 1i64, value->Data.Size >= 2) )
  {
    if ( Data[v6].Type == TT_Number )
    {
      Length = Data[v6].Length;
      pBase = Data[v6].pBase;
      pdestVal = 0.0;
      Scaleform::Render::Text::SGMLParser<wchar_t>::ParseFloat(&pdestVal, pBase, Length);
      if ( pdestVal != 0.0 )
      {
        if ( styles->Data.Size )
        {
          v9 = (int)pdestVal;
          do
          {
            v10 = styles->Data.Data[v3++];
            v10->mParagraphFormat.PresentMask |= 0x20u;
            v10->mParagraphFormat.RightMargin = v9;
          }
          while ( v3 < styles->Data.Size );
        }
      }
    }
  }
}

void __fastcall Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleTextAlign(
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> *this,
        const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *styles,
        const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> *value)
{
  Scaleform::GFx::Text::CSSToken<wchar_t> *Data; // rsi
  unsigned __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  Scaleform::GFx::Text::CSSToken<wchar_t>::TokenType Type; // ecx
  const wchar_t *pBase; // rbp
  unsigned __int64 Length; // rsi
  unsigned __int64 v11; // r8
  Scaleform::Render::Text::Style *v12; // rcx
  unsigned __int64 v13; // r8
  Scaleform::Render::Text::Style *v14; // rcx
  unsigned __int64 v15; // r8
  Scaleform::Render::Text::Style *v16; // rcx
  unsigned __int64 v17; // r8
  Scaleform::Render::Text::Style *v18; // rcx

  Data = value->Data.Data;
  v4 = 0i64;
  v6 = 0i64;
  if ( value->Data.Data->Type != TT_WhiteSpace || (v6 = 1i64, value->Data.Size >= 2) )
  {
    v7 = v6;
    Type = Data[v7].Type;
    if ( Type == TT_Name || Type == TT_QString && Data[v7].Length > 2 )
    {
      pBase = Data[v7].pBase;
      Length = Data[v7].Length;
      if ( Type == TT_QString )
      {
        ++pBase;
        Length -= 2i64;
      }
      v11 = 4i64;
      if ( Length < 4 )
        v11 = Length;
      if ( Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(pBase, "left", v11) )
      {
        v13 = 6i64;
        if ( Length < 6 )
          v13 = Length;
        if ( Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(pBase, "center", v13) )
        {
          v15 = 5i64;
          if ( Length < 5 )
            v15 = Length;
          if ( Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(pBase, "right", v15) )
          {
            v17 = 7i64;
            if ( Length < 7 )
              v17 = Length;
            if ( !Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(pBase, "justify", v17) && styles->Data.Size )
            {
              do
              {
                v18 = styles->Data.Data[v4++];
                v18->mParagraphFormat.PresentMask &= ~0x200u;
                v18->mParagraphFormat.PresentMask |= 0x401u;
              }
              while ( v4 < styles->Data.Size );
            }
          }
          else if ( styles->Data.Size )
          {
            do
            {
              v16 = styles->Data.Data[v4++];
              v16->mParagraphFormat.PresentMask &= ~0x400u;
              v16->mParagraphFormat.PresentMask |= 0x201u;
            }
            while ( v4 < styles->Data.Size );
          }
        }
        else if ( styles->Data.Size )
        {
          do
          {
            v14 = styles->Data.Data[v4++];
            v14->mParagraphFormat.PresentMask |= 0x601u;
          }
          while ( v4 < styles->Data.Size );
        }
      }
      else if ( styles->Data.Size )
      {
        do
        {
          v12 = styles->Data.Data[v4++];
          v12->mParagraphFormat.PresentMask &= 0xF9FFu;
          v12->mParagraphFormat.PresentMask |= 1u;
        }
        while ( v4 < styles->Data.Size );
      }
    }
  }
}

void __fastcall Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleTextDecoration(
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> *this,
        const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *styles,
        const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> *value)
{
  Scaleform::GFx::Text::CSSToken<wchar_t> *Data; // rsi
  unsigned __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  Scaleform::GFx::Text::CSSToken<wchar_t>::TokenType Type; // ecx
  const wchar_t *pBase; // rbp
  unsigned __int64 Length; // rsi
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8

  Data = value->Data.Data;
  v4 = 0i64;
  v6 = 0i64;
  if ( value->Data.Data->Type != TT_WhiteSpace || (v6 = 1i64, value->Data.Size >= 2) )
  {
    v7 = v6;
    Type = Data[v7].Type;
    if ( Type == TT_Name || Type == TT_QString && Data[v7].Length > 2 )
    {
      pBase = Data[v7].pBase;
      Length = Data[v7].Length;
      if ( Type == TT_QString )
      {
        ++pBase;
        Length -= 2i64;
      }
      v11 = 4i64;
      if ( Length < 4 )
        v11 = Length;
      if ( Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(pBase, "none", v11) )
      {
        v12 = 9i64;
        if ( Length < 9 )
          v12 = Length;
        if ( !Scaleform::Render::Text::SGMLCharIter<wchar_t>::StrCompare(pBase, "underline", v12) && styles->Data.Size )
        {
          do
            Scaleform::Render::Text::TextFormat::SetUnderline(&styles->Data.Data[v4++]->mTextFormat, 1);
          while ( v4 < styles->Data.Size );
        }
      }
      else if ( styles->Data.Size )
      {
        do
          Scaleform::Render::Text::TextFormat::SetUnderline(&styles->Data.Data[v4++]->mTextFormat, 0);
        while ( v4 < styles->Data.Size );
      }
    }
  }
}

void __fastcall Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleTextIndent(
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> *this,
        const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *styles,
        const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> *value)
{
  unsigned __int64 v3; // rbx
  Scaleform::GFx::Text::CSSToken<wchar_t> *Data; // rdx
  __int64 v6; // rax
  unsigned __int64 Length; // r8
  const wchar_t *pBase; // rdx
  int v9; // edx
  Scaleform::Render::Text::Style *v10; // rcx
  float pdestVal; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0i64;
  Data = value->Data.Data;
  v6 = 0i64;
  if ( value->Data.Data->Type != TT_WhiteSpace || (v6 = 1i64, value->Data.Size >= 2) )
  {
    if ( Data[v6].Type == TT_Number )
    {
      Length = Data[v6].Length;
      pBase = Data[v6].pBase;
      pdestVal = 0.0;
      Scaleform::Render::Text::SGMLParser<wchar_t>::ParseFloat(&pdestVal, pBase, Length);
      if ( pdestVal != 0.0 )
      {
        if ( styles->Data.Size )
        {
          v9 = (int)pdestVal;
          do
          {
            v10 = styles->Data.Data[v3++];
            v10->mParagraphFormat.PresentMask |= 4u;
            v10->mParagraphFormat.Indent = v9;
          }
          while ( v3 < styles->Data.Size );
        }
      }
    }
  }
}

__int64 __fastcall Scaleform::GFx::Text::CSSTokenizer<wchar_t>::IsAlpha(
        Scaleform::GFx::Text::CSSTokenizer<wchar_t> *this,
        wchar_t c)
{
  unsigned __int64 v2; // rax
  int v3; // er8
  int v5; // ecx

  v2 = (unsigned __int64)c >> 8;
  v3 = Scaleform::UnicodeAlphaBits[v2];
  if ( !Scaleform::UnicodeAlphaBits[v2] )
    return 0i64;
  if ( v3 == 1 )
    return 1i64;
  v5 = Scaleform::UnicodeAlphaBits[v3 + ((c >> 4) & 0xF)];
  return _bittest(&v5, c & 0xF);
}

__int64 __fastcall Scaleform::GFx::Text::CSSTokenizer<wchar_t>::IsDigit(
        Scaleform::GFx::Text::CSSTokenizer<wchar_t> *this,
        wchar_t c)
{
  unsigned __int64 v2; // rax
  int v3; // er8
  int v5; // ecx

  v2 = (unsigned __int64)c >> 8;
  v3 = Scaleform::UnicodeDigitBits[v2];
  if ( !Scaleform::UnicodeDigitBits[v2] )
    return 0i64;
  if ( v3 == 1 )
    return 1i64;
  v5 = Scaleform::UnicodeDigitBits[v3 + ((c >> 4) & 0xF)];
  return _bittest(&v5, c & 0xF);
}

__int64 __fastcall Scaleform::GFx::Text::CSSTokenizer<wchar_t>::IsXDigit(
        Scaleform::GFx::Text::CSSTokenizer<wchar_t> *this,
        wchar_t c)
{
  unsigned __int64 v2; // rax
  int v3; // er8
  int v5; // ecx

  v2 = (unsigned __int64)c >> 8;
  v3 = Scaleform::UnicodeXDigitBits[v2];
  if ( !Scaleform::UnicodeXDigitBits[v2] )
    return 0i64;
  if ( v3 == 1 )
    return 1i64;
  v5 = Scaleform::UnicodeXDigitBits[v3 + ((c >> 4) & 0xF)];
  return _bittest(&v5, c & 0xF);
}

void __fastcall Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::OpenCSSSelectorBlock(
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> *this,
        const Scaleform::GFx::Text::CSSToken<wchar_t> *name,
        void *pdata)
{
  __int64 Length; // r8
  int v7; // ebp
  const wchar_t *v8; // rdx
  const wchar_t *pBase; // rdx
  Scaleform::GFx::Text::StyleKey *p_TempKey; // rsi
  Scaleform::StringLH *p_Value; // rcx
  Scaleform::Render::Text::Style *Style; // rax
  __int64 v13; // rbx
  Scaleform::MemoryHeap *v14; // r14
  Scaleform::Render::Text::TextFormat *v15; // rax
  Scaleform::HashUncachedLH<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>,325> *p_Styles; // rcx
  unsigned __int64 HashValue; // r9
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  __int64 *v22; // rcx
  void *v23; // rbx
  Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeRef key; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::String src; // [rsp+60h] [rbp+8h] BYREF
  __int64 v26; // [rsp+68h] [rbp+10h] BYREF

  Scaleform::String::String(&src);
  Length = name->Length;
  v7 = 0;
  if ( Length && (v8 = name->pBase, *v8 == 46) )
  {
    --Length;
    v7 = 1;
    pBase = v8 + 1;
  }
  else
  {
    pBase = name->pBase;
  }
  Scaleform::String::AppendString(&src, pBase, Length);
  p_TempKey = &this->pManager->TempKey;
  p_Value = &this->pManager->TempKey.Value;
  p_TempKey->Type = v7;
  Scaleform::String::operator=(p_Value, &src);
  p_TempKey->HashValue = Scaleform::String::BernsteinHashFunction(
                           (const void *)((src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                           *(_QWORD *)(src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
                           0x1505ui64)
                       + (int)p_TempKey->Type;
  Style = Scaleform::GFx::Text::TextStyleParserHandlerBase::GetStyle(
            &this->Scaleform::GFx::Text::TextStyleParserHandlerBase,
            p_TempKey);
  v13 = (__int64)Style;
  if ( Style )
  {
    Scaleform::Render::Text::Style::Reset(Style);
  }
  else
  {
    v14 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this->pManager);
    v15 = (Scaleform::Render::Text::TextFormat *)v14->Alloc(v14, 120ui64, 0i64);
    v13 = (__int64)v15;
    if ( v15 )
    {
      Scaleform::Render::Text::TextFormat::TextFormat(v15, v14);
      *(_QWORD *)(v13 + 80) = 0i64;
      *(_DWORD *)(v13 + 88) = 1;
      *(_QWORD *)(v13 + 96) = 0i64;
      *(_QWORD *)(v13 + 104) = 0i64;
      *(_DWORD *)(v13 + 112) = 0;
    }
    else
    {
      v13 = 0i64;
    }
    p_Styles = &this->pManager->Styles;
    v26 = v13;
    HashValue = p_TempKey->HashValue;
    key.pFirst = p_TempKey;
    key.pSecond = (Scaleform::Render::Text::Style *const *)&v26;
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeRef>(
      &p_Styles->mHash,
      p_Styles,
      &key,
      HashValue);
  }
  v18 = *((_QWORD *)pdata + 1);
  v19 = v18 + 1;
  if ( v18 + 1 >= v18 )
  {
    if ( v19 <= *((_QWORD *)pdata + 2) )
      goto LABEL_17;
    v20 = v19 + (v19 >> 2);
  }
  else
  {
    if ( v19 >= *((_QWORD *)pdata + 2) >> 1 )
      goto LABEL_17;
    v20 = v18 + 1;
  }
  Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *)pdata,
    pdata,
    v20);
LABEL_17:
  v21 = *(_QWORD *)pdata;
  *((_QWORD *)pdata + 1) = v19;
  v22 = (__int64 *)(v21 + 8 * (v19 - 1));
  if ( v22 )
    *v22 = v13;
  v23 = (void *)(src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v23);
}

bool __fastcall Scaleform::GFx::Text::CSSParser<wchar_t>::Parse(
        Scaleform::GFx::Text::CSSParser<wchar_t> *this,
        const wchar_t *buffer,
        unsigned __int64 len,
        Scaleform::GFx::Text::CSSHandler<wchar_t> *handler,
        void *pdata)
{
  int v5; // esi
  char v8; // r13
  __m128i *NextToken; // rax
  __m128i v10; // xmm0
  unsigned __int64 v11; // xmm1_8
  int Type; // edi
  Scaleform::GFx::Text::CSSToken<wchar_t> *v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r8
  Scaleform::GFx::Text::CSSToken<wchar_t> *Data; // rax
  __m128i *v17; // rdx
  int v18; // eax
  Scaleform::GFx::Text::CSSToken<wchar_t> *v19; // rax
  int v20; // edi
  __int128 v22; // [rsp+28h] [rbp-61h]
  Scaleform::GFx::Text::CSSToken<wchar_t> result; // [rsp+40h] [rbp-49h] BYREF
  Scaleform::GFx::Text::CSSTokenizer<wchar_t> v24; // [rsp+58h] [rbp-31h] BYREF
  __m128i v25; // [rsp+A8h] [rbp+1Fh]
  unsigned __int64 Length; // [rsp+F0h] [rbp+67h]

  v5 = 0;
  v24.pCurr = buffer;
  v24.pEnd = &buffer[len];
  v24.CurrentToken.Type = TT_Unknown;
  v24.CurrentToken.pBase = 0i64;
  v8 = 0;
  v24.CurrentToken.Length = 0i64;
  v24.LineNo = 1i64;
  v24.ColNo = 1i64;
  v24.LineDev = 0i64;
  v24.ColDev = 0i64;
  while ( v5 != 4 )
  {
    NextToken = (__m128i *)Scaleform::GFx::Text::CSSTokenizer<wchar_t>::GetNextToken(&v24, &result);
    v10 = *NextToken;
    v11 = NextToken[1].m128i_u64[0];
    Type = _mm_cvtsi128_si32(*NextToken);
    v25 = *NextToken;
    Length = v11;
    if ( Type == 10 )
      v5 = 3;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        if ( Type )
        {
          if ( Type != 2 )
          {
            if ( Type == 7 )
            {
              handler->CloseCSSSelectorBlock(handler, pdata);
              v5 = 0;
            }
            else
            {
              v5 = 4;
            }
          }
        }
        else
        {
          *(__m128i *)&this->PropertyName.Type = v10;
          this->PropertyName.Length = v11;
          v18 = _mm_cvtsi128_si32(*(__m128i *)&Scaleform::GFx::Text::CSSTokenizer<wchar_t>::GetNextToken(&v24, &result)->Type);
          if ( v18 == 2 )
          {
            v22 = *(_OWORD *)&Scaleform::GFx::Text::CSSTokenizer<wchar_t>::GetNextToken(&v24, &result)->Type;
            v18 = v22;
          }
          v5 = 4;
          if ( v18 == 9 )
            v5 = 2;
        }
      }
      else
      {
        if ( v5 != 2 )
          return v5 == 3;
        if ( Type == 7 )
        {
          ((void (__fastcall *)(Scaleform::GFx::Text::CSSHandler<wchar_t> *, Scaleform::GFx::Text::CSSToken<wchar_t> *, Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> *, void *, _QWORD, _QWORD))handler->PushCSSSelectorProperty)(
            handler,
            &this->PropertyName,
            &this->PropertyValue,
            pdata,
            v22,
            *((_QWORD *)&v22 + 1));
          handler->CloseCSSSelectorBlock(handler, pdata);
          v5 = 0;
          this->bPropValSpool = 0;
        }
        else if ( Type == 8 )
        {
          handler->PushCSSSelectorProperty(handler, &this->PropertyName, &this->PropertyValue, pdata);
          this->bPropValSpool = 0;
          v5 = 1;
        }
        else
        {
          if ( !this->bPropValSpool )
          {
            Scaleform::ArrayData<Scaleform::GFx::Text::CSSToken<wchar_t>,Scaleform::AllocatorGH<Scaleform::GFx::Text::CSSToken<wchar_t>,2>,Scaleform::ArrayDefaultPolicy>::Resize(
              &this->PropertyValue.Data,
              0i64);
            this->bPropValSpool = 1;
            if ( Type == 2 )
            {
              v13 = Scaleform::GFx::Text::CSSTokenizer<wchar_t>::GetNextToken(&v24, &result);
              v25 = *(__m128i *)&v13->Type;
              Length = v13->Length;
            }
            this->PropValLinePos = v24.LineNo;
            this->PropValColPos = v24.ColNo;
          }
          v14 = this->PropertyValue.Data.Size + 1;
          if ( v14 >= this->PropertyValue.Data.Size )
          {
            if ( v14 > this->PropertyValue.Data.Policy.Capacity )
            {
              v15 = v14 + (v14 >> 2);
              goto LABEL_19;
            }
          }
          else if ( v14 < this->PropertyValue.Data.Policy.Capacity >> 1 )
          {
            v15 = this->PropertyValue.Data.Size + 1;
LABEL_19:
            Scaleform::ArrayDataBase<Scaleform::GFx::Text::CSSToken<wchar_t>,Scaleform::AllocatorGH<Scaleform::GFx::Text::CSSToken<wchar_t>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
              (Scaleform::ArrayDataBase<Scaleform::Render::Font::NativeHintingType,Scaleform::AllocatorGH<Scaleform::Render::Font::NativeHintingType,2>,Scaleform::ArrayDefaultPolicy> *)&this->PropertyValue,
              &this->PropertyValue,
              v15);
          }
          Data = this->PropertyValue.Data.Data;
          this->PropertyValue.Data.Size = v14;
          v17 = (__m128i *)&Data[v14 - 1];
          if ( v17 )
          {
            *v17 = v25;
            v17[1].m128i_i64[0] = Length;
          }
        }
      }
    }
    else if ( Type )
    {
      if ( Type == 2 )
      {
        if ( this->bPseudoClass )
          v5 = 4;
      }
      else
      {
        v5 = 4;
      }
    }
    else if ( this->bPseudoClass )
    {
      this->SelectorName.Length += v11;
LABEL_44:
      handler->OpenCSSSelectorBlock(handler, (const Scaleform::GFx::Text::CSSToken<wchar_t> *)this, pdata);
      if ( v8 )
      {
        v8 = 0;
      }
      else
      {
        v22 = *(_OWORD *)&Scaleform::GFx::Text::CSSTokenizer<wchar_t>::GetNextToken(&v24, &result)->Type;
        Type = v22;
      }
      if ( Type == 2 )
      {
        v22 = *(_OWORD *)&Scaleform::GFx::Text::CSSTokenizer<wchar_t>::GetNextToken(&v24, &result)->Type;
        Type = v22;
      }
      v20 = Type - 5;
      if ( v20 )
      {
        if ( v20 == 1 )
        {
          v5 = 1;
          this->bPseudoClass = 0;
        }
        else
        {
          v5 = 4;
        }
      }
      else
      {
        v5 = 0;
        this->bPseudoClass = 0;
      }
    }
    else
    {
      *(__m128i *)&this->SelectorName.Type = v10;
      this->SelectorName.Length = v11;
      v19 = Scaleform::GFx::Text::CSSTokenizer<wchar_t>::GetNextToken(&v24, &result);
      Type = v19->Type;
      if ( v19->Type != TT_Colon )
      {
        v8 = 1;
        goto LABEL_44;
      }
      this->SelectorName.Length += v19->Length;
      this->bPseudoClass = 1;
    }
  }
  return v5 == 3;
}

__int64 __fastcall Scaleform::GFx::Text::StyleManager::ParseCSS(
        Scaleform::GFx::Text::StyleManager *this,
        const char *buffer,
        unsigned __int64 len)
{
  __int64 v5; // rbx
  wchar_t *v6; // rsi
  unsigned __int64 v7; // rax

  v5 = len;
  v6 = (wchar_t *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 2 * len + 2, 0i64);
  v7 = Scaleform::UTF8Util::DecodeStringSafe(v6, v5 + 1, buffer, v5);
  LOBYTE(v5) = Scaleform::GFx::Text::StyleManager::ParseCSSImpl<wchar_t>(this, v6, v7);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v6);
  return (unsigned __int8)v5;
}

void __fastcall Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::PushCSSSelectorProperty(
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t> *this,
        const Scaleform::GFx::Text::CSSToken<wchar_t> *name,
        const Scaleform::Array<Scaleform::GFx::Text::CSSToken<wchar_t>,2,Scaleform::ArrayDefaultPolicy> *value,
        void *pdata)
{
  const char *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rcx
  char v15; // al
  char v16; // al
  void *v17; // rbx
  Scaleform::String v18; // [rsp+48h] [rbp+10h] BYREF

  Scaleform::String::String(&v18);
  Scaleform::String::AppendString(&v18, name->pBase, name->Length);
  if ( value->Data.Size )
  {
    v8 = (const char *)((v18.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
    v9 = 0i64;
    v10 = 0i64;
    while ( 1 )
    {
      v11 = v8[v10++];
      if ( v11 != aColor[v10 - 1] )
        break;
      if ( v10 == 6 )
      {
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleColor(
          this,
          (const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *)pdata,
          value);
        goto LABEL_37;
      }
    }
    v12 = 0i64;
    while ( 1 )
    {
      v13 = v8[v12++];
      if ( v13 != aDisplay_0[v12 - 1] )
        break;
      if ( v12 == 8 )
      {
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleDisplay(
          this,
          (const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *)pdata,
          value);
        goto LABEL_37;
      }
    }
    if ( !strcmp((const char *)((v18.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12), "font-family") )
    {
      Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleFontFamily(
        this,
        (const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *)pdata,
        value);
    }
    else if ( !strcmp(v8, "font-size") )
    {
      Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleFontSize(
        this,
        (const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *)pdata,
        value);
    }
    else if ( !strcmp(v8, "font-style") )
    {
      Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleFontStyle(
        this,
        (const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *)pdata,
        value);
    }
    else if ( !strcmp(v8, "font-weight") )
    {
      Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleFontWeight(
        this,
        (const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *)pdata,
        value);
    }
    else
    {
      v14 = 0i64;
      while ( 1 )
      {
        v15 = v8[v14++];
        if ( v15 != aKerning[v14 - 1] )
          break;
        if ( v14 == 8 )
        {
          Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleKerning(
            this,
            (const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *)pdata,
            value);
          goto LABEL_37;
        }
      }
      while ( 1 )
      {
        v16 = v8[v9++];
        if ( v16 != aLeading_0[v9 - 1] )
          break;
        if ( v9 == 8 )
        {
          Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleLeading(
            this,
            (const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *)pdata,
            value);
          goto LABEL_37;
        }
      }
      if ( !strcmp(v8, "letter-spacing") )
      {
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleLetterSpacing(
          this,
          (const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *)pdata,
          value);
      }
      else if ( !strcmp(v8, "margin-left") )
      {
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleMarginLeft(
          this,
          (const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *)pdata,
          value);
      }
      else if ( !strcmp(v8, "margin-right") )
      {
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleMarginRight(
          this,
          (const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *)pdata,
          value);
      }
      else if ( !strcmp(v8, "text-align") )
      {
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleTextAlign(
          this,
          (const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *)pdata,
          value);
      }
      else if ( !strcmp(v8, "text-decoration") )
      {
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleTextDecoration(
          this,
          (const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *)pdata,
          value);
      }
      else if ( !strcmp(v8, "text-indent") )
      {
        Scaleform::GFx::Text::TextStyleParserHandler<wchar_t>::HandleTextIndent(
          this,
          (const Scaleform::Array<Scaleform::Render::Text::Style *,2,Scaleform::ArrayDefaultPolicy> *)pdata,
          value);
      }
    }
  }
LABEL_37:
  v17 = (void *)(v18.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v18.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v17);
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

void __fastcall Scaleform::ArrayData<Scaleform::GFx::Text::CSSToken<wchar_t>,Scaleform::AllocatorGH<Scaleform::GFx::Text::CSSToken<wchar_t>,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<Scaleform::GFx::Text::CSSToken<wchar_t>,Scaleform::AllocatorGH<Scaleform::GFx::Text::CSSToken<wchar_t>,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v5; // r8
  Scaleform::GFx::Text::CSSToken<wchar_t> *v6; // rax
  unsigned __int64 i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      v5 = newSize + (newSize >> 2);
      goto LABEL_6;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    v5 = newSize;
LABEL_6:
    Scaleform::ArrayDataBase<Scaleform::GFx::Text::CSSToken<wchar_t>,Scaleform::AllocatorGH<Scaleform::GFx::Text::CSSToken<wchar_t>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<Scaleform::Render::Font::NativeHintingType,Scaleform::AllocatorGH<Scaleform::Render::Font::NativeHintingType,2>,Scaleform::ArrayDefaultPolicy> *)this,
      this,
      v5);
  }
  this->Size = newSize;
  if ( newSize > Size )
  {
    v6 = &this->Data[Size];
    for ( i = newSize - Size; i; --i )
    {
      if ( v6 )
      {
        v6->Type = TT_Unknown;
        v6->pBase = 0i64;
        v6->Length = 0i64;
      }
      ++v6;
    }
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  char *v9; // rsi
  volatile int *v10; // rbx
  int v11; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> > v12; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v11 = 325;
    v6 = 0i64;
    v12.pTable = 0i64;
    v12.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 40 * v5 + 16, &v11);
    v12.pTable->EntryCount = 0i64;
    v12.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 40i64;
        *(_QWORD *)((char *)&v12.pTable[-1] + v7 - 8) = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        v9 = (char *)this->pTable + v6;
        if ( *((_QWORD *)v9 + 2) != -2i64 )
        {
          Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>>(
            &v12,
            pheapAddr,
            (const Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> > *)(v9 + 24),
            *((_QWORD *)v9 + 5));
          v10 = (volatile int *)(*((_QWORD *)v9 + 4) & 0xFFFFFFFFFFFFFFFCui64);
          if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v10 + 2, -1) == 1 )
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v10);
          *((_QWORD *)v9 + 2) = -2i64;
        }
        v6 += 40i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v12.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::Text::StyleKey,325>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>>::NodeHashF>>(this);
  }
}

