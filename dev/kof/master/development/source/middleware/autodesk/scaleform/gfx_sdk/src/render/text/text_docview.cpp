#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"

Scaleform::Render::Text::DocView::DocView(Scaleform::Render::Text::Allocator * pallocator, Scaleform::Render::Text::FontManagerBase * pfontMgr, Scaleform::Log * plog); // 0x1403011D0
Scaleform::Render::Text::DocView::~DocView(); // 0x1403017F0
struct Scaleform::Render::Text::ImageSubstCmp
{
	struct Comparable;
	static long StrCompare(const wchar_t *, unsigned long long, const wchar_t *, unsigned long long, bool);
	static long InsLess(const Scaleform::Render::Text::DocView::ImageSubstitutor::Element &, const Scaleform::Render::Text::ImageSubstCmp::Comparable &);
	static long Less(const Scaleform::Render::Text::DocView::ImageSubstitutor::Element &, const Scaleform::Render::Text::ImageSubstCmp::Comparable &);
	static long Equals(const Scaleform::Render::Text::DocView::ImageSubstitutor::Element &, const Scaleform::Render::Text::ImageSubstCmp::Comparable &);
};
struct Scaleform::Render::Text::ImageSubstCmp::Comparable
{
	const wchar_t * Str; // 0x0
	unsigned long long MaxSize; // 0x8
	Comparable(const wchar_t *, unsigned long long);
};
void Scaleform::Render::Text::DocView::ImageSubstitutor::AddImageDesc(const Scaleform::Render::Text::DocView::ImageSubstitutor::Element & elem); // 0x140302190
Scaleform::Render::Text::ImageDesc * Scaleform::Render::Text::DocView::ImageSubstitutor::FindImageDesc(const wchar_t * pstr, unsigned long long maxlen, unsigned long long * ptextLen); // 0x140303C40
void Scaleform::Render::Text::DocView::ImageSubstitutor::RemoveImageDesc(Scaleform::Render::Text::ImageDesc * pimgDesc); // 0x1403092D0
void Scaleform::Render::Text::DocView::SetText(const char * putf8String, unsigned long long stringSize); // 0x140309B30
void Scaleform::Render::Text::DocView::SetText(const wchar_t * pstring, unsigned long long length); // 0x140309B60
void Scaleform::Render::Text::DocView::SetTextFormat(const Scaleform::Render::Text::TextFormat & fmt, unsigned long long startPos, unsigned long long endPos); // 0x140309B90
void Scaleform::Render::Text::DocView::SetParagraphFormat(const Scaleform::Render::Text::ParagraphFormat & fmt, unsigned long long startPos, unsigned long long endPos); // 0x140309830
void Scaleform::Render::Text::DocView::DocumentText::OnParagraphRemoving(const Scaleform::Render::Text::Paragraph & para); // 0x140309130
void Scaleform::Render::Text::DocView::DocumentText::OnTextInserting(unsigned long long startPos, unsigned long long length, const char * ptextInserting); // 0x140309140
unsigned long long Scaleform::Render::Text::DocView::EditCommand(Scaleform::Render::Text::DocView::CommandType cmdId, const void * command); // 0x140302AF0
Scaleform::String Scaleform::Render::Text::DocView::GetText(); // 0x1403078C0
Scaleform::String & Scaleform::Render::Text::DocView::GetText(Scaleform::String * retStr); // 0x1403078E0
Scaleform::String Scaleform::Render::Text::DocView::GetHtml(); // 0x1403070D0
void Scaleform::Render::Text::DocView::ParseHtml(const char * putf8Str, unsigned long long utf8Len, bool condenseWhite, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> * pimgInfoArr, const Scaleform::Render::Text::StyleManagerBase * pstyleMgr, const Scaleform::Render::Text::TextFormat * txtFmt, const Scaleform::Render::Text::ParagraphFormat * paraFmt); // 0x140309150
void Scaleform::Render::Text::DocView::ParseHtml(const wchar_t * pwStr, unsigned long long strLen, bool condenseWhite, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> * pimgInfoArr, const Scaleform::Render::Text::StyleManagerBase * pstyleMgr, const Scaleform::Render::Text::TextFormat * txtFmt, const Scaleform::Render::Text::ParagraphFormat * paraFmt); // 0x140309210
void Scaleform::Render::Text::DocView::AppendText(const char * putf8Str, unsigned long long utf8Len); // 0x140302330
void Scaleform::Render::Text::DocView::AppendHtml(const char * putf8Str, unsigned long long utf8Len, bool condenseWhite, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> * pimgInfoArr); // 0x1403022C0
unsigned long long Scaleform::Render::Text::DocView::ReplaceText(const wchar_t * pstr, unsigned long long startPos, unsigned long long endPos, unsigned long long strLen); // 0x140309370
void Scaleform::Render::Text::DocView::Close(); // 0x140302750
bool Scaleform::Render::Text::DocView::ContainsNonLeftAlignment(); // 0x1403027D0
void Scaleform::Render::Text::DocView::SetViewRect(const Scaleform::Render::Rect<float> & rect, Scaleform::Render::Text::DocView::UseType ut); // 0x140309C20
void Scaleform::Render::Text::DocView::OnDocumentChanged(unsigned long notifyMask); // 0x140309080
void Scaleform::Render::Text::DocView::OnDocumentParagraphRemoving(const Scaleform::Render::Text::Paragraph & para); // 0x1403090A0
Scaleform::Render::Text::FontHandle * Scaleform::Render::Text::DocView::FindFont(Scaleform::Render::Text::DocView::FindFontInfo * pfontInfo, bool quietMode); // 0x140303820
class Scaleform::Render::Text::RightToLeftIterator
{
	struct CharacterInfo;
public:
	RightToLeftIterator(Scaleform::Render::Text::RightToLeftIterator &);
	RightToLeftIterator(const Scaleform::Render::Text::RightToLeftIterator &);
	RightToLeftIterator(const Scaleform::Render::Text::Paragraph &, const wchar_t *, unsigned long, const unsigned long *, const bool *);
	RightToLeftIterator();
	void Init(const Scaleform::Render::Text::Paragraph &, const wchar_t *, unsigned long, const unsigned long *, const bool *);
	bool IsFinished();
	const Scaleform::Render::Text::Paragraph::CharacterInfo & operator*();
	Scaleform::Render::Text::Paragraph::CharacterInfo & operator*();
	const Scaleform::Render::Text::Paragraph::CharacterInfo * operator->();
	Scaleform::Render::Text::Paragraph::CharacterInfo * operator->();
	void operator++(long);
	void operator++();
	void operator+=(unsigned long long);
	const wchar_t * GetRemainingTextPtr(unsigned long long *);
	unsigned long long GetCurTextIndex();
protected:
	const Scaleform::Render::Text::Paragraph * pParagraph; // 0x0
	const wchar_t * ParaText; // 0x8
	const unsigned long * IndexMap; // 0x10
	const bool * MirroredBits; // 0x18
	unsigned long ParaLen; // 0x20
	long Index; // 0x24
	unsigned long VIndex; // 0x28
	Scaleform::Render::Text::Paragraph::CharacterInfo PlaceHolder; // 0x30
public:
	~RightToLeftIterator();
	Scaleform::Render::Text::RightToLeftIterator & operator=(Scaleform::Render::Text::RightToLeftIterator &);
	Scaleform::Render::Text::RightToLeftIterator & operator=(const Scaleform::Render::Text::RightToLeftIterator &);
};
Scaleform::Render::Text::Paragraph::CharacterInfo & Scaleform::Render::Text::RightToLeftIterator::operator*(); // 0x140301EB0
class Scaleform::Render::Text::GFxLineCursor
{
public:
	Scaleform::Render::Text::LineBuffer::GlyphEntry * pPrevGrec; // 0x0
	Scaleform::Ptr<Scaleform::Render::Text::FontHandle> pLastFont; // 0x8
	unsigned long LastCharCode; // 0x10
	unsigned long LastGlyphIndex; // 0x14
	float LastAdvance; // 0x18
	long LastGlyphWidth; // 0x1C
	long FirstGlyphWidth; // 0x20
	unsigned long LastColor; // 0x24
	Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> pComposStr; // 0x28
	unsigned long long ComposStrPosition; // 0x30
	unsigned long long ComposStrLength; // 0x38
	unsigned long long ComposStrCurPos; // 0x40
	Scaleform::Render::Text::DocView * pDocView; // 0x48
	const Scaleform::Render::Text::Paragraph * pParagraph; // 0x50
	long LineWidth; // 0x58
	long LineWidthWithoutTrailingSpaces; // 0x5C
	unsigned long LineLength; // 0x60
	float MaxFontAscent; // 0x64
	float MaxFontDescent; // 0x68
	float MaxFontLeading; // 0x6C
	Scaleform::Render::Text::Paragraph::CharactersIterator CharIter; // 0x70
	Scaleform::Render::Text::Paragraph::CharacterInfo CharInfoHolder; // 0xB0
	long Indent; // 0xC8
	long LeftMargin; // 0xCC
	long RightMargin; // 0xD0
	Scaleform::Render::Text::LineBuffer::GlyphInserter GlyphIns; // 0xD8
	unsigned long NumOfSpaces; // 0xF8
	unsigned long NumOfTrailingSpaces; // 0xFC
	float FontScaleFactor; // 0x100
	Scaleform::Render::Text::RightToLeftIterator RLCharIter; // 0x108
	bool RightToLeft; // 0x150
	bool LastKerning; // 0x151
	bool LineHasNewLine; // 0x152
	unsigned long long NumChars; // 0x158
	GFxLineCursor(const Scaleform::Render::Text::GFxLineCursor &);
	GFxLineCursor(Scaleform::Render::Text::DocView *, const Scaleform::Render::Text::Paragraph *);
	GFxLineCursor();
	~GFxLineCursor();
	bool IsRightToLeft();
	bool IsFinished();
	void operator++();
	void operator+=(unsigned long);
	bool IsInsideComposStr();
	const Scaleform::Render::Text::Paragraph::CharacterInfo & operator*();
	float GetPrevGlyphAdvanceAdj(wchar_t);
	void Reset();
	void TrackFontParams(Scaleform::Render::Font *, float);
	const wchar_t * GetRemainingTextPtr(unsigned long long *);
	Scaleform::Render::Text::GFxLineCursor & operator=(const Scaleform::Render::Text::GFxLineCursor &);
};
class Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase>
{
protected:
	Scaleform::Render::Text::CompositionStringBase * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Text::CompositionStringBase>(const Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> &);
	Ptr<Scaleform::Render::Text::CompositionStringBase>(Scaleform::Render::Text::CompositionStringBase *);
	Ptr<Scaleform::Render::Text::CompositionStringBase>(Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Text::CompositionStringBase>(Scaleform::Pickable<Scaleform::Render::Text::CompositionStringBase>);
	Ptr<Scaleform::Render::Text::CompositionStringBase>(Scaleform::Render::Text::CompositionStringBase &);
	Ptr<Scaleform::Render::Text::CompositionStringBase>();
	~Ptr<Scaleform::Render::Text::CompositionStringBase>();
	bool operator==(Scaleform::Render::Text::CompositionStringBase *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> &);
	bool operator!=(Scaleform::Render::Text::CompositionStringBase *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> &);
	Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> & operator=(Scaleform::Pickable<Scaleform::Render::Text::CompositionStringBase>);
	const Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> & operator=(Scaleform::Render::Text::CompositionStringBase &);
	const Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> & operator=(Scaleform::Render::Text::CompositionStringBase *);
	const Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> & operator=(const Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> &);
	Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> & SetPtr(Scaleform::Pickable<Scaleform::Render::Text::CompositionStringBase>);
	Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> & SetPtr(Scaleform::Render::Text::CompositionStringBase &);
	Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> & SetPtr(Scaleform::Render::Text::CompositionStringBase *);
	Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Text::CompositionStringBase * & GetRawRef();
	Scaleform::Render::Text::CompositionStringBase * GetPtr();
	Scaleform::Render::Text::CompositionStringBase & operator*();
	Scaleform::Render::Text::CompositionStringBase * operator->();
	Scaleform::Render::Text::CompositionStringBase * operator class Scaleform::Render::Text::CompositionStringBase *();
	Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> & Pick(Scaleform::Render::Text::CompositionStringBase *);
	Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> & Pick(Scaleform::Pickable<Scaleform::Render::Text::CompositionStringBase>);
	Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> & Pick(Scaleform::Ptr<Scaleform::Render::Text::CompositionStringBase> &);
};
Scaleform::Render::Text::GFxLineCursor::GFxLineCursor(); // 0x1403014D0
Scaleform::Render::Text::GFxLineCursor::GFxLineCursor(Scaleform::Render::Text::DocView * pview, const Scaleform::Render::Text::Paragraph * ppara); // 0x1403013B0
Scaleform::Render::Text::GFxLineCursor::~GFxLineCursor(); // 0x1403018F0
Scaleform::Render::Text::Paragraph::CharacterInfo & Scaleform::Render::Text::Paragraph::CharacterInfo::operator=(const Scaleform::Render::Text::Paragraph::CharacterInfo & __that); // 0x1403019A0
Scaleform::Render::Text::GFxLineCursor & Scaleform::Render::Text::GFxLineCursor::operator=(const Scaleform::Render::Text::GFxLineCursor & __that); // 0x140301A10
void Scaleform::Render::Text::GFxLineCursor::operator+=(unsigned long n); // 0x140301F90
const Scaleform::Render::Text::Paragraph::CharacterInfo & Scaleform::Render::Text::GFxLineCursor::operator*(); // 0x140301CB0
void Scaleform::Render::Text::GFxLineCursor::TrackFontParams(Scaleform::Render::Font * pfont, float scale); // 0x140309E60
class Scaleform::Render::Text::ParagraphFormatter
{
private:
	Scaleform::Render::Text::DocView * pDocView; // 0x0
	const Scaleform::Render::Text::Paragraph * pParagraph; // 0x8
	const Scaleform::Render::Text::ParagraphFormat * pParaFormat; // 0x10
	Scaleform::Render::Text::LineBuffer::Line * pTempLine; // 0x18
	Scaleform::Render::Text::GFxLineCursor LineCursor; // 0x20
	Scaleform::HashIdentityDH<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,74,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> > FontCache; // 0x180
	Scaleform::Render::Text::DocView::FindFontInfo FindFontInfo; // 0x190
	Scaleform::Render::Text::GFxLineCursor StartPoint; // 0x1B0
	Scaleform::Render::Text::GFxLineCursor HalfPoint; // 0x310
	Scaleform::Render::Text::GFxLineCursor WordWrapPoint; // 0x470
	float TextRectWidth; // 0x5D0
	unsigned long TabStopsNum; // 0x5D4
	unsigned long TabStopsIndex; // 0x5D8
	unsigned long DeltaText; // 0x5DC
	long Pass; // 0x5E0
	bool HyphenationRequested; // 0x5E4
	unsigned long RequestedWordWrapPos; // 0x5E8
	bool HasLineFormatHandler; // 0x5EC
	wchar_t TextBufForCustomFormat[256]; // 0x5EE
	wchar_t * pTextBufForCustomFormat; // 0x7F0
	unsigned long long TextBufLen; // 0x7F8
	unsigned long NewLen; // 0x800
	unsigned long NewSize; // 0x804
	wchar_t * NewParaText; // 0x808
	unsigned long * IndexMap; // 0x810
	bool * MirroredBits; // 0x818
	Scaleform::Render::Font * pFont; // 0x820
	Scaleform::Ptr<Scaleform::Render::Text::FontHandle> pFontHandle; // 0x828
	float Scale; // 0x830
	long GlyphIndex; // 0x834
	float GlyphAdvance; // 0x838
	long LastAdvance; // 0x83C
	long GlyphWidth; // 0x840
	long AdjLineWidth; // 0x844
	long NewLineWidth; // 0x848
	float FontSize; // 0x84C
	bool isSpace; // 0x850
	bool isNbsp; // 0x851
public:
	Scaleform::Render::Text::LineBuffer::Iterator * pLinesIter; // 0x858
	unsigned char TempLineBuff[1024]; // 0x860
	Scaleform::Render::Text::LineBuffer::Line * pDynLine; // 0xC60
	long NextOffsetY; // 0xC68
	long ParaYOffset; // 0xC6C
	Scaleform::Log * pLog; // 0xC70
	long ParaWidth; // 0xC78
	long ParaHeight; // 0xC7C
	unsigned long ParaLines; // 0xC80
	bool NeedRecenterLines; // 0xC84
	bool ForceVerticalCenterAutoSize; // 0xC85
	void FinalizeLine();
	void InitParagraph(const Scaleform::Render::Text::Paragraph &);
	void InitBidiText();
	void InitCustomWordWrapping();
	float GetActualFontSize();
	bool CheckWordWrap();
	bool HandleCustomWordWrap();
	void TreatBidirectionalTextInLine();
	ParagraphFormatter(const Scaleform::Render::Text::ParagraphFormatter &);
	ParagraphFormatter(Scaleform::Render::Text::DocView *, Scaleform::Log *);
	~ParagraphFormatter();
	void Format(const Scaleform::Render::Text::Paragraph &);
	Scaleform::Render::Text::ParagraphFormatter & operator=(const Scaleform::Render::Text::ParagraphFormatter &);
};
Scaleform::Render::Text::ParagraphFormatter::ParagraphFormatter(Scaleform::Render::Text::DocView * pdoc, Scaleform::Log * plog); // 0x1403015F0
void Scaleform::Render::Text::ParagraphFormatter::InitParagraph(const Scaleform::Render::Text::Paragraph & paragraph); // 0x140308650
void Scaleform::Render::Text::ParagraphFormatter::InitBidiText(); // 0x1403082C0
void Scaleform::Render::Text::ParagraphFormatter::InitCustomWordWrapping(); // 0x1403084C0
float Scaleform::Render::Text::ParagraphFormatter::GetActualFontSize(); // 0x140306220
void Scaleform::Render::Text::ParagraphFormatter::TreatBidirectionalTextInLine(); // 0x140309ED0
struct Scaleform::Render::Text::ParagraphFormatter::TreatBidirectionalTextInLine::__l2::FormatDataEntry_
{
	Scaleform::Render::Text::LineBuffer::GlyphEntry Glyph; // 0x0
	Scaleform::Ptr<Scaleform::Render::Text::FontHandle> pFont; // 0x8
	Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> pImage; // 0x10
	unsigned long ColorV; // 0x18
	FormatDataEntry_(Scaleform::Render::Text::ParagraphFormatter::TreatBidirectionalTextInLine::__l2::FormatDataEntry_ &);
	FormatDataEntry_(const Scaleform::Render::Text::ParagraphFormatter::TreatBidirectionalTextInLine::__l2::FormatDataEntry_ &);
	FormatDataEntry_();
	~FormatDataEntry_();
	Scaleform::Render::Text::ParagraphFormatter::TreatBidirectionalTextInLine::__l2::FormatDataEntry_ & operator=(Scaleform::Render::Text::ParagraphFormatter::TreatBidirectionalTextInLine::__l2::FormatDataEntry_ &);
	Scaleform::Render::Text::ParagraphFormatter::TreatBidirectionalTextInLine::__l2::FormatDataEntry_ & operator=(const Scaleform::Render::Text::ParagraphFormatter::TreatBidirectionalTextInLine::__l2::FormatDataEntry_ &);
};
void Scaleform::Render::Text::ParagraphFormatter::FinalizeLine(); // 0x1403030A0
bool Scaleform::Render::Text::ParagraphFormatter::HandleCustomWordWrap(); // 0x1403079E0
bool Scaleform::Render::Text::ParagraphFormatter::CheckWordWrap(); // 0x140302440
void Scaleform::Render::Text::ParagraphFormatter::Format(const Scaleform::Render::Text::Paragraph & paragraph); // 0x140304F20
void Scaleform::Render::Text::DocView::Format(); // 0x140303DF0
void Scaleform::Render::Text::DocView::CreateVisibleTextLayout(Scaleform::Render::TextLayout::Builder & bld); // 0x1403028B0
bool Scaleform::Render::Text::DocView::SetHScrollOffset(unsigned long hscroll); // 0x1403097B0
bool Scaleform::Render::Text::DocView::SetVScrollOffset(unsigned long vscroll); // 0x140309BC0
unsigned long Scaleform::Render::Text::DocView::GetHScrollOffset(); // 0x140307090
unsigned long Scaleform::Render::Text::DocView::GetVScrollOffset(); // 0x140307970
float Scaleform::Render::Text::DocView::GetTextWidth(); // 0x140307930
float Scaleform::Render::Text::DocView::GetTextHeight(); // 0x1403078F0
unsigned long Scaleform::Render::Text::DocView::GetLinesCount(); // 0x140307540
unsigned long Scaleform::Render::Text::DocView::GetMaxHScrollValue(); // 0x1403075A0
unsigned long Scaleform::Render::Text::DocView::GetMaxHScroll(); // 0x140307570
unsigned long Scaleform::Render::Text::DocView::GetMaxVScroll(); // 0x140307630
void Scaleform::Render::Text::DocView::SetAutoSizeX(); // 0x140309590
void Scaleform::Render::Text::DocView::SetAutoSizeY(); // 0x1403095B0
void Scaleform::Render::Text::DocView::SetWordWrap(); // 0x140309E40
void Scaleform::Render::Text::DocView::ClearWordWrap(); // 0x140302730
bool Scaleform::Render::Text::DocView::ForceReformat(); // 0x140303DC0
const Scaleform::Render::Rect<float> & Scaleform::Render::Text::DocView::GetViewRect(); // 0x1403079A0
unsigned long long Scaleform::Render::Text::DocView::GetCharIndexAtPoint(float x, float y); // 0x140306600
unsigned long long Scaleform::Render::Text::DocView::GetCursorPosInLine(unsigned long lineIndex, float x); // 0x140306970
unsigned long long Scaleform::Render::Text::DocView::GetCursorPosInLineByOffset(unsigned long lineIndex, float relativeOffsetX); // 0x1403069E0
unsigned long long Scaleform::Render::Text::DocView::GetCursorPosAtPoint(float x, float y); // 0x140306850
bool Scaleform::Render::Text::DocView::IsUrlAtPoint(float x, float y, Scaleform::Range * purlPosRange); // 0x140308C40
unsigned long Scaleform::Render::Text::DocView::GetLineIndexAtPoint(float x, float y); // 0x1403070F0
unsigned long Scaleform::Render::Text::DocView::GetLineIndexOfChar(unsigned long long indexOfChar); // 0x140307170
unsigned long long Scaleform::Render::Text::DocView::GetLineOffset(unsigned long lineIndex); // 0x1403073A0
unsigned long long Scaleform::Render::Text::DocView::GetLineLength(unsigned long lineIndex, bool * phasNewLine); // 0x1403071D0
const wchar_t * Scaleform::Render::Text::DocView::GetLineText(unsigned long lineIndex, unsigned long long * plen); // 0x140307430
long long Scaleform::Render::Text::DocView::GetParagraphLength(unsigned long long charIndex); // 0x1403077B0
bool Scaleform::Render::Text::DocView::GetLineMetrics(unsigned long lineIndex, Scaleform::Render::Text::DocView::LineMetrics * pmetrics); // 0x140307260
bool Scaleform::Render::Text::DocView::GetCharBoundaries(Scaleform::Render::Rect<float> * pCharRect, unsigned long long indexOfChar); // 0x140306330
bool Scaleform::Render::Text::DocView::GetExactCharBoundaries(Scaleform::Render::Rect<float> * pCharRect, unsigned long long indexOfChar); // 0x140306BF0
unsigned long long Scaleform::Render::Text::DocView::GetFirstCharInParagraph(unsigned long long indexOfChar); // 0x140307030
unsigned long Scaleform::Render::Text::DocView::GetBottomVScroll(); // 0x140306280
bool Scaleform::Render::Text::DocView::SetBottomVScroll(unsigned long newBottomMostLine); // 0x1403095D0
Scaleform::Render::Text::Highlighter * Scaleform::Render::Text::DocView::CreateHighlighterManager(); // 0x140302820
void Scaleform::Render::Text::DocView::UpdateHighlight(const Scaleform::Render::Text::HighlightDesc & desc); // 0x14030A2E0
Scaleform::Render::Text::HighlightDesc * Scaleform::Render::Text::DocView::GetSelectionHighlighterDesc(); // 0x140307840
void Scaleform::Render::Text::DocView::SetSelection(unsigned long long startPos, unsigned long long endPos, bool highlightSelection); // 0x140309860
void Scaleform::Render::Text::DocView::SetSelectionBackgroundColor(unsigned long color); // 0x140309990
void Scaleform::Render::Text::DocView::SetSelectionTextColor(unsigned long color); // 0x140309A60
void Scaleform::Render::Text::DocView::SetDefaultTextAndParaFormat(unsigned long long cursorPos); // 0x140309700void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> > *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // r12
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF> >::TableType *pTable; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 *v10; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  unsigned __int64 SizeMask; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 *v15; // r15
  Scaleform::RefCountVImpl *v16; // rcx
  Scaleform::RefCountVImpl *v17; // rcx
  Scaleform::RefCountVImpl *v18; // rcx
  unsigned __int64 v19; // rsi
  bool v20; // zf
  unsigned __int64 *i; // rsi
  __int64 v22; // rsi
  Scaleform::RefCountVImpl *v23; // rcx
  Scaleform::RefCountVImpl *v24; // rcx
  Scaleform::RefCountVImpl *v25; // rcx

  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = *(&this->pTable[1].EntryCount + 3 * v7);
  v10 = &this->pTable->EntryCount + 3 * v7;
  if ( v9 == -2i64 )
  {
    v10[2] = -1i64;
    v10[3] = (unsigned __int64)key->First;
    pObject = (Scaleform::RefCountVImpl *)key->Second.pObject;
    if ( pObject )
      Scaleform::Render::RenderBuffer::AddRef(pObject);
    v10[4] = (unsigned __int64)key->Second.pObject;
  }
  else
  {
    SizeMask = pTable->SizeMask;
    v13 = v7;
    do
      v13 = SizeMask & (v13 + 1);
    while ( *(&pTable[1].EntryCount + 3 * v13) != -2i64 );
    v14 = v10[3] & SizeMask;
    v15 = &pTable[v13 + 1].EntryCount + v13;
    if ( v14 == v7 )
    {
      if ( v15 )
      {
        *v15 = v9;
        v15[1] = v10[3];
        v16 = (Scaleform::RefCountVImpl *)v10[4];
        if ( v16 )
          Scaleform::Render::RenderBuffer::AddRef(v16);
        v15[2] = v10[4];
      }
      v10[3] = (unsigned __int64)key->First;
      v17 = (Scaleform::RefCountVImpl *)key->Second.pObject;
      if ( v17 )
        Scaleform::Render::RenderBuffer::AddRef(v17);
      v18 = (Scaleform::RefCountVImpl *)v10[4];
      if ( v18 )
        Scaleform::RefCountImpl::Release(v18);
      v10[4] = (unsigned __int64)key->Second.pObject;
      v10[2] = v13;
    }
    else
    {
      v19 = v14 + 2 * (v14 + 1);
      v20 = *(&pTable->EntryCount + v19) == v7;
      for ( i = &pTable->EntryCount + v19; !v20; i = &pTable->EntryCount + v22 )
      {
        v22 = *i + 2 * (*i + 1);
        v20 = *(&pTable->EntryCount + v22) == v7;
      }
      if ( v15 )
      {
        *v15 = v9;
        v15[1] = v10[3];
        v23 = (Scaleform::RefCountVImpl *)v10[4];
        if ( v23 )
          Scaleform::Render::RenderBuffer::AddRef(v23);
        v15[2] = v10[4];
      }
      *i = v13;
      v10[3] = (unsigned __int64)key->First;
      v24 = (Scaleform::RefCountVImpl *)key->Second.pObject;
      if ( v24 )
        Scaleform::Render::RenderBuffer::AddRef(v24);
      v25 = (Scaleform::RefCountVImpl *)v10[4];
      if ( v25 )
        Scaleform::RefCountImpl::Release(v25);
      v10[4] = (unsigned __int64)key->Second.pObject;
      v10[2] = -1i64;
    }
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF> >::TableType *v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 *v13; // rdi
  Scaleform::RefCountVImpl **pSecond; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned __int64 v17; // rcx
  unsigned __int64 *v18; // r15
  Scaleform::RefCountVImpl *v19; // rcx
  Scaleform::RefCountVImpl **v20; // rsi
  Scaleform::RefCountVImpl *v21; // rcx
  unsigned __int64 v22; // r14
  bool v23; // zf
  unsigned __int64 *i; // r14
  __int64 v25; // r14
  Scaleform::RefCountVImpl *v26; // rcx
  Scaleform::RefCountVImpl **v27; // rbx
  Scaleform::RefCountVImpl *v28; // rcx

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
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 3 * v10);
  v13 = &this->pTable->EntryCount + 3 * v10;
  if ( v12 == -2i64 )
  {
    v13[2] = -1i64;
    v13[3] = (unsigned __int64)*key->pFirst;
    pSecond = (Scaleform::RefCountVImpl **)key->pSecond;
    if ( *pSecond )
      Scaleform::Render::RenderBuffer::AddRef(*pSecond);
    v13[4] = (unsigned __int64)*pSecond;
  }
  else
  {
    v15 = v11->SizeMask;
    v16 = v10;
    do
      v16 = v15 & (v16 + 1);
    while ( *(&v11[1].EntryCount + 3 * v16) != -2i64 );
    v17 = v13[3] & v15;
    v18 = &v11[v16 + 1].EntryCount + v16;
    if ( v17 == v10 )
    {
      if ( v18 )
      {
        *v18 = v12;
        v18[1] = v13[3];
        v19 = (Scaleform::RefCountVImpl *)v13[4];
        if ( v19 )
          Scaleform::Render::RenderBuffer::AddRef(v19);
        v18[2] = v13[4];
      }
      v13[3] = (unsigned __int64)*key->pFirst;
      v20 = (Scaleform::RefCountVImpl **)key->pSecond;
      if ( *v20 )
        Scaleform::Render::RenderBuffer::AddRef(*v20);
      v21 = (Scaleform::RefCountVImpl *)v13[4];
      if ( v21 )
        Scaleform::RefCountImpl::Release(v21);
      v13[4] = (unsigned __int64)*v20;
      v13[2] = v16;
    }
    else
    {
      v22 = v17 + 2 * (v17 + 1);
      v23 = *(&v11->EntryCount + v22) == v10;
      for ( i = &v11->EntryCount + v22; !v23; i = &v11->EntryCount + v25 )
      {
        v25 = *i + 2 * (*i + 1);
        v23 = *(&v11->EntryCount + v25) == v10;
      }
      if ( v18 )
      {
        *v18 = v12;
        v18[1] = v13[3];
        v26 = (Scaleform::RefCountVImpl *)v13[4];
        if ( v26 )
          Scaleform::Render::RenderBuffer::AddRef(v26);
        v18[2] = v13[4];
      }
      *i = v16;
      v13[3] = (unsigned __int64)*key->pFirst;
      v27 = (Scaleform::RefCountVImpl **)key->pSecond;
      if ( *v27 )
        Scaleform::Render::RenderBuffer::AddRef(*v27);
      v28 = (Scaleform::RefCountVImpl *)v13[4];
      if ( v28 )
        Scaleform::RefCountImpl::Release(v28);
      v13[4] = (unsigned __int64)*v27;
      v13[2] = -1i64;
    }
  }
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF>>::findIndexCore<Scaleform::Render::Text::TextFormat const *>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF> > *this,
        const Scaleform::Render::Text::TextFormat *const *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF> >::TableType *pTable; // r10
  unsigned __int64 v4; // r9
  bool v6; // zf
  __int64 *v7; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rdx

  pTable = this->pTable;
  v4 = hashValue + 2 * (hashValue + 1);
  v6 = *(&this->pTable->EntryCount + v4) == -2i64;
  v7 = (__int64 *)(&this->pTable->EntryCount + v4);
  result = hashValue;
  if ( v6 || (v7[1] & pTable->SizeMask) != hashValue )
    return -1i64;
  while ( 1 )
  {
    v9 = v7[1];
    if ( (v9 & pTable->SizeMask) == hashValue && (const Scaleform::Render::Text::TextFormat *const)v9 == *key )
      break;
    result = *v7;
    if ( *v7 == -1 )
      return -1i64;
    v7 = (__int64 *)(&pTable[result + 1].EntryCount + result);
  }
  return result;
}

void __fastcall Scaleform::Render::Text::DocView::DocView(
        Scaleform::Render::Text::DocView *this,
        Scaleform::Render::Text::Allocator *pallocator,
        Scaleform::Render::Text::FontManagerBase *pfontMgr,
        Scaleform::Log *plog)
{
  Scaleform::Render::Text::StyledText *v8; // rax
  Scaleform::Render::Text::DocView::DocumentText *v9; // rdi
  Scaleform::Render::Text::DocView::DocumentText *pObject; // rcx
  int v11; // [rsp+50h] [rbp+8h] BYREF

  this->__vftable = (Scaleform::Render::Text::DocView_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::Text::DocView_vtbl *)&Scaleform::Render::Text::DocView::`vftable';
  this->RefCount = 1;
  this->pDocument.pObject = 0i64;
  if ( pfontMgr )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pfontMgr);
  this->pFontManager.pObject = pfontMgr;
  this->pDocumentListener.pObject = 0i64;
  this->pHighlight = 0i64;
  Scaleform::Render::Text::LineBuffer::LineBuffer(&this->mLineBuffer);
  *(_QWORD *)&this->ViewRect.x1 = 0i64;
  *(_QWORD *)&this->ViewRect.x2 = 0i64;
  this->MaxVScroll.FormatCounter = 0;
  this->pEditorKit.pObject = 0i64;
  this->Filter.RefCount = 1;
  this->Filter.__vftable = (Scaleform::Render::Text::TextFilter_vtbl *)&Scaleform::Render::Text::TextFilter::`vftable';
  this->Filter.ShadowParams.Mode = 0;
  this->Filter.ShadowParams.Passes = 1;
  this->Filter.ShadowParams.BlurX = 100.0;
  *(_QWORD *)&this->Filter.ShadowParams.BlurY = 1120403456i64;
  this->Filter.ShadowParams.Offset.y = 0.0;
  this->Filter.ShadowParams.Strength = 1.0;
  this->Filter.ShadowParams.Gradient.pObject = 0i64;
  *(_DWORD *)&this->Filter.ShadowParams.Colors[0].Channels.Green = 16711680;
  this->Filter.ShadowParams.Colors[0].Channels.Blue = 0;
  *(_WORD *)&this->Filter.ShadowParams.Colors[1].Channels.Green = 0;
  this->Filter.ShadowParams.Colors[1].Channels.Alpha = 0;
  Scaleform::Render::Text::TextFilter::SetDefaultShadow(&this->Filter);
  if ( plog )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)plog);
  this->pLog.pObject = plog;
  *(_QWORD *)&this->BorderColor = 0i64;
  v11 = 74;
  v8 = (Scaleform::Render::Text::StyledText *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                Scaleform::Memory::pGlobalHeap,
                                                this,
                                                80i64,
                                                &v11);
  v9 = (Scaleform::Render::Text::DocView::DocumentText *)v8;
  if ( v8 )
  {
    Scaleform::Render::Text::StyledText::StyledText(v8, pallocator);
    v9->pDocument = this;
    v9->__vftable = (Scaleform::Render::Text::DocView::DocumentText_vtbl *)&Scaleform::Render::Text::DocView::DocumentText::`vftable';
  }
  else
  {
    v9 = 0i64;
  }
  pObject = this->pDocument.pObject;
  if ( pObject )
    Scaleform::RefCountNTSImpl::Release(pObject);
  this->pDocument.pObject = v9;
  this->AlignProps &= 0xC0u;
  *(_WORD *)&this->FlagsEx = 0;
  this->Flags = 0;
  *(_QWORD *)&this->FormatCounter = 1310721i64;
  this->EndSelection = -1i64;
  this->BeginSelection = -1i64;
  *(_QWORD *)&this->ViewRect.x1 = 0i64;
  *(_QWORD *)&this->ViewRect.x2 = 0i64;
  this->RTFlags &= ~4u;
  this->Flags |= 0x80u;
  this->pImageSubstitutor = 0i64;
  this->MaxLength = 0;
  Scaleform::Render::Text::TextFilter::SetDefaultShadow(&this->Filter);
  *(_QWORD *)&this->TextWidth = 0i64;
}

void __fastcall Scaleform::Render::Text::GFxLineCursor::GFxLineCursor(
        Scaleform::Render::Text::GFxLineCursor *this,
        Scaleform::Render::Text::DocView *pview,
        const Scaleform::Render::Text::Paragraph *ppara)
{
  this->pPrevGrec = 0i64;
  this->pLastFont.pObject = 0i64;
  *(_QWORD *)&this->LastCharCode = 0i64;
  *(_QWORD *)&this->LastAdvance = 0i64;
  *(_QWORD *)&this->FirstGlyphWidth = 0i64;
  this->pComposStr.pObject = 0i64;
  this->pDocView = pview;
  this->ComposStrPosition = -1i64;
  this->ComposStrLength = 0i64;
  this->ComposStrCurPos = 0i64;
  this->pParagraph = ppara;
  *(_QWORD *)&this->LineWidth = 0i64;
  *(_QWORD *)&this->LineLength = 0i64;
  *(_QWORD *)&this->MaxFontDescent = 0i64;
  Scaleform::Render::Text::Paragraph::CharactersIterator::CharactersIterator(&this->CharIter, ppara, 0i64);
  this->CharInfoHolder.pFormat.pObject = 0i64;
  this->CharInfoHolder.Index = 0i64;
  this->CharInfoHolder.Character = 0;
  *(_QWORD *)&this->Indent = 0i64;
  this->RightMargin = 0;
  this->GlyphIns.pGlyphs = 0i64;
  this->GlyphIns.pNextFormatData = 0i64;
  *(_QWORD *)&this->GlyphIns.GlyphIndex = 0i64;
  this->GlyphIns.FormatDataIndex = 0;
  *(_QWORD *)&this->NumOfSpaces = 0i64;
  this->FontScaleFactor = 1.0;
  this->RLCharIter.pParagraph = 0i64;
  this->RLCharIter.ParaText = 0i64;
  this->RLCharIter.IndexMap = 0i64;
  this->RLCharIter.MirroredBits = 0i64;
  this->RLCharIter.ParaLen = 0;
  this->RLCharIter.Index = -1;
  this->RLCharIter.VIndex = 0;
  this->RLCharIter.PlaceHolder.pFormat.pObject = 0i64;
  this->RLCharIter.PlaceHolder.Index = 0i64;
  this->RLCharIter.PlaceHolder.Character = 0;
  *(_WORD *)&this->LastKerning = 0;
  this->NumChars = 0i64;
  this->RightToLeft = 0;
}

void __fastcall Scaleform::Render::Text::GFxLineCursor::GFxLineCursor(Scaleform::Render::Text::GFxLineCursor *this)
{
  this->pPrevGrec = 0i64;
  this->pLastFont.pObject = 0i64;
  *(_QWORD *)&this->LastCharCode = 0i64;
  *(_QWORD *)&this->LastAdvance = 0i64;
  *(_QWORD *)&this->FirstGlyphWidth = 0i64;
  this->pComposStr.pObject = 0i64;
  this->ComposStrLength = 0i64;
  this->ComposStrCurPos = 0i64;
  this->pDocView = 0i64;
  this->pParagraph = 0i64;
  *(_QWORD *)&this->LineWidth = 0i64;
  *(_QWORD *)&this->LineLength = 0i64;
  *(_QWORD *)&this->MaxFontDescent = 0i64;
  this->ComposStrPosition = -1i64;
  this->CharIter.PlaceHolder.pFormat.pObject = 0i64;
  this->CharIter.PlaceHolder.Index = 0i64;
  this->CharIter.PlaceHolder.Character = 0;
  this->CharIter.pFormatInfo = 0i64;
  this->CharIter.FormatIterator.pArray = 0i64;
  this->CharIter.FormatIterator.Index = -1i64;
  this->CharIter.pText = 0i64;
  this->CharIter.CurTextIndex = 0i64;
  this->CharInfoHolder.pFormat.pObject = 0i64;
  this->CharInfoHolder.Index = 0i64;
  this->CharInfoHolder.Character = 0;
  *(_QWORD *)&this->Indent = 0i64;
  this->RightMargin = 0;
  this->GlyphIns.pGlyphs = 0i64;
  this->GlyphIns.pNextFormatData = 0i64;
  *(_QWORD *)&this->GlyphIns.GlyphIndex = 0i64;
  this->GlyphIns.FormatDataIndex = 0;
  *(_QWORD *)&this->NumOfSpaces = 0i64;
  this->FontScaleFactor = 1.0;
  this->RLCharIter.pParagraph = 0i64;
  this->RLCharIter.ParaText = 0i64;
  this->RLCharIter.IndexMap = 0i64;
  this->RLCharIter.MirroredBits = 0i64;
  this->RLCharIter.ParaLen = 0;
  this->RLCharIter.VIndex = 0;
  this->RLCharIter.Index = -1;
  this->RLCharIter.PlaceHolder.pFormat.pObject = 0i64;
  this->RLCharIter.PlaceHolder.Index = 0i64;
  this->RLCharIter.PlaceHolder.Character = 0;
  *(_WORD *)&this->LastKerning = 0;
  this->NumChars = 0i64;
  this->RightToLeft = 0;
}

void __fastcall Scaleform::Render::Text::ParagraphFormatter::ParagraphFormatter(
        Scaleform::Render::Text::ParagraphFormatter *this,
        Scaleform::Render::Text::DocView *pdoc,
        Scaleform::Log *plog)
{
  Scaleform::Render::Text::Allocator *pObject; // rax
  Scaleform::MemoryHeap *pHeap; // rcx
  Scaleform::RefCountVImpl *v8; // rcx

  this->pDocView = pdoc;
  this->pParagraph = 0i64;
  this->pParaFormat = 0i64;
  this->pTempLine = 0i64;
  Scaleform::Render::Text::GFxLineCursor::GFxLineCursor(&this->LineCursor);
  pObject = pdoc->pDocument.pObject->pTextAllocator.pObject;
  if ( pObject )
    pHeap = pObject->pHeap;
  else
    pHeap = (Scaleform::MemoryHeap *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL)(Scaleform::Memory::pGlobalHeap);
  this->FontCache.mHash.pTable = 0i64;
  this->FontCache.mHash.pHeap = pHeap;
  this->FindFontInfo.pFontCache = &this->FontCache;
  this->FindFontInfo.pCurrentFont.pObject = 0i64;
  this->FindFontInfo.pPrevFormat = 0i64;
  this->FindFontInfo.pCurrentFormat = 0i64;
  v8 = (Scaleform::RefCountVImpl *)this->FindFontInfo.pCurrentFont.pObject;
  if ( v8 )
    Scaleform::RefCountImpl::Release(v8);
  this->FindFontInfo.pCurrentFont.pObject = 0i64;
  Scaleform::Render::Text::GFxLineCursor::GFxLineCursor(&this->StartPoint);
  Scaleform::Render::Text::GFxLineCursor::GFxLineCursor(&this->HalfPoint);
  Scaleform::Render::Text::GFxLineCursor::GFxLineCursor(&this->WordWrapPoint);
  *(_QWORD *)&this->TextRectWidth = 0i64;
  *(_QWORD *)&this->TabStopsIndex = 0i64;
  this->Pass = 0;
  this->HyphenationRequested = 0;
  this->RequestedWordWrapPos = 0;
  this->HasLineFormatHandler = 0;
  this->pTextBufForCustomFormat = 0i64;
  this->pFont = 0i64;
  this->pFontHandle.pObject = 0i64;
  *(_QWORD *)&this->Scale = 0i64;
  this->GlyphAdvance = 0.0;
  *(_QWORD *)&this->AdjLineWidth = 0i64;
  this->FontSize = 0.0;
  *(_WORD *)&this->isSpace = 0;
  this->pLinesIter = 0i64;
  this->pDynLine = 0i64;
  *(_QWORD *)&this->ParaWidth = 0i64;
  this->ParaLines = 0;
  *(_QWORD *)&this->NextOffsetY = 0i64;
  *(_WORD *)&this->NeedRecenterLines = 0;
  this->pLog = plog;
  *(_QWORD *)&this->NewLen = 0i64;
  this->NewParaText = 0i64;
  this->IndexMap = 0i64;
  this->MirroredBits = 0i64;
  this->TextBufForCustomFormat[0] = 0;
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy>(
        Scaleform::ArrayDataBase<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy> *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> *p_pImageDesc; // rbx

  Size = this->Size;
  if ( Size )
  {
    p_pImageDesc = &this->Data[Size - 1].pImageDesc;
    do
    {
      if ( p_pImageDesc->pObject )
        Scaleform::RefCountNTSImpl::Release(p_pImageDesc->pObject);
      p_pImageDesc -= 7;
      --Size;
    }
    while ( Size );
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
}

void __fastcall Scaleform::Render::Text::DocView::~DocView(Scaleform::Render::Text::DocView *this)
{
  Scaleform::Render::Text::DocView::ImageSubstitutor *pImageSubstitutor; // rdi
  Scaleform::Render::Text::DocView::HighlightDescLoc *pHighlight; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::Render::Text::DocView::DocumentListener *v7; // rcx
  Scaleform::RefCountVImpl *v8; // rcx
  Scaleform::Render::Text::DocView::DocumentText *v9; // rcx

  this->__vftable = (Scaleform::Render::Text::DocView_vtbl *)&Scaleform::Render::Text::DocView::`vftable';
  Scaleform::Render::Text::DocView::Close(this);
  pImageSubstitutor = this->pImageSubstitutor;
  if ( pImageSubstitutor )
  {
    Scaleform::ArrayDataBase<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy>(&this->pImageSubstitutor->Elements.Data);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pImageSubstitutor);
  }
  pHighlight = this->pHighlight;
  this->pImageSubstitutor = 0i64;
  if ( pHighlight )
  {
    Scaleform::Memory::pGlobalHeap->Free(
      Scaleform::Memory::pGlobalHeap,
      pHighlight->HighlightManager.Highlighters.Data.Data);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pHighlight);
  }
  pObject = (Scaleform::RefCountVImpl *)this->pLog.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v5 = (Scaleform::RefCountVImpl *)this->Filter.ShadowParams.Gradient.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(&this->Filter);
  v6 = (Scaleform::RefCountVImpl *)this->pEditorKit.pObject;
  if ( v6 )
    Scaleform::RefCountImpl::Release(v6);
  Scaleform::Render::Text::LineBuffer::~LineBuffer(&this->mLineBuffer);
  v7 = this->pDocumentListener.pObject;
  if ( v7 )
    Scaleform::RefCountNTSImpl::Release(v7);
  v8 = (Scaleform::RefCountVImpl *)this->pFontManager.pObject;
  if ( v8 )
    Scaleform::RefCountImpl::Release(v8);
  v9 = this->pDocument.pObject;
  if ( v9 )
    Scaleform::RefCountNTSImpl::Release(v9);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::Text::GFxLineCursor::~GFxLineCursor(Scaleform::Render::Text::GFxLineCursor *this)
{
  Scaleform::Render::Text::TextFormat *pObject; // rdi
  bool v3; // zf
  Scaleform::Render::Text::TextFormat *v4; // rdi
  Scaleform::Render::Text::TextFormat *v5; // rdi
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::RefCountVImpl *v7; // rcx

  pObject = this->RLCharIter.PlaceHolder.pFormat.pObject;
  if ( pObject )
  {
    v3 = pObject->RefCount-- == 1;
    if ( v3 )
    {
      Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    }
  }
  v4 = this->CharInfoHolder.pFormat.pObject;
  if ( v4 )
  {
    v3 = v4->RefCount-- == 1;
    if ( v3 )
    {
      Scaleform::Render::Text::TextFormat::~TextFormat(v4);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v4);
    }
  }
  v5 = this->CharIter.PlaceHolder.pFormat.pObject;
  if ( v5 )
  {
    v3 = v5->RefCount-- == 1;
    if ( v3 )
    {
      Scaleform::Render::Text::TextFormat::~TextFormat(v5);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v5);
    }
  }
  v6 = (Scaleform::RefCountVImpl *)this->pComposStr.pObject;
  if ( v6 )
    Scaleform::RefCountImpl::Release(v6);
  v7 = (Scaleform::RefCountVImpl *)this->pLastFont.pObject;
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
}

Scaleform::Render::Text::Paragraph::CharacterInfo *__fastcall Scaleform::Render::Text::Paragraph::CharacterInfo::operator=(
        Scaleform::Render::Text::Paragraph::CharacterInfo *this,
        const Scaleform::Render::Text::Paragraph::CharacterInfo *__that)
{
  Scaleform::Render::Text::TextFormat *pObject; // rdi

  if ( __that->pFormat.pObject )
    ++__that->pFormat.pObject->RefCount;
  pObject = this->pFormat.pObject;
  if ( this->pFormat.pObject )
  {
    if ( pObject->RefCount-- == 1 )
    {
      Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    }
  }
  this->pFormat.pObject = __that->pFormat.pObject;
  this->Index = __that->Index;
  this->Character = __that->Character;
  return this;
}

Scaleform::Render::Text::GFxLineCursor *__fastcall Scaleform::Render::Text::GFxLineCursor::operator=(
        Scaleform::Render::Text::GFxLineCursor *this,
        const Scaleform::Render::Text::GFxLineCursor *__that)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::RefCountVImpl *v7; // rcx

  this->pPrevGrec = __that->pPrevGrec;
  pObject = (Scaleform::RefCountVImpl *)__that->pLastFont.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  v5 = (Scaleform::RefCountVImpl *)this->pLastFont.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  this->pLastFont.pObject = __that->pLastFont.pObject;
  this->LastCharCode = __that->LastCharCode;
  this->LastGlyphIndex = __that->LastGlyphIndex;
  this->LastAdvance = __that->LastAdvance;
  this->LastGlyphWidth = __that->LastGlyphWidth;
  this->FirstGlyphWidth = __that->FirstGlyphWidth;
  this->LastColor = __that->LastColor;
  v6 = (Scaleform::RefCountVImpl *)__that->pComposStr.pObject;
  if ( v6 )
    Scaleform::Render::RenderBuffer::AddRef(v6);
  v7 = (Scaleform::RefCountVImpl *)this->pComposStr.pObject;
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
  this->pComposStr.pObject = __that->pComposStr.pObject;
  this->ComposStrPosition = __that->ComposStrPosition;
  this->ComposStrLength = __that->ComposStrLength;
  this->ComposStrCurPos = __that->ComposStrCurPos;
  this->pDocView = __that->pDocView;
  this->pParagraph = __that->pParagraph;
  this->LineWidth = __that->LineWidth;
  this->LineWidthWithoutTrailingSpaces = __that->LineWidthWithoutTrailingSpaces;
  this->LineLength = __that->LineLength;
  this->MaxFontAscent = __that->MaxFontAscent;
  this->MaxFontDescent = __that->MaxFontDescent;
  this->MaxFontLeading = __that->MaxFontLeading;
  Scaleform::Render::Text::Paragraph::CharacterInfo::operator=(
    &this->CharIter.PlaceHolder,
    &__that->CharIter.PlaceHolder);
  this->CharIter.pFormatInfo = __that->CharIter.pFormatInfo;
  this->CharIter.FormatIterator = __that->CharIter.FormatIterator;
  this->CharIter.pText = __that->CharIter.pText;
  this->CharIter.CurTextIndex = __that->CharIter.CurTextIndex;
  Scaleform::Render::Text::Paragraph::CharacterInfo::operator=(&this->CharInfoHolder, &__that->CharInfoHolder);
  this->Indent = __that->Indent;
  this->LeftMargin = __that->LeftMargin;
  this->RightMargin = __that->RightMargin;
  this->GlyphIns.pGlyphs = __that->GlyphIns.pGlyphs;
  this->GlyphIns.pNextFormatData = __that->GlyphIns.pNextFormatData;
  this->GlyphIns.GlyphIndex = __that->GlyphIns.GlyphIndex;
  this->GlyphIns.GlyphsCount = __that->GlyphIns.GlyphsCount;
  this->GlyphIns.FormatDataIndex = __that->GlyphIns.FormatDataIndex;
  this->NumOfSpaces = __that->NumOfSpaces;
  this->NumOfTrailingSpaces = __that->NumOfTrailingSpaces;
  this->FontScaleFactor = __that->FontScaleFactor;
  this->RLCharIter.pParagraph = __that->RLCharIter.pParagraph;
  this->RLCharIter.ParaText = __that->RLCharIter.ParaText;
  this->RLCharIter.IndexMap = __that->RLCharIter.IndexMap;
  this->RLCharIter.MirroredBits = __that->RLCharIter.MirroredBits;
  this->RLCharIter.ParaLen = __that->RLCharIter.ParaLen;
  this->RLCharIter.Index = __that->RLCharIter.Index;
  this->RLCharIter.VIndex = __that->RLCharIter.VIndex;
  Scaleform::Render::Text::Paragraph::CharacterInfo::operator=(
    &this->RLCharIter.PlaceHolder,
    &__that->RLCharIter.PlaceHolder);
  this->RightToLeft = __that->RightToLeft;
  this->LastKerning = __that->LastKerning;
  this->LineHasNewLine = __that->LineHasNewLine;
  this->NumChars = __that->NumChars;
  return this;
}

Scaleform::Render::Text::Paragraph::CharacterInfo *__fastcall Scaleform::Render::Text::GFxLineCursor::operator*(
        Scaleform::Render::Text::GFxLineCursor *this)
{
  Scaleform::Render::Text::Paragraph::CharacterInfo *v2; // rax
  Scaleform::Render::Text::CompositionStringBase *pObject; // rcx
  unsigned __int64 v4; // rbx
  Scaleform::Render::Text::Paragraph::CharacterInfo *v5; // rax
  Scaleform::Render::Text::CompositionStringBase *v6; // rcx
  __int64 v7; // rax
  Scaleform::Render::Text::CompositionStringBase *v8; // rdi
  Scaleform::Render::Text::TextFormat *v9; // rbx
  const Scaleform::Render::Text::TextFormat *v10; // rax
  const Scaleform::Render::Text::TextFormat *v11; // rbx
  Scaleform::Render::Text::Allocator *v12; // rax
  Scaleform::Render::Text::TextFormat *TextFormat; // rax
  Scaleform::Render::Text::TextFormat *v14; // rbx
  Scaleform::Render::Text::TextFormat *v15; // rdi
  Scaleform::Render::Text::CompositionStringBase *v18; // rbx
  Scaleform::Render::Text::Paragraph::CharacterInfo *v19; // rdi
  const Scaleform::Render::Text::Paragraph::CharacterInfo *v20; // rax
  Scaleform::Render::Text::TextFormat result; // [rsp+20h] [rbp-58h] BYREF

  v2 = Scaleform::Render::Text::Paragraph::CharactersIterator::operator*(&this->CharIter);
  pObject = this->pComposStr.pObject;
  this->CharInfoHolder.Index = v2->Index;
  if ( pObject )
  {
    if ( (__int64)pObject->GetLength(pObject) )
    {
      v4 = this->CharInfoHolder.Index + this->pParagraph->StartIndex;
      if ( v4 >= this->pComposStr.pObject->GetPosition(this->pComposStr.pObject) )
      {
        if ( v4 == this->pComposStr.pObject->GetPosition(this->pComposStr.pObject)
          && this->ComposStrCurPos < this->pComposStr.pObject->GetLength(this->pComposStr.pObject) )
        {
          v5 = Scaleform::Render::Text::Paragraph::CharactersIterator::operator*(&this->CharIter);
          v6 = this->pComposStr.pObject;
          this->CharInfoHolder.Index = this->ComposStrCurPos + v5->Index;
          v7 = (__int64)v6->GetText(v6);
          v8 = this->pComposStr.pObject;
          this->CharInfoHolder.Character = *(_WORD *)(v7 + 2 * this->ComposStrCurPos);
          v9 = Scaleform::Render::Text::Paragraph::CharactersIterator::operator*(&this->CharIter)->pFormat.pObject;
          v10 = v8->GetTextFormat(v8, this->ComposStrCurPos);
          v11 = Scaleform::Render::Text::TextFormat::Merge(v9, &result, v10);
          v12 = v8->GetAllocator(v8);
          TextFormat = Scaleform::Render::Text::Allocator::AllocateTextFormat(v12, v11);
          v14 = this->CharInfoHolder.pFormat.pObject;
          v15 = TextFormat;
          if ( v14 )
          {
            if ( v14->RefCount-- == 1 )
            {
              Scaleform::Render::Text::TextFormat::~TextFormat(v14);
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v14);
            }
          }
          this->CharInfoHolder.pFormat.pObject = v15;
          Scaleform::Render::Text::TextFormat::~TextFormat(&result);
          return &this->CharInfoHolder;
        }
        v18 = this->pComposStr.pObject;
        v19 = Scaleform::Render::Text::Paragraph::CharactersIterator::operator*(&this->CharIter);
        this->CharInfoHolder.Index = v19->Index + v18->GetLength(v18);
      }
    }
  }
  if ( this->RightToLeft )
    v20 = Scaleform::Render::Text::RightToLeftIterator::operator*(&this->RLCharIter);
  else
    v20 = Scaleform::Render::Text::Paragraph::CharactersIterator::operator*(&this->CharIter);
  Scaleform::Render::Text::Paragraph::CharacterInfo::operator=(&this->CharInfoHolder, v20);
  if ( (this->pDocView->Flags & 0x10) != 0 && this->CharInfoHolder.Character )
    this->CharInfoHolder.Character = 42;
  return &this->CharInfoHolder;
}

Scaleform::Render::Text::Paragraph::CharacterInfo *__fastcall Scaleform::Render::Text::RightToLeftIterator::operator*(
        Scaleform::Render::Text::RightToLeftIterator *this)
{
  __int64 Index; // rax
  __int64 v3; // r8
  wchar_t v4; // dx
  const unsigned int *IndexMap; // rax
  Scaleform::Render::Text::TextFormat *TextFormatPtr; // rax
  Scaleform::Render::Text::Paragraph::CharacterInfo *v7; // rsi
  Scaleform::Render::Text::TextFormat *v8; // rdi
  Scaleform::Render::Text::TextFormat *v9; // rbx
  bool v10; // zf
  Scaleform::Render::Text::Paragraph::CharacterInfo *result; // rax
  Scaleform::Render::Text::Paragraph::CharacterInfo *p_PlaceHolder; // rdi
  Scaleform::Render::Text::TextFormat *pObject; // rbx

  Index = this->Index;
  if ( (int)Index < 0 )
  {
    p_PlaceHolder = &this->PlaceHolder;
    this->PlaceHolder.Character = 0;
    this->PlaceHolder.Index = 0i64;
    pObject = this->PlaceHolder.pFormat.pObject;
    if ( pObject )
    {
      v10 = pObject->RefCount-- == 1;
      if ( v10 )
      {
        Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
      }
    }
    result = p_PlaceHolder;
    p_PlaceHolder->pFormat.pObject = 0i64;
  }
  else
  {
    v3 = this->Index;
    v4 = this->ParaText[Index];
    this->PlaceHolder.Index = this->VIndex;
    IndexMap = this->IndexMap;
    this->PlaceHolder.Character = v4;
    TextFormatPtr = Scaleform::Render::Text::Paragraph::GetTextFormatPtr(
                      (Scaleform::Render::Text::Paragraph *)this->pParagraph,
                      IndexMap[v3]);
    v7 = &this->PlaceHolder;
    v8 = TextFormatPtr;
    if ( TextFormatPtr )
      ++TextFormatPtr->RefCount;
    v9 = v7->pFormat.pObject;
    if ( v7->pFormat.pObject )
    {
      v10 = v9->RefCount-- == 1;
      if ( v10 )
      {
        Scaleform::Render::Text::TextFormat::~TextFormat(v9);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v9);
      }
    }
    v7->pFormat.pObject = v8;
    return v7;
  }
  return result;
}

void __fastcall Scaleform::Render::Text::GFxLineCursor::operator+=(
        Scaleform::Render::Text::GFxLineCursor *this,
        unsigned int n)
{
  unsigned __int64 v3; // rdi
  Scaleform::Render::Text::CompositionStringBase *pObject; // rcx
  unsigned __int64 v5; // rbp
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rax
  int Index; // eax

  v3 = n;
  pObject = this->pComposStr.pObject;
  if ( pObject )
  {
    if ( (__int64)pObject->GetLength(pObject) )
    {
      v5 = this->CharIter.CurTextIndex + this->pParagraph->StartIndex;
      if ( v5 <= this->pComposStr.pObject->GetPosition(this->pComposStr.pObject) )
      {
        v6 = (unsigned int)v3;
        if ( v3 + v5 >= this->pComposStr.pObject->GetPosition(this->pComposStr.pObject) )
        {
          v7 = this->pComposStr.pObject->GetPosition(this->pComposStr.pObject) - v5;
          if ( v7 < v3 )
            v3 = v7;
          v8 = v6 + this->ComposStrCurPos - v3;
          if ( v8 <= this->pComposStr.pObject->GetLength(this->pComposStr.pObject) )
          {
            this->ComposStrCurPos = v8;
            this->NumChars += v6 - v3;
          }
          else
          {
            v3 = v6 + this->ComposStrCurPos - this->pComposStr.pObject->GetLength(this->pComposStr.pObject);
            v9 = this->pComposStr.pObject->GetLength(this->pComposStr.pObject);
            this->NumChars += v9;
            this->ComposStrCurPos = v9;
          }
        }
      }
    }
  }
  if ( (_DWORD)v3 )
  {
    if ( this->RightToLeft )
    {
      Index = this->RLCharIter.Index;
      if ( Index >= 0 )
      {
        this->RLCharIter.VIndex += v3;
        this->RLCharIter.Index = Index - v3;
      }
      this->NumChars += (unsigned int)v3;
    }
    else
    {
      Scaleform::Render::Text::Paragraph::CharactersIterator::operator+=(&this->CharIter, (unsigned int)v3);
      this->NumChars += (unsigned int)v3;
    }
  }
}

void __fastcall Scaleform::Render::Text::DocView::ImageSubstitutor::AddImageDesc(
        Scaleform::Render::Text::DocView::ImageSubstitutor *this,
        const Scaleform::Render::Text::DocView::ImageSubstitutor::Element *elem)
{
  __int64 Size; // r9
  unsigned __int64 v5; // rbp
  __int64 SubStringLen; // r11
  unsigned __int64 v7; // rsi
  Scaleform::Render::Text::DocView::ImageSubstitutor::Element *v8; // rcx
  __int64 v9; // rdx
  int v10; // er14
  char *v11; // rbx
  int v12; // eax
  int v13; // er8
  int v14; // eax

  if ( !Scaleform::Render::Text::DocView::ImageSubstitutor::FindImageDesc(
          this,
          elem->SubString,
          elem->SubStringLen,
          0i64) )
  {
    Size = this->Elements.Data.Size;
    v5 = 0i64;
    while ( Size > 0 )
    {
      SubStringLen = elem->SubStringLen;
      v7 = (Size >> 1) + v5;
      v8 = &this->Elements.Data.Data[v7];
      v9 = v8->SubStringLen;
      if ( elem->SubStringLen )
      {
        v10 = v8->SubStringLen;
        v11 = (char *)((char *)elem - (char *)v8);
        do
        {
          v12 = *(unsigned __int16 *)((char *)v8->SubString + (_QWORD)v11);
          v13 = v8->SubString[0];
          v8 = (Scaleform::Render::Text::DocView::ImageSubstitutor::Element *)((char *)v8 + 2);
          if ( !--SubStringLen || !v12 )
            break;
          if ( v12 != v13 )
            goto LABEL_13;
          --v9;
        }
        while ( v9 );
        if ( v12 == v13 && v9 && SubStringLen )
        {
          v14 = elem->SubStringLen - v10;
          goto LABEL_15;
        }
LABEL_13:
        v14 = v12 - v13;
      }
      else
      {
        v14 = -(int)v9;
      }
LABEL_15:
      if ( v14 <= 0 )
      {
        Size >>= 1;
      }
      else
      {
        v5 = v7 + 1;
        Size += -1 - (Size >> 1);
      }
    }
    Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
      &this->Elements,
      v5,
      elem);
  }
}

void __fastcall Scaleform::Render::Text::DocView::AppendHtml(
        Scaleform::Render::Text::DocView *this,
        const char *putf8Str,
        unsigned __int64 utf8Len,
        bool condenseWhite,
        Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *pimgInfoArr)
{
  if ( utf8Len == -1i64 )
  {
    do
      ++utf8Len;
    while ( putf8Str[utf8Len] );
  }
  Scaleform::Render::Text::StyledText::ParseHtml(
    this->pDocument.pObject,
    putf8Str,
    utf8Len,
    pimgInfoArr,
    (this->Flags & 4) != 0,
    condenseWhite,
    0i64,
    0i64,
    0i64);
  this->OnDocumentChanged(this, 6u);
}

void __fastcall Scaleform::Render::Text::DocView::AppendText(
        Scaleform::Render::Text::DocView *this,
        const char *putf8Str,
        unsigned __int64 utf8Len)
{
  unsigned __int64 Length; // rax
  Scaleform::Render::Text::ParagraphFormat *ppdestParaFmt; // [rsp+40h] [rbp+8h] BYREF
  Scaleform::Render::Text::TextFormat *ppdestTextFmt; // [rsp+58h] [rbp+20h] BYREF

  Length = Scaleform::Render::Text::StyledText::GetLength(this->pDocument.pObject);
  if ( Length
    && Scaleform::Render::Text::StyledText::GetTextAndParagraphFormat(
         this->pDocument.pObject,
         (const Scaleform::Render::Text::TextFormat **)&ppdestTextFmt,
         (const Scaleform::Render::Text::ParagraphFormat **)&ppdestParaFmt,
         Length - 1) )
  {
    Scaleform::Render::Text::StyledText::AppendString(
      this->pDocument.pObject,
      putf8Str,
      utf8Len,
      (Scaleform::Render::Text::StyledText::NewLinePolicy)((this->RTFlags & 8) == 0),
      ppdestTextFmt,
      ppdestParaFmt);
  }
  else
  {
    Scaleform::Render::Text::StyledText::AppendString(
      this->pDocument.pObject,
      putf8Str,
      utf8Len,
      (Scaleform::Render::Text::StyledText::NewLinePolicy)((this->RTFlags & 8) == 0));
  }
  this->OnDocumentChanged(this, 6u);
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

char __fastcall Scaleform::Render::Text::ParagraphFormatter::CheckWordWrap(
        Scaleform::Render::Text::ParagraphFormatter *this)
{
  int Pass; // ecx
  char v3; // bp
  const Scaleform::Render::Text::Paragraph::TextBuffer *pText; // rax
  const Scaleform::Render::Text::GFxLineCursor *v5; // rax
  unsigned __int64 StartIndex; // rbx
  unsigned __int64 v7; // rbx
  Scaleform::Render::Text::LineBuffer::GlyphEntry *pPrevGrec; // rax
  Scaleform::Render::Text::LineBuffer::Line *pTempLine; // rcx
  Scaleform::Render::Text::LineBuffer::GlyphInserter savedPos; // [rsp+20h] [rbp-188h] BYREF
  Scaleform::Render::Text::GFxLineCursor v12; // [rsp+40h] [rbp-168h] BYREF

  Pass = this->Pass;
  if ( (Pass != 1
     || (this->pDocView->Flags & 8) == 0
     || this->isSpace
     || (float)(this->LineCursor.Indent + this->LineCursor.LeftMargin + this->AdjLineWidth + this->NewLineWidth) <= (float)(this->TextRectWidth - (float)this->LineCursor.RightMargin))
    && (Pass != 2 || this->LineCursor.NumChars != this->RequestedWordWrapPos) )
  {
    return 0;
  }
  if ( Scaleform::Render::Text::ParagraphFormatter::HandleCustomWordWrap(this) )
    return 1;
  v3 = 0;
  this->NewLineWidth = 0;
  if ( this->WordWrapPoint.RightToLeft )
  {
    if ( this->WordWrapPoint.RLCharIter.Index < 0 )
      goto LABEL_14;
    goto LABEL_13;
  }
  pText = this->WordWrapPoint.CharIter.pText;
  if ( pText && this->WordWrapPoint.CharIter.CurTextIndex < pText->Size )
  {
LABEL_13:
    savedPos = this->WordWrapPoint.GlyphIns;
    Scaleform::Render::Text::LineBuffer::GlyphInserter::ResetTo(&this->LineCursor.GlyphIns, &savedPos);
    Scaleform::Render::Text::GFxLineCursor::operator=(&this->LineCursor, &this->WordWrapPoint);
    this->isSpace = 0;
    v3 = 1;
    this->DeltaText = 0;
  }
LABEL_14:
  Scaleform::Render::Text::GFxLineCursor::GFxLineCursor(&v12);
  Scaleform::Render::Text::GFxLineCursor::operator=(&this->WordWrapPoint, v5);
  Scaleform::Render::Text::GFxLineCursor::~GFxLineCursor(&v12);
  StartIndex = this->pParagraph->StartIndex;
  v7 = Scaleform::Render::Text::GFxLineCursor::operator*(&this->LineCursor)->Index + StartIndex;
  pPrevGrec = this->LineCursor.pPrevGrec;
  if ( pPrevGrec )
    pPrevGrec->Flags |= 8u;
  *(_QWORD *)&this->LineCursor.LastAdvance = 0i64;
  this->LineCursor.pPrevGrec = 0i64;
  Scaleform::Render::Text::ParagraphFormatter::FinalizeLine(this);
  this->LineCursor.pPrevGrec = 0i64;
  *(_QWORD *)&this->LineCursor.MaxFontDescent = 0i64;
  *(_QWORD *)&this->LineCursor.LineLength = 0i64;
  this->LineCursor.LastAdvance = 0.0;
  *(_WORD *)&this->LineCursor.LastKerning = 0;
  this->LineCursor.LineWidthWithoutTrailingSpaces = 0;
  *(_QWORD *)&this->LineCursor.NumOfSpaces = 0i64;
  this->LineCursor.NumChars = 0i64;
  this->LineCursor.LastCharCode = 0;
  pTempLine = this->pTempLine;
  this->TabStopsIndex = 0;
  if ( (pTempLine->MemSize & 0x80000000) == 0 )
  {
    pTempLine->Data32.TextPos = v7;
  }
  else
  {
    pTempLine->Data32.TextPos &= 0xFF000000;
    pTempLine->Data32.TextPos |= v7 & 0xFFFFFF;
  }
  if ( v3 )
  {
    this->LineCursor.LineWidth = 0;
    return 1;
  }
  return 0;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF> > *this)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF> >::TableType *pTable; // rbx
  Scaleform::RefCountVImpl *v5; // rcx

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      pTable = this->pTable;
      if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) != -2i64 )
      {
        v5 = *(Scaleform::RefCountVImpl **)((char *)&pTable[2].EntryCount + v2);
        if ( v5 )
          Scaleform::RefCountImpl::Release(v5);
        *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v2) = -2i64;
      }
      v2 += 24i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::Render::Text::DocView::ClearWordWrap(Scaleform::Render::Text::DocView *this)
{
  unsigned __int8 Flags; // al

  Flags = this->Flags;
  if ( (Flags & 8) != 0 )
  {
    this->RTFlags |= 2u;
    this->Flags = Flags & 0xF7;
  }
}

void __fastcall Scaleform::Render::Text::DocView::Close(Scaleform::Render::Text::DocView *this)
{
  Scaleform::Render::Text::DocView::DocumentText *pObject; // rcx
  Scaleform::Render::Text::DocView::DocumentListener *v3; // rcx
  Scaleform::RefCountVImpl *v4; // rcx

  if ( this->pDocument.pObject )
  {
    pObject = this->pDocument.pObject;
    if ( pObject )
      Scaleform::RefCountNTSImpl::Release(pObject);
    this->pDocument.pObject = 0i64;
    v3 = this->pDocumentListener.pObject;
    if ( v3 )
      Scaleform::RefCountNTSImpl::Release(v3);
    this->pDocumentListener.pObject = 0i64;
    v4 = (Scaleform::RefCountVImpl *)this->pEditorKit.pObject;
    if ( v4 )
      Scaleform::RefCountImpl::Release(v4);
    this->pEditorKit.pObject = 0i64;
    this->mLineBuffer.Geom.Flags |= 1u;
    Scaleform::Render::Text::LineBuffer::RemoveLines(&this->mLineBuffer, 0, this->mLineBuffer.Lines.Data.Size);
  }
}

char __fastcall Scaleform::Render::Text::DocView::ContainsNonLeftAlignment(Scaleform::Render::Text::DocView *this)
{
  Scaleform::Render::Text::DocView::DocumentText *pObject; // r9
  __int64 v2; // rax
  unsigned int Size; // er8
  Scaleform::Render::Text::Paragraph *v4; // rcx

  pObject = this->pDocument.pObject;
  v2 = 0i64;
  Size = pObject->Paragraphs.Data.Size;
  if ( !Size )
    return 0;
  while ( 1 )
  {
    v4 = (unsigned int)v2 >= (unsigned int)pObject->Paragraphs.Data.Size ? 0i64 : pObject->Paragraphs.Data.Data[v2].pPara;
    if ( (v4->pFormat.pObject->PresentMask & 0x600) != 0 )
      break;
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= Size )
      return 0;
  }
  return 1;
}

Scaleform::Render::Text::DocView::HighlightDescLoc *__fastcall Scaleform::Render::Text::DocView::CreateHighlighterManager(
        Scaleform::Render::Text::DocView *this)
{
  Scaleform::Render::Text::DocView::HighlightDescLoc *result; // rax
  Scaleform::Render::Text::DocView::HighlightDescLoc *v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  if ( this->pHighlight )
    return this->pHighlight;
  v4 = 74;
  result = (Scaleform::Render::Text::DocView::HighlightDescLoc *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                   Scaleform::Memory::pGlobalHeap,
                                                                   this,
                                                                   72i64,
                                                                   &v4);
  v3 = result;
  if ( result )
  {
    Scaleform::Render::Text::Highlighter::Highlighter(&result->HighlightManager);
    v3->HScrollOffset = -1.0;
    v3->FormatCounter = 0;
    result = v3;
    v3->VScrollOffset = -1.0;
    this->pHighlight = v3;
  }
  else
  {
    this->pHighlight = 0i64;
  }
  return result;
}

void __fastcall Scaleform::Render::Text::DocView::CreateVisibleTextLayout(
        Scaleform::Render::Text::DocView *this,
        Scaleform::Render::TextLayout::Builder *bld)
{
  Scaleform::Render::Text::DocView::HighlightDescLoc *pHighlight; // rax
  Scaleform::Render::Text::EditorKitBase *pObject; // rcx
  const Scaleform::Render::Text::CompositionStringBase *v6; // rax
  unsigned __int8 Flags; // cl
  __int16 v8; // r8
  __int16 v9; // ax
  unsigned __int8 RTFlags; // r9
  __int16 v11; // ax
  unsigned __int8 FlagsEx; // dl
  __int16 v13; // ax
  __int16 v14; // r8
  __int16 v15; // ax
  __int16 v16; // ax
  __int16 v17; // r8
  __int16 v18; // ax
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // cx
  Scaleform::Render::Text::DocView::HighlightDescLoc *v21; // r8
  Scaleform::Render::Text::EditorKitBase *v22; // rcx
  float y2; // xmm2_4
  float x2; // xmm1_4
  float x1; // eax
  Scaleform::Render::TextFieldParam params; // [rsp+20h] [rbp-40h] BYREF

  if ( (this->RTFlags & 0x40) == 0 )
  {
    pHighlight = this->pHighlight;
    if ( pHighlight )
    {
      if ( !pHighlight->HighlightManager.Valid )
      {
        pObject = this->pEditorKit.pObject;
        if ( pObject )
          v6 = pObject->GetCompositionString(pObject);
        else
          v6 = 0i64;
        Scaleform::Render::Text::Highlighter::UpdateGlyphIndices(&this->pHighlight->HighlightManager, v6);
        this->pHighlight->HighlightManager.Valid = 1;
      }
    }
  }
  params.TextParam.pFont = 0i64;
  *(_QWORD *)&params.TextParam.GlyphIndex = 0i64;
  *(_DWORD *)&params.TextParam.BlurY = 0x100000;
  params.ShadowParam.pFont = 0i64;
  *(_QWORD *)&params.ShadowParam.GlyphIndex = 0i64;
  *(_DWORD *)&params.ShadowParam.BlurY = 0x100000;
  *(_QWORD *)&params.ShadowColor = 0i64;
  params.ShadowOffsetY = 0.0;
  Scaleform::Render::Text::LoadTextFieldParamFromTextFilter(&params, &this->Filter);
  Flags = this->Flags;
  v8 = params.TextParam.Flags;
  v9 = params.ShadowParam.Flags;
  if ( (Flags & 0x40) != 0 )
  {
    v8 = params.TextParam.Flags | 1;
    v9 = params.ShadowParam.Flags | 1;
    params.ShadowParam.Flags |= 1u;
  }
  if ( Flags >= 0x80u )
  {
    v8 |= 2u;
    params.ShadowParam.Flags = v9 | 2;
  }
  RTFlags = this->RTFlags;
  if ( (RTFlags & 0x20) != 0 )
  {
    v8 = v8 & 0xFEFC | 0x101;
    v11 = -5;
  }
  else
  {
    v11 = -257;
  }
  FlagsEx = this->FlagsEx;
  v13 = v11 & v8;
  v14 = v13 & 0xFFF7;
  v15 = v13 | 8;
  if ( (FlagsEx & 1) != 0 )
    v14 = v15;
  v16 = v14;
  v17 = v14 & 0xFFEF;
  v18 = v16 | 0x10;
  if ( (FlagsEx & 2) != 0 )
    v17 = v18;
  v19 = v17 & 0xFFF | ((unsigned __int16)(int)this->Outline << 12) | 0x400;
  v20 = v17 & 0xBFF | ((unsigned __int16)(int)this->Outline << 12);
  v21 = this->pHighlight;
  if ( (FlagsEx & 8) != 0 )
    v20 = v19;
  params.TextParam.Flags = v20;
  if ( !v21 || (RTFlags & 0x40) != 0 )
    v21 = 0i64;
  Scaleform::Render::Text::LineBuffer::CreateVisibleTextLayout(&this->mLineBuffer, bld, &v21->HighlightManager, &params);
  if ( HIBYTE(this->BorderColor) || HIBYTE(this->BackgroundColor) )
    Scaleform::Render::TextLayout::Builder::SetBackground(bld, this->BackgroundColor, this->BorderColor);
  v22 = this->pEditorKit.pObject;
  if ( v22 )
    v22->AddDrawCursorInfo(v22, bld);
  if ( (this->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(this);
    this->RTFlags &= 0xFCu;
  }
  y2 = this->ViewRect.y2;
  x2 = this->ViewRect.x2;
  x1 = this->ViewRect.x1;
  bld->Bounds.y1 = this->ViewRect.y1;
  bld->Bounds.x2 = x2;
  bld->Bounds.y2 = y2;
  bld->Bounds.x1 = x1;
}

unsigned __int64 __fastcall Scaleform::Render::Text::DocView::EditCommand(
        Scaleform::Render::Text::DocView *this,
        Scaleform::Render::Text::DocView::CommandType cmdId,
        const void *command)
{
  unsigned __int64 inserted; // rbx
  unsigned __int64 v6; // rbx
  unsigned __int64 Length; // rax
  unsigned int MaxLength; // ecx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 *v31; // rax
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // r8
  Scaleform::Render::Text::DocView::DocumentText *pObject; // rcx
  char v43; // r15
  Scaleform::Render::Text::Paragraph *pPara; // r14
  Scaleform::Render::Text::ParagraphFormat *v45; // rdx
  unsigned __int16 PresentMask; // cx
  unsigned __int16 RightMargin; // ax
  const unsigned int *pTabStops; // rdx
  Scaleform::Render::Text::DocView::DocumentText *v49; // rcx
  Scaleform::Render::Text::Allocator *Allocator; // rax
  __int16 Indent; // r8
  unsigned __int16 v52; // ax
  const unsigned int *v53; // rdx
  Scaleform::Render::Text::DocView::DocumentText *v54; // rcx
  Scaleform::Render::Text::Allocator *v55; // rax
  unsigned __int64 *v56; // rdx
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator result; // [rsp+30h] [rbp-40h] BYREF
  Scaleform::Render::Text::ParagraphFormat fmt; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 pindexInParagraph; // [rsp+B8h] [rbp+48h] BYREF

  inserted = 0i64;
  switch ( cmdId )
  {
    case Cmd_InsertChar:
      if ( !this->MaxLength
        || Scaleform::Render::Text::StyledText::GetLength(this->pDocument.pObject) + 1 <= this->MaxLength )
      {
        inserted = Scaleform::Render::Text::StyledText::InsertString(
                     this->pDocument.pObject,
                     (const wchar_t *)command + 4,
                     *(_QWORD *)command,
                     1ui64,
                     NLP_ReplaceCRLF);
        this->OnDocumentChanged(this, 2u);
      }
      return inserted;
    case Cmd_InsertPlainText:
      v6 = *((_QWORD *)command + 2);
      Length = Scaleform::Render::Text::StyledText::GetLength(this->pDocument.pObject);
      MaxLength = this->MaxLength;
      if ( MaxLength && Length + v6 > MaxLength )
        v6 = MaxLength - Length;
      inserted = Scaleform::Render::Text::StyledText::InsertString(
                   this->pDocument.pObject,
                   *((const wchar_t **)command + 1),
                   *(_QWORD *)command,
                   v6,
                   (Scaleform::Render::Text::StyledText::NewLinePolicy)(((unsigned __int8)~this->Flags >> 1) & 2));
      goto LABEL_64;
    case Cmd_InsertStyledText:
      v9 = -1i64;
      if ( this->MaxLength )
      {
        v10 = Scaleform::Render::Text::StyledText::GetLength(this->pDocument.pObject);
        v11 = Scaleform::Render::Text::StyledText::GetLength(*((Scaleform::Render::Text::StyledText **)command + 1));
        v12 = this->MaxLength;
        if ( v11 + v10 > v12 )
          v9 = (unsigned int)v12 - v10;
      }
      inserted = Scaleform::Render::Text::StyledText::InsertStyledText(
                   this->pDocument.pObject,
                   *((const Scaleform::Render::Text::StyledText **)command + 1),
                   *(_QWORD *)command,
                   v9);
      goto LABEL_64;
    case Cmd_DeleteChar:
      Scaleform::Render::Text::StyledText::Remove(
        this->pDocument.pObject,
        *(_QWORD *)command,
        (unsigned __int64)(*(_QWORD *)command + 1i64) >= *(_QWORD *)command);
      inserted = 1i64;
      goto LABEL_64;
    case Cmd_DeleteText:
      v56 = (unsigned __int64 *)((char *)command + 8);
      v20 = *(_QWORD *)command;
      if ( *(_QWORD *)command <= *((_QWORD *)command + 1) )
      {
        v20 = *((_QWORD *)command + 1);
        v56 = (unsigned __int64 *)command;
      }
      v19 = *v56;
      inserted = v20 - v19;
      v21 = v20 - v19;
      goto LABEL_61;
    case Cmd_ReplaceTextByChar:
      v13 = (unsigned __int64 *)((char *)command + 8);
      v14 = *(_QWORD *)command;
      if ( *(_QWORD *)command <= *((_QWORD *)command + 1) )
      {
        v14 = *((_QWORD *)command + 1);
        v13 = (unsigned __int64 *)command;
      }
      v15 = *v13;
      if ( this->MaxLength )
      {
        v16 = Scaleform::Render::Text::StyledText::GetLength(this->pDocument.pObject);
        v17 = v16;
        v18 = v16;
        if ( v15 < v16 )
          v17 = v15;
        if ( v14 < v16 )
          v18 = v14;
        if ( v17 - v18 + v16 + 1 > this->MaxLength )
          return inserted;
      }
      inserted = Scaleform::Render::Text::StyledText::InsertString(
                   this->pDocument.pObject,
                   (const wchar_t *)command + 8,
                   v15,
                   1ui64,
                   (Scaleform::Render::Text::StyledText::NewLinePolicy)(((unsigned __int8)~this->Flags >> 1) & 2));
      v19 = v15 + 1;
      v20 = v14 + 1;
      v21 = v14 - v15;
LABEL_61:
      if ( v20 < v19 )
        v21 = 0i64;
      Scaleform::Render::Text::StyledText::Remove(this->pDocument.pObject, v19, v21);
      goto LABEL_64;
    case Cmd_ReplaceTextByPlainText:
      v22 = (unsigned __int64 *)((char *)command + 8);
      v23 = *(_QWORD *)command;
      if ( *(_QWORD *)command <= *((_QWORD *)command + 1) )
      {
        v23 = *((_QWORD *)command + 1);
        v22 = (unsigned __int64 *)command;
      }
      v24 = *v22;
      v25 = *((_QWORD *)command + 3);
      if ( this->MaxLength )
      {
        v26 = Scaleform::Render::Text::StyledText::GetLength(this->pDocument.pObject);
        v27 = this->MaxLength;
        v28 = v26;
        v29 = v26;
        if ( v24 < v26 )
          v28 = v24;
        if ( v23 < v26 )
          v29 = v23;
        v30 = v28 - v29 + v26;
        if ( v30 + *((_QWORD *)command + 3) > v27 )
          v25 = (unsigned int)v27 - v30;
      }
      inserted = Scaleform::Render::Text::StyledText::InsertString(
                   this->pDocument.pObject,
                   *((const wchar_t **)command + 2),
                   v24,
                   v25,
                   (Scaleform::Render::Text::StyledText::NewLinePolicy)(((unsigned __int8)~this->Flags >> 1) & 2));
      v20 = v23 + inserted;
      v19 = v24 + inserted;
      v21 = v23 - v24;
      goto LABEL_61;
    case Cmd_ReplaceTextByStyledText:
      v31 = (unsigned __int64 *)((char *)command + 8);
      v32 = *(_QWORD *)command;
      if ( *(_QWORD *)command <= *((_QWORD *)command + 1) )
      {
        v32 = *((_QWORD *)command + 1);
        v31 = (unsigned __int64 *)command;
      }
      v33 = *v31;
      v34 = -1i64;
      if ( this->MaxLength )
      {
        v35 = Scaleform::Render::Text::StyledText::GetLength(this->pDocument.pObject);
        v37 = v35;
        v38 = v35;
        if ( v33 < v35 )
          v37 = v33;
        if ( v32 < v35 )
          v38 = v32;
        v39 = v35 + v37 - v38;
        v36 = this->MaxLength;
        if ( v39
           + Scaleform::Render::Text::StyledText::GetLength(*((Scaleform::Render::Text::StyledText **)command + 2)) > v36 )
          v34 = this->MaxLength - v39;
      }
      inserted = Scaleform::Render::Text::StyledText::InsertStyledText(
                   this->pDocument.pObject,
                   *((const Scaleform::Render::Text::StyledText **)command + 2),
                   v33,
                   v34);
      v40 = v32 - v33;
      if ( v32 + inserted < inserted + v33 )
        v40 = 0i64;
      Scaleform::Render::Text::StyledText::Remove(this->pDocument.pObject, inserted + v33, v40);
      this->OnDocumentChanged(this, 2u);
      return inserted;
    case Cmd_BackspaceChar:
      v41 = *(_QWORD *)command;
      pObject = this->pDocument.pObject;
      inserted = 1i64;
      pindexInParagraph = 0i64;
      v43 = 0;
      Scaleform::Render::Text::StyledText::GetParagraphByIndex(pObject, &result, v41, &pindexInParagraph);
      if ( !result.pArray )
        goto LABEL_55;
      if ( result.CurIndex < 0 )
        goto LABEL_55;
      if ( result.CurIndex >= SLODWORD(result.pArray->Data.Size) )
        goto LABEL_55;
      if ( pindexInParagraph )
        goto LABEL_55;
      pPara = result.pArray->Data.Data[result.CurIndex].pPara;
      v45 = pPara->pFormat.pObject;
      if ( !v45 )
        goto LABEL_55;
      PresentMask = v45->PresentMask;
      if ( (PresentMask & 0x8080) == 0x8080 )
      {
        fmt.BlockIndent = v45->BlockIndent;
        fmt.Indent = v45->Indent;
        fmt.Leading = v45->Leading;
        fmt.LeftMargin = v45->LeftMargin;
        RightMargin = v45->RightMargin;
        pTabStops = v45->pTabStops;
        fmt.PresentMask = PresentMask;
        fmt.RightMargin = RightMargin;
        fmt.pAllocator = 0i64;
        fmt.RefCount = 1;
        fmt.pTabStops = 0i64;
        Scaleform::Render::Text::ParagraphFormat::CopyTabStops(&fmt, pTabStops);
        v49 = this->pDocument.pObject;
        fmt.PresentMask = fmt.PresentMask & 0x7F7F | 0x80;
        Allocator = Scaleform::Render::Text::StyledText::GetAllocator(v49);
        Scaleform::Render::Text::Paragraph::SetFormat(pPara, Allocator, &fmt);
        Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&fmt);
        inserted = 0i64;
      }
      else
      {
        Indent = v45->Indent;
        if ( *(_DWORD *)&v45->BlockIndent )
        {
          fmt.BlockIndent = v45->BlockIndent;
          fmt.Leading = v45->Leading;
          fmt.LeftMargin = v45->LeftMargin;
          v52 = v45->RightMargin;
          v53 = v45->pTabStops;
          fmt.PresentMask = PresentMask;
          fmt.RightMargin = v52;
          fmt.pAllocator = 0i64;
          fmt.RefCount = 1;
          fmt.pTabStops = 0i64;
          fmt.Indent = Indent;
          Scaleform::Render::Text::ParagraphFormat::CopyTabStops(&fmt, v53);
          v54 = this->pDocument.pObject;
          *(_DWORD *)&fmt.BlockIndent = 0;
          fmt.PresentMask |= 6u;
          v55 = Scaleform::Render::Text::StyledText::GetAllocator(v54);
          Scaleform::Render::Text::Paragraph::SetFormat(pPara, v55, &fmt);
          v43 = 1;
          Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&fmt);
        }
        else
        {
LABEL_55:
          if ( *(_QWORD *)command )
          {
            Scaleform::Render::Text::StyledText::Remove(
              this->pDocument.pObject,
              *(_QWORD *)command - 1i64,
              *(_QWORD *)command >= (unsigned __int64)(*(_QWORD *)command - 1i64));
            return inserted;
          }
        }
        inserted = 0i64;
        if ( !v43 )
          return inserted;
      }
LABEL_64:
      this->OnDocumentChanged(this, 2u);
      return inserted;
    default:
      return inserted;
  }
}

void __fastcall Scaleform::Render::Text::ParagraphFormatter::FinalizeLine(
        Scaleform::Render::Text::ParagraphFormatter *this)
{
  float LastAdvance; // xmm0_4
  bool v3; // cc
  double v4; // xmm0_8
  double v5; // xmm0_8
  Scaleform::Render::Text::LineBuffer::GlyphEntry *pPrevGrec; // rcx
  int v7; // er8
  const Scaleform::Render::Text::ParagraphFormat *pParaFormat; // rcx
  int RightMargin; // eax
  float MaxFontLeading; // xmm1_4
  float v11; // xmm0_4
  double v12; // xmm0_8
  double v13; // xmm0_8
  unsigned int v14; // er15
  double v15; // xmm0_8
  double v16; // xmm0_8
  int LineWidth; // eax
  int LineWidthWithoutTrailingSpaces; // eax
  __int64 GlyphIndex; // rdi
  __int64 FormatDataIndex; // r13
  Scaleform::Render::Text::LineBuffer::Iterator *pLinesIter; // rbx
  signed int Size; // edx
  Scaleform::Render::Text::LineBuffer::Line *inserted; // rax
  signed int CurrentPos; // edx
  Scaleform::Render::Text::LineBuffer::Line *v25; // r14
  int MemSize; // edx
  unsigned int UniqueId; // er8
  bool v28; // cl
  unsigned __int16 ModCounter; // r8
  Scaleform::Render::Text::LineBuffer::Line *pTempLine; // rcx
  __int64 v31; // rdx
  int v32; // eax
  char *v33; // rdx
  __int64 v34; // rcx
  Scaleform::Render::Text::LineBuffer::FormatDataEntry *FormatData; // rbx
  Scaleform::Render::Text::LineBuffer::FormatDataEntry *v36; // rax
  Scaleform::Render::Text::LineBuffer::Line *v37; // rcx
  int v38; // eax
  int TextPos; // ecx
  unsigned int LineLength; // ecx
  int MaxFontAscent; // eax
  bool v42; // cl
  unsigned int NumOfSpaces; // er8
  unsigned int NumOfTrailingSpaces; // edx
  const Scaleform::Render::Text::ParagraphFormat *v45; // rax
  int v46; // ebx
  unsigned int v47; // er12
  unsigned int GlyphsCount; // edi
  __int64 v49; // r13
  Scaleform::Render::Text::LineBuffer::GlyphEntry *pGlyphs; // rcx
  unsigned __int16 Flags; // dx
  int Advance; // eax
  int v53; // eax
  int v54; // er8
  int NextOffsetY; // ecx
  unsigned int v56; // ecx
  signed int v57; // ecx
  int v58; // eax
  signed int v59; // ecx
  int v60; // eax
  int LeftMargin; // ecx
  float v62; // xmm1_4
  double v63; // xmm0_8
  double v64; // xmm0_8
  bool v65; // sf
  int v66; // eax
  signed int v67; // ecx
  int v68; // eax
  float TextRectWidth; // xmm0_4
  double v70; // xmm0_8
  double v71; // xmm0_8
  double v72; // xmm0_8
  double v73; // xmm0_8
  int ParaWidth; // ecx
  int v75; // ecx
  double v76; // xmm1_8
  double v77; // xmm1_8
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::Text::LineBuffer::GlyphIterator v79; // [rsp+38h] [rbp-89h] BYREF
  int v80; // [rsp+128h] [rbp+67h]

  LastAdvance = this->LineCursor.LastAdvance;
  v3 = LastAdvance <= 0.0;
  v4 = LastAdvance;
  if ( v3 )
    v5 = v4 - 0.5;
  else
    v5 = v4 + 0.5;
  pPrevGrec = this->LineCursor.pPrevGrec;
  v7 = (int)v5;
  if ( pPrevGrec )
  {
    if ( v7 < 0 )
    {
      pPrevGrec->Flags |= 0x40u;
      pPrevGrec->Advance = abs32(v7);
    }
    else
    {
      pPrevGrec->Flags &= ~0x40u;
      pPrevGrec->Advance = v7;
    }
  }
  if ( this->LineCursor.pLastFont.pObject )
    this->LineCursor.LineWidth += this->LineCursor.LastGlyphWidth;
  else
    this->LineCursor.LineWidth += v7;
  pParaFormat = this->pParaFormat;
  if ( (pParaFormat->PresentMask & 1) != 0
    && ((pParaFormat->PresentMask & 0x600) == 512
     || (pParaFormat->PresentMask & 1) != 0 && (pParaFormat->PresentMask & 0x600) == 1536) )
  {
    RightMargin = this->LineCursor.RightMargin;
    this->LineCursor.LineWidth += RightMargin;
    this->LineCursor.LineWidthWithoutTrailingSpaces += RightMargin;
  }
  if ( (pParaFormat->PresentMask & 8) != 0 )
    MaxFontLeading = (float)pParaFormat->Leading * 20.0;
  else
    MaxFontLeading = this->LineCursor.MaxFontLeading;
  v11 = this->LineCursor.MaxFontDescent + this->LineCursor.MaxFontAscent;
  v3 = v11 <= 0.0;
  v12 = v11;
  if ( v3 )
    v13 = v12 - 0.5;
  else
    v13 = v12 + 0.5;
  v14 = (int)v13;
  v15 = MaxFontLeading;
  if ( MaxFontLeading <= 0.0 )
    v16 = v15 - 0.5;
  else
    v16 = v15 + 0.5;
  LineWidth = this->LineCursor.LineWidth;
  if ( LineWidth < 0 )
    LineWidth = 0;
  this->LineCursor.LineWidth = LineWidth;
  LineWidthWithoutTrailingSpaces = this->LineCursor.LineWidthWithoutTrailingSpaces;
  if ( LineWidthWithoutTrailingSpaces < 0 )
    LineWidthWithoutTrailingSpaces = 0;
  this->LineCursor.LineWidthWithoutTrailingSpaces = LineWidthWithoutTrailingSpaces;
  v80 = (int)v16;
  if ( this->LineCursor.RightToLeft )
    Scaleform::Render::Text::ParagraphFormatter::TreatBidirectionalTextInLine(this);
  GlyphIndex = this->LineCursor.GlyphIns.GlyphIndex;
  FormatDataIndex = this->LineCursor.GlyphIns.FormatDataIndex;
  if ( (this->pDocView->AlignProps & 0x30) != 0
    || this->LineCursor.LineLength > 0xFF
    || (unsigned int)GlyphIndex > 0xFF
    || (unsigned int)((int)v16 + 128) > 0xFF
    || v14 > 0xFFFF
    || this->LineCursor.LineWidth > 0xFFFFu )
  {
    pLinesIter = this->pLinesIter;
    CurrentPos = pLinesIter->CurrentPos;
    if ( CurrentPos < 0 )
      CurrentPos = pLinesIter->pLineBuffer->Lines.Data.Size;
    inserted = Scaleform::Render::Text::LineBuffer::InsertNewLine(
                 pLinesIter->pLineBuffer,
                 CurrentPos,
                 GlyphIndex,
                 FormatDataIndex,
                 Line32);
  }
  else
  {
    pLinesIter = this->pLinesIter;
    Size = pLinesIter->CurrentPos;
    if ( Size < 0 )
      Size = pLinesIter->pLineBuffer->Lines.Data.Size;
    inserted = Scaleform::Render::Text::LineBuffer::InsertNewLine(
                 pLinesIter->pLineBuffer,
                 Size,
                 GlyphIndex,
                 FormatDataIndex,
                 Line8);
  }
  ++pLinesIter->CurrentPos;
  v25 = inserted;
  MemSize = inserted->MemSize;
  UniqueId = this->LineCursor.pParagraph->UniqueId;
  v28 = (inserted->MemSize & 0x80000000) != 0;
  if ( (inserted->MemSize & 0x80000000) == 0 )
    inserted->Data32.ParagraphId = UniqueId;
  else
    inserted->Data32.GlyphsCount = UniqueId;
  ModCounter = this->LineCursor.pParagraph->ModCounter;
  if ( v28 )
    inserted->Data8.ParagraphModId = ModCounter;
  else
    inserted->Data32.ParagraphModId = ModCounter;
  if ( this->LineCursor.RightToLeft )
    inserted->MemSize = MemSize | 0x20000000;
  pTempLine = this->pTempLine;
  v31 = 42i64;
  v32 = inserted->MemSize;
  if ( (pTempLine->MemSize & 0x80000000) != 0 )
    v31 = 30i64;
  v33 = (char *)pTempLine + v31;
  v34 = 42i64;
  if ( v32 < 0 )
    v34 = 30i64;
  memmove((char *)v25 + v34, v33, 8 * GlyphIndex);
  FormatData = Scaleform::Render::Text::LineBuffer::Line::GetFormatData(this->pTempLine);
  v36 = Scaleform::Render::Text::LineBuffer::Line::GetFormatData(v25);
  memmove(v36, FormatData, 8 * FormatDataIndex);
  v37 = this->pTempLine;
  v38 = v37->MemSize;
  TextPos = v37->Data32.TextPos;
  if ( v38 < 0 )
  {
    TextPos &= 0xFFFFFFu;
    if ( TextPos == 0xFFFFFF )
      TextPos = -1;
  }
  if ( (v25->MemSize & 0x80000000) == 0 )
  {
    v25->Data32.TextPos = TextPos;
  }
  else
  {
    v25->Data32.TextPos &= 0xFF000000;
    v25->Data32.TextPos |= TextPos & 0xFFFFFF;
  }
  LineLength = this->LineCursor.LineLength;
  if ( (v25->MemSize & 0x80000000) == 0 )
    v25->Data32.TextLength = LineLength;
  else
    HIBYTE(v25->Data8.TextPosAndLength) = LineLength;
  MaxFontAscent = (int)this->LineCursor.MaxFontAscent;
  v42 = (v25->MemSize & 0x80000000) != 0;
  if ( (v25->MemSize & 0x80000000) == 0 )
    v25->Data32.BaseLineOffset = MaxFontAscent;
  else
    v25->Data8.BaseLineOffset = MaxFontAscent;
  if ( !this->LineCursor.LineHasNewLine && (this->pDocView->Flags & 8) != 0 )
  {
    NumOfSpaces = this->LineCursor.NumOfSpaces;
    NumOfTrailingSpaces = this->LineCursor.NumOfTrailingSpaces;
    if ( NumOfSpaces > NumOfTrailingSpaces )
    {
      v45 = this->pParaFormat;
      if ( (v45->PresentMask & 1) != 0 && (v45->PresentMask & 0x600) == 1024 )
      {
        v46 = (int)(float)(this->TextRectWidth - 30.0)
            - this->LineCursor.RightMargin
            - this->LineCursor.LeftMargin
            - this->LineCursor.Indent
            - this->LineCursor.LineWidthWithoutTrailingSpaces;
        if ( v46 > 0 )
        {
          v47 = v46 / (NumOfSpaces - NumOfTrailingSpaces);
          if ( v42 )
            GlyphsCount = v25->Data8.GlyphsCount;
          else
            GlyphsCount = v25->Data32.GlyphsCount;
          v49 = 42i64;
          if ( v42 )
            v49 = 30i64;
          v79.HighlighterIter.CurDesc.StartPos = -1i64;
          v79.HighlighterIter.CurDesc.Offset = -1i64;
          memset(&v79.HighlighterIter, 0, 24);
          v79.pGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v25 + v49);
          v79.HighlighterIter.CurDesc.Length = 0i64;
          memset(&v79.HighlighterIter.CurDesc.AdjStartPos, 0, 33);
          memset(&v79.ColorV, 0, 40);
          v79.pNextFormatData = Scaleform::Render::Text::LineBuffer::Line::GetFormatData(v25);
          v79.pEndGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v25 + 8 * GlyphsCount + v49);
          Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(&v79);
          while ( 1 )
          {
            while ( 1 )
            {
              pGlyphs = v79.pGlyphs;
              if ( !v79.pGlyphs || v79.pGlyphs >= v79.pEndGlyphs )
              {
                this->LineCursor.LineWidth += v46;
                if ( v79.pImage.pObject )
                  Scaleform::RefCountNTSImpl::Release(v79.pImage.pObject);
                if ( v79.pFontHandle.pObject )
                  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v79.pFontHandle.pObject);
                goto LABEL_92;
              }
              Flags = v79.pGlyphs->Flags;
              if ( (Flags & 2) != 0 )
                break;
LABEL_87:
              Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&v79);
            }
            Advance = v79.pGlyphs->Advance;
            if ( (Flags & 0x40) != 0 )
              Advance = -Advance;
            v53 = v47 + Advance;
            if ( v53 < 0 )
            {
              v79.pGlyphs->Flags |= 0x40u;
              pGlyphs->Advance = abs32(v53);
              goto LABEL_87;
            }
            v79.pGlyphs->Flags &= ~0x40u;
            pGlyphs->Advance = v53;
            Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&v79);
          }
        }
      }
    }
  }
LABEL_92:
  v54 = this->LineCursor.Indent + this->LineCursor.LeftMargin;
  NextOffsetY = this->NextOffsetY;
  v25->Data32.OffsetX = v54;
  v25->Data32.OffsetY = NextOffsetY;
  v56 = v25->MemSize;
  if ( (v25->MemSize & 0x80000000) == 0 )
    v25->Data32.Leading = v80;
  else
    v25->Data8.Leading = v80;
  if ( ((this->pParaFormat->PresentMask >> 9) & 3) != 1 )
  {
    if ( ((this->pParaFormat->PresentMask >> 9) & 3) != 3 )
    {
      v57 = v56 & 0xE7FFFFFF;
      v25->MemSize = v57;
      v58 = this->LineCursor.LineWidth;
      if ( v57 >= 0 )
      {
        v25->Data32.Width = v58;
        v25->Data32.Height = v14;
      }
      else
      {
        v25->Data8.Width = v58;
        v25->Data8.Height = v14;
      }
      goto LABEL_124;
    }
    v59 = v56 & 0xE7FFFFFF | 0x10000000;
    v25->MemSize = v59;
    v60 = this->LineCursor.LineWidthWithoutTrailingSpaces;
    if ( v59 >= 0 )
    {
      v25->Data32.Width = v60;
      v25->Data32.Height = v14;
    }
    else
    {
      v25->Data8.Width = v60;
      v25->Data8.Height = v14;
    }
    LeftMargin = this->LineCursor.LeftMargin;
    v62 = (float)((float)(this->TextRectWidth - (float)LeftMargin) * 0.5)
        - (float)(this->LineCursor.LineWidthWithoutTrailingSpaces / 2);
    v63 = v62;
    if ( v62 <= 0.0 )
      v64 = v63 - 0.5;
    else
      v64 = v63 + 0.5;
    v65 = LeftMargin + (int)v64 < 0;
    v66 = LeftMargin + (int)v64;
    goto LABEL_119;
  }
  v67 = v56 & 0xE7FFFFFF | 0x8000000;
  v25->MemSize = v67;
  v68 = this->LineCursor.LineWidthWithoutTrailingSpaces;
  if ( v67 >= 0 )
  {
    v25->Data32.Width = v68;
    v25->Data32.Height = v14;
  }
  else
  {
    v25->Data8.Width = v68;
    v25->Data8.Height = v14;
  }
  TextRectWidth = this->TextRectWidth;
  if ( !this->LineCursor.RightToLeft )
  {
    v3 = TextRectWidth <= 0.0;
    v72 = TextRectWidth;
    if ( v3 )
      v73 = v72 - 0.5;
    else
      v73 = v72 + 0.5;
    v65 = (int)v73 - this->LineCursor.LineWidthWithoutTrailingSpaces < 0;
    v66 = (int)v73 - this->LineCursor.LineWidthWithoutTrailingSpaces;
LABEL_119:
    if ( v65 )
      v66 = 0;
    goto LABEL_121;
  }
  v3 = TextRectWidth <= 0.0;
  v70 = TextRectWidth;
  if ( v3 )
    v71 = v70 - 0.5;
  else
    v71 = v70 + 0.5;
  v66 = (int)v71 - this->LineCursor.LineWidthWithoutTrailingSpaces;
LABEL_121:
  v25->Data32.OffsetX = v66;
  if ( (this->pDocView->Flags & 1) != 0 || (this->pDocView->AlignProps & 0x30) != 0 )
    this->NeedRecenterLines = 1;
LABEL_124:
  ParaWidth = v54 + this->LineCursor.LineWidth;
  if ( ParaWidth < this->ParaWidth )
    ParaWidth = this->ParaWidth;
  this->ParaWidth = ParaWidth;
  v75 = this->NextOffsetY;
  this->ParaHeight = v14 + v75 - this->ParaYOffset;
  v76 = (double)(int)(v80 + v14);
  if ( v76 <= 0.0 )
    v77 = v76 - 0.5;
  else
    v77 = v76 + 0.5;
  this->LineCursor.Indent = 0;
  this->NextOffsetY = v75 + (int)v77;
  this->LineCursor.GlyphIns.FormatDataIndex = 0;
  this->LineCursor.GlyphIns.GlyphIndex = 0;
  this->LineCursor.LastColor = 0;
  pObject = (Scaleform::RefCountVImpl *)this->LineCursor.pLastFont.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->LineCursor.pLastFont.pObject = 0i64;
}

Scaleform::Render::Text::FontHandle *__fastcall Scaleform::Render::Text::DocView::FindFont(
        Scaleform::Render::Text::DocView *this,
        Scaleform::Render::Text::DocView::FindFontInfo *pfontInfo,
        bool quietMode)
{
  char v3; // di
  const Scaleform::Render::Text::TextFormat *pPrevFormat; // rdx
  Scaleform::Render::Text::TextFormat **p_pCurrentFormat; // r15
  Scaleform::HashIdentityDH<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,74,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> > *pFontCache; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF> > v9; // rbx
  signed __int64 v10; // rax
  unsigned __int64 *v11; // rcx
  Scaleform::RefCountVImpl **v12; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::Text::TextFormat *pCurrentFormat; // rcx
  unsigned __int16 PresentMask; // bp
  Scaleform::RefCountVImpl *FontHandle; // rax
  Scaleform::Render::Text::FontHandle *v17; // rbx
  unsigned __int8 FormatFlags; // si
  unsigned __int8 Flags; // bl
  Scaleform::StringDH *FontList; // rax
  _BOOL8 v21; // r9
  Scaleform::String::DataDesc *pData; // rbp
  __int64 v23; // rax
  Scaleform::RefCountVImpl *v24; // rcx
  Scaleform::Render::Text::FontHandle *v25; // rbx
  unsigned __int8 v26; // bl
  unsigned __int8 v27; // si
  bool v28; // bp
  Scaleform::StringDH *v29; // rax
  _BOOL8 v30; // r9
  __int64 v31; // rax
  Scaleform::Render::Text::DocView::DocumentListener *v32; // rcx
  Scaleform::RefCountVImpl *v33; // rdi
  const Scaleform::String *v34; // rax
  char v35; // si
  void *v36; // rbx
  void *v37; // rbx
  char *v38; // rsi
  unsigned __int64 v39; // rbx
  Scaleform::StringDH *v40; // rax
  Scaleform::String::DataDesc *v41; // rbx
  volatile int *v42; // rbx
  Scaleform::RefCountVImpl *v43; // rcx
  Scaleform::Render::Text::FontHandle *result; // rax
  __int64 v45; // [rsp+30h] [rbp-78h] BYREF
  int v46; // [rsp+38h] [rbp-70h] BYREF
  Scaleform::StringBuffer v47; // [rsp+40h] [rbp-68h] BYREF
  Scaleform::String v48; // [rsp+B8h] [rbp+10h] BYREF
  bool v49; // [rsp+C0h] [rbp+18h]
  Scaleform::String v50; // [rsp+C8h] [rbp+20h] BYREF

  v49 = quietMode;
  v3 = quietMode;
  LODWORD(v48.pData) = 0;
  if ( pfontInfo->pCurrentFont.pObject )
  {
    pPrevFormat = pfontInfo->pPrevFormat;
    if ( pPrevFormat )
    {
      p_pCurrentFormat = (Scaleform::Render::Text::TextFormat **)&pfontInfo->pCurrentFormat;
      if ( Scaleform::Render::Text::TextFormat::IsFontSame(
             (Scaleform::Render::Text::TextFormat *)pfontInfo->pCurrentFormat,
             pPrevFormat) )
      {
        goto LABEL_51;
      }
    }
  }
  pFontCache = pfontInfo->pFontCache;
  if ( pfontInfo->pFontCache )
  {
    v9.pTable = pFontCache->mHash.pTable;
    p_pCurrentFormat = (Scaleform::Render::Text::TextFormat **)&pfontInfo->pCurrentFormat;
    if ( pFontCache->mHash.pTable
      && (v10 = Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF>>::findIndexCore<Scaleform::Render::Text::TextFormat const *>(
                  &pFontCache->mHash,
                  &pfontInfo->pCurrentFormat,
                  (unsigned __int64)*p_pCurrentFormat & v9.pTable->SizeMask),
          v10 >= 0) )
    {
      v11 = &v9.pTable[1].SizeMask + 3 * v10;
    }
    else
    {
      v11 = 0i64;
    }
    v12 = (Scaleform::RefCountVImpl **)(v11 + 1);
    if ( !v11 )
      v12 = 0i64;
    if ( v12 )
    {
      if ( *v12 )
        Scaleform::Render::RenderBuffer::AddRef(*v12);
      pObject = (Scaleform::RefCountVImpl *)pfontInfo->pCurrentFont.pObject;
      if ( pObject )
        Scaleform::RefCountImpl::Release(pObject);
      pfontInfo->pCurrentFont.pObject = (Scaleform::Render::Text::FontHandle *)*v12;
      goto LABEL_51;
    }
  }
  pCurrentFormat = (Scaleform::Render::Text::TextFormat *)pfontInfo->pCurrentFormat;
  p_pCurrentFormat = (Scaleform::Render::Text::TextFormat **)&pfontInfo->pCurrentFormat;
  PresentMask = pCurrentFormat->PresentMask;
  if ( (PresentMask & 0x800) != 0 )
  {
    FontHandle = Scaleform::Render::Text::TextFormat::GetFontHandle(pCurrentFormat);
    v17 = (Scaleform::Render::Text::FontHandle *)FontHandle;
    if ( FontHandle )
      Scaleform::Render::RenderBuffer::AddRef(FontHandle);
  }
  else
  {
    v48.pData = (Scaleform::String::DataDesc *)this->pFontManager.pObject;
    if ( (PresentMask & 4) != 0 )
    {
      FormatFlags = pCurrentFormat->FormatFlags;
      Flags = this->Flags;
      FontList = Scaleform::Render::Text::TextFormat::GetFontList(pCurrentFormat);
      v21 = (PresentMask & 0x1000) == 0;
      pData = v48.pData;
      v23 = (*(__int64 (__fastcall **)(Scaleform::String::DataDesc *, unsigned __int64, _QWORD, _BOOL8, _QWORD))(*(_QWORD *)v48.HeapTypeBits + 8i64))(
              v48.pData,
              (FontList->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12,
              ((FormatFlags & 1) != 0 ? 2 : 0) | ((FormatFlags & 2 | Flags & 0x20u) >> 1),
              v21,
              0i64);
      v24 = (Scaleform::RefCountVImpl *)pfontInfo->pCurrentFont.pObject;
      v25 = (Scaleform::Render::Text::FontHandle *)v23;
      if ( v24 )
        Scaleform::RefCountImpl::Release(v24);
      v3 = v49;
      pfontInfo->pCurrentFont.pObject = v25;
    }
    else
    {
      pData = v48.pData;
    }
    if ( pfontInfo->pCurrentFont.pObject )
      goto LABEL_49;
    if ( !v3 && (this->RTFlags & 0x10) == 0 && this->pLog.pObject )
    {
      v46 = 1;
      Scaleform::StringBuffer::StringBuffer(&v47, Scaleform::Memory::pGlobalHeap);
      v26 = this->Flags;
      v27 = (*p_pCurrentFormat)->FormatFlags;
      v28 = ((*p_pCurrentFormat)->PresentMask & 0x1000) != 0;
      v29 = Scaleform::Render::Text::TextFormat::GetFontList(*p_pCurrentFormat);
      v30 = !v28;
      pData = v48.pData;
      v31 = (*(__int64 (__fastcall **)(Scaleform::String::DataDesc *, unsigned __int64, _QWORD, _BOOL8, int *))(*(_QWORD *)v48.HeapTypeBits + 8i64))(
              v48.pData,
              (v29->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12,
              ((v27 & 1) != 0 ? 2 : 0) | ((v27 & 2 | v26 & 0x20u) >> 1),
              v30,
              &v46);
      v32 = this->pDocumentListener.pObject;
      v33 = (Scaleform::RefCountVImpl *)v31;
      if ( v32 )
      {
        v34 = v32->GetCharacterPath(v32, (Scaleform::String *)&v45);
        v35 = 1;
      }
      else
      {
        Scaleform::String::String(&v48);
        v35 = 2;
      }
      Scaleform::String::String(&v50, v34);
      if ( (v35 & 2) != 0 )
      {
        v36 = (void *)(v48.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
        v35 &= ~2u;
        if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                             (volatile int *)((v48.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                             -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v36);
      }
      if ( (v35 & 1) != 0 )
      {
        v37 = (void *)(v45 & 0xFFFFFFFFFFFFFFFCui64);
        if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                             (volatile int *)((v45 & 0xFFFFFFFFFFFFFFFCui64) + 8),
                             -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v37);
      }
      v38 = (char *)&pnewText;
      if ( v47.pData )
        v38 = v47.pData;
      v39 = v50.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
      v40 = Scaleform::Render::Text::TextFormat::GetFontList(*p_pCurrentFormat);
      Scaleform::Log::LogError(
        this->pLog.pObject,
        "Missing font \"%s\" in \"%s\". Search log:\n%s",
        (const char *)((v40->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
        (const char *)(v39 + 12),
        v38);
      v41 = v50.pData;
      this->RTFlags |= 0x10u;
      v42 = (volatile int *)((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFFCui64);
      if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v42 + 2, -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v42);
      if ( v33 )
        Scaleform::RefCountImpl::Release(v33);
      Scaleform::StringBuffer::~StringBuffer(&v47);
    }
    v17 = (Scaleform::Render::Text::FontHandle *)(*(__int64 (__fastcall **)(Scaleform::String::DataDesc *))(pData->Size + 16))(pData);
  }
  v43 = (Scaleform::RefCountVImpl *)pfontInfo->pCurrentFont.pObject;
  if ( v43 )
    Scaleform::RefCountImpl::Release(v43);
  pfontInfo->pCurrentFont.pObject = v17;
LABEL_49:
  if ( pfontInfo->pFontCache )
    Scaleform::Hash<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>,Scaleform::AllocatorDH<Scaleform::Render::Text::TextFormat const *,74>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF>,Scaleform::HashSetDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeAltHashF,74,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF>>>::Set(
      pfontInfo->pFontCache,
      &pfontInfo->pCurrentFormat,
      &pfontInfo->pCurrentFont);
LABEL_51:
  result = pfontInfo->pCurrentFont.pObject;
  pfontInfo->pPrevFormat = *p_pCurrentFormat;
  return result;
}

Scaleform::Render::Text::ImageDesc *__fastcall Scaleform::Render::Text::DocView::ImageSubstitutor::FindImageDesc(
        Scaleform::Render::Text::DocView::ImageSubstitutor *this,
        const wchar_t *pstr,
        unsigned __int64 maxlen,
        unsigned __int64 *ptextLen)
{
  __int64 Size; // r10
  unsigned __int64 v5; // rbp
  unsigned __int64 *v7; // rsi
  Scaleform::Render::Text::DocView::ImageSubstitutor *v9; // r8
  Scaleform::Render::Text::DocView::ImageSubstitutor::Element *Data; // r12
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  Scaleform::Render::Text::DocView::ImageSubstitutor::Element *v13; // rcx
  __int64 SubStringLen; // rdx
  int v15; // er14
  char *v16; // r11
  int v17; // eax
  int v18; // er8
  int v19; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // r10
  unsigned __int16 *v22; // rdx
  __int64 v23; // rcx
  char *v24; // r15
  int v25; // eax
  int v26; // er8
  int v27; // edi
  int v28; // eax

  Size = this->Elements.Data.Size;
  v5 = 0i64;
  v7 = ptextLen;
  v9 = this;
  if ( Size > 0 )
  {
    Data = this->Elements.Data.Data;
    do
    {
      v11 = maxlen;
      v12 = (Size >> 1) + v5;
      v13 = &Data[v12];
      SubStringLen = v13->SubStringLen;
      if ( maxlen )
      {
        v15 = v13->SubStringLen;
        v16 = (char *)((char *)pstr - (char *)v13);
        do
        {
          v17 = *(unsigned __int16 *)((char *)v13->SubString + (_QWORD)v16);
          v18 = v13->SubString[0];
          v13 = (Scaleform::Render::Text::DocView::ImageSubstitutor::Element *)((char *)v13 + 2);
          if ( !--v11 || !v17 )
            break;
          if ( v17 != v18 )
            goto LABEL_12;
          --SubStringLen;
        }
        while ( SubStringLen );
        if ( v17 == v18 && SubStringLen )
        {
          v19 = maxlen - v15;
          goto LABEL_14;
        }
LABEL_12:
        v19 = v17 - v18;
      }
      else
      {
        v19 = -(int)SubStringLen;
      }
LABEL_14:
      if ( v19 <= 0 )
      {
        Size >>= 1;
      }
      else
      {
        v5 = v12 + 1;
        Size += -1 - (Size >> 1);
      }
    }
    while ( Size > 0 );
    v9 = this;
    v7 = ptextLen;
  }
  if ( v5 >= v9->Elements.Data.Size )
    return 0i64;
  v20 = maxlen;
  v21 = (__int64)&v9->Elements.Data.Data[v5];
  v22 = (unsigned __int16 *)v21;
  v23 = *(unsigned __int8 *)(v21 + 48);
  if ( maxlen )
  {
    v24 = (char *)pstr - v21;
    do
    {
      v25 = *(unsigned __int16 *)((char *)v22 + (_QWORD)v24);
      v26 = *v22++;
      if ( !--v20 || !v25 )
        break;
      if ( v25 != v26 )
        goto LABEL_29;
      --v23;
    }
    while ( v23 );
    if ( v25 == v26 && v23 )
    {
      v9 = this;
      v27 = maxlen - *(unsigned __int8 *)(v21 + 48);
      goto LABEL_31;
    }
LABEL_29:
    v28 = v25 - v26;
    v9 = this;
    v27 = v28;
  }
  else
  {
    v27 = -(int)v23;
  }
LABEL_31:
  if ( v27 )
    return 0i64;
  if ( v7 )
    *v7 = *(unsigned __int8 *)(v21 + 48);
  return v9->Elements.Data.Data[v5].pImageDesc.pObject;
}

char __fastcall Scaleform::Render::Text::DocView::ForceReformat(Scaleform::Render::Text::DocView *this)
{
  if ( (this->RTFlags & 3) == 0 )
    return 0;
  Scaleform::Render::Text::DocView::Format(this);
  this->RTFlags &= 0xFCu;
  return 1;
}

void __fastcall Scaleform::Render::Text::DocView::Format(Scaleform::Render::Text::DocView *this)
{
  Scaleform::Render::Text::DocView *v1; // rsi
  float y1; // xmm1_4
  float y2; // xmm3_4
  float v4; // xmm0_4
  float v5; // xmm2_4
  Scaleform::Render::Text::DocView::DocumentText *pObject; // rbx
  unsigned int MaxHScrollValue; // eax
  Scaleform::Log *v8; // r8
  int v9; // ebx
  __int64 v10; // rdi
  float v11; // xmm9_4
  Scaleform::Render::Text::LineBuffer *v12; // r11
  signed int v13; // er9
  Scaleform::Render::Text::LineBuffer *v14; // r10
  Scaleform::Render::Text::Paragraph *v15; // r8
  Scaleform::Render::Text::LineBuffer::Line *v16; // rcx
  unsigned int v17; // edx
  unsigned __int16 v18; // ax
  Scaleform::Render::Text::EditorKitBase *v19; // rcx
  __int64 StartIndex; // rdx
  __int64 v21; // rax
  Scaleform::Render::Text::LineBuffer::Line *v22; // rbx
  unsigned int ParagraphId; // ecx
  int OffsetX; // edi
  unsigned int v25; // ecx
  char v26; // cl
  __int64 TextPosAndLength_high; // rax
  int Width; // eax
  Scaleform::Render::Text::EditorKitBase *v29; // rcx
  unsigned int Height; // ecx
  unsigned int v31; // ecx
  int Leading; // eax
  int MemSize; // edx
  float v34; // xmm0_4
  bool v35; // cc
  double v36; // xmm0_8
  double v37; // xmm0_8
  signed int v38; // eax
  int v39; // ecx
  float v40; // xmm0_4
  double v41; // xmm0_8
  double v42; // xmm0_8
  unsigned int v43; // ecx
  int v44; // eax
  int TextPos; // eax
  unsigned int v46; // er10
  unsigned int GlyphsCount; // ebx
  int i; // edx
  int *v49; // rcx
  int v50; // eax
  unsigned int UniqueId; // ebx
  unsigned int v52; // eax
  unsigned __int16 v53; // ax
  unsigned int v54; // er10
  int j; // edx
  int *v56; // rcx
  int v57; // eax
  int ParaWidth; // eax
  Scaleform::Render::Text::EditorKitBase *v59; // rcx
  unsigned int AlignProps; // ecx
  unsigned __int8 Flags; // r8
  bool ForceVerticalCenterAutoSize; // dl
  int v63; // edi
  float x1; // xmm5_4
  float v65; // xmm4_4
  float x2; // xmm2_4
  float v67; // xmm1_4
  float v68; // xmm3_4
  int v69; // ecx
  float v70; // xmm3_4
  bool v71; // zf
  float v72; // xmm3_4
  int v73; // eax
  float v74; // xmm3_4
  float v75; // xmm5_4
  float v76; // xmm0_4
  float v77; // xmm1_4
  float v78; // xmm2_4
  float v79; // xmm6_4
  float v80; // xmm0_4
  float v81; // xmm1_4
  float v82; // xmm6_4
  float v83; // xmm6_4
  float v84; // xmm2_4
  int MinLineHeight; // eax
  unsigned int MaxVScroll; // ebx
  unsigned int v87; // eax
  Scaleform::Render::Text::DocView::DocumentListener *v88; // rcx
  float v89; // xmm9_4
  float v90; // xmm2_4
  float v91; // xmm0_4
  float v92; // xmm3_4
  float v93; // xmm4_4
  float v94; // xmm8_4
  float v95; // xmm10_4
  float TextHeight; // xmm1_4
  float v97; // xmm7_4
  float v98; // xmm11_4
  int v99; // edi
  int v100; // edi
  float v101; // xmm6_4
  int BottomVScroll; // er8
  int k; // er9
  Scaleform::Render::Text::LineBuffer::Line *v104; // rcx
  int v105; // edx
  int v106; // eax
  unsigned int v107; // edi
  unsigned int v108; // er10
  Scaleform::Render::Text::LineBuffer::Line *v109; // r8
  int v110; // ecx
  float v111; // xmm0_4
  double v112; // xmm1_8
  double v113; // xmm1_8
  signed int v114; // eax
  int v115; // er9
  float v116; // xmm0_4
  double v117; // xmm0_8
  double v118; // xmm0_8
  unsigned int v119; // ecx
  int v120; // eax
  int v121; // ebx
  Scaleform::Render::Text::EditorKitBase *v122; // rcx
  bool v123; // al
  int v124; // ecx
  int TextWidth; // eax
  float v126; // xmm2_4
  unsigned int v127; // ebx
  Scaleform::Render::Text::EditorKitBase *v128; // rcx
  int v129; // eax
  float v130; // xmm1_4
  Scaleform::Render::Text::LineBuffer *v131; // rdi
  Scaleform::Render::Text::DocView::DocumentListener *v132; // rcx
  char v133; // al
  Scaleform::Render::Text::DocView::DocumentListener *v134; // rcx
  Scaleform::Render::Text::DocView::DocumentListener *v135; // rcx
  Scaleform::Render::Text::EditorKitBase *v136; // rcx
  Scaleform::Render::Text::EditorKitBase *v137; // rcx
  const Scaleform::Render::Text::CompositionStringBase *v138; // rax
  Scaleform::Render::Text::LineBuffer::Line *v139; // rcx
  Scaleform::Render::Text::FontHandle *FirstFontInfo; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF> >::TableType *pTable; // rdi
  __int64 v143; // rbx
  unsigned __int64 v144; // rsi
  Scaleform::RefCountVImpl *v145; // rcx
  char v146; // [rsp+28h] [rbp-E0h]
  int v147; // [rsp+2Ch] [rbp-DCh]
  bool v148; // [rsp+2Ch] [rbp-DCh]
  int v149; // [rsp+30h] [rbp-D8h]
  Scaleform::Render::Text::Paragraph *v150; // [rsp+38h] [rbp-D0h]
  Scaleform::Render::Text::LineBuffer *p_Paragraphs; // [rsp+40h] [rbp-C8h]
  __int128 v152; // [rsp+48h] [rbp-C0h] BYREF
  __int128 lineIdx_8; // [rsp+58h] [rbp-B0h]
  int OffsetY; // [rsp+68h] [rbp-A0h]
  unsigned int Value; // [rsp+6Ch] [rbp-9Ch]
  __int64 v156; // [rsp+70h] [rbp-98h]
  __int64 v157; // [rsp+78h] [rbp-90h]
  __int64 v158; // [rsp+80h] [rbp-88h]
  Scaleform::Render::Text::LineBuffer *p_mLineBuffer; // [rsp+88h] [rbp-80h]
  Scaleform::Render::Text::DocView *v160; // [rsp+90h] [rbp-78h]
  __int128 v161; // [rsp+98h] [rbp-70h]
  __int128 v162; // [rsp+A8h] [rbp-60h]
  __int128 v163; // [rsp+B8h] [rbp-50h]
  __int128 v164; // [rsp+C8h] [rbp-40h]
  Scaleform::Render::Text::ParagraphFormatter v165; // [rsp+D8h] [rbp-30h] BYREF

  v1 = this;
  y1 = this->ViewRect.y1;
  y2 = this->ViewRect.y2;
  v4 = this->ViewRect.x1 + 40.0;
  v5 = this->ViewRect.x2 + -40.0;
  v160 = this;
  this->mLineBuffer.Geom.VisibleRect.x1 = v4;
  this->mLineBuffer.Geom.VisibleRect.x2 = v5;
  this->mLineBuffer.Geom.VisibleRect.y1 = y1 + 40.0;
  this->mLineBuffer.Geom.VisibleRect.y2 = y2 + -40.0;
  pObject = this->pDocument.pObject;
  if ( !pObject )
    return;
  MaxHScrollValue = Scaleform::Render::Text::DocView::GetMaxHScrollValue(this);
  v71 = (v1->AlignProps & 0x30) == 0;
  LODWORD(v156) = MaxHScrollValue;
  Value = v1->MaxVScroll.Value;
  if ( !v71 )
    v1->RTFlags |= 2u;
  v8 = v1->pLog.pObject;
  p_mLineBuffer = &v1->mLineBuffer;
  v152 = (unsigned __int64)&v1->mLineBuffer;
  p_Paragraphs = (Scaleform::Render::Text::LineBuffer *)&pObject->Paragraphs;
  v9 = 0;
  BYTE8(lineIdx_8) = (v1->mLineBuffer.Geom.Flags & 4) != 0;
  v10 = 0i64;
  v157 = 0i64;
  *(_QWORD *)&lineIdx_8 = 0i64;
  Scaleform::Render::Text::ParagraphFormatter::ParagraphFormatter(&v165, v1, v8);
  v11 = FLOAT_0_5;
  v147 = 0;
  v149 = 0;
LABEL_5:
  v12 = (Scaleform::Render::Text::LineBuffer *)v152;
  v13 = lineIdx_8;
LABEL_6:
  v14 = p_Paragraphs;
LABEL_7:
  while ( v14 && v10 >= 0 && v10 < SLODWORD(v14->Lines.Data.Size) )
  {
    v15 = (Scaleform::Render::Text::Paragraph *)v14->Lines.Data.Data[v10];
    v150 = v15;
    if ( v12 && (unsigned int)v13 < v12->Lines.Data.Size && v13 >= 0 )
    {
      v16 = v12->Lines.Data.Data[v13];
      if ( (v1->RTFlags & 2) == 0 )
      {
        v17 = (v16->MemSize & 0x80000000) == 0 ? v16->Data32.ParagraphId : v16->Data32.GlyphsCount;
        if ( v15->UniqueId == v17 )
        {
          v18 = (v16->MemSize & 0x80000000) == 0 ? v16->Data32.ParagraphModId : v16->Data8.ParagraphModId;
          if ( v15->ModCounter == v18 )
          {
            v19 = v1->pEditorKit.pObject;
            StartIndex = v15->StartIndex;
            if ( v19 )
            {
              v21 = v19->TextPos2GlyphOffset(v19, StartIndex);
              v13 = lineIdx_8;
              StartIndex = v21;
              v12 = (Scaleform::Render::Text::LineBuffer *)v152;
              v15 = v150;
            }
            while ( 2 )
            {
              if ( !v12
                || (unsigned int)v13 >= v12->Lines.Data.Size
                || v13 < 0
                || ((v22 = v12->Lines.Data.Data[v13], (v22->MemSize & 0x80000000) == 0) ? (ParagraphId = v22->Data32.ParagraphId) : (ParagraphId = v22->Data32.GlyphsCount),
                    v15->UniqueId != ParagraphId) )
              {
                v14 = p_Paragraphs;
                v10 = v157;
                v9 = v149;
                if ( v157 < (signed __int64)p_Paragraphs->Lines.Data.Size )
                  v10 = ++v157;
                goto LABEL_7;
              }
              if ( (v22->MemSize & 0x80000000) == 0 )
              {
                v22->Data32.TextPos = StartIndex;
              }
              else
              {
                v22->Data32.TextPos &= 0xFF000000;
                v22->Data32.TextPos |= StartIndex & 0xFFFFFF;
              }
              OffsetX = v22->Data32.OffsetX;
              v25 = v22->MemSize >> 31;
              OffsetY = v22->Data32.OffsetY;
              v26 = v25 & 1;
              if ( v26 )
                TextPosAndLength_high = HIBYTE(v22->Data8.TextPosAndLength);
              else
                TextPosAndLength_high = v22->Data32.TextLength;
              v158 = TextPosAndLength_high + StartIndex;
              v22->Data32.OffsetY = v165.NextOffsetY;
              if ( v26 )
                Width = v22->Data8.Width;
              else
                Width = v22->Data32.Width;
              if ( Width < v147 )
                Width = v147;
              v147 = Width;
              if ( Scaleform::Render::Text::Paragraph::GetLength(v15)
                || (v29 = v1->pEditorKit.pObject) != 0i64 && !v29->IsReadOnly(v29) )
              {
                if ( (v22->MemSize & 0x80000000) == 0 )
                  Height = v22->Data32.Height;
                else
                  Height = v22->Data8.Height;
                v149 = Height + v165.NextOffsetY;
              }
              if ( (v22->MemSize & 0x80000000) == 0 )
                v31 = v22->Data32.Height;
              else
                v31 = v22->Data8.Height;
              if ( (v22->MemSize & 0x80000000) == 0 )
                Leading = v22->Data32.Leading;
              else
                Leading = v22->Data8.Leading;
              v165.NextOffsetY += v31 + Leading;
              if ( (v1->Flags & 1) != 0 )
              {
                MemSize = v22->MemSize;
                if ( ((v22->MemSize >> 27) & 3) == 1 )
                {
                  v40 = v1->mLineBuffer.Geom.VisibleRect.x2 - v1->mLineBuffer.Geom.VisibleRect.x1;
                  v35 = v40 <= 0.0;
                  v41 = v40;
                  if ( v35 )
                    v42 = v41 - 0.5;
                  else
                    v42 = v41 + 0.5;
                  if ( MemSize >= 0 )
                    v43 = v22->Data32.Width;
                  else
                    v43 = v22->Data8.Width;
                  v44 = (int)v42 - v43;
                  if ( v44 < 0 )
                    v44 = 0;
                  v22->Data32.OffsetX = v44;
LABEL_76:
                  v165.NeedRecenterLines = 1;
                }
                else if ( ((v22->MemSize >> 27) & 3) == 2 )
                {
                  v34 = (float)(v1->mLineBuffer.Geom.VisibleRect.x2 - v1->mLineBuffer.Geom.VisibleRect.x1) * 0.5;
                  v35 = v34 <= 0.0;
                  v36 = v34;
                  if ( v35 )
                    v37 = v36 - 0.5;
                  else
                    v37 = v36 + 0.5;
                  if ( MemSize >= 0 )
                    v38 = v22->Data32.Width;
                  else
                    v38 = v22->Data8.Width;
                  v39 = (int)v37 - v38 / 2;
                  if ( v39 < 0 )
                    v39 = 0;
                  v22->Data32.OffsetX = v39;
                  goto LABEL_76;
                }
              }
              if ( OffsetX != v22->Data32.OffsetX || OffsetY != v22->Data32.OffsetY )
                v1->mLineBuffer.Geom.Flags |= 1u;
              v12 = (Scaleform::Render::Text::LineBuffer *)v152;
              v13 = lineIdx_8;
              StartIndex = v158;
              v15 = v150;
              if ( (unsigned __int64)(unsigned int)lineIdx_8 < *(_QWORD *)(v152 + 8) )
              {
                v13 = lineIdx_8 + 1;
                LODWORD(lineIdx_8) = lineIdx_8 + 1;
              }
              continue;
            }
          }
        }
      }
      TextPos = v16->Data32.TextPos;
      if ( (v16->MemSize & 0x80000000) != 0 )
      {
        TextPos &= 0xFFFFFFu;
        if ( TextPos == 0xFFFFFF )
          TextPos = -1;
      }
      if ( TextPos == -1 )
      {
        v46 = 0;
        if ( (v16->MemSize & 0x80000000) == 0 )
          GlyphsCount = v16->Data32.ParagraphId;
        else
          GlyphsCount = v16->Data32.GlyphsCount;
        v161 = v152;
        v162 = lineIdx_8;
        for ( i = lineIdx_8; (_QWORD)v152 && (unsigned __int64)(unsigned int)i < *(_QWORD *)(v152 + 8) && i >= 0; ++i )
        {
          v49 = *(int **)(*(_QWORD *)v152 + 8i64 * (unsigned int)i);
          v50 = *v49 >= 0 ? v49[7] : v49[1];
          if ( v50 != GlyphsCount )
            break;
          ++v46;
        }
        v9 = v149;
        if ( v46 )
        {
          Scaleform::Render::Text::LineBuffer::RemoveLines(v12, v13, v46);
          v1->mLineBuffer.Geom.Flags |= 1u;
          goto LABEL_5;
        }
        goto LABEL_6;
      }
      UniqueId = v15->UniqueId;
      if ( (v16->MemSize & 0x80000000) == 0 )
        v52 = v16->Data32.ParagraphId;
      else
        v52 = v16->Data32.GlyphsCount;
      if ( UniqueId == v52 )
      {
        v53 = (v16->MemSize & 0x80000000) == 0 ? v16->Data32.ParagraphModId : v16->Data8.ParagraphModId;
        if ( v15->ModCounter != v53 )
        {
          v54 = 0;
          v163 = v152;
          v164 = lineIdx_8;
          for ( j = lineIdx_8; (_QWORD)v152 && (unsigned __int64)(unsigned int)j < *(_QWORD *)(v152 + 8) && j >= 0; ++j )
          {
            v56 = *(int **)(*(_QWORD *)v152 + 8i64 * (unsigned int)j);
            v57 = *v56 >= 0 ? v56[7] : v56[1];
            if ( v57 != UniqueId )
              break;
            ++v54;
          }
          Scaleform::Render::Text::LineBuffer::RemoveLines(v12, v13, v54);
          v1->mLineBuffer.Geom.Flags |= 1u;
          v15 = v150;
        }
      }
      v9 = v149;
    }
    v165.pLinesIter = (Scaleform::Render::Text::LineBuffer::Iterator *)&v152;
    v165.ParaYOffset = v165.NextOffsetY;
    Scaleform::Render::Text::ParagraphFormatter::Format(&v165, v15);
    ParaWidth = v165.ParaWidth;
    v1->mLineBuffer.Geom.Flags |= 1u;
    if ( ParaWidth < v147 )
      ParaWidth = v147;
    v147 = ParaWidth;
    if ( Scaleform::Render::Text::Paragraph::GetLength(v150)
      || (v59 = v1->pEditorKit.pObject) != 0i64 && !v59->IsReadOnly(v59) )
    {
      v9 = v165.ParaYOffset + v165.ParaHeight;
      v149 = v165.ParaYOffset + v165.ParaHeight;
    }
    v14 = p_Paragraphs;
    v13 = lineIdx_8;
    v12 = (Scaleform::Render::Text::LineBuffer *)v152;
    if ( v10 < (signed __int64)p_Paragraphs->Lines.Data.Size )
      v157 = ++v10;
  }
  if ( v12 && (unsigned int)v13 < v12->Lines.Data.Size && v13 >= 0 )
  {
    Scaleform::Render::Text::LineBuffer::RemoveLines(v12, v13, v1->mLineBuffer.Lines.Data.Size - v13);
    v1->mLineBuffer.Geom.Flags |= 1u;
  }
  AlignProps = v1->AlignProps;
  ++v1->FormatCounter;
  v1->RTFlags &= 0xFCu;
  Flags = v1->Flags;
  ForceVerticalCenterAutoSize = v165.ForceVerticalCenterAutoSize;
  v63 = (AlignProps >> 2) & 3;
  v1->TextWidth = v147;
  v1->TextHeight = v9;
  v146 = 0;
  if ( (Flags & 3) == 0 && !ForceVerticalCenterAutoSize )
    goto LABEL_161;
  x1 = v1->ViewRect.x1;
  v65 = v1->ViewRect.y1;
  x2 = v1->ViewRect.x2;
  v67 = v1->ViewRect.y2;
  if ( (Flags & 1) != 0 )
  {
    v68 = (float)v147 + 80.0;
    v69 = (AlignProps & 3) - 1;
    if ( v69 )
    {
      if ( v69 == 1 )
        x1 = x1 + (float)((float)((float)(x2 - x1) * 0.5) - (float)(v68 * 0.5));
    }
    else
    {
      x1 = x2 - v68;
    }
    x2 = x1 + v68;
  }
  if ( (Flags & 2) != 0 || ForceVerticalCenterAutoSize )
  {
    v70 = (float)v9 + 80.0;
    if ( v63 )
    {
      if ( v63 != 3 )
      {
        if ( v63 == 2 )
          v65 = v67 - v70;
        goto LABEL_150;
      }
    }
    else if ( !ForceVerticalCenterAutoSize )
    {
      goto LABEL_150;
    }
    v65 = v65 + (float)((float)((float)(v67 - v65) * 0.5) - (float)(v70 * 0.5));
LABEL_150:
    v146 = 1;
    v67 = v65 + v70;
  }
  v71 = x1 == v1->ViewRect.x1;
  if ( x1 == v1->ViewRect.x1 )
  {
    if ( x2 == v1->ViewRect.x2 && v65 == v1->ViewRect.y1 && v67 == v1->ViewRect.y2 )
      goto LABEL_161;
    v71 = x1 == v1->ViewRect.x1;
  }
  if ( !v71 || x2 != v1->ViewRect.x2 || v65 != v1->ViewRect.y1 || v67 != v1->ViewRect.y2 )
  {
    v1->ViewRect.y2 = v67;
    v1->ViewRect.x2 = x2;
    v1->ViewRect.x1 = x1;
    v1->ViewRect.y1 = v65;
    v72 = v1->ViewRect.y2 + -40.0;
    v1->mLineBuffer.Geom.VisibleRect.x1 = x1 + 40.0;
    v1->mLineBuffer.Geom.VisibleRect.x2 = x2 + -40.0;
    v1->mLineBuffer.Geom.VisibleRect.y1 = v65 + 40.0;
    v1->mLineBuffer.Geom.VisibleRect.y2 = v72;
  }
LABEL_161:
  v73 = (v1->AlignProps >> 4) & 3;
  if ( !v73 )
    goto LABEL_182;
  v74 = v1->ViewRect.x1 + 40.0;
  v75 = v1->ViewRect.y1 + 40.0;
  v76 = v1->ViewRect.x2 + -40.0;
  v77 = v1->ViewRect.y2 + -40.0;
  if ( (v1->Flags & 4) == 0 && !v63 )
    v63 = 3;
  v78 = *(float *)&FLOAT_1_0;
  v79 = *(float *)&FLOAT_1_0;
  if ( v73 == 1 )
  {
    v80 = v76 - v74;
    if ( (float)v147 > v80 )
      v78 = v80 / (float)v147;
    v81 = v77 - v75;
    if ( (float)v9 > v81 )
      v79 = v81 / (float)v9;
    v82 = fminf(v79, v78);
LABEL_177:
    if ( v82 != 1.0 )
    {
      MinLineHeight = Scaleform::Render::Text::LineBuffer::GetMinLineHeight(&v1->mLineBuffer);
      if ( MinLineHeight > 0 && (float)((float)MinLineHeight * v82) < 120.0 )
        v82 = 120.0 / (float)MinLineHeight;
      v1->TextWidth = (int)(float)((float)v147 * v82);
      v1->TextHeight = (int)(float)((float)v9 * v82);
      Scaleform::Render::Text::LineBuffer::Scale(&v1->mLineBuffer, v82);
    }
    goto LABEL_182;
  }
  if ( v73 == 2 )
  {
    v83 = FLOAT_3_4028235e38;
    v84 = FLOAT_3_4028235e38;
    if ( v147 >= 20 )
      v84 = (float)(v76 - v74) / (float)v147;
    if ( v9 >= 20 )
      v83 = (float)(v77 - v75) / (float)v9;
    v82 = fminf(v83, v84);
    if ( v82 != 3.4028235e38 )
      goto LABEL_177;
  }
LABEL_182:
  v148 = 0;
  MaxVScroll = Scaleform::Render::Text::DocView::GetMaxVScroll(v1);
  if ( v1->mLineBuffer.Geom.FirstVisibleLinePos <= MaxVScroll )
  {
    v148 = MaxVScroll != Value;
  }
  else
  {
    v87 = Scaleform::Render::Text::DocView::GetMaxVScroll(v1);
    if ( MaxVScroll > v87 )
      MaxVScroll = v87;
    if ( v1->mLineBuffer.Geom.FirstVisibleLinePos != MaxVScroll )
    {
      Scaleform::Render::Text::LineBuffer::SetFirstVisibleLine(&v1->mLineBuffer, MaxVScroll);
      v88 = v1->pDocumentListener.pObject;
      if ( v88 )
        v88->View_OnVScroll(v88, v1, MaxVScroll);
    }
  }
  if ( v146 || !v63 || (v1->Flags & 2) != 0 )
    goto LABEL_220;
  v89 = v1->ViewRect.y2 + -40.0;
  v90 = v1->mLineBuffer.Geom.VisibleRect.x1;
  v91 = v1->mLineBuffer.Geom.VisibleRect.y1;
  v92 = v1->mLineBuffer.Geom.VisibleRect.x2;
  v93 = v1->mLineBuffer.Geom.VisibleRect.y2;
  v94 = v1->ViewRect.y1 + 40.0;
  v95 = v1->ViewRect.x1 + 40.0;
  TextHeight = (float)(int)v1->TextHeight;
  v97 = v89 - v94;
  v98 = v1->ViewRect.x2 + -40.0;
  if ( (float)(v89 - v94) <= TextHeight )
  {
    if ( (unsigned int)(v63 - 2) <= 1 )
    {
      v101 = 0.0;
      BottomVScroll = Scaleform::Render::Text::DocView::GetBottomVScroll(v1);
      for ( k = 0; p_mLineBuffer && (unsigned int)BottomVScroll < p_mLineBuffer->Lines.Data.Size && BottomVScroll >= 0; ++k )
      {
        v104 = p_mLineBuffer->Lines.Data.Data[BottomVScroll];
        if ( (v104->MemSize & 0x80000000) == 0 )
          v105 = v104->Data32.Height;
        else
          v105 = v104->Data8.Height;
        if ( k )
        {
          if ( (v104->MemSize & 0x80000000) == 0 )
            v106 = v104->Data32.Leading;
          else
            v106 = v104->Data8.Leading;
          v105 += v106;
        }
        if ( v97 < (float)((float)v105 + v101) )
          break;
        v101 = (float)v105 + v101;
        --BottomVScroll;
      }
      v1 = v160;
      if ( v63 == 2 )
        v94 = v89 - v101;
      else
        v94 = (float)((float)(v97 * 0.5) - (float)(v101 * 0.5)) + v94;
    }
    v1->mLineBuffer.Geom.VisibleRect.y2 = v89;
    v11 = FLOAT_0_5;
    v1->mLineBuffer.Geom.VisibleRect.x1 = v95;
    v1->mLineBuffer.Geom.VisibleRect.y1 = v94;
    v1->mLineBuffer.Geom.VisibleRect.x2 = v98;
    goto LABEL_220;
  }
  v99 = v63 - 1;
  if ( v99 )
  {
    v100 = v99 - 1;
    if ( v100 )
    {
      v11 = FLOAT_0_5;
      if ( v100 == 1 )
        v91 = (float)((float)(v97 * 0.5) - (float)(TextHeight * 0.5)) + v94;
      goto LABEL_200;
    }
    v91 = v89 - TextHeight;
  }
  else
  {
    v90 = v1->ViewRect.x1 + 40.0;
    v91 = v1->ViewRect.y1 + 40.0;
    v92 = v1->ViewRect.x2 + -40.0;
    v93 = v1->ViewRect.y2 + -40.0;
  }
  v11 = FLOAT_0_5;
LABEL_200:
  v1->mLineBuffer.Geom.VisibleRect.x1 = v90;
  v1->mLineBuffer.Geom.VisibleRect.y1 = v91;
  v1->mLineBuffer.Geom.VisibleRect.x2 = v92;
  v1->mLineBuffer.Geom.VisibleRect.y2 = v93;
LABEL_220:
  v107 = 0;
  if ( v165.NeedRecenterLines )
  {
    v108 = 0;
    while ( v1 != (Scaleform::Render::Text::DocView *)-80i64
         && v108 < v1->mLineBuffer.Lines.Data.Size
         && (v108 & 0x80000000) == 0 )
    {
      v109 = v1->mLineBuffer.Lines.Data.Data[v108];
      v110 = v109->MemSize;
      if ( ((v109->MemSize >> 27) & 3) == 1 )
      {
        v116 = v1->mLineBuffer.Geom.VisibleRect.x2 - v1->mLineBuffer.Geom.VisibleRect.x1;
        v35 = v116 <= 0.0;
        v117 = v116;
        if ( v35 )
          v118 = v117 - 0.5;
        else
          v118 = v117 + 0.5;
        if ( v110 >= 0 )
          v119 = v109->Data32.Width;
        else
          v119 = v109->Data8.Width;
        v120 = (int)v118 - v119;
        if ( v120 < 0 )
          v120 = 0;
        v109->Data32.OffsetX = v120;
      }
      else if ( ((v109->MemSize >> 27) & 3) == 2 )
      {
        v111 = (float)(v1->mLineBuffer.Geom.VisibleRect.x2 - v1->mLineBuffer.Geom.VisibleRect.x1) * v11;
        v112 = v111;
        if ( v111 <= 0.0 )
          v113 = v112 - 0.5;
        else
          v113 = v112 + 0.5;
        if ( v110 >= 0 )
          v114 = v109->Data32.Width;
        else
          v114 = v109->Data8.Width;
        v115 = (int)v113 - v114 / 2;
        if ( v115 < 0 )
          v115 = 0;
        v109->Data32.OffsetX = v115;
      }
      if ( v108 < v1->mLineBuffer.Lines.Data.Size )
        ++v108;
    }
  }
  if ( (v1->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(v1);
    v1->RTFlags &= 0xFCu;
  }
  v121 = 1200;
  if ( (v1->Flags & 8) == 0 )
  {
    v122 = v1->pEditorKit.pObject;
    if ( !v122 || (v123 = v122->IsReadOnly(v122), v124 = 1200, v123) )
      v124 = 0;
    TextWidth = v1->TextWidth;
    if ( TextWidth )
      v126 = (float)TextWidth;
    else
      v126 = 0.0;
    v107 = (int)fmaxf(
                  0.0,
                  (float)(v126 - (float)(v1->mLineBuffer.Geom.VisibleRect.x2 - v1->mLineBuffer.Geom.VisibleRect.x1))
                + (float)v124);
  }
  if ( v1->mLineBuffer.Geom.HScrollOffset <= v107 )
  {
    v71 = v107 == (_DWORD)v156;
    v133 = v148;
    v131 = &v1->mLineBuffer;
    if ( !v71 )
      v133 = 1;
  }
  else
  {
    if ( (v1->RTFlags & 3) != 0 )
    {
      Scaleform::Render::Text::DocView::Format(v1);
      v1->RTFlags &= 0xFCu;
    }
    if ( (v1->Flags & 8) != 0 )
    {
      v127 = 0;
    }
    else
    {
      v128 = v1->pEditorKit.pObject;
      if ( !v128 || v128->IsReadOnly(v128) )
        v121 = 0;
      v129 = v1->TextWidth;
      if ( v129 )
        v130 = (float)v129;
      else
        v130 = 0.0;
      v127 = (int)fmaxf(
                    0.0,
                    (float)(v130 - (float)(v1->mLineBuffer.Geom.VisibleRect.x2 - v1->mLineBuffer.Geom.VisibleRect.x1))
                  + (float)v121);
    }
    if ( v107 <= v127 )
      v127 = v107;
    v131 = &v1->mLineBuffer;
    if ( v1->mLineBuffer.Geom.HScrollOffset != v127 )
    {
      Scaleform::Render::Text::LineBuffer::SetHScrollOffset(&v1->mLineBuffer, v127);
      v132 = v1->pDocumentListener.pObject;
      if ( v132 )
        v132->View_OnHScroll(v132, v1, v127);
    }
    v133 = v148;
  }
  v134 = v1->pDocumentListener.pObject;
  if ( v134 )
  {
    if ( v133 && (v134->HandlersMask & 4) != 0 )
      v134->View_OnMaxScrollChanged(v134, v1);
    v135 = v1->pDocumentListener.pObject;
    if ( (v135->HandlersMask & 8) != 0 )
      v135->View_OnChanged(v135, v1);
  }
  v136 = v1->pEditorKit.pObject;
  if ( v136 && !v136->IsReadOnly(v136)
    || (float)(v1->ViewRect.x2 - v1->ViewRect.x1) < (float)(int)v1->TextWidth
    || (float)(v1->ViewRect.y2 - v1->ViewRect.y1) < (float)(int)v1->TextHeight
    || v1->mLineBuffer.Geom.HScrollOffset )
  {
    v1->mLineBuffer.Geom.Flags &= ~0x20u;
  }
  else
  {
    v1->mLineBuffer.Geom.Flags |= 0x20u;
  }
  if ( v1->pHighlight )
  {
    v137 = v1->pEditorKit.pObject;
    if ( v137 )
      v138 = v137->GetCompositionString(v137);
    else
      v138 = 0i64;
    Scaleform::Render::Text::Highlighter::UpdateGlyphIndices(&v1->pHighlight->HighlightManager, v138);
  }
  v1->RTFlags &= ~0x20u;
  if ( v1->mLineBuffer.Lines.Data.Size )
  {
    v139 = *v131->Lines.Data.Data;
    if ( (v139->MemSize & 0x80000000) == 0 ? v139->Data32.GlyphsCount : v139->Data8.GlyphsCount )
    {
      FirstFontInfo = Scaleform::Render::Text::LineBuffer::FindFirstFontInfo(v131);
      if ( FirstFontInfo )
      {
        if ( (FirstFontInfo->pFont.pObject->Flags & 0x8000) != 0 )
          v1->RTFlags |= 0x20u;
      }
    }
  }
  if ( v165.pDynLine )
    Scaleform::Render::Text::LineBuffer::TextLineAllocator::FreeLine(
      &v165.pDocView->mLineBuffer.LineAllocator,
      v165.pDynLine);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v165.NewParaText);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v165.IndexMap);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v165.MirroredBits);
  if ( v165.pFontHandle.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v165.pFontHandle.pObject);
  Scaleform::Render::Text::GFxLineCursor::~GFxLineCursor(&v165.WordWrapPoint);
  Scaleform::Render::Text::GFxLineCursor::~GFxLineCursor(&v165.HalfPoint);
  Scaleform::Render::Text::GFxLineCursor::~GFxLineCursor(&v165.StartPoint);
  if ( v165.FindFontInfo.pCurrentFont.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v165.FindFontInfo.pCurrentFont.pObject);
  pTable = v165.FontCache.mHash.pTable;
  if ( v165.FontCache.mHash.pTable )
  {
    v143 = 0i64;
    v144 = v165.FontCache.mHash.pTable->SizeMask + 1;
    do
    {
      if ( *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v143) != -2i64 )
      {
        v145 = *(Scaleform::RefCountVImpl **)((char *)&pTable[2].EntryCount + v143);
        if ( v145 )
          Scaleform::RefCountImpl::Release(v145);
        *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v143) = -2i64;
        pTable = v165.FontCache.mHash.pTable;
      }
      v143 += 24i64;
      --v144;
    }
    while ( v144 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pTable);
    v165.FontCache.mHash.pTable = 0i64;
  }
  Scaleform::Render::Text::GFxLineCursor::~GFxLineCursor(&v165.LineCursor);
}

void __fastcall Scaleform::Render::Text::ParagraphFormatter::Format(
        Scaleform::Render::Text::ParagraphFormatter *this,
        const Scaleform::Render::Text::Paragraph *paragraph)
{
  unsigned int v2; // er12
  const Scaleform::Render::Text::ParagraphFormat *pParaFormat; // rcx
  __int64 GlyphIndex; // rbx
  Scaleform::Render::Text::LineBuffer::GlyphEntry *pGlyphs; // rdi
  Scaleform::Render::Text::Paragraph::CharacterInfo *v7; // rax
  const Scaleform::Render::Text::TextFormat *pObject; // rcx
  Scaleform::RefCountVImpl *Font; // rax
  Scaleform::RefCountVImpl *v10; // rsi
  unsigned __int16 v11; // ax
  unsigned __int16 Flags; // r14
  float ActualFontSize; // xmm0_4
  float v14; // xmm0_4
  int v15; // eax
  unsigned __int16 v16; // r14
  unsigned int ColorV; // ebx
  unsigned int v18; // eax
  Scaleform::RefCountVImpl *v19; // rcx
  Scaleform::Render::Text::ParagraphFormat *v20; // rcx
  Scaleform::Render::Text::GFxLineCursor *p_LineCursor; // rsi
  Scaleform::Render::Text::LineBuffer::FormatDataEntry v22; // r14
  const Scaleform::Render::Text::Paragraph::TextBuffer *pText; // rax
  Scaleform::Render::Text::ParagraphFormatter *pTextBufForCustomFormat; // rcx
  Scaleform::Render::Text::Paragraph::CharacterInfo *v25; // rax
  bool v26; // zf
  Scaleform::Render::Text::Paragraph::CharacterInfo *v27; // r15
  float TextRectWidth; // xmm6_4
  unsigned __int64 v29; // r8
  const wchar_t *RemainingTextPtr; // rax
  Scaleform::Render::Text::ImageDesc *v31; // rax
  Scaleform::Render::Text::TextFormat *v32; // rcx
  Scaleform::Render::Text::HTMLImageTagDesc *ImageDesc; // rax
  Scaleform::Render::Text::HTMLImageTagDesc *v34; // rbx
  bool v35; // al
  wchar_t Character; // cx
  unsigned __int64 v37; // rax
  int v38; // er8
  int v39; // eax
  bool v40; // al
  Scaleform::RefCountVImpl *v41; // rcx
  Scaleform::RefCountVImpl *v42; // rcx
  Scaleform::Render::Text::DocView *pDocView; // rcx
  Scaleform::RefCountVImpl *v44; // rax
  Scaleform::Render::Text::FontHandle *v45; // rbx
  Scaleform::RefCountVImpl *v46; // rcx
  Scaleform::Render::Font *v47; // rbx
  float v48; // xmm0_4
  Scaleform::Render::Text::DocView *v49; // rax
  Scaleform::Render::Text::DocView::DocumentText *v50; // rcx
  __int16 v51; // ax
  wchar_t v52; // dx
  int v53; // eax
  Scaleform::Render::Text::TextFormat *pCurrentFormat; // rcx
  unsigned __int8 FormatFlags; // si
  unsigned __int8 v56; // bl
  bool v57; // r15
  Scaleform::StringDH *FontList; // rax
  Scaleform::RefCountVImpl *v59; // rsi
  Scaleform::Render::Text::DocView::DocumentListener *v60; // rcx
  int v61; // er12
  const Scaleform::String *v62; // rax
  void *v63; // rbx
  void *v64; // rbx
  char *pData; // r15
  unsigned int v66; // er12
  unsigned __int64 v67; // rdi
  unsigned __int64 v68; // rbx
  Scaleform::StringDH *v69; // rax
  void *v70; // rbx
  void *v71; // rbx
  wchar_t v72; // cx
  unsigned __int64 v73; // rax
  int v74; // er8
  int v75; // eax
  unsigned int v76; // eax
  Scaleform::Render::Font *pFont; // rcx
  float v78; // xmm0_4
  float v79; // xmm0_4
  double v80; // xmm1_8
  double v81; // xmm1_8
  int v82; // eax
  float v83; // xmm0_4
  bool v84; // cc
  double v85; // xmm0_8
  double v86; // xmm0_8
  float GlyphAdvance; // xmm0_4
  double v88; // xmm0_8
  double v89; // xmm0_8
  int v90; // eax
  float v91; // xmm0_4
  double v92; // xmm0_8
  double v93; // xmm0_8
  float LastAdvance; // xmm1_4
  int v95; // ecx
  double v96; // xmm0_8
  double v97; // xmm0_8
  int v98; // edx
  Scaleform::Render::Text::LineBuffer::GlyphEntry *pPrevGrec; // rcx
  __int64 v100; // rcx
  Scaleform::Render::Text::LineBuffer::GlyphEntry *v101; // rax
  Scaleform::Render::Text::LineBuffer::GlyphEntry *v102; // rdi
  Scaleform::Render::Text::CompositionStringBase *v103; // rcx
  unsigned __int64 v104; // rbx
  int v105; // eax
  const Scaleform::Render::Text::TextFormat *v106; // rcx
  float v107; // xmm2_4
  float MaxFontDescent; // xmm0_4
  float v109; // xmm1_4
  float FontSize; // xmm1_4
  unsigned int v111; // ebx
  int v112; // eax
  Scaleform::RefCountVImpl *v113; // rcx
  wchar_t v114; // dx
  __int16 v115; // ax
  __int64 v116; // rdx
  Scaleform::Render::Font *v117; // rcx
  const Scaleform::Render::Text::TextFormat *v118; // rcx
  Scaleform::RefCountVImpl *v119; // rcx
  Scaleform::RefCountVImpl *v120; // rcx
  const Scaleform::Render::Text::TextFormat *v121; // rax
  __int64 TabStopsIndex; // r8
  unsigned int v123; // ecx
  int v124; // eax
  float v125; // xmm0_4
  float v126; // xmm7_4
  float NewLineWidth; // xmm0_4
  const Scaleform::Render::Text::TextFormat *v128; // rcx
  float v129; // xmm1_4
  int GlyphWidth; // eax
  unsigned int v131; // eax
  __int64 v132; // [rsp+28h] [rbp-E0h]
  __int64 v133; // [rsp+38h] [rbp-D0h]
  unsigned int v134; // [rsp+58h] [rbp-B0h]
  unsigned __int64 plen; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v136; // [rsp+68h] [rbp-A0h] BYREF
  Scaleform::String v137; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 ptextLen; // [rsp+78h] [rbp-90h] BYREF
  Scaleform::String v139; // [rsp+80h] [rbp-88h] BYREF
  __int64 v140; // [rsp+88h] [rbp-80h] BYREF
  unsigned int *TabStops; // [rsp+90h] [rbp-78h]
  int v142; // [rsp+98h] [rbp-70h] BYREF
  Scaleform::StringBuffer v143; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v144; // [rsp+D8h] [rbp-30h] BYREF

  this->pDocView->RTFlags &= ~0x40u;
  v2 = 0;
  Scaleform::Render::Text::ParagraphFormatter::InitParagraph(this, paragraph);
  pParaFormat = this->pParaFormat;
  this->LineCursor.LeftMargin = 0;
  if ( (pParaFormat->PresentMask & 0x8080) == 0x8080 )
  {
    GlyphIndex = this->LineCursor.GlyphIns.GlyphIndex;
    pGlyphs = this->LineCursor.GlyphIns.pGlyphs;
    pGlyphs[GlyphIndex] = 0i64;
    v7 = Scaleform::Render::Text::GFxLineCursor::operator*(&this->LineCursor);
    pObject = v7->pFormat.pObject;
    this->FindFontInfo.pCurrentFormat = v7->pFormat.pObject;
    if ( pObject )
    {
      Font = (Scaleform::RefCountVImpl *)Scaleform::Render::Text::DocView::FindFont(
                                           this->pDocView,
                                           &this->FindFontInfo,
                                           0);
      v10 = Font;
      if ( Font )
        Scaleform::Render::RenderBuffer::AddRef(Font);
      v11 = (*((__int64 (__fastcall **)(Scaleform::RefCountVImpl_vtbl *, __int64))v10[3].~RefCountImplCore + 2))(
              v10[3].__vftable,
              8226i64);
      pGlyphs[GlyphIndex].Flags &= ~0x40u;
      Flags = pGlyphs[GlyphIndex].Flags;
      pGlyphs[GlyphIndex].Index = v11;
      pGlyphs[GlyphIndex].Advance = 300;
      ActualFontSize = Scaleform::Render::Text::ParagraphFormatter::GetActualFontSize(this);
      v14 = (float)(ActualFontSize + ActualFontSize) / 3.0;
      if ( v14 < 256.0 && (v15 = (int)(float)(v14 * 16.0), (v15 & 0xF) != 0) )
      {
        v16 = Flags | 0x10;
        pGlyphs[GlyphIndex].LenAndFontSize &= 0xF000u;
      }
      else
      {
        v16 = Flags & 0xFFEF;
        pGlyphs[GlyphIndex].LenAndFontSize &= 0xF000u;
        v15 = (int)v14;
      }
      pGlyphs[GlyphIndex].Flags = v16;
      pGlyphs[GlyphIndex].LenAndFontSize |= v15 & 0xFFF;
      pGlyphs[GlyphIndex].LenAndFontSize &= 0xFFFu;
      ColorV = this->FindFontInfo.pCurrentFormat->ColorV;
      this->LineCursor.GlyphIns.pGlyphs[this->LineCursor.GlyphIns.GlyphIndex].Flags |= 0x4000u;
      this->LineCursor.GlyphIns.pGlyphs[this->LineCursor.GlyphIns.GlyphIndex].Flags |= 0x2000u;
      this->LineCursor.GlyphIns.pNextFormatData[this->LineCursor.GlyphIns.FormatDataIndex++].pFont = (Scaleform::Render::Text::FontHandle *)v10;
      Scaleform::Render::RenderBuffer::AddRef(v10);
      this->LineCursor.GlyphIns.pGlyphs[this->LineCursor.GlyphIns.GlyphIndex].Flags |= 0x4000u;
      this->LineCursor.GlyphIns.pGlyphs[this->LineCursor.GlyphIns.GlyphIndex].Flags |= 0x1000u;
      this->LineCursor.GlyphIns.pNextFormatData[this->LineCursor.GlyphIns.FormatDataIndex++].ColorV = ColorV;
      if ( this->LineCursor.GlyphIns.pGlyphs )
      {
        v18 = this->LineCursor.GlyphIns.GlyphIndex;
        if ( v18 < this->LineCursor.GlyphIns.GlyphsCount )
          this->LineCursor.GlyphIns.GlyphIndex = v18 + 1;
      }
      Scaleform::Render::RenderBuffer::AddRef(v10);
      v19 = (Scaleform::RefCountVImpl *)this->LineCursor.pLastFont.pObject;
      if ( v19 )
        Scaleform::RefCountImpl::Release(v19);
      this->LineCursor.pLastFont.pObject = (Scaleform::Render::Text::FontHandle *)v10;
      this->LineCursor.LastColor = ColorV;
      Scaleform::RefCountImpl::Release(v10);
    }
    this->LineCursor.LeftMargin = 700;
    this->LineCursor.LineWidth = 700;
    this->LineCursor.Indent = -300;
  }
  else
  {
    this->LineCursor.Indent = 20 * pParaFormat->Indent;
  }
  v20 = (Scaleform::Render::Text::ParagraphFormat *)this->pParaFormat;
  this->LineCursor.LeftMargin += 20 * (v20->BlockIndent + v20->LeftMargin);
  this->LineCursor.RightMargin = 20 * v20->RightMargin;
  p_LineCursor = &this->LineCursor;
  v22.pFont = 0i64;
  TabStops = Scaleform::Render::Text::ParagraphFormat::GetTabStops(v20, &this->TabStopsNum);
  while ( p_LineCursor->RightToLeft )
  {
    if ( p_LineCursor->RLCharIter.Index < 0 )
      goto LABEL_21;
LABEL_30:
    v25 = Scaleform::Render::Text::GFxLineCursor::operator*(p_LineCursor);
    v26 = this->Pass == 1;
    v27 = v25;
    *(_QWORD *)&v144 = v25;
    if ( v26 )
    {
      if ( (this->pDocView->Flags & 8) != 0
        && !v22.pFont
        && Scaleform::Render::Text::WordWrapHelper::IsLineBreakOpportunityAt(
             7u,
             this->LineCursor.LastCharCode,
             v25->Character) )
      {
        Scaleform::Render::Text::GFxLineCursor::operator=(&this->WordWrapPoint, p_LineCursor);
      }
      if ( this->Pass == 1 && this->HasLineFormatHandler )
      {
        TextRectWidth = this->TextRectWidth;
        if ( !this->LineCursor.LineWidth && !this->StartPoint.pDocView )
          Scaleform::Render::Text::GFxLineCursor::operator=(&this->StartPoint, p_LineCursor);
        if ( (float)this->LineCursor.LineWidth > (float)(TextRectWidth * 0.5) && !this->HalfPoint.pDocView )
          Scaleform::Render::Text::GFxLineCursor::operator=(&this->HalfPoint, p_LineCursor);
      }
    }
    this->DeltaText = 1;
    if ( v22.pFont )
      Scaleform::RefCountNTSImpl::Release(v22.pImage);
    v22.pFont = 0i64;
    if ( this->pDocView->pImageSubstitutor
      && (!p_LineCursor->RightToLeft ? (const wchar_t *)(RemainingTextPtr = Scaleform::Render::Text::Paragraph::CharactersIterator::GetRemainingTextPtr(
                                                                              &p_LineCursor->CharIter,
                                                                              &plen),
                                                         v29 = plen) : (v29 = 0i64, plen = 0i64, RemainingTextPtr = 0i64),
          v31 = Scaleform::Render::Text::DocView::ImageSubstitutor::FindImageDesc(
                  this->pDocView->pImageSubstitutor,
                  RemainingTextPtr,
                  v29,
                  &ptextLen),
          (v22.pFont = (Scaleform::Render::Text::FontHandle *)v31) != 0i64) )
    {
      ++v31->RefCount;
      this->DeltaText = ptextLen;
    }
    else
    {
      v32 = v27->pFormat.pObject;
      if ( v27->pFormat.pObject && (v32->PresentMask & 0x200) != 0 && v27->Character )
      {
        ImageDesc = Scaleform::Render::Text::TextFormat::GetImageDesc(v32);
        v34 = ImageDesc;
        if ( ImageDesc )
          ++ImageDesc->RefCount;
        if ( v22.pFont )
          Scaleform::RefCountNTSImpl::Release(v22.pImage);
        v22.pFont = (Scaleform::Render::Text::FontHandle *)v34;
      }
    }
    this->pFont = 0i64;
    this->Scale = 1.0;
    this->FontSize = -1.0;
    if ( v22.pFont )
    {
      this->FindFontInfo.pCurrentFormat = v27->pFormat.pObject;
      v91 = *(float *)&v22.pFont->FontName.pData;
      v84 = v91 <= 0.0;
      v92 = v91;
      if ( v84 )
        v93 = v92 - 0.5;
      else
        v93 = v92 + 0.5;
      LastAdvance = this->LineCursor.LastAdvance;
      v95 = (int)v93;
      this->GlyphWidth = (int)v93;
      this->GlyphAdvance = (float)(int)v93 + 40.0;
      v96 = LastAdvance;
      if ( LastAdvance <= 0.0 )
        v97 = v96 - 0.5;
      else
        v97 = v96 + 0.5;
      this->AdjLineWidth = v95;
      this->GlyphIndex = -1;
      *(_WORD *)&this->isSpace = 0;
      this->LastAdvance = (int)v97;
    }
    else
    {
      v35 = v27->Character == 160;
      this->isNbsp = v35;
      Character = v27->Character;
      v40 = 1;
      if ( Character )
      {
        if ( v35
          || (v37 = (unsigned __int64)Character >> 8, (v38 = Scaleform::UnicodeSpaceBits[v37]) == 0)
          || v38 != 1
          && (v39 = Scaleform::UnicodeSpaceBits[v38 + ((Character >> 4) & 0xF)], !_bittest(&v39, Character & 0xF)) )
        {
          v40 = 0;
        }
      }
      v26 = this->FindFontInfo.pCurrentFont.pObject == 0i64;
      this->isSpace = v40;
      if ( v26 || this->FindFontInfo.pCurrentFormat != v27->pFormat.pObject )
      {
        pDocView = this->pDocView;
        this->FindFontInfo.pCurrentFormat = v27->pFormat.pObject;
        v44 = (Scaleform::RefCountVImpl *)Scaleform::Render::Text::DocView::FindFont(
                                            pDocView,
                                            &this->FindFontInfo,
                                            v27->Character == 0);
        v45 = (Scaleform::Render::Text::FontHandle *)v44;
        if ( v44 )
          Scaleform::Render::RenderBuffer::AddRef(v44);
        v46 = (Scaleform::RefCountVImpl *)this->pFontHandle.pObject;
        if ( v46 )
          Scaleform::RefCountImpl::Release(v46);
        this->pFontHandle.pObject = v45;
        if ( !v45 )
          goto LABEL_209;
      }
      else
      {
        v41 = (Scaleform::RefCountVImpl *)this->FindFontInfo.pCurrentFont.pObject;
        if ( v41 )
          Scaleform::Render::RenderBuffer::AddRef(v41);
        v42 = (Scaleform::RefCountVImpl *)this->pFontHandle.pObject;
        if ( v42 )
          Scaleform::RefCountImpl::Release(v42);
        this->pFontHandle.pObject = this->FindFontInfo.pCurrentFont.pObject;
      }
      v47 = this->pFontHandle.pObject->pFont.pObject;
      this->pFont = v47;
      v48 = Scaleform::Render::Text::ParagraphFormatter::GetActualFontSize(this);
      v49 = this->pDocView;
      this->FontSize = v48;
      this->Scale = (float)(v48 * 20.0) * 0.0009765625;
      v50 = v49->pDocument.pObject;
      v51 = 10;
      v52 = v27->Character;
      if ( (v50->RTFlags & 2) != 0 )
        v51 = 13;
      if ( v52 == v51 || !v52 )
      {
        v76 = v47->GetGlyphIndex(v47, 32u);
        pFont = this->pFont;
        this->GlyphIndex = v76;
        this->GlyphAdvance = (float)(pFont->GetAdvance(pFont, v76) * 0.5) * this->Scale;
      }
      else if ( v52 == 9 )
      {
        this->GlyphIndex = -1;
        this->GlyphAdvance = 0.0;
      }
      else
      {
        v53 = ((__int64 (__fastcall *)(Scaleform::Render::Font *))v47->GetGlyphIndex)(v47);
        this->GlyphIndex = v53;
        if ( v53 == -1 )
        {
          if ( this->isNbsp )
            this->GlyphIndex = this->pFont->GetGlyphIndex(this->pFont, 32u);
          if ( this->GlyphIndex == -1 && this->pLog && (this->pDocView->RTFlags & 0x10) == 0 )
          {
            v142 = 1;
            Scaleform::StringBuffer::StringBuffer(&v143, Scaleform::Memory::pGlobalHeap);
            pCurrentFormat = (Scaleform::Render::Text::TextFormat *)this->FindFontInfo.pCurrentFormat;
            FormatFlags = pCurrentFormat->FormatFlags;
            v56 = this->pDocView->Flags;
            v57 = (pCurrentFormat->PresentMask & 0x1000) != 0;
            FontList = Scaleform::Render::Text::TextFormat::GetFontList(pCurrentFormat);
            v59 = (Scaleform::RefCountVImpl *)this->pDocView->pFontManager.pObject->CreateFontHandle(
                                                this->pDocView->pFontManager.pObject,
                                                (FontList->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12,
                                                ((FormatFlags & 1) != 0 ? 2 : 0) | ((FormatFlags & 2 | v56 & 0x20u) >> 1),
                                                !v57,
                                                &v142);
            v60 = this->pDocView->pDocumentListener.pObject;
            if ( v60 )
            {
              v61 = v2 | 1;
              v134 = v61;
              v62 = v60->GetCharacterPath(v60, (Scaleform::String *)&v140);
            }
            else
            {
              v61 = v2 | 2;
              v134 = v61;
              Scaleform::String::String(&v139);
            }
            Scaleform::String::String(&v137, v62);
            if ( (v61 & 2) != 0 )
            {
              v61 &= ~2u;
              v63 = (void *)(v139.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
              v134 = v61;
              if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                                   (volatile int *)((v139.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                                   -1) == 1 )
                Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v63);
            }
            if ( (v61 & 1) != 0 )
            {
              v64 = (void *)(v140 & 0xFFFFFFFFFFFFFFFCui64);
              v134 = v61 & 0xFFFFFFFE;
              if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                                   (volatile int *)((v140 & 0xFFFFFFFFFFFFFFFCui64) + 8),
                                   -1) == 1 )
                Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v64);
            }
            this->pFont->GetCharRanges(this->pFont, (Scaleform::String *)&v136);
            pData = (char *)&pnewText;
            v66 = this->pFont->GetGlyphShapeCount(this->pFont);
            if ( v143.pData )
              pData = v143.pData;
            v67 = v136 & 0xFFFFFFFFFFFFFFFCui64;
            v68 = v137.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
            v69 = Scaleform::Render::Text::TextFormat::GetFontList((Scaleform::Render::Text::TextFormat *)this->FindFontInfo.pCurrentFormat);
            LODWORD(v133) = v66;
            LODWORD(v132) = *(unsigned __int16 *)(v144 + 16);
            Scaleform::Log::LogError(
              this->pLog,
              "Missing \"%s\" glyph '%c' (0x%x) in \"%s\".\nFont has %u glyphs, ranges %s.\nSearch log: \n%s",
              (const char *)((v69->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
              (unsigned int)*(char *)(v144 + 16),
              v132,
              (const char *)(v68 + 12),
              v133,
              (const char *)(v67 + 12),
              pData);
            this->pDocView->RTFlags |= 0x10u;
            v70 = (void *)(v136 & 0xFFFFFFFFFFFFFFFCui64);
            if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                                 (volatile int *)((v136 & 0xFFFFFFFFFFFFFFFCui64) + 8),
                                 -1) == 1 )
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v70);
            v71 = (void *)(v137.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
            if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                                 (volatile int *)((v137.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                                 -1) == 1 )
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v71);
            if ( v59 )
              Scaleform::RefCountImpl::Release(v59);
            Scaleform::StringBuffer::~StringBuffer(&v143);
            v27 = (Scaleform::Render::Text::Paragraph::CharacterInfo *)v144;
            p_LineCursor = &this->LineCursor;
            v2 = v134;
          }
        }
        this->GlyphAdvance = this->pFont->GetAdvance(this->pFont, this->GlyphIndex) * this->Scale;
        v72 = v27->Character;
        v73 = (unsigned __int64)v72 >> 8;
        v74 = Scaleform::UnicodeNonSpacingMarksBits[v73];
        if ( Scaleform::UnicodeNonSpacingMarksBits[v73] )
        {
          if ( v74 == 1
            || (v75 = Scaleform::UnicodeNonSpacingMarksBits[v74 + ((v72 >> 4) & 0xF)], _bittest(&v75, v72 & 0xF)) )
          {
            this->GlyphAdvance = 0.0;
          }
        }
      }
      if ( !p_LineCursor->pPrevGrec || this->LineCursor.RightToLeft )
      {
        v83 = this->LineCursor.LastAdvance;
        v84 = v83 <= 0.0;
        v85 = v83;
        if ( v84 )
          v86 = v85 - 0.5;
        else
          v86 = v85 + 0.5;
        v82 = (int)v86;
      }
      else
      {
        v78 = 0.0;
        if ( this->LineCursor.LastKerning )
        {
          if ( p_LineCursor->pPrevGrec )
            p_LineCursor->pLastFont.pObject->pFont.pObject->GetKerningAdjustment(
              p_LineCursor->pLastFont.pObject->pFont.pObject,
              p_LineCursor->LastCharCode,
              v27->Character);
          v78 = 0.0 * this->Scale;
        }
        v79 = v78 + this->LineCursor.LastAdvance;
        v80 = v79;
        if ( v79 <= 0.0 )
          v81 = v80 - 0.5;
        else
          v81 = v80 + 0.5;
        v82 = (int)v81;
      }
      GlyphAdvance = this->GlyphAdvance;
      v84 = GlyphAdvance <= 0.0;
      this->LastAdvance = v82;
      v88 = GlyphAdvance;
      if ( v84 )
        v89 = v88 - 0.5;
      else
        v89 = v88 + 0.5;
      v26 = !this->isSpace;
      v90 = (int)v89;
      this->GlyphWidth = (int)v89;
      if ( !v26 )
        v90 = 0;
      this->AdjLineWidth = v90;
    }
    v98 = this->LastAdvance;
    this->NewLineWidth = v98 + this->LineCursor.LineWidth;
    pPrevGrec = p_LineCursor->pPrevGrec;
    if ( p_LineCursor->pPrevGrec )
    {
      if ( v98 < 0 )
      {
        pPrevGrec->Flags |= 0x40u;
        pPrevGrec->Advance = abs32(v98);
      }
      else
      {
        pPrevGrec->Advance = v98;
        pPrevGrec->Flags &= ~0x40u;
      }
    }
    if ( !Scaleform::Render::Text::ParagraphFormatter::CheckWordWrap(this) )
    {
      v100 = this->LineCursor.GlyphIns.GlyphIndex;
      v101 = this->LineCursor.GlyphIns.pGlyphs;
      v101[v100] = 0i64;
      v102 = &v101[v100];
      v102->Index = this->GlyphIndex;
      v103 = p_LineCursor->pComposStr.pObject;
      if ( v103 )
      {
        if ( (__int64)v103->GetLength(v103) )
        {
          v104 = Scaleform::Render::Text::Paragraph::CharactersIterator::operator*(&p_LineCursor->CharIter)->Index
               + p_LineCursor->pParagraph->StartIndex;
          if ( v104 >= p_LineCursor->pComposStr.pObject->GetPosition(p_LineCursor->pComposStr.pObject)
            && p_LineCursor->ComposStrCurPos < p_LineCursor->pComposStr.pObject->GetLength(p_LineCursor->pComposStr.pObject) )
          {
            v102->Flags |= 4u;
          }
        }
      }
      if ( v22.pFont )
      {
        this->LineCursor.GlyphIns.pGlyphs[this->LineCursor.GlyphIns.GlyphIndex].Flags |= 0x4000u;
        this->LineCursor.GlyphIns.pGlyphs[this->LineCursor.GlyphIns.GlyphIndex].Flags |= 0x800u;
        this->LineCursor.GlyphIns.pNextFormatData[this->LineCursor.GlyphIns.FormatDataIndex++] = v22;
        ++v22.pFont->RefCount;
        v102->LenAndFontSize = v102->LenAndFontSize & 0xFFF | (LOWORD(this->DeltaText) << 12);
        v105 = this->NewLineWidth + this->AdjLineWidth;
        v106 = this->FindFontInfo.pCurrentFormat;
        this->LineCursor.LastKerning = 0;
        LODWORD(v107) = COERCE_UNSIGNED_INT(
                          (float)((float)(*((float *)&v22.pFont[1].RefCount + 1) * 0.0)
                                + (float)(*(float *)&v22.pFont[1].RefCount * 0.0))
                        + *((float *)&v22.pFont[1].pFontManager + 1)) ^ _xmm;
        this->LineCursor.MaxFontAscent = fmaxf(this->LineCursor.MaxFontAscent, v107);
        MaxFontDescent = this->LineCursor.MaxFontDescent;
        v109 = *((float *)&v22.pFont->FontName.HeapTypeBits + 1) - v107;
        this->LineCursor.LineWidthWithoutTrailingSpaces = v105;
        this->LineCursor.NumOfTrailingSpaces = 0;
        this->LineCursor.MaxFontDescent = fmaxf(MaxFontDescent, v109);
        if ( (v106->PresentMask & 0x100) != 0 && Scaleform::String::GetLength(&v106->Url) )
          v102->Flags |= 0x80u;
        else
          v102->Flags &= ~0x80u;
        goto LABEL_196;
      }
      FontSize = this->FontSize;
      v111 = this->FindFontInfo.pCurrentFormat->ColorV;
      if ( FontSize < 256.0 && (v112 = (int)(float)(FontSize * 16.0), (v112 & 0xF) != 0) )
      {
        v102->Flags |= 0x10u;
        v102->LenAndFontSize &= 0xF000u;
      }
      else
      {
        v102->Flags &= ~0x10u;
        v102->LenAndFontSize &= 0xF000u;
        v112 = (int)FontSize;
      }
      v102->LenAndFontSize |= v112 & 0xFFF;
      v113 = (Scaleform::RefCountVImpl *)this->pFontHandle.pObject;
      if ( v113 != (Scaleform::RefCountVImpl *)this->LineCursor.pLastFont.pObject )
      {
        this->LineCursor.GlyphIns.pGlyphs[this->LineCursor.GlyphIns.GlyphIndex].Flags |= 0x4000u;
        this->LineCursor.GlyphIns.pGlyphs[this->LineCursor.GlyphIns.GlyphIndex].Flags |= 0x2000u;
        this->LineCursor.GlyphIns.pNextFormatData[this->LineCursor.GlyphIns.FormatDataIndex++].pFont = (Scaleform::Render::Text::FontHandle *)v113;
        Scaleform::Render::RenderBuffer::AddRef(v113);
      }
      if ( v111 != this->LineCursor.LastColor )
      {
        this->LineCursor.GlyphIns.pGlyphs[this->LineCursor.GlyphIns.GlyphIndex].Flags |= 0x4000u;
        this->LineCursor.GlyphIns.pGlyphs[this->LineCursor.GlyphIns.GlyphIndex].Flags |= 0x1000u;
        this->LineCursor.GlyphIns.pNextFormatData[this->LineCursor.GlyphIns.FormatDataIndex++].ColorV = v111;
      }
      v114 = v27->Character;
      v115 = 10;
      if ( (this->pDocView->pDocument.pObject->RTFlags & 2) != 0 )
        v115 = 13;
      if ( v114 == v115 )
      {
        if ( !v114 )
          goto LABEL_180;
        v102->LenAndFontSize &= 0xFFFu;
        v102->LenAndFontSize |= 0x1000u;
      }
      else
      {
        if ( v114 )
        {
          if ( !this->isSpace && !this->isNbsp )
            goto LABEL_177;
          v102->Flags |= 2u;
          v116 = (unsigned int)this->GlyphIndex;
          if ( (int)v116 >= 0 )
          {
            v117 = this->pFont;
            v144 = 0i64;
            v117->GetGlyphBounds(v117, v116, (Scaleform::Render::Rect<float> *)&v144);
            if ( *(float *)&v144 >= *((float *)&v144 + 2) || *((float *)&v144 + 1) >= *((float *)&v144 + 3) )
              v102->Flags |= 0x200u;
          }
          else
          {
            v102->Flags |= 0x200u;
          }
          ++this->LineCursor.NumOfSpaces;
          if ( this->isSpace )
          {
            ++this->LineCursor.NumOfTrailingSpaces;
          }
          else
          {
LABEL_177:
            this->LineCursor.NumOfTrailingSpaces = 0;
            this->LineCursor.LineWidthWithoutTrailingSpaces = this->NewLineWidth + this->AdjLineWidth;
          }
          v102->LenAndFontSize &= 0xFFFu;
          v102->LenAndFontSize |= 0x1000u;
LABEL_183:
          Scaleform::Render::Text::GFxLineCursor::TrackFontParams(p_LineCursor, this->pFont, this->Scale);
LABEL_184:
          if ( (this->FindFontInfo.pCurrentFormat->FormatFlags & 4) != 0 )
            v102->Flags |= 0x400u;
          else
            v102->Flags &= ~0x400u;
          v118 = this->FindFontInfo.pCurrentFormat;
          if ( (v118->PresentMask & 0x100) != 0 && Scaleform::String::GetLength(&v118->Url) )
            v102->Flags |= 0x80u;
          else
            v102->Flags &= ~0x80u;
          v119 = (Scaleform::RefCountVImpl *)this->pFontHandle.pObject;
          if ( v119 )
            Scaleform::Render::RenderBuffer::AddRef(v119);
          v120 = (Scaleform::RefCountVImpl *)this->LineCursor.pLastFont.pObject;
          if ( v120 )
            Scaleform::RefCountImpl::Release(v120);
          this->LineCursor.pLastFont.pObject = this->pFontHandle.pObject;
          v121 = this->FindFontInfo.pCurrentFormat;
          this->LineCursor.LastColor = v111;
          this->LineCursor.LastKerning = (v121->FormatFlags & 8) != 0;
LABEL_196:
          if ( v27->Character == 9 )
          {
            TabStopsIndex = this->TabStopsIndex;
            if ( (unsigned int)TabStopsIndex >= this->TabStopsNum )
            {
              v126 = (float)(floorf((float)((float)(this->FontSize + this->FontSize) + 8.0) * 0.125) * 8.0) * 20.0;
              NewLineWidth = (float)this->NewLineWidth;
              v125 = (float)(floorf((float)(NewLineWidth + v126) / v126) * v126) - NewLineWidth;
LABEL_201:
              this->GlyphAdvance = v125;
            }
            else
            {
              v123 = TabStops[TabStopsIndex];
              this->TabStopsIndex = TabStopsIndex + 1;
              v124 = this->NewLineWidth;
              if ( (int)(20 * v123) > v124 )
              {
                v125 = (float)(int)(20 * v123 - v124);
                goto LABEL_201;
              }
            }
          }
          v128 = this->FindFontInfo.pCurrentFormat;
          v129 = this->GlyphAdvance;
          this->LineCursor.LineLength += v102->LenAndFontSize >> 12;
          p_LineCursor->pPrevGrec = v102;
          this->LineCursor.LastCharCode = v27->Character;
          this->LineCursor.LineWidth = this->NewLineWidth;
          this->LineCursor.LastGlyphIndex = this->GlyphIndex;
          this->LineCursor.LastAdvance = v129;
          if ( (v128->PresentMask & 2) != 0 )
            this->LineCursor.LastAdvance = (float)((float)(v128->LetterSpacing * 0.050000001) * 20.0) + v129;
          v26 = this->LineCursor.GlyphIns.GlyphIndex == 0;
          GlyphWidth = this->GlyphWidth;
          this->LineCursor.LastGlyphWidth = GlyphWidth;
          if ( v26 )
            this->LineCursor.FirstGlyphWidth = GlyphWidth;
          if ( this->LineCursor.GlyphIns.pGlyphs )
          {
            v131 = this->LineCursor.GlyphIns.GlyphIndex;
            if ( v131 < this->LineCursor.GlyphIns.GlyphsCount )
              this->LineCursor.GlyphIns.GlyphIndex = v131 + 1;
          }
          goto LABEL_209;
        }
LABEL_180:
        v102->LenAndFontSize &= 0xFFFu;
      }
      v102->Flags |= 0x300u;
      this->GlyphWidth = 0;
      this->LineCursor.LineHasNewLine = 1;
      if ( !v27->Index )
        goto LABEL_183;
      goto LABEL_184;
    }
LABEL_209:
    Scaleform::Render::Text::GFxLineCursor::operator+=(p_LineCursor, this->DeltaText);
  }
  pText = p_LineCursor->CharIter.pText;
  if ( pText && p_LineCursor->CharIter.CurTextIndex < pText->Size )
    goto LABEL_30;
LABEL_21:
  if ( this->pTempLine )
    Scaleform::Render::Text::ParagraphFormatter::FinalizeLine(this);
  pTextBufForCustomFormat = (Scaleform::Render::Text::ParagraphFormatter *)this->pTextBufForCustomFormat;
  if ( pTextBufForCustomFormat
    && pTextBufForCustomFormat != (Scaleform::Render::Text::ParagraphFormatter *)this->TextBufForCustomFormat )
  {
    Scaleform::Render::Text::StyledText::GetAllocator(this->pDocView->pDocument.pObject);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTextBufForCustomFormat);
  }
  if ( v22.pFont )
    Scaleform::RefCountNTSImpl::Release(v22.pImage);
}

float __fastcall Scaleform::Render::Text::ParagraphFormatter::GetActualFontSize(
        Scaleform::Render::Text::ParagraphFormatter *this)
{
  float FontScaleFactor; // xmm1_4
  float result; // xmm0_4

  FontScaleFactor = this->FindFontInfo.pCurrentFont.pObject->FontScaleFactor;
  result = (float)this->FindFontInfo.pCurrentFormat->FontSize * 0.050000001;
  if ( FontScaleFactor != 1.0 )
    result = result * FontScaleFactor;
  if ( (this->pDocView->RTFlags & 4) != 0 )
    return result * (float)((float)this->pDocView->FontScaleFactor * 0.050000001);
  return result;
}

__int64 __fastcall Scaleform::Render::Text::DocView::GetBottomVScroll(Scaleform::Render::Text::DocView *this)
{
  int VScrollOffsetInFixp; // eax
  int FirstVisibleLinePos; // ebx
  bool v4; // r14
  unsigned int v5; // ebp
  float v6; // xmm6_4

  Scaleform::Render::Text::DocView::ForceReformat(this);
  VScrollOffsetInFixp = Scaleform::Render::Text::LineBuffer::GetVScrollOffsetInFixp(&this->mLineBuffer);
  FirstVisibleLinePos = this->mLineBuffer.Geom.FirstVisibleLinePos;
  v4 = (this->mLineBuffer.Geom.Flags & 4) != 0;
  v5 = 0;
  LODWORD(v6) = COERCE_UNSIGNED_INT((float)VScrollOffsetInFixp) ^ _xmm;
  while ( (unsigned int)FirstVisibleLinePos < this->mLineBuffer.Lines.Data.Size
       && FirstVisibleLinePos >= 0
       && (v4 || Scaleform::Render::Text::LineBuffer::IsLineVisible(&this->mLineBuffer, FirstVisibleLinePos, v6)) )
  {
    v5 = FirstVisibleLinePos;
    if ( (unsigned int)FirstVisibleLinePos < this->mLineBuffer.Lines.Data.Size )
      ++FirstVisibleLinePos;
  }
  return v5;
}

char __fastcall Scaleform::Render::Text::DocView::GetCharBoundaries(
        Scaleform::Render::Text::DocView *this,
        Scaleform::Render::Rect<float> *pCharRect,
        unsigned __int64 indexOfChar)
{
  char v6; // r12
  Scaleform::Render::Text::LineBuffer::Line *v7; // rdi
  __int64 TextPos; // rax
  unsigned __int64 v9; // rsi
  unsigned int GlyphsCount; // er14
  __int64 v11; // rbx
  int OffsetX; // er14
  int i; // ebx
  Scaleform::Render::Text::LineBuffer::GlyphEntry *pGlyphs; // rcx
  int v15; // eax
  int Advance; // eax
  float v17; // xmm5_4
  int Height; // eax
  float v19; // xmm0_4
  float OffsetY; // xmm3_4
  Scaleform::Render::Text::LineBuffer::GlyphIterator v22; // [rsp+20h] [rbp-99h] BYREF
  Scaleform::Render::Text::LineBuffer::Iterator result; // [rsp+C0h] [rbp+7h] BYREF

  if ( !pCharRect || indexOfChar >= Scaleform::Render::Text::StyledText::GetLength(this->pDocument.pObject) )
    return 0;
  if ( (this->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(this);
    this->RTFlags &= 0xFCu;
  }
  Scaleform::Render::Text::LineBuffer::FindLineByTextPos(&this->mLineBuffer, &result, indexOfChar);
  v6 = 0;
  if ( result.pLineBuffer
    && result.CurrentPos < result.pLineBuffer->Lines.Data.Size
    && (result.CurrentPos & 0x80000000) == 0 )
  {
    v7 = result.pLineBuffer->Lines.Data.Data[result.CurrentPos];
    if ( (v7->MemSize & 0x80000000) == 0 )
    {
      TextPos = v7->Data32.TextPos;
    }
    else
    {
      TextPos = v7->Data32.TextPos & 0xFFFFFF;
      if ( (_DWORD)TextPos == 0xFFFFFF )
        TextPos = 0xFFFFFFFFi64;
    }
    v9 = indexOfChar - TextPos;
    if ( (v7->MemSize & 0x80000000) == 0 )
      GlyphsCount = v7->Data32.GlyphsCount;
    else
      GlyphsCount = v7->Data8.GlyphsCount;
    v11 = 42i64;
    if ( (v7->MemSize & 0x80000000) != 0 )
      v11 = 30i64;
    v22.HighlighterIter.CurDesc.StartPos = -1i64;
    memset(&v22.HighlighterIter, 0, 24);
    v22.pGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v7 + v11);
    v22.HighlighterIter.CurDesc.Length = 0i64;
    v22.pEndGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v7 + 8 * GlyphsCount + v11);
    v22.HighlighterIter.CurDesc.Offset = -1i64;
    memset(&v22.HighlighterIter.CurDesc.AdjStartPos, 0, 33);
    memset(&v22.ColorV, 0, 40);
    v22.pNextFormatData = Scaleform::Render::Text::LineBuffer::Line::GetFormatData(v7);
    Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(&v22);
    OffsetX = v7->Data32.OffsetX;
    for ( i = 0; ; ++i )
    {
      pGlyphs = v22.pGlyphs;
      if ( !v22.pGlyphs || v22.pGlyphs >= v22.pEndGlyphs )
        break;
      if ( i == v9 )
      {
        if ( (v22.pGlyphs->Flags & 0x100) == 0 )
        {
          *(_QWORD *)&pCharRect->x1 = 0i64;
          v6 = 1;
          *(_QWORD *)&pCharRect->x2 = 0i64;
          Advance = pGlyphs->Advance;
          if ( (pGlyphs->Flags & 0x40) != 0 )
            Advance = -Advance;
          pCharRect->y1 = 40.0;
          v17 = (float)Advance + 0.0;
          pCharRect->x2 = v17;
          if ( (v7->MemSize & 0x80000000) == 0 )
            Height = v7->Data32.Height;
          else
            Height = v7->Data8.Height;
          v19 = (float)OffsetX + 40.0;
          pCharRect->y2 = (float)Height;
          OffsetY = (float)v7->Data32.OffsetY;
          pCharRect->x1 = v19 + 0.0;
          pCharRect->x2 = v19 + v17;
          pCharRect->y1 = OffsetY + 40.0;
          pCharRect->y2 = (float)Height + OffsetY;
        }
        break;
      }
      v15 = v22.pGlyphs->Advance;
      if ( (v22.pGlyphs->Flags & 0x40) != 0 )
        v15 = -v15;
      OffsetX += v15;
      Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&v22);
    }
    if ( v22.pImage.pObject )
      Scaleform::RefCountNTSImpl::Release(v22.pImage.pObject);
    if ( v22.pFontHandle.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v22.pFontHandle.pObject);
  }
  return v6;
}

__int64 __fastcall Scaleform::Render::Text::DocView::GetCharIndexAtPoint(
        Scaleform::Render::Text::DocView *this,
        float x,
        float y)
{
  float v4; // xmm6_4
  float v5; // xmm7_4
  int VScrollOffsetInFixp; // eax
  Scaleform::Render::Text::LineBuffer::Line *v7; // rsi
  float OffsetX; // xmm1_4
  int v9; // ecx
  float v10; // xmm6_4
  int v11; // edi
  unsigned int GlyphsCount; // er14
  __int64 v13; // rbx
  int v14; // ebx
  int Advance; // eax
  int TextPos; // eax
  __int64 v17; // rbx
  Scaleform::Render::Text::LineBuffer::GlyphIterator v19; // [rsp+28h] [rbp-89h] BYREF
  Scaleform::Render::Text::LineBuffer::Iterator result; // [rsp+C8h] [rbp+17h] BYREF

  if ( (this->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(this);
    this->RTFlags &= 0xFCu;
  }
  v4 = x - this->mLineBuffer.Geom.VisibleRect.x1;
  v5 = y - this->mLineBuffer.Geom.VisibleRect.y1;
  VScrollOffsetInFixp = Scaleform::Render::Text::LineBuffer::GetVScrollOffsetInFixp(&this->mLineBuffer);
  Scaleform::Render::Text::LineBuffer::FindLineAtYOffset(&this->mLineBuffer, &result, (float)VScrollOffsetInFixp + v5);
  if ( !result.pLineBuffer )
    return -1i64;
  if ( result.CurrentPos >= result.pLineBuffer->Lines.Data.Size )
    return -1i64;
  if ( (result.CurrentPos & 0x80000000) != 0 )
    return -1i64;
  v7 = result.pLineBuffer->Lines.Data.Data[result.CurrentPos];
  OffsetX = (float)v7->Data32.OffsetX;
  if ( v4 < OffsetX )
    return -1i64;
  v9 = (v7->MemSize & 0x80000000) == 0 ? v7->Data32.Width : v7->Data8.Width;
  if ( (float)((float)v9 + OffsetX) < v4 )
    return -1i64;
  v10 = v4 - OffsetX;
  v11 = 0;
  if ( (v7->MemSize & 0x80000000) == 0 )
    GlyphsCount = v7->Data32.GlyphsCount;
  else
    GlyphsCount = v7->Data8.GlyphsCount;
  v13 = 42i64;
  if ( (v7->MemSize & 0x80000000) != 0 )
    v13 = 30i64;
  memset(&v19.HighlighterIter, 0, 24);
  v19.pGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v7 + v13);
  v19.HighlighterIter.CurDesc.StartPos = -1i64;
  v19.pEndGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v7 + 8 * GlyphsCount + v13);
  v19.HighlighterIter.CurDesc.Length = 0i64;
  v19.HighlighterIter.CurDesc.Offset = -1i64;
  memset(&v19.HighlighterIter.CurDesc.AdjStartPos, 0, 33);
  memset(&v19.ColorV, 0, 40);
  v19.pNextFormatData = Scaleform::Render::Text::LineBuffer::Line::GetFormatData(v7);
  Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(&v19);
  v14 = 0;
  while ( v19.pGlyphs && v19.pGlyphs < v19.pEndGlyphs )
  {
    Advance = v19.pGlyphs->Advance;
    if ( (v19.pGlyphs->Flags & 0x40) != 0 )
      Advance = -Advance;
    v11 += Advance;
    if ( (float)v11 > v10 )
      break;
    v14 += v19.pGlyphs->LenAndFontSize >> 12;
    Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&v19);
  }
  TextPos = v7->Data32.TextPos;
  if ( (v7->MemSize & 0x80000000) != 0 )
  {
    TextPos &= 0xFFFFFFu;
    if ( TextPos == 0xFFFFFF )
      TextPos = -1;
  }
  v17 = (unsigned int)(TextPos + v14);
  if ( v19.pImage.pObject )
    Scaleform::RefCountNTSImpl::Release(v19.pImage.pObject);
  if ( v19.pFontHandle.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v19.pFontHandle.pObject);
  return v17;
}

__int64 __fastcall Scaleform::Render::Text::DocView::GetCursorPosAtPoint(
        Scaleform::Render::Text::DocView *this,
        float x,
        float y)
{
  float v4; // xmm7_4
  float v5; // xmm6_4
  Scaleform::Render::Text::LineBuffer *p_mLineBuffer; // rdi
  int VScrollOffsetInFixp; // eax
  Scaleform::Render::Text::LineBuffer *pLineBuffer; // rcx
  int CurrentPos; // edx
  Scaleform::Render::Text::LineBuffer::Iterator result; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+40h] [rbp-40h]
  __int128 v13; // [rsp+50h] [rbp-30h]

  if ( (this->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(this);
    this->RTFlags &= 0xFCu;
  }
  v4 = x - this->mLineBuffer.Geom.VisibleRect.x1;
  v5 = y - this->mLineBuffer.Geom.VisibleRect.y1;
  p_mLineBuffer = &this->mLineBuffer;
  VScrollOffsetInFixp = Scaleform::Render::Text::LineBuffer::GetVScrollOffsetInFixp(&this->mLineBuffer);
  Scaleform::Render::Text::LineBuffer::FindLineAtYOffset(&this->mLineBuffer, &result, (float)VScrollOffsetInFixp + v5);
  pLineBuffer = result.pLineBuffer;
  if ( !result.pLineBuffer
    || (CurrentPos = result.CurrentPos, result.CurrentPos >= result.pLineBuffer->Lines.Data.Size)
    || (result.CurrentPos & 0x80000000) != 0 )
  {
    v12 = (unsigned __int64)p_mLineBuffer;
    *(_OWORD *)&result.pLineBuffer = (unsigned __int64)p_mLineBuffer;
    if ( v5 > 0.0 )
      *(_QWORD *)&v13 = (unsigned int)(LODWORD(this->mLineBuffer.Lines.Data.Size) - 1);
    else
      *(_QWORD *)&v13 = 0i64;
    pLineBuffer = result.pLineBuffer;
    BYTE8(v13) = (this->mLineBuffer.Geom.Flags & 4) != 0;
    *(_OWORD *)&result.CurrentPos = v13;
    CurrentPos = v13;
  }
  if ( pLineBuffer && (unsigned int)CurrentPos < pLineBuffer->Lines.Data.Size && CurrentPos >= 0 )
    return Scaleform::Render::Text::DocView::GetCursorPosInLineByOffset(this, CurrentPos, v4);
  else
    return -(__int64)(LODWORD(this->mLineBuffer.Lines.Data.Size) != 0);
}

unsigned __int64 __fastcall Scaleform::Render::Text::DocView::GetCursorPosInLine(
        Scaleform::Render::Text::DocView *this,
        unsigned int lineIndex,
        float x)
{
  if ( lineIndex >= LODWORD(this->mLineBuffer.Lines.Data.Size) )
    return -1i64;
  if ( (this->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(this);
    this->RTFlags &= 0xFCu;
  }
  return Scaleform::Render::Text::DocView::GetCursorPosInLineByOffset(this, lineIndex, x);
}

unsigned __int64 __fastcall Scaleform::Render::Text::DocView::GetCursorPosInLineByOffset(
        Scaleform::Render::Text::DocView *this,
        unsigned int lineIndex,
        float relativeOffsetX)
{
  int v4; // edi
  Scaleform::Render::Text::LineBuffer::Line *v5; // rsi
  float v6; // xmm6_4
  unsigned int GlyphsCount; // er14
  __int64 v8; // rbx
  int v9; // ebx
  unsigned __int16 Flags; // r8
  unsigned int Advance; // edx
  int TextPos; // eax
  __int64 v13; // rbx
  Scaleform::Render::Text::LineBuffer::GlyphIterator v14; // [rsp+28h] [rbp-59h] BYREF

  if ( lineIndex >= LODWORD(this->mLineBuffer.Lines.Data.Size) )
    return -1i64;
  v4 = 0;
  v5 = this->mLineBuffer.Lines.Data.Data[lineIndex];
  v6 = (float)(relativeOffsetX - (float)v5->Data32.OffsetX) + (float)(int)this->mLineBuffer.Geom.HScrollOffset;
  if ( (v5->MemSize & 0x80000000) == 0 )
    GlyphsCount = v5->Data32.GlyphsCount;
  else
    GlyphsCount = v5->Data8.GlyphsCount;
  v8 = 42i64;
  if ( (v5->MemSize & 0x80000000) != 0 )
    v8 = 30i64;
  memset(&v14.HighlighterIter, 0, 24);
  v14.pGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v5 + v8);
  v14.HighlighterIter.CurDesc.StartPos = -1i64;
  v14.pEndGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v5 + 8 * GlyphsCount + v8);
  v14.HighlighterIter.CurDesc.Length = 0i64;
  v14.HighlighterIter.CurDesc.Offset = -1i64;
  memset(&v14.HighlighterIter.CurDesc.AdjStartPos, 0, 33);
  memset(&v14.ColorV, 0, 40);
  v14.pNextFormatData = Scaleform::Render::Text::LineBuffer::Line::GetFormatData(v5);
  Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(&v14);
  v9 = 0;
  while ( v14.pGlyphs && v14.pGlyphs < v14.pEndGlyphs )
  {
    Flags = v14.pGlyphs->Flags;
    Advance = v14.pGlyphs->Advance;
    if ( (Flags & 0x40) != 0 )
      Advance = -Advance;
    if ( (float)(int)(Advance + v4) > v6 )
    {
      if ( (float)(v6 - (float)v4) > (float)(Advance >> 1) )
        v9 += v14.pGlyphs->LenAndFontSize >> 12;
      break;
    }
    v4 += Advance;
    if ( (Flags & 0x100) == 0 )
      v9 += v14.pGlyphs->LenAndFontSize >> 12;
    Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&v14);
  }
  TextPos = v5->Data32.TextPos;
  if ( (v5->MemSize & 0x80000000) != 0 )
  {
    TextPos &= 0xFFFFFFu;
    if ( TextPos == 0xFFFFFF )
      TextPos = -1;
  }
  v13 = (unsigned int)(TextPos + v9);
  if ( v14.pImage.pObject )
    Scaleform::RefCountNTSImpl::Release(v14.pImage.pObject);
  if ( v14.pFontHandle.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v14.pFontHandle.pObject);
  return v13;
}

char __fastcall Scaleform::Render::Text::DocView::GetExactCharBoundaries(
        Scaleform::Render::Text::DocView *this,
        Scaleform::Render::Rect<float> *pCharRect,
        unsigned __int64 indexOfChar)
{
  unsigned __int64 Length; // rax
  unsigned int v7; // er13
  Scaleform::Render::Text::LineBuffer::Line *v8; // r15
  __int64 TextPos; // rax
  unsigned __int64 v10; // r14
  unsigned int GlyphsCount; // esi
  __int64 v12; // rbx
  int v13; // er12
  int i; // esi
  Scaleform::Render::Text::LineBuffer::GlyphEntry *pGlyphs; // rbx
  int Advance; // eax
  unsigned __int16 Flags; // dx
  Scaleform::Render::Font *pObject; // rsi
  float v19; // xmm6_4
  unsigned __int16 Index; // cx
  unsigned __int16 v21; // ax
  float v22; // xmm6_4
  int v23; // eax
  float v24; // xmm1_4
  float v25; // xmm5_4
  float v26; // xmm7_4
  float v27; // xmm1_4
  unsigned __int16 BaseLineOffset; // ax
  float v29; // xmm4_4
  float OffsetY; // xmm2_4
  float v31; // xmm0_4
  Scaleform::Render::Text::ImageDesc *v32; // rcx
  float v34; // xmm5_4
  float v35; // xmm1_4
  float v36; // xmm6_4
  float v37; // xmm2_4
  float v38; // xmm4_4
  float v39; // xmm3_4
  float v40; // xmm3_4
  Scaleform::Render::Text::LineBuffer::GlyphIterator v41; // [rsp+20h] [rbp-E0h] BYREF
  Scaleform::Render::Text::LineBuffer::Iterator result; // [rsp+C0h] [rbp-40h] BYREF
  char v43; // [rsp+130h] [rbp+30h]

  Length = Scaleform::Render::Text::StyledText::GetLength(this->pDocument.pObject);
  if ( !pCharRect || indexOfChar > Length )
    return 0;
  if ( (this->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(this);
    this->RTFlags &= 0xFCu;
  }
  Scaleform::Render::Text::LineBuffer::FindLineByTextPos(&this->mLineBuffer, &result, indexOfChar);
  v43 = 0;
  if ( result.pLineBuffer
    && result.CurrentPos < result.pLineBuffer->Lines.Data.Size
    && (result.CurrentPos & 0x80000000) == 0 )
  {
    v7 = -1;
    v8 = result.pLineBuffer->Lines.Data.Data[result.CurrentPos];
    if ( (v8->MemSize & 0x80000000) == 0 )
    {
      TextPos = v8->Data32.TextPos;
    }
    else
    {
      TextPos = v8->Data32.TextPos & 0xFFFFFF;
      if ( (_DWORD)TextPos == 0xFFFFFF )
        TextPos = 0xFFFFFFFFi64;
    }
    v10 = indexOfChar - TextPos;
    if ( (v8->MemSize & 0x80000000) == 0 )
      GlyphsCount = v8->Data32.GlyphsCount;
    else
      GlyphsCount = v8->Data8.GlyphsCount;
    v12 = 42i64;
    if ( (v8->MemSize & 0x80000000) != 0 )
      v12 = 30i64;
    v13 = 0;
    v41.HighlighterIter.CurDesc.StartPos = -1i64;
    memset(&v41.HighlighterIter, 0, 24);
    v41.pGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v8 + v12);
    v41.HighlighterIter.CurDesc.Length = 0i64;
    v41.pEndGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v8 + 8 * GlyphsCount + v12);
    v41.HighlighterIter.CurDesc.Offset = -1i64;
    memset(&v41.HighlighterIter.CurDesc.AdjStartPos, 0, 33);
    memset(&v41.ColorV, 0, 40);
    v41.pNextFormatData = Scaleform::Render::Text::LineBuffer::Line::GetFormatData(v8);
    Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(&v41);
    for ( i = 0; ; ++i )
    {
      pGlyphs = v41.pGlyphs;
      if ( !v41.pGlyphs || v41.pGlyphs >= v41.pEndGlyphs )
        goto LABEL_46;
      if ( i == v10 )
        break;
      Advance = v41.pGlyphs->Advance;
      if ( (v41.pGlyphs->Flags & 0x40) != 0 )
        Advance = -Advance;
      v13 += Advance;
      Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&v41);
    }
    Flags = v41.pGlyphs->Flags;
    v43 = 1;
    if ( (Flags & 0x800) == 0 )
    {
      if ( v41.pFontHandle.pObject )
        pObject = v41.pFontHandle.pObject->pFont.pObject;
      else
        pObject = 0i64;
      v19 = (float)(v41.pGlyphs->LenAndFontSize & 0xFFF);
      if ( (Flags & 0x10) != 0 )
        v19 = v19 * 0.0625;
      Index = v41.pGlyphs->Index;
      v21 = v41.pGlyphs->Index;
      v22 = (float)(v19 * 20.0) * 0.0009765625;
      if ( v41.pGlyphs->Index == 0xFFFF )
        v21 = -1;
      if ( v21 == 0xFFFF )
      {
        pCharRect->x1 = 0.0;
        v23 = pGlyphs->Advance;
        if ( (pGlyphs->Flags & 0x40) != 0 )
          v23 = -v23;
        pCharRect->x2 = (float)v23;
      }
      else
      {
        if ( Index != 0xFFFF )
          v7 = Index;
        pObject->GetGlyphBounds(pObject, v7, pCharRect);
      }
      if ( (pGlyphs->Flags & 0x100) != 0 )
        pCharRect->x2 = (float)((float)(pCharRect->x2 - pCharRect->x1) / 3.0) + pCharRect->x1;
      v24 = pObject->Descent + pObject->Ascent;
      v25 = v22 * pCharRect->x1;
      v26 = v22 * pCharRect->x2;
      pCharRect->x1 = v25;
      v27 = v24 * v22;
      pCharRect->x2 = v26;
      if ( (v8->MemSize & 0x80000000) == 0 )
        BaseLineOffset = v8->Data32.BaseLineOffset;
      else
        BaseLineOffset = v8->Data8.BaseLineOffset;
      v29 = (float)((float)BaseLineOffset - (float)(v22 * pObject->Ascent)) + 40.0;
      pCharRect->y1 = v29;
      pCharRect->y2 = v29 + v27;
      OffsetY = (float)v8->Data32.OffsetY;
      v31 = (float)v13 + 40.0;
      pCharRect->x2 = v31 + v26;
      pCharRect->x1 = v31 + v25;
      pCharRect->y1 = OffsetY + v29;
      pCharRect->y2 = OffsetY + (float)(v29 + v27);
LABEL_46:
      v32 = v41.pImage.pObject;
      goto LABEL_47;
    }
    v32 = v41.pImage.pObject;
    LODWORD(v34) = LODWORD(v41.pImage.pObject->BaseLineX) ^ _xmm;
    v35 = (float)v13 + 40.0;
    pCharRect->x1 = v34;
    LODWORD(v36) = LODWORD(v32->BaseLineY) ^ _xmm;
    pCharRect->y1 = v36;
    v37 = v34 + v32->ScreenWidth;
    pCharRect->x2 = v37;
    v38 = v32->ScreenHeight + v36;
    pCharRect->y2 = v38;
    v39 = (float)v8->Data32.OffsetY;
    pCharRect->x1 = v35 + v34;
    v40 = v39 + 40.0;
    pCharRect->x2 = v35 + v37;
    pCharRect->y2 = v40 + v38;
    pCharRect->y1 = v40 + v36;
LABEL_47:
    if ( v32 )
      Scaleform::RefCountNTSImpl::Release(v32);
    if ( v41.pFontHandle.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v41.pFontHandle.pObject);
  }
  return v43;
}

unsigned __int64 __fastcall Scaleform::Render::Text::DocView::GetFirstCharInParagraph(
        Scaleform::Render::Text::DocView *this,
        unsigned __int64 indexOfChar)
{
  Scaleform::Render::Text::DocView::DocumentText *pObject; // rcx
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator result; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 pindexInParagraph; // [rsp+40h] [rbp+8h] BYREF

  pObject = this->pDocument.pObject;
  pindexInParagraph = -1i64;
  Scaleform::Render::Text::StyledText::GetParagraphByIndex(pObject, &result, indexOfChar, &pindexInParagraph);
  if ( result.pArray && result.CurIndex >= 0 && result.CurIndex < SLODWORD(result.pArray->Data.Size) )
    return indexOfChar - pindexInParagraph;
  else
    return -1i64;
}

__int64 __fastcall Scaleform::Render::Text::DocView::GetHScrollOffset(Scaleform::Render::Text::DocView *this)
{
  if ( (this->RTFlags & 3) == 0 )
    return this->mLineBuffer.Geom.HScrollOffset;
  Scaleform::Render::Text::DocView::Format(this);
  this->RTFlags &= 0xFCu;
  return this->mLineBuffer.Geom.HScrollOffset;
}

Scaleform::String *__fastcall Scaleform::Render::Text::DocView::GetHtml(
        Scaleform::Render::Text::DocView *this,
        Scaleform::String *result)
{
  Scaleform::Render::Text::StyledText::GetHtml(this->pDocument.pObject, result);
  return result;
}

__int64 __fastcall Scaleform::Render::Text::DocView::GetLineIndexAtPoint(
        Scaleform::Render::Text::DocView *this,
        float x,
        float y)
{
  int VScrollOffsetInFixp; // eax
  __int64 CurrentPos; // rax
  Scaleform::Render::Text::LineBuffer::Iterator result; // [rsp+20h] [rbp-38h] BYREF

  if ( (this->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(this);
    this->RTFlags &= 0xFCu;
  }
  VScrollOffsetInFixp = Scaleform::Render::Text::LineBuffer::GetVScrollOffsetInFixp(&this->mLineBuffer);
  Scaleform::Render::Text::LineBuffer::FindLineAtYOffset(&this->mLineBuffer, &result, (float)VScrollOffsetInFixp + y);
  if ( !result.pLineBuffer )
    return 0xFFFFFFFFi64;
  CurrentPos = result.CurrentPos;
  if ( result.CurrentPos >= result.pLineBuffer->Lines.Data.Size || (result.CurrentPos & 0x80000000) != 0 )
    return 0xFFFFFFFFi64;
  return CurrentPos;
}

__int64 __fastcall Scaleform::Render::Text::DocView::GetLineIndexOfChar(
        Scaleform::Render::Text::DocView *this,
        unsigned __int64 indexOfChar)
{
  __int64 CurrentPos; // rax
  Scaleform::Render::Text::LineBuffer::Iterator result; // [rsp+20h] [rbp-28h] BYREF

  if ( (this->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(this);
    this->RTFlags &= 0xFCu;
  }
  Scaleform::Render::Text::LineBuffer::FindLineByTextPos(&this->mLineBuffer, &result, indexOfChar);
  if ( !result.pLineBuffer )
    return 0xFFFFFFFFi64;
  CurrentPos = result.CurrentPos;
  if ( result.CurrentPos >= result.pLineBuffer->Lines.Data.Size || (result.CurrentPos & 0x80000000) != 0 )
    return 0xFFFFFFFFi64;
  return CurrentPos;
}

unsigned __int64 __fastcall Scaleform::Render::Text::DocView::GetLineLength(
        Scaleform::Render::Text::DocView *this,
        unsigned int lineIndex,
        bool *phasNewLine)
{
  unsigned __int64 v4; // rbp
  Scaleform::Render::Text::LineBuffer *p_mLineBuffer; // rdi
  Scaleform::Render::Text::LineBuffer::Line *v7; // rcx

  v4 = lineIndex;
  if ( (this->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(this);
    this->RTFlags &= 0xFCu;
  }
  p_mLineBuffer = &this->mLineBuffer;
  if ( p_mLineBuffer && v4 < p_mLineBuffer->Lines.Data.Size && (v4 & 0x80000000) == 0i64 )
  {
    if ( phasNewLine )
      *phasNewLine = Scaleform::Render::Text::LineBuffer::Line::HasNewLine(p_mLineBuffer->Lines.Data.Data[v4]);
    v7 = p_mLineBuffer->Lines.Data.Data[v4];
    if ( (v7->MemSize & 0x80000000) == 0 )
      return v7->Data32.TextLength;
    else
      return HIBYTE(v7->Data8.TextPosAndLength);
  }
  else
  {
    if ( phasNewLine )
      *phasNewLine = 0;
    return -1i64;
  }
}

char __fastcall Scaleform::Render::Text::DocView::GetLineMetrics(
        Scaleform::Render::Text::DocView *this,
        unsigned int lineIndex,
        Scaleform::Render::Text::DocView::LineMetrics *pmetrics)
{
  unsigned __int64 v3; // rsi
  Scaleform::Render::Text::LineBuffer::Line *v6; // rcx
  unsigned __int16 BaseLineOffset; // ax
  int Height; // edx
  unsigned __int16 v9; // ax
  unsigned int Width; // eax
  unsigned int v11; // eax

  v3 = lineIndex;
  if ( !pmetrics )
    return 0;
  if ( (this->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(this);
    this->RTFlags &= 0xFCu;
  }
  if ( this == (Scaleform::Render::Text::DocView *)-80i64
    || v3 >= this->mLineBuffer.Lines.Data.Size
    || (v3 & 0x80000000) != 0i64 )
  {
    return 0;
  }
  v6 = this->mLineBuffer.Lines.Data.Data[v3];
  if ( (v6->MemSize & 0x80000000) == 0 )
    BaseLineOffset = v6->Data32.BaseLineOffset;
  else
    BaseLineOffset = v6->Data8.BaseLineOffset;
  pmetrics->Ascent = BaseLineOffset;
  if ( (v6->MemSize & 0x80000000) == 0 )
    Height = v6->Data32.Height;
  else
    Height = v6->Data8.Height;
  if ( (v6->MemSize & 0x80000000) == 0 )
    v9 = v6->Data32.BaseLineOffset;
  else
    v9 = v6->Data8.BaseLineOffset;
  pmetrics->Descent = (int)(float)((float)Height - (float)v9);
  if ( (v6->MemSize & 0x80000000) == 0 )
    Width = v6->Data32.Width;
  else
    Width = v6->Data8.Width;
  pmetrics->Width = Width;
  if ( (v6->MemSize & 0x80000000) == 0 )
    v11 = v6->Data32.Height;
  else
    v11 = v6->Data8.Height;
  pmetrics->Height = v11;
  if ( (v6->MemSize & 0x80000000) == 0 )
    pmetrics->Leading = v6->Data32.Leading;
  else
    pmetrics->Leading = v6->Data8.Leading;
  pmetrics->FirstCharXOff = v6->Data32.OffsetX;
  return 1;
}

unsigned __int64 __fastcall Scaleform::Render::Text::DocView::GetLineOffset(
        Scaleform::Render::Text::DocView *this,
        unsigned int lineIndex)
{
  unsigned __int64 v3; // rdi
  Scaleform::Render::Text::LineBuffer::Line *v4; // rcx
  unsigned __int64 result; // rax

  v3 = lineIndex;
  if ( (this->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(this);
    this->RTFlags &= 0xFCu;
  }
  if ( this == (Scaleform::Render::Text::DocView *)-80i64
    || v3 >= this->mLineBuffer.Lines.Data.Size
    || (v3 & 0x80000000) != 0i64 )
  {
    return -1i64;
  }
  v4 = this->mLineBuffer.Lines.Data.Data[v3];
  if ( (v4->MemSize & 0x80000000) == 0 )
    return v4->Data32.TextPos;
  result = v4->Data32.TextPos & 0xFFFFFF;
  if ( (_DWORD)result == 0xFFFFFF )
    return 0xFFFFFFFFi64;
  return result;
}

wchar_t *__fastcall Scaleform::Render::Text::DocView::GetLineText(
        Scaleform::Render::Text::DocView *this,
        unsigned int lineIndex,
        unsigned __int64 *plen)
{
  unsigned __int64 v3; // rsi
  Scaleform::Render::Text::LineBuffer *p_mLineBuffer; // rdi
  int *v8; // rcx
  unsigned int v9; // eax
  Scaleform::Render::Text::DocView::DocumentText *pObject; // rcx
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> > *pArray; // r8
  __int64 CurIndex; // rdx
  Scaleform::Render::Text::LineBuffer::Line *v13; // rcx
  unsigned __int64 TextLength; // rax
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator result; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 pindexInParagraph; // [rsp+60h] [rbp+18h] BYREF

  v3 = lineIndex;
  if ( !plen )
    return 0i64;
  if ( (this->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(this);
    this->RTFlags &= 0xFCu;
  }
  p_mLineBuffer = &this->mLineBuffer;
  if ( this == (Scaleform::Render::Text::DocView *)-80i64
    || v3 >= this->mLineBuffer.Lines.Data.Size
    || (v3 & 0x80000000) != 0i64 )
  {
    return 0i64;
  }
  v8 = (int *)p_mLineBuffer->Lines.Data.Data[v3];
  v9 = v8[2];
  if ( *v8 < 0 )
  {
    v9 &= 0xFFFFFFu;
    if ( v9 == 0xFFFFFF )
      v9 = -1;
  }
  pObject = this->pDocument.pObject;
  pindexInParagraph = 0i64;
  Scaleform::Render::Text::StyledText::GetParagraphByIndex(pObject, &result, v9, &pindexInParagraph);
  pArray = result.pArray;
  if ( !result.pArray )
    return 0i64;
  CurIndex = result.CurIndex;
  if ( result.CurIndex < 0 || result.CurIndex >= SLODWORD(result.pArray->Data.Size) )
    return 0i64;
  v13 = p_mLineBuffer->Lines.Data.Data[v3];
  if ( (v13->MemSize & 0x80000000) == 0 )
    TextLength = v13->Data32.TextLength;
  else
    TextLength = HIBYTE(v13->Data8.TextPosAndLength);
  *plen = TextLength;
  return &pArray->Data.Data[CurIndex].pPara->Text.pText[pindexInParagraph];
}

__int64 __fastcall Scaleform::Render::Text::DocView::GetLinesCount(Scaleform::Render::Text::DocView *this)
{
  if ( (this->RTFlags & 3) == 0 )
    return LODWORD(this->mLineBuffer.Lines.Data.Size);
  Scaleform::Render::Text::DocView::Format(this);
  this->RTFlags &= 0xFCu;
  return LODWORD(this->mLineBuffer.Lines.Data.Size);
}

unsigned int __fastcall Scaleform::Render::Text::DocView::GetMaxHScroll(Scaleform::Render::Text::DocView *this)
{
  if ( (this->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(this);
    this->RTFlags &= 0xFCu;
  }
  return Scaleform::Render::Text::DocView::GetMaxHScrollValue(this);
}

__int64 __fastcall Scaleform::Render::Text::DocView::GetMaxHScrollValue(Scaleform::Render::Text::DocView *this)
{
  Scaleform::Render::Text::EditorKitBase *pObject; // rcx
  int v4; // ecx
  signed int TextWidth; // eax
  float v6; // xmm1_4

  if ( (this->Flags & 8) != 0 )
    return 0i64;
  pObject = this->pEditorKit.pObject;
  if ( !pObject || pObject->IsReadOnly(pObject) )
    v4 = 0;
  else
    v4 = 1200;
  TextWidth = this->TextWidth;
  if ( TextWidth )
    v6 = (float)TextWidth;
  else
    v6 = 0.0;
  return (unsigned int)(int)fmaxf(
                              0.0,
                              (float)(v6
                                    - (float)(this->mLineBuffer.Geom.VisibleRect.x2
                                            - this->mLineBuffer.Geom.VisibleRect.x1))
                            + (float)v4);
}

__int64 __fastcall Scaleform::Render::Text::DocView::GetMaxVScroll(Scaleform::Render::Text::DocView *this)
{
  unsigned __int16 FormatCounter; // ax
  __int64 result; // rax
  Scaleform::Render::Text::EditorKitBase *pObject; // rcx
  int v5; // esi
  __int64 v6; // rdi
  Scaleform::Render::Text::LineBuffer::Line *v7; // r14
  unsigned __int64 Size; // rdx
  Scaleform::Render::Text::LineBuffer::Line **Data; // r8
  Scaleform::Render::Text::LineBuffer::Line *v11; // rcx
  unsigned int Height; // er9
  unsigned __int16 v13; // cx

  if ( (this->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(this);
    this->RTFlags &= 0xFCu;
  }
  FormatCounter = this->FormatCounter;
  if ( this->MaxVScroll.FormatCounter == FormatCounter )
    return this->MaxVScroll.Value;
  if ( !LODWORD(this->mLineBuffer.Lines.Data.Size) )
  {
    this->MaxVScroll.Value = 0;
    this->MaxVScroll.FormatCounter = FormatCounter;
    return this->MaxVScroll.Value;
  }
  pObject = this->pEditorKit.pObject;
  v5 = 0;
  v6 = (unsigned int)(LODWORD(this->mLineBuffer.Lines.Data.Size) - 1);
  v7 = this->mLineBuffer.Lines.Data.Data[(unsigned int)v6];
  if ( (!pObject || pObject->IsReadOnly(pObject))
    && !((v7->MemSize & 0x80000000) == 0 ? v7->Data32.TextLength : HIBYTE(v7->Data8.TextPosAndLength)) )
  {
    if ( (int)v6 >= 0 )
      v6 = (unsigned int)(v6 - 1);
    v5 = 1;
  }
  Size = this->mLineBuffer.Lines.Data.Size;
  if ( (unsigned int)v6 >= Size || (int)v6 < 0 )
  {
    this->MaxVScroll.FormatCounter = this->FormatCounter;
    this->MaxVScroll.Value = 0;
    return this->MaxVScroll.Value;
  }
  else
  {
    Data = this->mLineBuffer.Lines.Data.Data;
    v11 = Data[v6];
    if ( (v11->MemSize & 0x80000000) == 0 )
      Height = v11->Data32.Height;
    else
      Height = v11->Data8.Height;
    while ( (unsigned int)v6 < Size
         && (int)v6 >= 0
         && (!v5
          || (float)((float)((float)(int)(Height + v11->Data32.OffsetY) - this->mLineBuffer.Geom.VisibleRect.y2)
                   + this->mLineBuffer.Geom.VisibleRect.y1) <= (float)Data[v6]->Data32.OffsetY) )
    {
      v6 = (unsigned int)(v6 - 1);
      ++v5;
    }
    v13 = this->FormatCounter;
    result = (unsigned int)(Size - v5);
    this->MaxVScroll.Value = result;
    this->MaxVScroll.FormatCounter = v13;
  }
  return result;
}

unsigned __int64 __fastcall Scaleform::Render::Text::DocView::GetParagraphLength(
        Scaleform::Render::Text::DocView *this,
        unsigned __int64 charIndex)
{
  Scaleform::Render::Text::DocView::DocumentText *pObject; // rcx
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator result; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 pindexInParagraph; // [rsp+40h] [rbp+8h] BYREF

  if ( (this->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(this);
    this->RTFlags &= 0xFCu;
  }
  pObject = this->pDocument.pObject;
  pindexInParagraph = 0i64;
  Scaleform::Render::Text::StyledText::GetParagraphByIndex(pObject, &result, charIndex, &pindexInParagraph);
  if ( result.pArray && result.CurIndex >= 0 && result.CurIndex < SLODWORD(result.pArray->Data.Size) )
    return Scaleform::Render::Text::Paragraph::GetLength(result.pArray->Data.Data[result.CurIndex].pPara);
  else
    return -1i64;
}

Scaleform::Render::Text::HighlightDesc *__fastcall Scaleform::Render::Text::DocView::GetSelectionHighlighterDesc(
        Scaleform::Render::Text::DocView *this)
{
  Scaleform::Render::Text::DocView::HighlightDescLoc *pHighlight; // rcx
  Scaleform::Render::Text::HighlightDesc *result; // rax
  Scaleform::Render::Text::DocView::HighlightDescLoc *v4; // rcx
  Scaleform::Render::Text::HighlightDesc desc; // [rsp+20h] [rbp-48h] BYREF

  pHighlight = this->pHighlight;
  if ( !pHighlight || (this->RTFlags & 0x40) != 0 )
    return 0i64;
  result = Scaleform::Render::Text::Highlighter::GetHighlighterPtr(&pHighlight->HighlightManager, 0x7FFFFFFFu);
  if ( !result )
  {
    v4 = this->pHighlight;
    desc.Offset = -1i64;
    desc.AdjStartPos = 0i64;
    desc.GlyphNum = 0i64;
    desc.Info.UnderlineColor.Raw = 0;
    desc.StartPos = 0i64;
    desc.Length = 0i64;
    desc.Id = 0x7FFFFFFF;
    *(_QWORD *)&desc.Info.BackgroundColor.Channels.Blue = -16777216i64;
    desc.Info.Flags = 24;
    return Scaleform::Render::Text::Highlighter::CreateHighlighter(&v4->HighlightManager, &desc);
  }
  return result;
}

Scaleform::String *__fastcall Scaleform::Render::Text::DocView::GetText(
        Scaleform::Render::Text::DocView *this,
        Scaleform::String *result)
{
  Scaleform::Render::Text::StyledText::GetText(this->pDocument.pObject, result);
  return result;
}

Scaleform::String *__fastcall Scaleform::Render::Text::DocView::GetText(
        Scaleform::Render::Text::DocView *this,
        Scaleform::String *retStr)
{
  return Scaleform::Render::Text::StyledText::GetText(this->pDocument.pObject, retStr);
}

float __fastcall Scaleform::Render::Text::DocView::GetTextHeight(Scaleform::Render::Text::DocView *this)
{
  signed int TextHeight; // eax
  float result; // xmm0_4

  if ( (this->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(this);
    this->RTFlags &= 0xFCu;
  }
  TextHeight = this->TextHeight;
  result = 0.0;
  if ( TextHeight )
    return (float)TextHeight;
  return result;
}

float __fastcall Scaleform::Render::Text::DocView::GetTextWidth(Scaleform::Render::Text::DocView *this)
{
  signed int TextWidth; // eax
  float result; // xmm0_4

  if ( (this->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(this);
    this->RTFlags &= 0xFCu;
  }
  TextWidth = this->TextWidth;
  result = 0.0;
  if ( TextWidth )
    return (float)TextWidth;
  return result;
}

__int64 __fastcall Scaleform::Render::Text::DocView::GetVScrollOffset(Scaleform::Render::Text::DocView *this)
{
  if ( (this->RTFlags & 3) == 0 )
    return this->mLineBuffer.Geom.FirstVisibleLinePos;
  Scaleform::Render::Text::DocView::Format(this);
  this->RTFlags &= 0xFCu;
  return this->mLineBuffer.Geom.FirstVisibleLinePos;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Render::Text::DocView::GetViewRect(
        Scaleform::Render::Text::DocView *this)
{
  if ( (this->RTFlags & 3) == 0 )
    return &this->ViewRect;
  Scaleform::Render::Text::DocView::Format(this);
  this->RTFlags &= 0xFCu;
  return &this->ViewRect;
}

char __fastcall Scaleform::Render::Text::ParagraphFormatter::HandleCustomWordWrap(
        Scaleform::Render::Text::ParagraphFormatter *this)
{
  Scaleform::Render::Text::FontHandle *pObject; // rdi
  int Pass; // eax
  Scaleform::Render::Text::GFxLineCursor *p_WordWrapPoint; // r14
  const Scaleform::Render::Text::Paragraph::TextBuffer *pText; // rax
  unsigned __int64 NumChars; // r13
  Scaleform::Render::Font *v8; // rdi
  int LineWidth; // eax
  __m128i v10; // xmm2
  unsigned __int64 TextBufLen; // rax
  Scaleform::Render::Text::LineBuffer::Line *pTempLine; // rcx
  unsigned int v13; // xmm2_4
  __int64 TextPos; // rcx
  unsigned __int64 v15; // rax
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  float v19; // xmm1_4
  int v20; // eax
  char *v21; // r15
  Scaleform::Render::Text::Allocator *Allocator; // rax
  unsigned int GlyphIndex; // edi
  unsigned int v24; // er9
  Scaleform::Render::Text::LineBuffer::GlyphEntry *pGlyphs; // r10
  float v26; // xmm2_4
  unsigned __int16 *v27; // rcx
  unsigned __int16 *p_Flags; // rdx
  unsigned __int16 *p_LenAndFontSize; // r8
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  unsigned __int16 *p_Advance; // rcx
  int v35; // eax
  __int64 v36; // r11
  float v37; // xmm1_4
  unsigned __int16 *v38; // r10
  __int64 v39; // rdi
  char *v40; // rcx
  int v41; // eax
  unsigned int v42; // er9
  __int64 v43; // rdx
  __int64 v44; // r8
  Scaleform::Render::Text::DocView *pDocView; // rdx
  bool v46; // si
  unsigned __int64 v47; // rcx
  const Scaleform::Render::Text::Paragraph::TextBuffer *v48; // rax
  const Scaleform::Render::Text::Paragraph::TextBuffer *v49; // rax
  Scaleform::Render::Text::GFxLineCursor *p_StartPoint; // rdx
  const Scaleform::Render::Text::GFxLineCursor *v51; // rax
  const Scaleform::Render::Text::GFxLineCursor *v52; // rax
  Scaleform::Render::Text::TextFormat *v53; // rdi
  bool v54; // zf
  Scaleform::Render::Text::TextFormat *v55; // rdi
  Scaleform::Render::Text::TextFormat *v56; // rdi
  const Scaleform::Render::Text::GFxLineCursor *v57; // rax
  __int64 v58; // rcx
  Scaleform::Render::Text::LineBuffer::GlyphEntry *v59; // rax
  float LastAdvance; // xmm0_4
  Scaleform::Render::Text::LineBuffer::GlyphEntry *v61; // rdi
  bool v62; // cc
  double v63; // xmm0_8
  double v64; // xmm0_8
  Scaleform::Render::Text::LineBuffer::GlyphEntry *pPrevGrec; // rcx
  int v66; // eax
  unsigned int v67; // eax
  unsigned int v68; // esi
  unsigned __int16 LenAndFontSize; // dx
  float FontSize; // xmm1_4
  int v71; // ecx
  double v72; // xmm0_8
  Scaleform::Render::Font *pFont; // rcx
  float v74; // xmm6_4
  double v75; // xmm0_8
  double v76; // xmm0_8
  int NewLineWidth; // eax
  unsigned int v78; // eax
  __int64 v79[4]; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v80; // [rsp+40h] [rbp-C0h]
  float TextRectWidth; // [rsp+48h] [rbp-B8h]
  float v82; // [rsp+4Ch] [rbp-B4h]
  float v83; // [rsp+50h] [rbp-B0h]
  float v84; // [rsp+54h] [rbp-ACh]
  char v85; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v86; // [rsp+60h] [rbp-A0h]
  bool v87; // [rsp+68h] [rbp-98h]
  Scaleform::Render::Text::GFxLineCursor v88; // [rsp+70h] [rbp-90h] BYREF
  __int128 v89; // [rsp+1D0h] [rbp+D0h] BYREF
  char v90[1024]; // [rsp+1E0h] [rbp+E0h] BYREF

  pObject = this->LineCursor.pLastFont.pObject;
  if ( !pObject )
    return 0;
  Pass = this->Pass;
  if ( Pass != 1 || !this->HasLineFormatHandler )
  {
    if ( Pass == 2 )
    {
      Scaleform::Render::Text::GFxLineCursor::GFxLineCursor(&v88);
      Scaleform::Render::Text::GFxLineCursor::operator=(&this->WordWrapPoint, v57);
      Scaleform::Render::Text::GFxLineCursor::~GFxLineCursor(&v88);
      this->Pass = 1;
    }
    goto LABEL_98;
  }
  p_WordWrapPoint = &this->WordWrapPoint;
  if ( this->WordWrapPoint.RightToLeft )
  {
    if ( this->WordWrapPoint.RLCharIter.Index >= 0 )
    {
LABEL_8:
      NumChars = this->WordWrapPoint.NumChars;
      v8 = this->WordWrapPoint.pLastFont.pObject->pFont.pObject;
      LineWidth = this->WordWrapPoint.LineWidth;
      goto LABEL_9;
    }
  }
  else
  {
    pText = this->WordWrapPoint.CharIter.pText;
    if ( pText && this->WordWrapPoint.CharIter.CurTextIndex < pText->Size )
      goto LABEL_8;
  }
  v8 = pObject->pFont.pObject;
  NumChars = this->LineCursor.NumChars;
  LineWidth = this->LineCursor.LineWidth;
LABEL_9:
  v10 = _mm_cvtsi32_si128(LineWidth);
  v79[0] = (__int64)this->pTextBufForCustomFormat;
  TextBufLen = this->TextBufLen;
  pTempLine = this->pTempLine;
  v79[1] = TextBufLen;
  v13 = _mm_cvtepi32_ps(v10).m128_u32[0];
  if ( (pTempLine->MemSize & 0x80000000) == 0 )
  {
    TextPos = pTempLine->Data32.TextPos;
  }
  else
  {
    TextPos = pTempLine->Data32.TextPos & 0xFFFFFF;
    if ( (_DWORD)TextPos == 0xFFFFFF )
      TextPos = 0xFFFFFFFFi64;
  }
  v15 = this->LineCursor.NumChars;
  v79[3] = TextPos - this->pParagraph->StartIndex;
  v80 = v15;
  v16 = (this->pParaFormat->PresentMask >> 9) & 3;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        if ( v18 == 1 )
          v85 = 2;
      }
      else
      {
        v85 = 3;
      }
    }
    else
    {
      v85 = 1;
    }
  }
  else
  {
    v85 = 0;
  }
  v19 = (float)this->LineCursor.LineWidth;
  TextRectWidth = this->TextRectWidth;
  v82 = v19;
  v83 = *(float *)&v13;
  v20 = v8->GetGlyphIndex(v8, 45u);
  if ( v20 > 0 )
    v84 = v8->GetGlyphWidth(v8, v20);
  v21 = v90;
  v86 = NumChars;
  if ( v80 + 1 > 0x100 )
  {
    Allocator = Scaleform::Render::Text::StyledText::GetAllocator(this->pDocView->pDocument.pObject);
    v21 = (char *)Allocator->pHeap->Alloc(Allocator->pHeap, 4 * v80 + 4, 0i64);
  }
  GlyphIndex = this->LineCursor.GlyphIns.GlyphIndex;
  v24 = 0;
  pGlyphs = this->LineCursor.GlyphIns.pGlyphs;
  v26 = 0.0;
  if ( GlyphIndex < 4 )
  {
LABEL_43:
    if ( v24 < GlyphIndex )
    {
      p_Advance = &pGlyphs[v24].Advance;
      do
      {
        if ( p_Advance[1] >= 0x1000u )
          break;
        v35 = *p_Advance;
        if ( (p_Advance[2] & 0x40) != 0 )
          v35 = -v35;
        p_Advance += 4;
        ++v24;
        v26 = v26 + (float)v35;
      }
      while ( v24 < GlyphIndex );
    }
  }
  else
  {
    v27 = &pGlyphs->Advance;
    p_Flags = &pGlyphs->Flags;
    p_LenAndFontSize = &pGlyphs->LenAndFontSize;
    while ( *p_LenAndFontSize < 0x1000u )
    {
      v30 = *v27;
      if ( (*(_BYTE *)p_Flags & 0x40) != 0 )
        v30 = -v30;
      v26 = v26 + (float)v30;
      if ( p_LenAndFontSize[4] >= 0x1000u )
      {
        ++v24;
        break;
      }
      v31 = v27[4];
      if ( (p_Flags[4] & 0x40) != 0 )
        v31 = -v31;
      v26 = v26 + (float)v31;
      if ( p_LenAndFontSize[8] >= 0x1000u )
      {
        v24 += 2;
        break;
      }
      v32 = v27[8];
      if ( (p_Flags[8] & 0x40) != 0 )
        v32 = -v32;
      v26 = v26 + (float)v32;
      if ( p_LenAndFontSize[12] >= 0x1000u )
      {
        v24 += 3;
        break;
      }
      v33 = v27[12];
      if ( (p_Flags[12] & 0x40) != 0 )
        v33 = -v33;
      p_LenAndFontSize += 16;
      p_Flags += 16;
      v27 += 16;
      v24 += 4;
      v26 = v26 + (float)v33;
      if ( v24 >= GlyphIndex - 3 )
        goto LABEL_43;
    }
  }
  v36 = 0i64;
  v79[2] = (__int64)v21;
  TextRectWidth = TextRectWidth - v26;
  v82 = v82 - v26;
  v37 = 0.0;
  v83 = v83 - v26;
  if ( v24 < GlyphIndex )
  {
    v38 = &pGlyphs[v24].Advance;
    v39 = GlyphIndex - v24;
    do
    {
      *(float *)&v21[4 * v36] = v37;
      v40 = &v21[4 * v36];
      v41 = *v38;
      if ( (v38[2] & 0x40) != 0 )
        v41 = -v41;
      v42 = v38[1] >> 12;
      v37 = v37 + (float)v41;
      if ( v42 >= 2 )
      {
        v43 = v36;
        v44 = v42;
        do
        {
          v40 += 4;
          this->pTextBufForCustomFormat[v43++] = 160;
          *((_DWORD *)v40 - 1) = 0;
          --v44;
        }
        while ( v44 );
      }
      v38 += 4;
      v36 += v42;
      --v39;
    }
    while ( v39 );
  }
  *(float *)&v21[4 * v36] = v37;
  pDocView = this->pDocView;
  v87 = 0;
  v46 = pDocView->pDocumentListener.pObject->View_OnLineFormat(
          pDocView->pDocumentListener.pObject,
          pDocView,
          (Scaleform::Render::Text::DocView::LineFormatDesc *)v79);
  if ( v46 )
  {
    this->HyphenationRequested = v87;
    v47 = v86;
    if ( !v86 )
      v47 = 1i64;
    v86 = v47;
    if ( v47 != NumChars )
    {
      if ( p_WordWrapPoint->RightToLeft )
      {
        if ( p_WordWrapPoint->RLCharIter.Index < 0 )
          goto LABEL_64;
      }
      else
      {
        v48 = p_WordWrapPoint->CharIter.pText;
        if ( !v48 || p_WordWrapPoint->CharIter.CurTextIndex >= v48->Size )
          goto LABEL_64;
      }
      if ( v47 > this->WordWrapPoint.NumChars )
      {
        Scaleform::Render::Text::LineBuffer::GlyphInserter::ResetTo(
          &this->LineCursor.GlyphIns,
          &this->WordWrapPoint.GlyphIns);
        p_StartPoint = p_WordWrapPoint;
        goto LABEL_68;
      }
LABEL_64:
      if ( this->HalfPoint.RightToLeft )
      {
        if ( this->HalfPoint.RLCharIter.Index < 0 )
        {
LABEL_67:
          Scaleform::Render::Text::LineBuffer::GlyphInserter::ResetTo(
            &this->LineCursor.GlyphIns,
            &this->StartPoint.GlyphIns);
          p_StartPoint = &this->StartPoint;
LABEL_68:
          Scaleform::Render::Text::GFxLineCursor::operator=(&this->LineCursor, p_StartPoint);
          this->RequestedWordWrapPos = v86;
          this->Pass = 2;
          this->DeltaText = 0;
          goto LABEL_69;
        }
      }
      else
      {
        v49 = this->HalfPoint.CharIter.pText;
        if ( !v49 || this->HalfPoint.CharIter.CurTextIndex >= v49->Size )
          goto LABEL_67;
      }
      if ( v47 > this->HalfPoint.NumChars )
      {
        Scaleform::Render::Text::LineBuffer::GlyphInserter::ResetTo(
          &this->LineCursor.GlyphIns,
          &this->HalfPoint.GlyphIns);
        p_StartPoint = &this->HalfPoint;
        goto LABEL_68;
      }
      goto LABEL_67;
    }
  }
LABEL_69:
  if ( v21 != v90 )
  {
    Scaleform::Render::Text::StyledText::GetAllocator(this->pDocView->pDocument.pObject);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v21);
  }
  Scaleform::Render::Text::GFxLineCursor::GFxLineCursor(&v88);
  v52 = Scaleform::Render::Text::GFxLineCursor::operator=(&this->HalfPoint, v51);
  Scaleform::Render::Text::GFxLineCursor::operator=(&this->StartPoint, v52);
  v53 = v88.RLCharIter.PlaceHolder.pFormat.pObject;
  if ( v88.RLCharIter.PlaceHolder.pFormat.pObject )
  {
    v54 = v88.RLCharIter.PlaceHolder.pFormat.pObject->RefCount-- == 1;
    if ( v54 )
    {
      Scaleform::Render::Text::TextFormat::~TextFormat(v53);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v53);
    }
  }
  v55 = v88.CharInfoHolder.pFormat.pObject;
  if ( v88.CharInfoHolder.pFormat.pObject )
  {
    v54 = v88.CharInfoHolder.pFormat.pObject->RefCount-- == 1;
    if ( v54 )
    {
      Scaleform::Render::Text::TextFormat::~TextFormat(v55);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v55);
    }
  }
  v56 = v88.CharIter.PlaceHolder.pFormat.pObject;
  if ( v88.CharIter.PlaceHolder.pFormat.pObject )
  {
    v54 = v88.CharIter.PlaceHolder.pFormat.pObject->RefCount-- == 1;
    if ( v54 )
    {
      Scaleform::Render::Text::TextFormat::~TextFormat(v56);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v56);
    }
  }
  if ( v88.pComposStr.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v88.pComposStr.pObject);
  if ( v88.pLastFont.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v88.pLastFont.pObject);
  if ( v46 && this->Pass == 2 )
    return 1;
LABEL_98:
  if ( this->HyphenationRequested )
  {
    v58 = this->LineCursor.GlyphIns.GlyphIndex;
    v59 = this->LineCursor.GlyphIns.pGlyphs;
    v59[v58] = 0i64;
    LastAdvance = this->LineCursor.LastAdvance;
    v61 = &v59[v58];
    v62 = LastAdvance <= 0.0;
    v63 = LastAdvance;
    if ( v62 )
      v64 = v63 - 0.5;
    else
      v64 = v63 + 0.5;
    pPrevGrec = this->LineCursor.pPrevGrec;
    v66 = (int)v64;
    if ( pPrevGrec )
    {
      if ( v66 < 0 )
      {
        pPrevGrec->Flags |= 0x40u;
        pPrevGrec->Advance = abs32(v66);
      }
      else
      {
        pPrevGrec->Advance = v66;
        pPrevGrec->Flags &= ~0x40u;
      }
    }
    v67 = this->LineCursor.pLastFont.pObject->pFont.pObject->GetGlyphIndex(
            this->LineCursor.pLastFont.pObject->pFont.pObject,
            45u);
    v61->LenAndFontSize &= 0xFFFu;
    v68 = v67;
    LenAndFontSize = v61->LenAndFontSize;
    v61->Index = v67;
    FontSize = this->FontSize;
    if ( FontSize < 256.0 && (v71 = (int)(float)(FontSize * 16.0), (v71 & 0xF) != 0) )
    {
      v61->Flags |= 0x10u;
      v61->LenAndFontSize = LenAndFontSize ^ (LenAndFontSize ^ v71) & 0xFFF;
    }
    else
    {
      v61->Flags &= ~0x10u;
      v61->LenAndFontSize = LenAndFontSize ^ (LenAndFontSize ^ (int)FontSize) & 0xFFF;
    }
    this->LineCursor.LineWidth = this->NewLineWidth;
    v72 = ((double (__fastcall *)(Scaleform::Render::Font *, _QWORD))this->LineCursor.pLastFont.pObject->pFont.pObject->GetAdvance)(
            this->LineCursor.pLastFont.pObject->pFont.pObject,
            v67);
    pFont = this->pFont;
    v74 = *(float *)&v72 * this->Scale;
    v89 = 0i64;
    *(float *)&v72 = fmaxf(
                       (float)(pFont->GetGlyphBounds(pFont, v68, (Scaleform::Render::Rect<float> *)&v89)->x2
                             * this->Scale)
                     + 20.0,
                       v74);
    v62 = *(float *)&v72 <= 0.0;
    v75 = *(float *)&v72;
    if ( v62 )
      v76 = v75 - 0.5;
    else
      v76 = v75 + 0.5;
    this->LineCursor.NumOfTrailingSpaces = 0;
    NewLineWidth = this->NewLineWidth;
    this->LineCursor.LastGlyphIndex = v68;
    this->HyphenationRequested = 0;
    this->LineCursor.pPrevGrec = v61;
    this->LineCursor.LastGlyphWidth = (int)v76;
    this->LineCursor.LineWidthWithoutTrailingSpaces = NewLineWidth + (int)v76;
    this->LineCursor.LastAdvance = (float)(int)v76;
    if ( this->LineCursor.GlyphIns.pGlyphs )
    {
      v78 = this->LineCursor.GlyphIns.GlyphIndex;
      if ( v78 < this->LineCursor.GlyphIns.GlyphsCount )
        this->LineCursor.GlyphIns.GlyphIndex = v78 + 1;
    }
  }
  return 0;
}

void __fastcall Scaleform::Render::Text::ParagraphFormatter::InitBidiText(
        Scaleform::Render::Text::ParagraphFormatter *this)
{
  Scaleform::Render::Text::DocView *pDocView; // rax
  Scaleform::Render::Text::DocView::DocumentListener *pObject; // rcx
  unsigned __int64 Length; // rax
  unsigned __int64 v5; // rdi
  wchar_t *NewParaText; // rdx
  wchar_t *v7; // rcx
  bool v8; // al
  unsigned int NewLen; // er8
  bool *MirroredBits; // r9
  unsigned int *IndexMap; // rdx
  wchar_t *v12; // rcx

  pDocView = this->pDocView;
  if ( (this->pDocView->FlagsEx & 4) != 0
    && (pObject = pDocView->pDocumentListener.pObject) != 0i64
    && (pObject->HandlersMask & 0x10) != 0 )
  {
    Length = Scaleform::Render::Text::Paragraph::GetLength((Scaleform::Render::Text::Paragraph *)this->pParagraph);
    v5 = Length;
    if ( Length > this->NewSize )
    {
      NewParaText = this->NewParaText;
      this->NewSize = Length;
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, NewParaText);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->IndexMap);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->MirroredBits);
      this->NewParaText = (wchar_t *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 2 * v5, 0i64);
      this->IndexMap = (unsigned int *)Scaleform::Memory::pGlobalHeap->Alloc(
                                         Scaleform::Memory::pGlobalHeap,
                                         4 * v5,
                                         0i64);
      this->MirroredBits = (bool *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, v5, 0i64);
    }
    v7 = this->NewParaText;
    this->NewLen = v5;
    memset(v7, 0, 2 * v5);
    memset(this->IndexMap, 0, 4 * v5);
    memset(this->MirroredBits, 0, v5);
    v8 = this->pDocView->pDocumentListener.pObject->View_PrepareBidiText(
           this->pDocView->pDocumentListener.pObject,
           this->pDocView,
           this->pParagraph->Text.pText,
           v5,
           this->NewParaText,
           this->IndexMap,
           this->MirroredBits);
    this->LineCursor.RightToLeft = v8;
    if ( v8 )
    {
      NewLen = this->NewLen;
      MirroredBits = this->MirroredBits;
      IndexMap = this->IndexMap;
      v12 = this->NewParaText;
      this->LineCursor.RLCharIter.pParagraph = this->pParagraph;
      this->LineCursor.RLCharIter.Index = NewLen - 1;
      this->LineCursor.RLCharIter.ParaText = v12;
      this->LineCursor.RLCharIter.ParaLen = NewLen;
      this->LineCursor.RLCharIter.IndexMap = IndexMap;
      this->LineCursor.RLCharIter.MirroredBits = MirroredBits;
      this->LineCursor.RLCharIter.VIndex = 0;
      this->pDocView->RTFlags |= 0x40u;
    }
    else
    {
      this->LineCursor.RightToLeft = 0;
    }
  }
  else
  {
    pDocView->RTFlags &= ~0x40u;
  }
}

void __fastcall Scaleform::Render::Text::ParagraphFormatter::InitCustomWordWrapping(
        Scaleform::Render::Text::ParagraphFormatter *this)
{
  Scaleform::Render::Text::DocView::DocumentListener *pObject; // rcx
  bool v3; // al
  unsigned __int64 Length; // rax
  Scaleform::Render::Text::Paragraph *pParagraph; // rcx
  unsigned __int64 v6; // r15
  unsigned __int64 StartIndex; // rbx
  char v8; // bl
  wchar_t *TextBufForCustomFormat; // r12
  Scaleform::Render::Text::Allocator *Allocator; // rax
  const Scaleform::Render::Text::Paragraph *v11; // rax
  wchar_t *pText; // rbp
  unsigned __int64 v13; // rsi
  size_t v14; // rbx
  const wchar_t *v15; // rax
  unsigned __int64 v16; // rax

  pObject = this->pDocView->pDocumentListener.pObject;
  if ( !pObject || (v3 = 1, (pObject->HandlersMask & 1) == 0) )
    v3 = 0;
  this->HasLineFormatHandler = v3;
  this->pTextBufForCustomFormat = 0i64;
  if ( v3 )
  {
    Length = Scaleform::Render::Text::Paragraph::GetLength((Scaleform::Render::Text::Paragraph *)this->pParagraph);
    pParagraph = (Scaleform::Render::Text::Paragraph *)this->pParagraph;
    v6 = Length;
    StartIndex = pParagraph->StartIndex;
    if ( this->LineCursor.ComposStrPosition < StartIndex
      || this->LineCursor.ComposStrPosition > Scaleform::Render::Text::Paragraph::GetLength(pParagraph) + StartIndex )
    {
      v8 = 0;
    }
    else
    {
      v8 = 1;
      v6 = this->LineCursor.ComposStrLength
         + Scaleform::Render::Text::Paragraph::GetLength((Scaleform::Render::Text::Paragraph *)this->pParagraph);
    }
    if ( v6 >= 0x100 )
    {
      Allocator = Scaleform::Render::Text::StyledText::GetAllocator(this->pDocView->pDocument.pObject);
      TextBufForCustomFormat = (wchar_t *)Allocator->pHeap->Alloc(Allocator->pHeap, 2 * v6 + 2, 0i64);
    }
    else
    {
      TextBufForCustomFormat = this->TextBufForCustomFormat;
    }
    v11 = this->pParagraph;
    pText = v11->Text.pText;
    if ( v8 && this->LineCursor.ComposStrLength )
    {
      v13 = this->LineCursor.ComposStrPosition - v11->StartIndex;
      memmove(TextBufForCustomFormat, pText, 2 * v13);
      v14 = 2 * this->LineCursor.ComposStrLength;
      v15 = this->LineCursor.pComposStr.pObject->GetText(this->LineCursor.pComposStr.pObject);
      memmove(&TextBufForCustomFormat[v13], v15, v14);
      v16 = Scaleform::Render::Text::Paragraph::GetLength((Scaleform::Render::Text::Paragraph *)this->pParagraph);
      memmove(&TextBufForCustomFormat[v13 + this->LineCursor.ComposStrLength], &pText[v13], 2 * (v16 - v13));
    }
    else
    {
      memmove(TextBufForCustomFormat, v11->Text.pText, 2 * v6);
    }
    TextBufForCustomFormat[v6] = 0;
    this->pTextBufForCustomFormat = TextBufForCustomFormat;
    this->TextBufLen = v6;
  }
}

void __fastcall Scaleform::Render::Text::ParagraphFormatter::InitParagraph(
        Scaleform::Render::Text::ParagraphFormatter *this,
        const Scaleform::Render::Text::Paragraph *paragraph)
{
  Scaleform::Render::Text::ParagraphFormat *pObject; // rax
  Scaleform::Render::Text::DocView *pDocView; // rdx
  const Scaleform::Render::Text::GFxLineCursor *v7; // rax
  const Scaleform::Render::Text::GFxLineCursor *v8; // rax
  const Scaleform::Render::Text::GFxLineCursor *v9; // rax
  const Scaleform::Render::Text::GFxLineCursor *v10; // rax
  Scaleform::Render::Text::DocView *v11; // rcx
  Scaleform::Render::Text::EditorKitBase *v12; // rcx
  Scaleform::RefCountVImpl *v13; // rax
  Scaleform::Render::Text::CompositionStringBase *v14; // rdi
  Scaleform::RefCountVImpl *v15; // rcx
  unsigned __int64 v16; // rax
  Scaleform::Render::Text::CompositionStringBase *v17; // rcx
  unsigned __int64 v18; // rdi
  unsigned int v19; // eax
  unsigned int v20; // esi
  Scaleform::Render::Text::LineBuffer::Line *TempLineBuff; // rcx
  Scaleform::Render::Text::LineBuffer::Line *pDynLine; // rdx
  Scaleform::Render::Text::LineBuffer::Line *v23; // rax
  Scaleform::Render::Text::LineBuffer::Line *pTempLine; // rcx
  Scaleform::Render::Text::LineBuffer::Line *v25; // rcx
  unsigned __int64 StartIndex; // rdx
  Scaleform::Render::Text::EditorKitBase *v27; // rcx
  Scaleform::Render::Text::LineBuffer::Line *v28; // rcx
  Scaleform::Render::Text::LineBuffer::Line *v29; // rcx
  unsigned int GlyphsCount; // esi
  Scaleform::Render::Text::LineBuffer::GlyphEntry *v31; // rdi
  Scaleform::Render::Text::LineBuffer::FormatDataEntry *FormatData; // rax
  Scaleform::Render::Text::DocView *v33; // rax
  float v34; // xmm0_4
  Scaleform::Render::Text::GFxLineCursor v35; // [rsp+20h] [rbp-168h] BYREF

  this->pParagraph = paragraph;
  pObject = paragraph->pFormat.pObject;
  pDocView = this->pDocView;
  this->pParaFormat = pObject;
  Scaleform::Render::Text::GFxLineCursor::GFxLineCursor(&v35, pDocView, paragraph);
  Scaleform::Render::Text::GFxLineCursor::operator=(&this->LineCursor, v7);
  Scaleform::Render::Text::GFxLineCursor::~GFxLineCursor(&v35);
  Scaleform::Render::Text::GFxLineCursor::GFxLineCursor(&v35);
  v9 = Scaleform::Render::Text::GFxLineCursor::operator=(&this->WordWrapPoint, v8);
  v10 = Scaleform::Render::Text::GFxLineCursor::operator=(&this->HalfPoint, v9);
  Scaleform::Render::Text::GFxLineCursor::operator=(&this->StartPoint, v10);
  Scaleform::Render::Text::GFxLineCursor::~GFxLineCursor(&v35);
  v11 = this->pDocView;
  this->LineCursor.FontScaleFactor = (float)this->pDocView->FontScaleFactor * 0.050000001;
  v12 = v11->pEditorKit.pObject;
  if ( v12 && v12->HasCompositionString(v12) )
  {
    v13 = (Scaleform::RefCountVImpl *)this->pDocView->pEditorKit.pObject->GetCompositionString(this->pDocView->pEditorKit.pObject);
    v14 = (Scaleform::Render::Text::CompositionStringBase *)v13;
    if ( v13 )
      Scaleform::Render::RenderBuffer::AddRef(v13);
    v15 = (Scaleform::RefCountVImpl *)this->LineCursor.pComposStr.pObject;
    if ( v15 )
      Scaleform::RefCountImpl::Release(v15);
    this->LineCursor.pComposStr.pObject = v14;
    v16 = v14->GetPosition(v14);
    v17 = this->LineCursor.pComposStr.pObject;
    this->LineCursor.ComposStrPosition = v16;
    this->LineCursor.ComposStrLength = v17->GetLength(v17);
  }
  Scaleform::Render::Text::ParagraphFormatter::InitCustomWordWrapping(this);
  Scaleform::Render::Text::ParagraphFormatter::InitBidiText(this);
  v18 = paragraph->Text.Size + this->LineCursor.ComposStrLength;
  if ( (this->pParaFormat->PresentMask & 0x8080) == 0x8080 )
    LODWORD(v18) = v18 + 1;
  v19 = Scaleform::Render::Text::LineBuffer::CalcLineSize(v18, 2 * v18, Line32);
  v20 = v19;
  if ( v19 >= 0x400 )
  {
    pDynLine = this->pDynLine;
    if ( pDynLine )
    {
      if ( v19 >= (pDynLine->MemSize & 0x7FFFFFF) )
      {
        Scaleform::Render::Text::LineBuffer::TextLineAllocator::FreeLine(
          &this->pDocView->mLineBuffer.LineAllocator,
          pDynLine);
        this->pDynLine = Scaleform::Render::Text::LineBuffer::TextLineAllocator::AllocLine(
                           &this->pDocView->mLineBuffer.LineAllocator,
                           v20 + 100,
                           Line32);
      }
      v23 = this->pDynLine;
    }
    else
    {
      v23 = Scaleform::Render::Text::LineBuffer::TextLineAllocator::AllocLine(
              &this->pDocView->mLineBuffer.LineAllocator,
              v19 + 100,
              Line32);
      this->pDynLine = v23;
    }
    this->pTempLine = v23;
  }
  else
  {
    TempLineBuff = (Scaleform::Render::Text::LineBuffer::Line *)this->TempLineBuff;
    if ( this != (Scaleform::Render::Text::ParagraphFormatter *)-2144i64 )
      TempLineBuff->MemSize = 0;
    if ( this == (Scaleform::Render::Text::ParagraphFormatter *)-2144i64 )
      TempLineBuff = 0i64;
    this->pTempLine = TempLineBuff;
    TempLineBuff->MemSize &= 0xF8000000;
    TempLineBuff->MemSize |= v19 & 0x7FFFFFF;
  }
  pTempLine = this->pTempLine;
  pTempLine->MemSize = pTempLine->MemSize & 0x7FFFFFF | 0x40000000;
  *(_QWORD *)&pTempLine->Data32.GlyphsCount = 0i64;
  *(_DWORD *)((char *)&pTempLine->Data8 + 34) = 0;
  *(_QWORD *)&pTempLine->Data8.OffsetX = 0i64;
  *(_QWORD *)&pTempLine->Data8.Width = 0i64;
  pTempLine->Data32.TextLength = 0;
  this->pTempLine->MemSize &= ~0x40000000u;
  v25 = this->pTempLine;
  if ( (v25->MemSize & 0x80000000) == 0 )
    v25->Data32.GlyphsCount = v18;
  else
    v25->Data8.GlyphsCount = v18;
  StartIndex = paragraph->StartIndex;
  v27 = this->pDocView->pEditorKit.pObject;
  if ( v27 )
    LODWORD(StartIndex) = v27->TextPos2GlyphOffset(v27, StartIndex);
  v28 = this->pTempLine;
  if ( (v28->MemSize & 0x80000000) == 0 )
  {
    v28->Data32.TextPos = StartIndex;
  }
  else
  {
    v28->Data32.TextPos &= 0xFF000000;
    v28->Data32.TextPos |= StartIndex & 0xFFFFFF;
  }
  v29 = this->pTempLine;
  if ( (v29->MemSize & 0x80000000) == 0 )
    GlyphsCount = v29->Data32.GlyphsCount;
  else
    GlyphsCount = v29->Data8.GlyphsCount;
  v31 = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)(&v29->Data8.Leading + 1);
  if ( (v29->MemSize & 0x80000000) == 0 )
    v31 = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)&v29->Data8 + 38);
  FormatData = Scaleform::Render::Text::LineBuffer::Line::GetFormatData(v29);
  this->LineCursor.GlyphIns.pGlyphs = v31;
  this->LineCursor.GlyphIns.GlyphsCount = GlyphsCount;
  this->LineCursor.GlyphIns.pNextFormatData = FormatData;
  this->LineCursor.GlyphIns.GlyphIndex = 0;
  this->LineCursor.GlyphIns.FormatDataIndex = 0;
  v33 = this->pDocView;
  *(_QWORD *)&this->ParaWidth = 0i64;
  this->ParaLines = 0;
  this->DeltaText = 1;
  this->Pass = 1;
  this->HyphenationRequested = 0;
  this->RequestedWordWrapPos = 0;
  this->isSpace = 0;
  v34 = v33->mLineBuffer.Geom.VisibleRect.x2 - v33->mLineBuffer.Geom.VisibleRect.x1;
  *(_QWORD *)&this->TabStopsNum = 0i64;
  this->TextRectWidth = v34;
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index,
        const Scaleform::Render::Text::DocView::ImageSubstitutor::Element *val)
{
  unsigned __int64 Size; // rbp
  Scaleform::Render::Text::DocView::ImageSubstitutor::Element *v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r8
  Scaleform::Render::Text::DocView::ImageSubstitutor::Element *v10; // rcx
  Scaleform::Render::Text::ImageDesc *pObject; // rax

  Size = this->Data.Size;
  Scaleform::ArrayDataBase<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Data,
    this,
    Size + 1);
  if ( Size + 1 > Size )
  {
    v7 = &this->Data.Data[Size];
    v8 = 1i64;
    do
    {
      if ( v7 )
        v7->pImageDesc.pObject = 0i64;
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  v9 = this->Data.Size;
  if ( index < v9 - 1 )
    memmove(&this->Data.Data[index + 1], &this->Data.Data[index], 56 * (v9 - index) - 56);
  v10 = &this->Data.Data[index];
  if ( v10 )
  {
    *(_OWORD *)v10->SubString = *(_OWORD *)val->SubString;
    *(_OWORD *)&v10->SubString[8] = *(_OWORD *)&val->SubString[8];
    *(_QWORD *)&v10->SubString[16] = *(_QWORD *)&val->SubString[16];
    pObject = val->pImageDesc.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v10->pImageDesc.pObject = val->pImageDesc.pObject;
    v10->SubStringLen = val->SubStringLen;
  }
}

bool __fastcall Scaleform::Render::Text::WordWrapHelper::IsAsianChar(unsigned int wwMode, wchar_t c)
{
  if ( (wwMode & 4) != 0
    && ((unsigned __int16)(c - 4352) <= 0xFFu
     || (unsigned __int16)(c - 12592) <= 0x5Fu
     || (unsigned __int16)(c + 21504) <= 0x2BA3u) )
  {
    return 0;
  }
  return (unsigned __int16)(c - 4352) <= 0xFFu
      || (unsigned __int16)(c - 12288) <= 0xA7AFu
      || (unsigned __int16)(c + 1792) <= 0x1FFu
      || (unsigned __int16)(c + 256) <= 0xDCu;
}

char __fastcall Scaleform::Render::Text::WordWrapHelper::IsLineBreakOpportunityAt(
        unsigned int wwMode,
        wchar_t prevChar,
        wchar_t curChar)
{
  unsigned __int64 v7; // rax
  int v8; // er8
  int v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // er8
  int v12; // ecx
  char v13; // di

  if ( !prevChar )
    return 0;
  v7 = (unsigned __int64)prevChar >> 8;
  v8 = Scaleform::UnicodeSpaceBits[v7];
  if ( !Scaleform::UnicodeSpaceBits[v7]
    || v8 != 1 && (v9 = Scaleform::UnicodeSpaceBits[v8 + ((prevChar >> 4) & 0xF)], !_bittest(&v9, prevChar & 0xF)) )
  {
    if ( !Scaleform::Render::Text::WordWrapHelper::IsAsianChar(wwMode, curChar)
      && !Scaleform::Render::Text::WordWrapHelper::IsAsianChar(wwMode, prevChar)
      && prevChar != 45 )
    {
      return 0;
    }
  }
  v10 = (unsigned __int64)curChar >> 8;
  v11 = Scaleform::UnicodeSpaceBits[v10];
  if ( Scaleform::UnicodeSpaceBits[v10] )
  {
    if ( v11 == 1 )
      return 0;
    v12 = Scaleform::UnicodeSpaceBits[v11 + ((curChar >> 4) & 0xF)];
    if ( _bittest(&v12, curChar & 0xF) )
      return 0;
  }
  v13 = 1;
  if ( Scaleform::Render::Text::WordWrapHelper::FindCharWithFlags(wwMode, curChar, 1u)
    || Scaleform::Render::Text::WordWrapHelper::FindCharWithFlags(wwMode, prevChar, 2u) )
  {
    return 0;
  }
  return v13;
}

__int64 __fastcall Scaleform::Render::Text::DocView::IsUrlAtPoint(
        Scaleform::Render::Text::DocView *this,
        float x,
        float y,
        Scaleform::Range *purlPosRange)
{
  float v6; // xmm6_4
  float v7; // xmm7_4
  int VScrollOffsetInFixp; // eax
  unsigned __int8 v9; // r12
  Scaleform::Render::Text::LineBuffer::Line *v10; // r14
  float OffsetX; // xmm1_4
  int v12; // eax
  int v13; // esi
  float v14; // xmm6_4
  unsigned int GlyphsCount; // er13
  __int64 v16; // rbx
  int v17; // ebx
  int Advance; // eax
  int TextPos; // eax
  Scaleform::Render::Text::DocView::DocumentText *pObject; // rcx
  unsigned __int64 v21; // rsi
  Scaleform::Render::Text::Paragraph *pPara; // r14
  unsigned __int64 v23; // rbx
  Scaleform::Render::Text::TextFormat *v24; // rcx
  const Scaleform::Render::Text::Paragraph::StyledTextRun *v25; // rax
  unsigned __int8 *v26; // rcx
  unsigned __int64 v27; // r8
  int v28; // eax
  int v29; // edx
  Scaleform::Render::Text::TextFormat *v30; // rbx
  Scaleform::Render::Text::LineBuffer::GlyphIterator v33; // [rsp+28h] [rbp-E0h] BYREF
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator v34; // [rsp+C8h] [rbp-40h] BYREF
  Scaleform::Render::Text::Paragraph::FormatRunIterator v35; // [rsp+D8h] [rbp-30h] BYREF
  Scaleform::Render::Text::LineBuffer::Iterator result; // [rsp+128h] [rbp+20h] BYREF
  Scaleform::Render::Text::TextFormat v37; // [rsp+148h] [rbp+40h] BYREF
  unsigned __int64 pindexInParagraph; // [rsp+1E8h] [rbp+E0h] BYREF

  if ( (this->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(this);
    this->RTFlags &= 0xFCu;
  }
  v6 = x - this->mLineBuffer.Geom.VisibleRect.x1;
  v7 = y - this->mLineBuffer.Geom.VisibleRect.y1;
  VScrollOffsetInFixp = Scaleform::Render::Text::LineBuffer::GetVScrollOffsetInFixp(&this->mLineBuffer);
  Scaleform::Render::Text::LineBuffer::FindLineAtYOffset(&this->mLineBuffer, &result, (float)VScrollOffsetInFixp + v7);
  v9 = 0;
  if ( !result.pLineBuffer )
    return 0i64;
  if ( result.CurrentPos < result.pLineBuffer->Lines.Data.Size && (result.CurrentPos & 0x80000000) == 0 )
  {
    v10 = result.pLineBuffer->Lines.Data.Data[result.CurrentPos];
    OffsetX = (float)v10->Data32.OffsetX;
    if ( v6 >= OffsetX )
    {
      v12 = (v10->MemSize & 0x80000000) == 0 ? v10->Data32.Width : v10->Data8.Width;
      if ( (float)((float)v12 + OffsetX) >= v6 )
      {
        v13 = 0;
        v14 = (float)(v6 - OffsetX) + (float)(int)this->mLineBuffer.Geom.HScrollOffset;
        if ( (v10->MemSize & 0x80000000) == 0 )
          GlyphsCount = v10->Data32.GlyphsCount;
        else
          GlyphsCount = v10->Data8.GlyphsCount;
        v16 = 42i64;
        if ( (v10->MemSize & 0x80000000) != 0 )
          v16 = 30i64;
        v33.HighlighterIter.CurDesc.StartPos = -1i64;
        v33.HighlighterIter.CurDesc.Offset = -1i64;
        memset(&v33.HighlighterIter, 0, 24);
        v33.pGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v10 + v16);
        v33.HighlighterIter.CurDesc.Length = 0i64;
        memset(&v33.HighlighterIter.CurDesc.AdjStartPos, 0, 33);
        memset(&v33.ColorV, 0, 40);
        v33.pNextFormatData = Scaleform::Render::Text::LineBuffer::Line::GetFormatData(v10);
        v33.pEndGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v10 + 8 * GlyphsCount + v16);
        Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(&v33);
        v17 = 0;
        while ( v33.pGlyphs && v33.pGlyphs < v33.pEndGlyphs )
        {
          Advance = v33.pGlyphs->Advance;
          if ( (v33.pGlyphs->Flags & 0x40) != 0 )
            Advance = -Advance;
          v13 += Advance;
          if ( (float)v13 > v14 )
          {
            v9 = LOBYTE(v33.pGlyphs->Flags) >> 7;
            if ( SLOBYTE(v33.pGlyphs->Flags) < 0 && purlPosRange )
            {
              purlPosRange->Index = 0i64;
              purlPosRange->Length = 0i64;
              TextPos = v10->Data32.TextPos;
              if ( (v10->MemSize & 0x80000000) != 0 )
              {
                TextPos &= 0xFFFFFFu;
                if ( TextPos == 0xFFFFFF )
                  TextPos = -1;
              }
              pObject = this->pDocument.pObject;
              pindexInParagraph = 0i64;
              v21 = (unsigned int)(v17 + TextPos);
              Scaleform::Render::Text::StyledText::GetParagraphByIndex(pObject, &v34, v21, &pindexInParagraph);
              if ( v34.pArray )
              {
                if ( v34.CurIndex >= 0 && v34.CurIndex < SLODWORD(v34.pArray->Data.Size) )
                {
                  pPara = v34.pArray->Data.Data[v34.CurIndex].pPara;
                  Scaleform::Render::Text::Paragraph::GetTextFormat(
                    pPara,
                    &v37,
                    pindexInParagraph,
                    pindexInParagraph + 1);
                  Scaleform::Render::Text::Paragraph::GetIterator(pPara, &v35);
                  while ( v35.CurTextIndex < v35.pText->Size )
                  {
                    v23 = pPara->StartIndex
                        + Scaleform::Render::Text::Paragraph::FormatRunIterator::operator*(&v35)->Index;
                    v24 = Scaleform::Render::Text::Paragraph::FormatRunIterator::operator*(&v35)->pFormat.pObject;
                    if ( (v24->PresentMask & 0x100) == 0 || !Scaleform::String::GetLength(&v24->Url) )
                      goto LABEL_42;
                    v25 = Scaleform::Render::Text::Paragraph::FormatRunIterator::operator*(&v35);
                    v26 = (unsigned __int8 *)((v25->pFormat.pObject->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
                    v27 = (v37.Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64)
                        - (v25->pFormat.pObject->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
                    do
                    {
                      v28 = v26[v27];
                      v29 = *v26 - v28;
                      if ( v29 )
                        break;
                      ++v26;
                    }
                    while ( v28 );
                    if ( !v29 )
                    {
                      if ( purlPosRange->Index + purlPosRange->Length >= v23 )
                      {
                        purlPosRange->Length += Scaleform::Render::Text::Paragraph::FormatRunIterator::operator*(&v35)->Length;
                      }
                      else
                      {
                        if ( v23 > v21 )
                          break;
                        purlPosRange->Index = v23;
                        purlPosRange->Length = Scaleform::Render::Text::Paragraph::FormatRunIterator::operator*(&v35)->Length;
                      }
                    }
                    else
                    {
LABEL_42:
                      if ( v23 > v21 )
                        break;
                      purlPosRange->Index = 0i64;
                      purlPosRange->Length = 0i64;
                    }
                    Scaleform::Render::Text::Paragraph::FormatRunIterator::operator++(&v35);
                  }
                  v30 = v35.PlaceHolder.pFormat.pObject;
                  if ( v35.PlaceHolder.pFormat.pObject )
                  {
                    if ( v35.PlaceHolder.pFormat.pObject->RefCount-- == 1 )
                    {
                      Scaleform::Render::Text::TextFormat::~TextFormat(v30);
                      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v30);
                    }
                  }
                  Scaleform::Render::Text::TextFormat::~TextFormat(&v37);
                }
              }
            }
            break;
          }
          v17 += v33.pGlyphs->LenAndFontSize >> 12;
          Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&v33);
        }
        if ( v33.pImage.pObject )
          Scaleform::RefCountNTSImpl::Release(v33.pImage.pObject);
        if ( v33.pFontHandle.pObject )
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v33.pFontHandle.pObject);
      }
    }
  }
  return v9;
}

void __fastcall Scaleform::Render::Text::DocView::OnDocumentChanged(
        Scaleform::Render::Text::DocView *this,
        unsigned int notifyMask)
{
  if ( (notifyMask & 0x100) != 0 )
    this->RTFlags |= 2u;
  else
    this->RTFlags |= 1u;
}

void __fastcall Scaleform::Render::Text::DocView::OnDocumentParagraphRemoving(
        Scaleform::Render::Text::DocView *this,
        const Scaleform::Render::Text::Paragraph *para)
{
  __int64 v2; // r8
  Scaleform::Render::Text::LineBuffer *p_mLineBuffer; // r9
  char v4; // bl
  int *v6; // rcx
  int v7; // er11

  v2 = 0i64;
  p_mLineBuffer = &this->mLineBuffer;
  v4 = 0;
  while ( p_mLineBuffer && (unsigned int)v2 < p_mLineBuffer->Lines.Data.Size && (int)v2 >= 0 )
  {
    v6 = (int *)p_mLineBuffer->Lines.Data.Data[v2];
    if ( *v6 >= 0 )
      v7 = v6[7];
    else
      v7 = v6[1];
    if ( para->UniqueId == v7 )
    {
      v4 = 1;
      if ( *v6 >= 0 )
        v6[2] = -1;
      else
        v6[2] |= 0xFFFFFFu;
    }
    else if ( v4 )
    {
      break;
    }
    if ( (unsigned int)v2 < p_mLineBuffer->Lines.Data.Size )
      v2 = (unsigned int)(v2 + 1);
  }
  this->RTFlags |= 1u;
}

void __fastcall Scaleform::Render::Text::DocView::DocumentText::OnParagraphRemoving(
        Scaleform::Render::Text::DocView::DocumentText *this,
        const Scaleform::Render::Text::Paragraph *para)
{
  this->pDocument->OnDocumentParagraphRemoving(this->pDocument, para);
}

void __fastcall Scaleform::Render::Text::DocView::DocumentText::OnTextInserting(
        Scaleform::Render::Text::DocView::DocumentText *this,
        unsigned __int64 startPos,
        unsigned __int64 length)
{
  ((void (__fastcall *)(Scaleform::Render::Text::DocView *, __int64, unsigned __int64))this->pDocument->OnDocumentChanged)(
    this->pDocument,
    2i64,
    length);
}

void __fastcall Scaleform::Render::Text::DocView::ParseHtml(
        Scaleform::Render::Text::DocView *this,
        const char *putf8Str,
        unsigned __int64 utf8Len,
        bool condenseWhite,
        Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *pimgInfoArr,
        const Scaleform::Render::Text::StyleManagerBase *pstyleMgr,
        const Scaleform::Render::Text::TextFormat *txtFmt,
        const Scaleform::Render::Text::ParagraphFormat *paraFmt)
{
  Scaleform::Render::Text::StyledText::Clear(this->pDocument.pObject);
  if ( utf8Len == -1i64 )
  {
    do
      ++utf8Len;
    while ( putf8Str[utf8Len] );
  }
  Scaleform::Render::Text::StyledText::ParseHtml(
    this->pDocument.pObject,
    putf8Str,
    utf8Len,
    pimgInfoArr,
    (this->Flags & 4) != 0,
    condenseWhite,
    pstyleMgr,
    txtFmt,
    paraFmt);
  this->OnDocumentChanged(this, 262u);
}

void __fastcall Scaleform::Render::Text::DocView::ParseHtml(
        Scaleform::Render::Text::DocView *this,
        const wchar_t *pwStr,
        unsigned __int64 strLen,
        bool condenseWhite,
        Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *pimgInfoArr,
        const Scaleform::Render::Text::StyleManagerBase *pstyleMgr,
        const Scaleform::Render::Text::TextFormat *txtFmt,
        const Scaleform::Render::Text::ParagraphFormat *paraFmt)
{
  Scaleform::Render::Text::StyledText::Clear(this->pDocument.pObject);
  if ( strLen == -1i64 )
    strLen = Scaleform::SFwcslen(pwStr);
  Scaleform::Render::Text::StyledText::ParseHtml(
    this->pDocument.pObject,
    pwStr,
    strLen,
    pimgInfoArr,
    (this->Flags & 4) != 0,
    condenseWhite,
    pstyleMgr,
    txtFmt,
    paraFmt);
  this->OnDocumentChanged(this, 262u);
}

void __fastcall Scaleform::Render::Text::DocView::ImageSubstitutor::RemoveImageDesc(
        Scaleform::Render::Text::DocView::ImageSubstitutor *this,
        Scaleform::Render::Text::ImageDesc *pimgDesc)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // rsi
  Scaleform::Render::Text::ImageDesc *pObject; // rcx

  v2 = 0i64;
  if ( this->Elements.Data.Size )
  {
    v5 = 0i64;
    do
    {
      if ( this->Elements.Data.Data[v5].pImageDesc.pObject == pimgDesc )
      {
        if ( this->Elements.Data.Size == 1 )
        {
          Scaleform::ArrayDataBase<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
            &this->Elements.Data,
            this,
            0i64);
        }
        else
        {
          pObject = this->Elements.Data.Data[v5].pImageDesc.pObject;
          if ( pObject )
            Scaleform::RefCountNTSImpl::Release(pObject);
          memmove(
            &this->Elements.Data.Data[v5],
            &this->Elements.Data.Data[v5 + 1],
            56 * (this->Elements.Data.Size - v2) - 56);
          --this->Elements.Data.Size;
        }
      }
      else
      {
        ++v2;
        ++v5;
      }
    }
    while ( v2 < this->Elements.Data.Size );
  }
}

unsigned __int64 __fastcall Scaleform::Render::Text::DocView::ReplaceText(
        Scaleform::Render::Text::DocView *this,
        const wchar_t *pstr,
        unsigned __int64 startPos,
        unsigned __int64 endPos,
        unsigned __int64 strLen)
{
  unsigned __int64 v7; // r8
  Scaleform::Render::Text::DocView::DocumentText *pObject; // rcx

  v7 = endPos - startPos;
  pObject = this->pDocument.pObject;
  if ( endPos < startPos )
    v7 = 0i64;
  Scaleform::Render::Text::StyledText::Remove(pObject, startPos, v7);
  return Scaleform::Render::Text::StyledText::InsertString(
           this->pDocument.pObject,
           pstr,
           startPos,
           strLen,
           NLP_ReplaceCRLF);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::ComplexMesh::FillRecord,Scaleform::AllocatorLH<Scaleform::Render::ComplexMesh::FillRecord,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::ComplexMesh::FillRecord *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::Render::ComplexMesh::FillRecord *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 56 * v6;
      if ( Data )
      {
        v8 = (Scaleform::Render::ComplexMesh::FillRecord *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                             Scaleform::Memory::pGlobalHeap,
                                                             Data,
                                                             v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (Scaleform::Render::ComplexMesh::FillRecord *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdi
  unsigned __int64 v7; // rdi
  Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> *p_pImageDesc; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::ComplexMesh::FillRecord,Scaleform::AllocatorLH<Scaleform::Render::ComplexMesh::FillRecord,2>,Scaleform::ArrayDefaultPolicy> *)this,
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
      p_pImageDesc = &this->Data[v7 - 1 + newSize].pImageDesc;
      do
      {
        if ( p_pImageDesc->pObject )
          Scaleform::RefCountNTSImpl::Release(p_pImageDesc->pObject);
        p_pImageDesc -= 7;
        --v7;
      }
      while ( v7 );
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::ComplexMesh::FillRecord,Scaleform::AllocatorLH<Scaleform::Render::ComplexMesh::FillRecord,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::Hash<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>,Scaleform::AllocatorDH<Scaleform::Render::Text::TextFormat const *,74>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF>,Scaleform::HashSetDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeAltHashF,74,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF>>>::Set(
        Scaleform::Hash<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>,Scaleform::AllocatorDH<Scaleform::Render::Text::TextFormat const *,74>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF>,Scaleform::HashSetDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeAltHashF,74,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF> > > *this,
        const Scaleform::Render::Text::TextFormat *const *key,
        const Scaleform::Ptr<Scaleform::Render::Text::FontHandle> *value)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF> >::TableType *pTable; // r9
  unsigned __int64 v5; // r10
  unsigned __int64 SizeMask; // rbx
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // rdx
  bool v11; // zf
  unsigned __int64 *v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 *v14; // rbx
  Scaleform::RefCountVImpl *v15; // rcx
  Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeRef keya; // [rsp+20h] [rbp-18h] BYREF

  pTable = this->mHash.pTable;
  v5 = (unsigned __int64)*key;
  keya.pFirst = key;
  keya.pSecond = value;
  if ( !pTable )
    goto LABEL_14;
  SizeMask = pTable->SizeMask;
  v8 = v5 & SizeMask;
  v9 = v8;
  v10 = v8 + 2 * (v8 + 1);
  v11 = *(&pTable->EntryCount + v10) == -2i64;
  v12 = &pTable->EntryCount + v10;
  if ( v11 || (SizeMask & v12[1]) != v8 )
    goto LABEL_14;
  while ( 1 )
  {
    v13 = v12[1];
    if ( (v13 & SizeMask) == v8 && v13 == v5 )
      break;
    v9 = *v12;
    if ( *v12 == -1i64 )
      goto LABEL_14;
    v12 = &pTable[v9 + 1].EntryCount + v9;
  }
  if ( v9 >= 0 )
  {
    v14 = &pTable[1].SizeMask + 3 * v9;
    *v14 = v5;
    if ( value->pObject )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)value->pObject);
    v15 = (Scaleform::RefCountVImpl *)v14[1];
    if ( v15 )
      Scaleform::RefCountImpl::Release(v15);
    v14[1] = (unsigned __int64)value->pObject;
  }
  else
  {
LABEL_14:
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeRef>(
      &this->mHash,
      this->mHash.pHeap,
      &keya,
      v5);
  }
}

void __fastcall Scaleform::Render::Text::DocView::SetAutoSizeX(Scaleform::Render::Text::DocView *this)
{
  unsigned __int8 Flags; // al

  Flags = this->Flags;
  if ( (Flags & 1) == 0 )
  {
    this->RTFlags |= 2u;
    this->Flags = Flags | 1;
  }
}

void __fastcall Scaleform::Render::Text::DocView::SetAutoSizeY(Scaleform::Render::Text::DocView *this)
{
  unsigned __int8 Flags; // al

  Flags = this->Flags;
  if ( (Flags & 2) == 0 )
  {
    this->RTFlags |= 2u;
    this->Flags = Flags | 2;
  }
}

char __fastcall Scaleform::Render::Text::DocView::SetBottomVScroll(
        Scaleform::Render::Text::DocView *this,
        unsigned int newBottomMostLine)
{
  unsigned int Size; // eax
  Scaleform::Render::Text::LineBuffer *p_mLineBuffer; // r14
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  Scaleform::Render::Text::LineBuffer::Line *v7; // rcx
  unsigned int Height; // er11
  int v9; // eax
  unsigned int v10; // ebx
  char v11; // si
  unsigned int MaxVScroll; // eax
  Scaleform::Render::Text::DocView::DocumentListener *pObject; // rcx

  Size = this->mLineBuffer.Lines.Data.Size;
  if ( newBottomMostLine >= Size )
    newBottomMostLine = Size - 1;
  p_mLineBuffer = &this->mLineBuffer;
  v5 = newBottomMostLine;
  if ( this == (Scaleform::Render::Text::DocView *)-80i64 )
    return 0;
  v6 = this->mLineBuffer.Lines.Data.Size;
  if ( newBottomMostLine >= v6 || (newBottomMostLine & 0x80000000) != 0 )
    return 0;
  v7 = p_mLineBuffer->Lines.Data.Data[newBottomMostLine];
  if ( (v7->MemSize & 0x80000000) == 0 )
    Height = v7->Data32.Height;
  else
    Height = v7->Data8.Height;
  if ( (v7->MemSize & 0x80000000) == 0 )
  {
    LOWORD(v9) = v7->Data32.Leading;
    if ( (__int16)v9 > 0 )
    {
      v9 = (__int16)v9;
      goto LABEL_15;
    }
  }
  else
  {
    LOBYTE(v9) = v7->Data8.Leading;
    if ( (char)v9 > 0 )
    {
      v9 = (char)v9;
      goto LABEL_15;
    }
  }
  v9 = 0;
LABEL_15:
  v10 = newBottomMostLine;
  do
  {
    if ( newBottomMostLine >= v6 )
      break;
    if ( (newBottomMostLine & 0x80000000) != 0 )
      break;
    if ( (float)((float)((float)(int)(Height + v9 + v7->Data32.OffsetY) - this->mLineBuffer.Geom.VisibleRect.y2)
               + this->mLineBuffer.Geom.VisibleRect.y1) > (float)p_mLineBuffer->Lines.Data.Data[newBottomMostLine]->Data32.OffsetY )
      break;
    --newBottomMostLine;
    v10 = v5--;
  }
  while ( v5 >= 0 );
  v11 = 0;
  MaxVScroll = Scaleform::Render::Text::DocView::GetMaxVScroll(this);
  if ( v10 > MaxVScroll )
    v10 = MaxVScroll;
  if ( this->mLineBuffer.Geom.FirstVisibleLinePos != v10 )
  {
    Scaleform::Render::Text::LineBuffer::SetFirstVisibleLine(p_mLineBuffer, v10);
    pObject = this->pDocumentListener.pObject;
    if ( pObject )
      pObject->View_OnVScroll(pObject, this, v10);
    return 1;
  }
  return v11;
}

void __fastcall Scaleform::Render::Text::DocView::SetDefaultTextAndParaFormat(
        Scaleform::Render::Text::DocView *this,
        unsigned __int64 cursorPos)
{
  unsigned __int64 v4; // r9
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator result; // [rsp+20h] [rbp-18h] BYREF
  Scaleform::Render::Text::ParagraphFormat *ppdestParaFmt; // [rsp+40h] [rbp+8h] BYREF
  Scaleform::Render::Text::TextFormat *ppdestTextFmt; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 pindexInParagraph; // [rsp+58h] [rbp+20h] BYREF

  pindexInParagraph = -1i64;
  ppdestParaFmt = 0i64;
  ppdestTextFmt = 0i64;
  Scaleform::Render::Text::StyledText::GetParagraphByIndex(
    this->pDocument.pObject,
    &result,
    cursorPos,
    &pindexInParagraph);
  if ( result.pArray
    && result.CurIndex >= 0
    && result.CurIndex < SLODWORD(result.pArray->Data.Size)
    && cursorPos - pindexInParagraph != -1i64 )
  {
    v4 = cursorPos - 1;
    if ( cursorPos - pindexInParagraph == cursorPos )
      v4 = cursorPos;
    if ( Scaleform::Render::Text::StyledText::GetTextAndParagraphFormat(
           this->pDocument.pObject,
           (const Scaleform::Render::Text::TextFormat **)&ppdestTextFmt,
           (const Scaleform::Render::Text::ParagraphFormat **)&ppdestParaFmt,
           v4) )
    {
      Scaleform::Render::Text::StyledText::SetDefaultParagraphFormat(this->pDocument.pObject, ppdestParaFmt);
      Scaleform::Render::Text::StyledText::SetDefaultTextFormat(this->pDocument.pObject, ppdestTextFmt);
    }
  }
}

char __fastcall Scaleform::Render::Text::DocView::SetHScrollOffset(
        Scaleform::Render::Text::DocView *this,
        unsigned int hscroll)
{
  unsigned int MaxHScrollValue; // eax
  Scaleform::Render::Text::DocView::DocumentListener *pObject; // rcx

  if ( (this->RTFlags & 3) != 0 )
  {
    Scaleform::Render::Text::DocView::Format(this);
    this->RTFlags &= 0xFCu;
  }
  MaxHScrollValue = Scaleform::Render::Text::DocView::GetMaxHScrollValue(this);
  if ( hscroll > MaxHScrollValue )
    hscroll = MaxHScrollValue;
  if ( this->mLineBuffer.Geom.HScrollOffset == hscroll )
    return 0;
  Scaleform::Render::Text::LineBuffer::SetHScrollOffset(&this->mLineBuffer, hscroll);
  pObject = this->pDocumentListener.pObject;
  if ( pObject )
    pObject->View_OnHScroll(pObject, this, hscroll);
  return 1;
}

void __fastcall Scaleform::Render::Text::DocView::SetParagraphFormat(
        Scaleform::Render::Text::DocView *this,
        const Scaleform::Render::Text::ParagraphFormat *fmt,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  Scaleform::Render::Text::StyledText::SetParagraphFormat(this->pDocument.pObject, fmt, startPos, endPos);
  this->OnDocumentChanged(this, 1u);
}

void __fastcall Scaleform::Render::Text::DocView::SetSelection(
        Scaleform::Render::Text::DocView *this,
        unsigned __int64 startPos,
        unsigned __int64 endPos,
        bool highlightSelection)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  Scaleform::Render::Text::Highlighter *v7; // rax
  Scaleform::Render::Text::Highlighter *v8; // rsi
  unsigned __int64 v9; // rax
  Scaleform::Render::Text::Highlighter *v10; // rax
  Scaleform::Render::Text::Highlighter *v11; // rsi
  Scaleform::Render::Text::HighlightDesc *SelectionHighlighterDesc; // rax
  unsigned __int64 v13; // rdi
  int v14; // [rsp+58h] [rbp+20h] BYREF

  this->BeginSelection = startPos;
  v4 = endPos;
  this->EndSelection = endPos;
  v5 = startPos;
  if ( highlightSelection )
  {
    if ( !this->pHighlight )
    {
      v14 = 74;
      v7 = (Scaleform::Render::Text::Highlighter *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                     Scaleform::Memory::pGlobalHeap,
                                                     this,
                                                     72i64,
                                                     &v14);
      v8 = v7;
      if ( v7 )
      {
        Scaleform::Render::Text::Highlighter::Highlighter(v7);
        LODWORD(v8[1].Highlighters.Data.Data) = -1082130432;
        HIDWORD(v8[1].Highlighters.Data.Data) = -1082130432;
        LOWORD(v8[1].Highlighters.Data.Size) = 0;
      }
      else
      {
        v8 = 0i64;
      }
      this->pHighlight = (Scaleform::Render::Text::DocView::HighlightDescLoc *)v8;
    }
    if ( v4 < v5 )
    {
      v9 = v4;
      v4 = v5;
      v5 = v9;
    }
    if ( (this->RTFlags & 0x40) == 0 )
    {
      if ( !this->pHighlight )
      {
        v14 = 74;
        v10 = (Scaleform::Render::Text::Highlighter *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                        Scaleform::Memory::pGlobalHeap,
                                                        this,
                                                        72i64,
                                                        &v14);
        v11 = v10;
        if ( v10 )
        {
          Scaleform::Render::Text::Highlighter::Highlighter(v10);
          LODWORD(v11[1].Highlighters.Data.Data) = -1082130432;
          HIDWORD(v11[1].Highlighters.Data.Data) = -1082130432;
          LOWORD(v11[1].Highlighters.Data.Size) = 0;
        }
        else
        {
          v11 = 0i64;
        }
        this->pHighlight = (Scaleform::Render::Text::DocView::HighlightDescLoc *)v11;
      }
      SelectionHighlighterDesc = Scaleform::Render::Text::DocView::GetSelectionHighlighterDesc(this);
      v13 = v4 - v5;
      if ( SelectionHighlighterDesc->StartPos != v5 || SelectionHighlighterDesc->Length != v13 )
      {
        SelectionHighlighterDesc->StartPos = v5;
        SelectionHighlighterDesc->Length = v13;
        *(_WORD *)&this->pHighlight->HighlightManager.Valid = 0;
      }
    }
  }
}

void __fastcall Scaleform::Render::Text::DocView::SetSelectionBackgroundColor(
        Scaleform::Render::Text::DocView *this,
        unsigned int color)
{
  Scaleform::Render::Text::Highlighter *v4; // rax
  Scaleform::Render::Text::Highlighter *v5; // rdi
  Scaleform::Render::Text::HighlightDesc *SelectionHighlighterDesc; // rax
  unsigned int Raw; // ecx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (this->RTFlags & 0x40) == 0 )
  {
    if ( !this->pHighlight )
    {
      v8 = 74;
      v4 = (Scaleform::Render::Text::Highlighter *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                     Scaleform::Memory::pGlobalHeap,
                                                     this,
                                                     72i64,
                                                     &v8);
      v5 = v4;
      if ( v4 )
      {
        Scaleform::Render::Text::Highlighter::Highlighter(v4);
        LODWORD(v5[1].Highlighters.Data.Data) = -1082130432;
        LOWORD(v5[1].Highlighters.Data.Size) = 0;
        HIDWORD(v5[1].Highlighters.Data.Data) = -1082130432;
      }
      else
      {
        v5 = 0i64;
      }
      this->pHighlight = (Scaleform::Render::Text::DocView::HighlightDescLoc *)v5;
    }
    SelectionHighlighterDesc = Scaleform::Render::Text::DocView::GetSelectionHighlighterDesc(this);
    if ( (SelectionHighlighterDesc->Info.Flags & 8) != 0 )
    {
      Raw = SelectionHighlighterDesc->Info.BackgroundColor.Raw;
    }
    else
    {
      v8 = 0;
      Raw = 0;
    }
    if ( Raw != color )
    {
      SelectionHighlighterDesc->Info.Flags |= 8u;
      SelectionHighlighterDesc->Info.BackgroundColor.Raw = color;
      *(_WORD *)&this->pHighlight->HighlightManager.Valid = 0;
    }
  }
}

void __fastcall Scaleform::Render::Text::DocView::SetSelectionTextColor(
        Scaleform::Render::Text::DocView *this,
        unsigned int color)
{
  Scaleform::Render::Text::Highlighter *v4; // rax
  Scaleform::Render::Text::Highlighter *v5; // rdi
  Scaleform::Render::Text::HighlightDesc *SelectionHighlighterDesc; // rax
  unsigned int Raw; // ecx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (this->RTFlags & 0x40) == 0 )
  {
    if ( !this->pHighlight )
    {
      v8 = 74;
      v4 = (Scaleform::Render::Text::Highlighter *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                     Scaleform::Memory::pGlobalHeap,
                                                     this,
                                                     72i64,
                                                     &v8);
      v5 = v4;
      if ( v4 )
      {
        Scaleform::Render::Text::Highlighter::Highlighter(v4);
        LODWORD(v5[1].Highlighters.Data.Data) = -1082130432;
        LOWORD(v5[1].Highlighters.Data.Size) = 0;
        HIDWORD(v5[1].Highlighters.Data.Data) = -1082130432;
      }
      else
      {
        v5 = 0i64;
      }
      this->pHighlight = (Scaleform::Render::Text::DocView::HighlightDescLoc *)v5;
    }
    SelectionHighlighterDesc = Scaleform::Render::Text::DocView::GetSelectionHighlighterDesc(this);
    if ( (SelectionHighlighterDesc->Info.Flags & 0x10) != 0 )
    {
      Raw = SelectionHighlighterDesc->Info.TextColor.Raw;
    }
    else
    {
      v8 = 0;
      Raw = 0;
    }
    if ( Raw != color )
    {
      SelectionHighlighterDesc->Info.Flags |= 0x10u;
      SelectionHighlighterDesc->Info.TextColor.Raw = color;
      *(_WORD *)&this->pHighlight->HighlightManager.Valid = 0;
    }
  }
}

void __fastcall Scaleform::Render::Text::DocView::SetText(
        Scaleform::Render::Text::DocView *this,
        const char *putf8String,
        unsigned __int64 stringSize)
{
  Scaleform::Render::Text::StyledText::SetText(this->pDocument.pObject, putf8String, stringSize);
  this->OnDocumentChanged(this, 262u);
}

void __fastcall Scaleform::Render::Text::DocView::SetText(
        Scaleform::Render::Text::DocView *this,
        const wchar_t *pstring,
        unsigned __int64 length)
{
  Scaleform::Render::Text::StyledText::SetText(this->pDocument.pObject, pstring, length);
  this->OnDocumentChanged(this, 262u);
}

void __fastcall Scaleform::Render::Text::DocView::SetTextFormat(
        Scaleform::Render::Text::DocView *this,
        const Scaleform::Render::Text::TextFormat *fmt,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  this->RTFlags &= ~0x10u;
  Scaleform::Render::Text::StyledText::SetTextFormat(this->pDocument.pObject, fmt, startPos, endPos);
  this->OnDocumentChanged(this, 1u);
}

char __fastcall Scaleform::Render::Text::DocView::SetVScrollOffset(
        Scaleform::Render::Text::DocView *this,
        unsigned int vscroll)
{
  unsigned int MaxVScroll; // eax
  Scaleform::Render::Text::DocView::DocumentListener *pObject; // rcx

  MaxVScroll = Scaleform::Render::Text::DocView::GetMaxVScroll(this);
  if ( vscroll > MaxVScroll )
    vscroll = MaxVScroll;
  if ( this->mLineBuffer.Geom.FirstVisibleLinePos == vscroll )
    return 0;
  Scaleform::Render::Text::LineBuffer::SetFirstVisibleLine(&this->mLineBuffer, vscroll);
  pObject = this->pDocumentListener.pObject;
  if ( pObject )
    pObject->View_OnVScroll(pObject, this, vscroll);
  return 1;
}

void __fastcall Scaleform::Render::Text::DocView::SetViewRect(
        Scaleform::Render::Text::DocView *this,
        const Scaleform::Render::Rect<float> *rect,
        Scaleform::Render::Text::DocView::UseType ut)
{
  float x1; // xmm3_4
  float x2; // xmm1_4
  unsigned int v6; // ecx
  unsigned int v7; // ebp
  float y1; // xmm0_4
  float y2; // xmm5_4
  unsigned __int8 AlignProps; // di
  unsigned int v11; // eax
  unsigned int v12; // esi
  unsigned int MaxHScroll; // eax
  unsigned int MaxVScroll; // edi
  unsigned int v15; // eax
  Scaleform::Render::Text::DocView::DocumentListener *pObject; // rcx

  x1 = rect->x1;
  if ( rect->x1 != this->ViewRect.x1
    || rect->x2 != this->ViewRect.x2
    || rect->y1 != this->ViewRect.y1
    || rect->y2 != this->ViewRect.y2 )
  {
    x2 = rect->x2;
    v6 = (int)(float)(this->ViewRect.x2 - this->ViewRect.x1);
    v7 = (int)(float)(this->ViewRect.y2 - this->ViewRect.y1);
    y1 = rect->y1;
    this->ViewRect.y2 = rect->y2;
    this->ViewRect.x1 = x1;
    this->ViewRect.y1 = y1;
    this->ViewRect.x2 = x2;
    y2 = this->ViewRect.y2;
    this->mLineBuffer.Geom.VisibleRect.x2 = x2 + -40.0;
    this->mLineBuffer.Geom.VisibleRect.y2 = y2 + -40.0;
    this->mLineBuffer.Geom.VisibleRect.x1 = x1 + 40.0;
    this->mLineBuffer.Geom.VisibleRect.y1 = y1 + 40.0;
    if ( ut == UseExternally )
    {
      AlignProps = this->AlignProps;
      v11 = (int)(float)(x2 - this->ViewRect.x1);
      v12 = (int)(float)(this->ViewRect.y2 - this->ViewRect.y1);
      if ( (AlignProps & 0x30) != 0
        || v6 != v11
        && ((this->Flags & 8) != 0
         || v11 < v6 && (this->mLineBuffer.Geom.Flags & 0x20) != 0
         || (AlignProps & 3) != 0
         || Scaleform::Render::Text::DocView::ContainsNonLeftAlignment(this))
        || v12 < v7 && (this->mLineBuffer.Geom.Flags & 0x20) != 0
        || (AlignProps & 8) != 0 )
      {
        this->RTFlags |= 2u;
      }
      else
      {
        ++this->FormatCounter;
        MaxHScroll = Scaleform::Render::Text::DocView::GetMaxHScroll(this);
        if ( this->mLineBuffer.Geom.HScrollOffset > MaxHScroll )
          Scaleform::Render::Text::DocView::SetHScrollOffset(this, MaxHScroll);
        MaxVScroll = Scaleform::Render::Text::DocView::GetMaxVScroll(this);
        if ( this->mLineBuffer.Geom.FirstVisibleLinePos > MaxVScroll )
        {
          v15 = Scaleform::Render::Text::DocView::GetMaxVScroll(this);
          if ( MaxVScroll > v15 )
            MaxVScroll = v15;
          if ( this->mLineBuffer.Geom.FirstVisibleLinePos != MaxVScroll )
          {
            Scaleform::Render::Text::LineBuffer::SetFirstVisibleLine(&this->mLineBuffer, MaxVScroll);
            pObject = this->pDocumentListener.pObject;
            if ( pObject )
              pObject->View_OnVScroll(pObject, this, MaxVScroll);
          }
        }
        this->mLineBuffer.Geom.Flags |= 1u;
      }
    }
  }
}

void __fastcall Scaleform::Render::Text::DocView::SetWordWrap(Scaleform::Render::Text::DocView *this)
{
  unsigned __int8 Flags; // al

  Flags = this->Flags;
  if ( (Flags & 8) == 0 )
  {
    this->RTFlags |= 2u;
    this->Flags = Flags | 8;
  }
}

void __fastcall Scaleform::Render::Text::GFxLineCursor::TrackFontParams(
        Scaleform::Render::Text::GFxLineCursor *this,
        Scaleform::Render::Font *pfont,
        float scale)
{
  float Ascent; // xmm3_4
  float Descent; // xmm1_4

  Ascent = pfont->Ascent;
  Descent = pfont->Descent;
  if ( Ascent == 0.0 )
    Ascent = FLOAT_960_0;
  if ( Descent == 0.0 )
    Descent = FLOAT_64_0;
  this->MaxFontAscent = fmaxf(this->MaxFontAscent, Ascent * scale);
  this->MaxFontDescent = fmaxf(this->MaxFontDescent, Descent * scale);
  this->MaxFontLeading = fmaxf(this->MaxFontLeading, scale * pfont->Leading);
}

void __fastcall Scaleform::Render::Text::ParagraphFormatter::TreatBidirectionalTextInLine(
        Scaleform::Render::Text::ParagraphFormatter *this)
{
  unsigned __int64 GlyphIndex; // r12
  __int64 v3; // rax
  bool v4; // cf
  unsigned __int64 v5; // rax
  unsigned __int64 *v6; // rax
  _QWORD *v7; // r13
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r15
  Scaleform::Render::Text::LineBuffer::Line *pTempLine; // rdi
  __int64 v12; // rbx
  unsigned int v13; // esi
  Scaleform::RefCountVImpl *pObject; // rdi
  __int64 v15; // rbx
  Scaleform::RefCountVImpl *v16; // rcx
  Scaleform::Render::Text::ImageDesc *v17; // rdi
  Scaleform::RefCountNTSImpl *v18; // rcx
  unsigned int ColorV; // eax
  int v20; // eax
  Scaleform::Render::Text::LineBuffer::Line *v21; // rdi
  __int64 v22; // rbx
  Scaleform::Render::Text::LineBuffer::FormatDataEntry *FormatData; // rax
  Scaleform::Render::Text::LineBuffer::Line *v24; // rcx
  Scaleform::Render::Text::LineBuffer::FormatDataEntry *v25; // rax
  Scaleform::RefCountVImpl *v26; // rdx
  __int64 v27; // r15
  Scaleform::Render::Text::LineBuffer::FormatDataEntry *v28; // r12
  unsigned int v29; // er14
  unsigned int v30; // esi
  Scaleform::Render::Text::FontHandle *v31; // r8
  int v32; // er9
  _QWORD *v33; // rdi
  char *v34; // rbx
  Scaleform::Render::Text::LineBuffer::FormatDataEntry v35; // rcx
  __int64 v36; // rax
  Scaleform::RefCountVImpl *v37; // rcx
  __int64 v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rcx
  Scaleform::RefCountNTSImpl *v41; // rcx
  __int64 v42; // rdi
  Scaleform::RefCountVImpl **v43; // rbx
  Scaleform::RefCountNTSImpl *v44; // rcx
  _QWORD *v45; // [rsp+20h] [rbp-99h]
  char *v46; // [rsp+28h] [rbp-91h]
  Scaleform::Render::Text::LineBuffer::GlyphIterator v47; // [rsp+30h] [rbp-89h] BYREF
  int v48; // [rsp+120h] [rbp+67h]
  unsigned int v49; // [rsp+128h] [rbp+6Fh]
  Scaleform::RefCountVImpl *v50; // [rsp+130h] [rbp+77h]
  Scaleform::Render::Text::FontHandle *v51; // [rsp+138h] [rbp+7Fh]

  GlyphIndex = this->LineCursor.GlyphIns.GlyphIndex;
  *(_QWORD *)&this->LineCursor.LineWidth = 0i64;
  v49 = GlyphIndex;
  v3 = 32 * GlyphIndex;
  if ( !is_mul_ok(GlyphIndex, 0x20ui64) )
    v3 = -1i64;
  v4 = __CFADD__(v3, 8i64);
  v5 = v3 + 8;
  if ( v4 )
    v5 = -1i64;
  v6 = (unsigned __int64 *)operator new[](v5);
  if ( v6 )
  {
    *v6 = GlyphIndex;
    v7 = v6 + 1;
    v45 = v6 + 1;
    v8 = v6 + 1;
    v9 = (unsigned int)GlyphIndex;
    if ( GlyphIndex )
    {
      do
      {
        *v8 = 0i64;
        v8[1] = 0i64;
        v8[2] = 0i64;
        v8 += 4;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    v7 = 0i64;
    v45 = 0i64;
  }
  v10 = 42i64;
  pTempLine = this->pTempLine;
  v12 = 42i64;
  this->LineCursor.LineWidth = this->LineCursor.FirstGlyphWidth;
  if ( (pTempLine->MemSize & 0x80000000) != 0 )
    v12 = 30i64;
  v47.HighlighterIter.CurDesc.StartPos = -1i64;
  v47.pNextFormatData = Scaleform::Render::Text::LineBuffer::Line::GetFormatData(pTempLine);
  memset(&v47.HighlighterIter, 0, 24);
  v47.HighlighterIter.CurDesc.Length = 0i64;
  memset(&v47.HighlighterIter.CurDesc.AdjStartPos, 0, 33);
  memset(&v47.ColorV, 0, 40);
  v47.pGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)pTempLine + v12);
  v47.pEndGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)pTempLine + 8 * GlyphIndex + v12);
  v47.HighlighterIter.CurDesc.Offset = -1i64;
  Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(&v47);
  v13 = 0;
  while ( v47.pGlyphs && v47.pGlyphs < v47.pEndGlyphs )
  {
    pObject = (Scaleform::RefCountVImpl *)v47.pFontHandle.pObject;
    v15 = 4i64 * v13;
    v7[v15] = *v47.pGlyphs;
    if ( pObject )
      Scaleform::Render::RenderBuffer::AddRef(pObject);
    v16 = (Scaleform::RefCountVImpl *)v7[v15 + 1];
    if ( v16 )
      Scaleform::RefCountImpl::Release(v16);
    v7[v15 + 1] = pObject;
    v17 = v47.pImage.pObject;
    if ( v47.pImage.pObject )
      ++v47.pImage.pObject->RefCount;
    v18 = (Scaleform::RefCountNTSImpl *)v7[v15 + 2];
    if ( v18 )
      Scaleform::RefCountNTSImpl::Release(v18);
    ColorV = v47.ColorV;
    v7[v15 + 2] = v17;
    LODWORD(v7[v15 + 3]) = ColorV;
    if ( v13 )
    {
      v20 = WORD1(v7[v15]);
      if ( (v7[v15] & 0x40000000000000i64) != 0 )
        v20 = -v20;
      this->LineCursor.LineWidth += v20;
    }
    ++v13;
    Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&v47);
  }
  if ( v47.pImage.pObject )
    Scaleform::RefCountNTSImpl::Release(v47.pImage.pObject);
  if ( v47.pFontHandle.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v47.pFontHandle.pObject);
  v21 = this->pTempLine;
  v22 = 42i64;
  this->LineCursor.LineWidthWithoutTrailingSpaces = this->LineCursor.LineWidth;
  if ( (v21->MemSize & 0x80000000) != 0 )
    v22 = 30i64;
  FormatData = Scaleform::Render::Text::LineBuffer::Line::GetFormatData(v21);
  Scaleform::Render::Text::LineBuffer::ReleasePartOfLine(
    (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v21 + v22),
    GlyphIndex,
    FormatData);
  v24 = this->pTempLine;
  if ( (v24->MemSize & 0x80000000) != 0 )
    v10 = 30i64;
  v46 = (char *)v24 + v10;
  v25 = Scaleform::Render::Text::LineBuffer::Line::GetFormatData(v24);
  v26 = 0i64;
  v51 = 0i64;
  v50 = 0i64;
  v27 = (int)GlyphIndex - 1;
  v28 = v25;
  v29 = 0;
  v48 = 0;
  v30 = 0;
  v31 = 0i64;
  v32 = 0;
  if ( (int)(v49 - 1) >= 0 )
  {
    v33 = &v7[4 * v27 + 1];
    do
    {
      v34 = &v46[8 * v29];
      *(_QWORD *)v34 = 0i64;
      *(_QWORD *)v34 = *(v33 - 1);
      *((_WORD *)v34 + 3) &= 0x87FFu;
      v35.pFont = (Scaleform::Render::Text::FontHandle *)v33[1];
      if ( !v35.pFont || v31 == v35.pFont )
      {
        v37 = (Scaleform::RefCountVImpl *)*v33;
        if ( *v33 && v26 != v37 )
        {
          *((_WORD *)v34 + 3) |= 0x4000u;
          *((_WORD *)v34 + 3) |= 0x2000u;
          v38 = v30++;
          v28[v38].pFont = (Scaleform::Render::Text::FontHandle *)v37;
          Scaleform::Render::RenderBuffer::AddRef(v37);
          v32 = v48;
          v50 = (Scaleform::RefCountVImpl *)*v33;
        }
        v39 = *((_DWORD *)v33 + 4);
        if ( v32 != v39 )
        {
          *((_WORD *)v34 + 3) |= 0x4000u;
          *((_WORD *)v34 + 3) |= 0x1000u;
          v40 = v30++;
          v28[v40].ColorV = v39;
          v48 = *((_DWORD *)v33 + 4);
        }
      }
      else
      {
        *((_WORD *)v34 + 3) |= 0x4000u;
        *((_WORD *)v34 + 3) |= 0x800u;
        v36 = v30++;
        v28[v36] = v35;
        ++v35.pFont->RefCount;
        v51 = (Scaleform::Render::Text::FontHandle *)v33[1];
      }
      if ( *v33 )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)*v33);
      *v33 = 0i64;
      v41 = (Scaleform::RefCountNTSImpl *)v33[1];
      if ( v41 )
        Scaleform::RefCountNTSImpl::Release(v41);
      v33[1] = 0i64;
      --v27;
      v33 -= 4;
      if ( v46 && v29 < v49 )
        ++v29;
      v26 = v50;
      v31 = v51;
      v32 = v48;
    }
    while ( v27 >= 0 );
    v7 = v45;
  }
  if ( v7 )
  {
    v42 = *(v7 - 1);
    if ( v42 )
    {
      v43 = (Scaleform::RefCountVImpl **)&v7[4 * *(v7 - 1) + 1];
      do
      {
        v44 = (Scaleform::RefCountNTSImpl *)*(v43 - 3);
        v43 -= 4;
        --v42;
        if ( v44 )
          Scaleform::RefCountNTSImpl::Release(v44);
        if ( *v43 )
          Scaleform::RefCountImpl::Release(*v43);
      }
      while ( v42 );
    }
    operator delete[](v7 - 1, 32i64 * *(v7 - 1) + 8);
  }
}

void __fastcall Scaleform::Render::Text::DocView::UpdateHighlight(
        Scaleform::Render::Text::DocView *this,
        const Scaleform::Render::Text::HighlightDesc *desc)
{
  Scaleform::Render::Text::DocView::HighlightDescLoc *pHighlight; // rax

  pHighlight = this->pHighlight;
  if ( pHighlight )
  {
    if ( (this->RTFlags & 0x40) == 0 )
      *(_WORD *)&pHighlight->HighlightManager.Valid = 0;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  char *v10; // rsi
  Scaleform::RefCountVImpl *v11; // rcx
  int v12; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF> > v13; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v6 = *(_QWORD *)pheapAddr;
    v7 = 0i64;
    v12 = 74;
    v13.pTable = 0i64;
    v13.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >::NodeHashF> >::TableType *)(*(__int64 (__fastcall **)(void *, __int64, int *))(v6 + 80))(pheapAddr, 24 * v5 + 16, &v12);
    v13.pTable->EntryCount = 0i64;
    v13.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v8 = 0i64;
      do
      {
        v8 += 24i64;
        *(_QWORD *)((char *)v13.pTable + v8 - 8) = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v9 = this->pTable->SizeMask + 1;
      do
      {
        v10 = (char *)this->pTable + v7;
        if ( *((_QWORD *)v10 + 2) != -2i64 )
        {
          Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>>(
            &v13,
            pheapAddr,
            (const Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> > *)(v10 + 24),
            *((_QWORD *)v10 + 3));
          v11 = (Scaleform::RefCountVImpl *)*((_QWORD *)v10 + 4);
          if ( v11 )
            Scaleform::RefCountImpl::Release(v11);
          *((_QWORD *)v10 + 2) = -2i64;
        }
        v7 += 24i64;
        --v9;
      }
      while ( v9 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v13.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,74>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>,Scaleform::HashNode<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>>::NodeHashF>>::Clear(this);
  }
}

