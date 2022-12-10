#pragma once

class Scaleform::RefCountBase<Scaleform::Render::Text::CompositionStringBase,74> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,74>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 74,
	};
public:
	RefCountBase<Scaleform::Render::Text::CompositionStringBase,74>(Scaleform::RefCountBase<Scaleform::Render::Text::CompositionStringBase,74> &);
	RefCountBase<Scaleform::Render::Text::CompositionStringBase,74>(const Scaleform::RefCountBase<Scaleform::Render::Text::CompositionStringBase,74> &);
	RefCountBase<Scaleform::Render::Text::CompositionStringBase,74>();
	virtual ~RefCountBase<Scaleform::Render::Text::CompositionStringBase,74>();
	Scaleform::RefCountBase<Scaleform::Render::Text::CompositionStringBase,74> & operator=(Scaleform::RefCountBase<Scaleform::Render::Text::CompositionStringBase,74> &);
	Scaleform::RefCountBase<Scaleform::Render::Text::CompositionStringBase,74> & operator=(const Scaleform::RefCountBase<Scaleform::Render::Text::CompositionStringBase,74> &);
};
class Scaleform::Render::Text::CompositionStringBase :
	Scaleform::RefCountBase<Scaleform::Render::Text::CompositionStringBase,74>
{
public:
	unsigned long long GetPosition();
	unsigned long long GetLength();
	const wchar_t * GetText();
	Scaleform::Render::Text::TextFormat * GetTextFormat(unsigned long long);
	Scaleform::Render::Text::Allocator * GetAllocator();
	CompositionStringBase(Scaleform::Render::Text::CompositionStringBase &);
	CompositionStringBase(const Scaleform::Render::Text::CompositionStringBase &);
	CompositionStringBase();
	virtual ~CompositionStringBase();
	Scaleform::Render::Text::CompositionStringBase & operator=(Scaleform::Render::Text::CompositionStringBase &);
	Scaleform::Render::Text::CompositionStringBase & operator=(const Scaleform::Render::Text::CompositionStringBase &);
};
class Scaleform::RefCountBase<Scaleform::Render::Text::EditorKitBase,74> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,74>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 74,
	};
public:
	RefCountBase<Scaleform::Render::Text::EditorKitBase,74>(Scaleform::RefCountBase<Scaleform::Render::Text::EditorKitBase,74> &);
	RefCountBase<Scaleform::Render::Text::EditorKitBase,74>(const Scaleform::RefCountBase<Scaleform::Render::Text::EditorKitBase,74> &);
	RefCountBase<Scaleform::Render::Text::EditorKitBase,74>();
	virtual ~RefCountBase<Scaleform::Render::Text::EditorKitBase,74>();
	Scaleform::RefCountBase<Scaleform::Render::Text::EditorKitBase,74> & operator=(Scaleform::RefCountBase<Scaleform::Render::Text::EditorKitBase,74> &);
	Scaleform::RefCountBase<Scaleform::Render::Text::EditorKitBase,74> & operator=(const Scaleform::RefCountBase<Scaleform::Render::Text::EditorKitBase,74> &);
};
class Scaleform::Render::Text::EditorKitBase :
	Scaleform::RefCountBase<Scaleform::Render::Text::EditorKitBase,74>
{
public:
	virtual ~EditorKitBase();
	void AddDrawCursorInfo(Scaleform::Render::TextLayout::Builder &);
	bool IsReadOnly();
	bool HasCompositionString();
	unsigned long long TextPos2GlyphOffset(unsigned long long);
	unsigned long long TextPos2GlyphPos(unsigned long long);
	unsigned long long GlyphPos2TextPos(unsigned long long);
	Scaleform::Render::Text::CompositionStringBase * GetCompositionString();
	EditorKitBase(const Scaleform::Render::Text::EditorKitBase &);
	EditorKitBase();
	Scaleform::Render::Text::EditorKitBase & operator=(const Scaleform::Render::Text::EditorKitBase &);
};
class Scaleform::Render::Text::DocView :
	Scaleform::RefCountBase<Scaleform::Render::Text::DocView,74>
{
	class Matrix;
	class Cxform;
	class FontCache;
	enum CommandType
	{
		Cmd_InsertChar = 0,
		Cmd_InsertPlainText = 1,
		Cmd_InsertStyledText = 2,
		Cmd_DeleteChar = 3,
		Cmd_DeleteText = 4,
		Cmd_ReplaceTextByChar = 5,
		Cmd_ReplaceTextByPlainText = 6,
		Cmd_ReplaceTextByStyledText = 7,
		Cmd_BackspaceChar = 8,
	};
	struct InsertCharCommand;
	struct InsertPlainTextCommand;
	struct InsertStyledTextCommand;
	struct DeleteCharCommand;
	struct DeleteTextCommand;
	struct ReplaceTextByCharCommand;
	struct ReplaceTextByPlainTextCommand;
	struct ReplaceTextByStyledTextCommand;
	struct LineFormatDesc;
	class DocumentListener;
	enum ViewAlignment
	{
		Align_Left = 0,
		Align_Right = 1,
		Align_Center = 2,
	};
	enum ViewVAlignment
	{
		VAlign_None = 0,
		VAlign_Top = 1,
		VAlign_Bottom = 2,
		VAlign_Center = 3,
	};
	enum ViewTextAutoSize
	{
		TAS_None = 0,
		TAS_Shrink = 1,
		TAS_Fit = 2,
	};
	enum <unnamed-enum-Align_Mask>
	{
		Align_Mask = 3,
		Align_Shift = 0,
		VAlign_Mask = 3,
		VAlign_Shift = 2,
		TAS_Mask = 3,
		TAS_Shift = 4,
	};
	struct ImageSubstitutor;
	struct FindFontInfo;
public:
	Scaleform::Render::Text::Allocator * GetAllocator();
protected:
	void ClearReformatReq();
	void ClearCompleteReformatReq();
	bool IsCompleteReformatReq();
	Scaleform::Render::Text::FontHandle * FindFont(Scaleform::Render::Text::DocView::FindFontInfo *, bool);
	unsigned long long GetCursorPosInLineByOffset(unsigned long, float);
	Scaleform::Render::Text::StyledText::NewLinePolicy GetNewLinePolicy();
	enum UseType
	{
		UseInternally = 0,
		UseExternally = 1,
	};
public:
	void SetViewRect(const Scaleform::Render::Rect<float> &);
protected:
	void SetViewRect(const Scaleform::Render::Rect<float> &, Scaleform::Render::Text::DocView::UseType);
	Scaleform::Render::Text::HighlightDesc * GetSelectionHighlighterDesc();
	Scaleform::Render::Text::HighlightDesc * GetSelectionHighlighterDesc();
	unsigned long long TextPos2GlyphOffset(unsigned long long);
	unsigned long long TextPos2GlyphPos(unsigned long long);
	unsigned long long GlyphPos2TextPos(unsigned long long);
	bool ContainsNonLeftAlignment();
	void SetBitmapFontFlag();
	void ClearBitmapFontFlag();
	bool IsBitmapFontFlagSet();
	void SetBidirectionalTextRTFlag();
	void ClearBidirectionalTextRTFlag();
	bool IsBidirectionalTextRTFlagSet();
	enum ViewNotificationMasks
	{
		ViewNotify_SignificantMask = 256,
		ViewNotify_FormatChange = 1,
		ViewNotify_TextChange = 2,
		ViewNotify_ScrollingParamsChange = 4,
		ViewNotify_SignificantFormatChange = 257,
		ViewNotify_SignificantTextChange = 258,
	};
public:
	DocView(const Scaleform::Render::Text::DocView &);
	DocView(Scaleform::Render::Text::Allocator *, Scaleform::Render::Text::FontManagerBase *, Scaleform::Log *);
	virtual ~DocView();
	bool IsReformatReq();
	Scaleform::MemoryHeap * GetHeap();
	unsigned long long GetLength();
	Scaleform::String & GetText(Scaleform::String *);
	Scaleform::String GetText();
	Scaleform::StringBuffer & GetHtml(Scaleform::StringBuffer *);
	Scaleform::String & GetHtml(Scaleform::String *);
	Scaleform::String GetHtml();
	Scaleform::Render::Text::StyledText * GetStyledText();
	Scaleform::Render::Text::FontManagerBase * GetFontManager();
	void SetText(const wchar_t *, unsigned long long);
	void SetText(const char *, unsigned long long);
	void ParseHtml(const wchar_t *, unsigned long long, bool, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *, const Scaleform::Render::Text::StyleManagerBase *, const Scaleform::Render::Text::TextFormat *, const Scaleform::Render::Text::ParagraphFormat *);
	void ParseHtml(const char *, unsigned long long, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *, const Scaleform::Render::Text::StyleManagerBase *, const Scaleform::Render::Text::TextFormat *, const Scaleform::Render::Text::ParagraphFormat *);
	void ParseHtml(const char *, unsigned long long, bool, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *, const Scaleform::Render::Text::StyleManagerBase *, const Scaleform::Render::Text::TextFormat *, const Scaleform::Render::Text::ParagraphFormat *);
	void ParseHtml(const Scaleform::String &, bool, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *, const Scaleform::Render::Text::StyleManagerBase *, const Scaleform::Render::Text::TextFormat *, const Scaleform::Render::Text::ParagraphFormat *);
	bool MayHaveUrl();
	void SetTextFormat(const Scaleform::Render::Text::TextFormat &, unsigned long long, unsigned long long);
	void SetParagraphFormat(const Scaleform::Render::Text::ParagraphFormat &, unsigned long long, unsigned long long);
	bool GetTextAndParagraphFormat(const Scaleform::Render::Text::TextFormat * *, const Scaleform::Render::Text::ParagraphFormat * *, unsigned long long);
	void GetTextAndParagraphFormat(Scaleform::Render::Text::TextFormat *, Scaleform::Render::Text::ParagraphFormat *, unsigned long long, unsigned long long);
	void ClearAndSetTextFormat(const Scaleform::Render::Text::TextFormat &, unsigned long long, unsigned long long);
	void SetDefaultTextFormat(const Scaleform::Render::Text::TextFormat &);
	void SetDefaultTextFormat(const Scaleform::Render::Text::TextFormat *);
	void SetDefaultParagraphFormat(const Scaleform::Render::Text::ParagraphFormat &);
	void SetDefaultParagraphFormat(const Scaleform::Render::Text::ParagraphFormat *);
	const Scaleform::Render::Text::TextFormat * GetDefaultTextFormat();
	const Scaleform::Render::Text::ParagraphFormat * GetDefaultParagraphFormat();
	void SetDocumentListener(Scaleform::Render::Text::DocView::DocumentListener *);
	Scaleform::Render::Text::DocView::DocumentListener * GetDocumentListener();
	void AppendText(const char *, unsigned long long);
	void AppendText(const wchar_t *, unsigned long long);
	void AppendHtml(const char *, unsigned long long, bool, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *);
	void AppendHtml(const wchar_t *, unsigned long long, bool, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *);
	unsigned long long InsertText(const wchar_t *, unsigned long long, unsigned long long);
	unsigned long long ReplaceText(const wchar_t *, unsigned long long, unsigned long long, unsigned long long);
	void RemoveText(unsigned long long, unsigned long long);
	unsigned long long InsertStyledText(const Scaleform::Render::Text::StyledText &, unsigned long long, unsigned long long);
	unsigned long long EditCommand(Scaleform::Render::Text::DocView::CommandType, const void *);
	Scaleform::Render::Text::DocView::ImageSubstitutor * CreateImageSubstitutor();
	Scaleform::Render::Text::DocView::ImageSubstitutor * GetImageSubstitutor();
	void ClearImageSubstitutor();
	void Close();
	void OnDocumentChanged(unsigned long);
	void OnDocumentParagraphRemoving(const Scaleform::Render::Text::Paragraph &);
	void SetReformatReq();
	void SetCompleteReformatReq();
	void Format();
	void CreateVisibleTextLayout(Scaleform::Render::TextLayout::Builder &);
	void SetBorderColor(unsigned long);
	unsigned long GetBorderColor();
	void SetBackgroundColor(unsigned long);
	unsigned long GetBackgroundColor();
	void SetAutoSizeX();
	void ClearAutoSizeX();
	bool IsAutoSizeX();
	void SetAutoSizeY();
	void ClearAutoSizeY();
	bool IsAutoSizeY();
	void SetMultiline();
	void ClearMultiline();
	bool IsMultiline();
	void SetWordWrap();
	void ClearWordWrap();
	bool IsWordWrap();
	void SetPasswordMode();
	void ClearPasswordMode();
	bool IsPasswordMode();
	void SetUseDeviceFont();
	void ClearUseDeviceFont();
	bool DoesUseDeviceFont();
	void SetAAForReadability();
	void ClearAAForReadability();
	bool IsAAForReadability();
	void SetAutoFit();
	void ClearAutoFit();
	bool IsAutoFit();
	bool IsBidirectionalTextEnabled();
	void EnableBidirectionalText();
	void DisableBidirectionalText();
	bool SetFilters(const Scaleform::Render::Text::TextFilter &);
	const Scaleform::Render::Text::TextFilter & GetFilters();
	void SetDefaultShadow();
	void EnableSoftShadow();
	void DisableSoftShadow();
	void SetBlurX(float);
	float GetBlurX();
	void SetBlurY(float);
	float GetBlurY();
	void SetFauxBold(bool);
	bool GetFauxBold();
	void SetFauxItalic(bool);
	bool GetFauxItalic();
	void SetForceVector(bool);
	bool GetForceVector();
	void SetOutline(float);
	float GetOutline();
	void SetBlurStrength(float);
	float GetBlurStrength();
	void SetShadowBlurX(float);
	float GetShadowBlurX();
	void SetShadowBlurY(float);
	float GetShadowBlurY();
	void SetShadowStrength(float);
	float GetShadowStrength();
	void SetKnockOut(bool);
	bool IsKnockOut();
	void SetHideObject(bool);
	bool IsHiddenObject();
	void SetShadowQuality(unsigned long);
	unsigned long GetShadowQuality();
	void SetShadowAngle(float);
	float GetShadowAngle();
	void SetShadowDistance(float);
	float GetShadowDistance();
	void SetShadowColor(unsigned long);
	unsigned long GetShadowColor();
	void SetShadowAlpha(float);
	float GetShadowAlpha();
	const Scaleform::Render::Rect<float> & GetViewRect();
	const Scaleform::Render::Rect<float> & GetTextRect();
	bool SetHScrollOffset(unsigned long);
	bool SetVScrollOffset(unsigned long);
	unsigned long GetHScrollOffset();
	unsigned long GetVScrollOffset();
	float GetTextWidth();
	float GetTextHeight();
	unsigned long GetLinesCount();
	unsigned long GetMaxHScroll();
	unsigned long GetMaxVScroll();
	void SetMaxLength(unsigned long long);
	unsigned long long GetMaxLength();
	bool HasMaxLength();
	bool ForceReformat();
	void SetAlignment(Scaleform::Render::Text::DocView::ViewAlignment);
	Scaleform::Render::Text::DocView::ViewAlignment GetAlignment();
	void SetVAlignment(Scaleform::Render::Text::DocView::ViewVAlignment);
	Scaleform::Render::Text::DocView::ViewVAlignment GetVAlignment();
	void SetTextAutoSize(Scaleform::Render::Text::DocView::ViewTextAutoSize);
	Scaleform::Render::Text::DocView::ViewTextAutoSize GetTextAutoSize();
	bool IsUrlAtPoint(float, float, Scaleform::Range *);
	bool IsReadOnly();
	void SetFontScaleFactor(float);
	float GetFontScaleFactor();
	bool HasFontScaleFactor();
	unsigned long long GetCharIndexAtPoint(float, float);
	unsigned long long GetCursorPosAtPoint(float, float);
	unsigned long long GetCursorPosInLine(unsigned long, float);
	unsigned long long GetFirstCharInParagraph(unsigned long long);
	unsigned long GetLineIndexAtPoint(float, float);
	unsigned long GetLineIndexOfChar(unsigned long long);
	unsigned long long GetLineOffset(unsigned long);
	unsigned long long GetLineLength(unsigned long, bool *);
	const wchar_t * GetLineText(unsigned long, unsigned long long *);
	long long GetParagraphLength(unsigned long long);
	struct LineMetrics;
	bool GetLineMetrics(unsigned long, Scaleform::Render::Text::DocView::LineMetrics *);
	bool GetCharBoundaries(Scaleform::Render::Rect<float> *, unsigned long long);
	bool GetExactCharBoundaries(Scaleform::Render::Rect<float> *, unsigned long long);
	unsigned long GetBottomVScroll();
	bool SetBottomVScroll(unsigned long);
	void SetEditorKit(Scaleform::Render::Text::EditorKitBase *);
	const Scaleform::Render::Text::EditorKitBase * GetEditorKit();
	Scaleform::Render::Text::EditorKitBase * GetEditorKit();
	bool HasEditorKit();
	unsigned char NewLineChar();
	const char * NewLineStr();
	void SetCompressCRLF();
	void ClearCompressCRLF();
	bool DoesCompressCRLF();
	bool AddHighlight(Scaleform::Render::Text::HighlightDesc *);
	bool RemoveHighlight(long);
	Scaleform::Render::Text::Highlighter * GetHighlighterManager();
	void UpdateHighlight(const Scaleform::Render::Text::HighlightDesc &);
	void SetSelection(unsigned long long, unsigned long long, bool);
	void ClearSelection();
	unsigned long long GetBeginSelection();
	unsigned long long GetEndSelection();
	void SetBeginSelection(unsigned long long);
	void SetEndSelection(unsigned long long);
	void SetSelectionTextColor(unsigned long);
	void SetSelectionBackgroundColor(unsigned long);
	unsigned long GetSelectionTextColor();
	unsigned long GetSelectionBackgroundColor();
	const Scaleform::Render::Text::LineBuffer & GetLineBuffer();
	void SetDefaultTextAndParaFormat(unsigned long long);
	unsigned long GetMaxHScrollValue();
	unsigned long GetMaxVScrollValue();
	unsigned long GetHScrollOffsetValue();
	unsigned long GetVScrollOffsetValue();
	unsigned long GetVScrollOffsetValueInFixp();
	unsigned short GetFormatCounter();
	class DocumentText;
	Scaleform::Render::Text::Highlighter * CreateHighlighterManager();
protected:
	Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> pDocument; // 0x10
	Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> pFontManager; // 0x18
	Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> pDocumentListener; // 0x20
	struct HighlightDescLoc;
	Scaleform::Render::Text::DocView::HighlightDescLoc * pHighlight; // 0x28
	Scaleform::Render::Text::DocView::ImageSubstitutor * pImageSubstitutor; // 0x30
	unsigned long long BeginSelection; // 0x38
	unsigned long long EndSelection; // 0x40
	Scaleform::Render::Text::LineBuffer mLineBuffer; // 0x50
	Scaleform::Render::Rect<float> ViewRect; // 0xB0
	unsigned long TextWidth; // 0xC0
	unsigned long TextHeight; // 0xC4
	unsigned long MaxLength; // 0xC8
	Scaleform::Render::Text::CachedPrimValue<unsigned int> MaxVScroll; // 0xCC
	Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> pEditorKit; // 0xD8
	Scaleform::Render::Text::TextFilter Filter; // 0xE0
	Scaleform::Ptr<Scaleform::Log> pLog; // 0x140
	unsigned long BorderColor; // 0x148
	unsigned long BackgroundColor; // 0x14C
	unsigned short FormatCounter; // 0x150
	unsigned short FontScaleFactor; // 0x152
	float Outline; // 0x154
	enum <unnamed-enum-Flags_AutoSizeX>
	{
		Flags_AutoSizeX = 1,
		Flags_AutoSizeY = 2,
		Flags_Multiline = 4,
		Flags_WordWrap = 8,
		Flags_PasswordMode = 16,
		Flags_UseDeviceFont = 32,
		Flags_AAReadability = 64,
		Flags_AutoFit = 128,
	};
	unsigned char Flags; // 0x158
	unsigned char AlignProps; // 0x159
	enum <unnamed-enum-FlagsEx_FauxBold>
	{
		FlagsEx_FauxBold = 1,
		FlagsEx_FauxItalic = 2,
		FlagsEx_BidiEnabled = 4,
		FlagsEx_ForceVector = 8,
	};
	unsigned char FlagsEx; // 0x15A
	enum <unnamed-enum-RTFlags_ReformatReq>
	{
		RTFlags_ReformatReq = 1,
		RTFlags_CompleteReformatReq = 2,
		RTFlags_HasFontScaleFactor = 4,
		RTFlags_CompressCRLF = 8,
		RTFlags_FontErrorDetected = 16,
		RTFlags_BitmapFontUsed = 32,
		RTFlags_HasBidirectionalText = 64,
	};
	unsigned char RTFlags; // 0x15B
public:
	Scaleform::Render::Text::DocView & operator=(const Scaleform::Render::Text::DocView &);
};
class Scaleform::RefCountBase<Scaleform::Render::Text::DocView,74> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,74>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 74,
	};
public:
	RefCountBase<Scaleform::Render::Text::DocView,74>(Scaleform::RefCountBase<Scaleform::Render::Text::DocView,74> &);
	RefCountBase<Scaleform::Render::Text::DocView,74>(const Scaleform::RefCountBase<Scaleform::Render::Text::DocView,74> &);
	RefCountBase<Scaleform::Render::Text::DocView,74>();
	virtual ~RefCountBase<Scaleform::Render::Text::DocView,74>();
	Scaleform::RefCountBase<Scaleform::Render::Text::DocView,74> & operator=(Scaleform::RefCountBase<Scaleform::Render::Text::DocView,74> &);
	Scaleform::RefCountBase<Scaleform::Render::Text::DocView,74> & operator=(const Scaleform::RefCountBase<Scaleform::Render::Text::DocView,74> &);
};
class Scaleform::HashIdentityDH<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,74,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> > :
	Scaleform::HashUncachedDH<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *>,74>
{
	class SelfType;
	class BaseType;
public:
	HashIdentityDH<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,74,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >(const Scaleform::HashIdentityDH<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,74,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> > &);
	HashIdentityDH<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,74,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >(void *, long);
	HashIdentityDH<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,74,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >(void *);
	~HashIdentityDH<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,74,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> >();
	void operator=(const Scaleform::HashIdentityDH<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,74,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> > &);
};
struct Scaleform::Render::Text::DocView::InsertCharCommand
{
	unsigned long long PosAt; // 0x0
	wchar_t CharCode; // 0x8
	InsertCharCommand(unsigned long long, wchar_t);
};
struct Scaleform::Render::Text::DocView::InsertPlainTextCommand
{
	unsigned long long PosAt; // 0x0
	const wchar_t * pStr; // 0x8
	unsigned long long Length; // 0x10
	InsertPlainTextCommand(unsigned long long, const wchar_t *, unsigned long long);
};
struct Scaleform::Render::Text::DocView::InsertStyledTextCommand
{
	unsigned long long PosAt; // 0x0
	const Scaleform::Render::Text::StyledText * pText; // 0x8
	InsertStyledTextCommand(unsigned long long, const Scaleform::Render::Text::StyledText *);
};
struct Scaleform::Render::Text::DocView::DeleteCharCommand
{
	unsigned long long PosAt; // 0x0
	DeleteCharCommand(unsigned long long);
};
struct Scaleform::Render::Text::DocView::DeleteTextCommand
{
	unsigned long long BeginPos; // 0x0
	unsigned long long EndPos; // 0x8
	DeleteTextCommand(unsigned long long, unsigned long long);
};
struct Scaleform::Render::Text::DocView::ReplaceTextByCharCommand
{
	unsigned long long BeginPos; // 0x0
	unsigned long long EndPos; // 0x8
	wchar_t CharCode; // 0x10
	ReplaceTextByCharCommand(unsigned long long, unsigned long long, wchar_t);
};
struct Scaleform::Render::Text::DocView::ReplaceTextByPlainTextCommand
{
	unsigned long long BeginPos; // 0x0
	unsigned long long EndPos; // 0x8
	const wchar_t * pStr; // 0x10
	unsigned long long Length; // 0x18
	ReplaceTextByPlainTextCommand(unsigned long long, unsigned long long, const wchar_t *, unsigned long long);
};
struct Scaleform::Render::Text::DocView::ReplaceTextByStyledTextCommand
{
	unsigned long long BeginPos; // 0x0
	unsigned long long EndPos; // 0x8
	const Scaleform::Render::Text::StyledText * pText; // 0x10
	ReplaceTextByStyledTextCommand(unsigned long long, unsigned long long, const Scaleform::Render::Text::StyledText *);
};
struct Scaleform::Render::Text::DocView::LineFormatDesc
{
	const wchar_t * pParaText; // 0x0
	unsigned long long ParaTextLen; // 0x8
	float * pWidths; // 0x10
	unsigned long long LineStartPos; // 0x18
	unsigned long long NumCharsInLine; // 0x20
	float VisibleRectWidth; // 0x28
	float CurrentLineWidth; // 0x2C
	float LineWidthBeforeWordWrap; // 0x30
	float DashSymbolWidth; // 0x34
	enum <unnamed-enum-Align_Left>
	{
		Align_Left = 0,
		Align_Right = 1,
		Align_Center = 2,
		Align_Justify = 3,
	};
	unsigned char Alignment; // 0x38
	unsigned long long ProposedWordWrapPoint; // 0x40
	bool UseHyphenation; // 0x48
};
class Scaleform::RefCountBaseNTS<Scaleform::Render::Text::DocView::DocumentListener,74> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,74>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 74,
	};
public:
	RefCountBaseNTS<Scaleform::Render::Text::DocView::DocumentListener,74>(Scaleform::RefCountBaseNTS<Scaleform::Render::Text::DocView::DocumentListener,74> &);
	RefCountBaseNTS<Scaleform::Render::Text::DocView::DocumentListener,74>(const Scaleform::RefCountBaseNTS<Scaleform::Render::Text::DocView::DocumentListener,74> &);
	RefCountBaseNTS<Scaleform::Render::Text::DocView::DocumentListener,74>();
	virtual ~RefCountBaseNTS<Scaleform::Render::Text::DocView::DocumentListener,74>();
	Scaleform::RefCountBaseNTS<Scaleform::Render::Text::DocView::DocumentListener,74> & operator=(Scaleform::RefCountBaseNTS<Scaleform::Render::Text::DocView::DocumentListener,74> &);
	Scaleform::RefCountBaseNTS<Scaleform::Render::Text::DocView::DocumentListener,74> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::Render::Text::DocView::DocumentListener,74> &);
};
class Scaleform::Render::Text::DocView::DocumentListener :
	Scaleform::RefCountBaseNTS<Scaleform::Render::Text::DocView::DocumentListener,74>
{
	enum <unnamed-enum-Mask_OnLineFormat>
	{
		Mask_OnLineFormat = 1,
		Mask_OnScroll = 2,
		Mask_OnMaxScrollChanged = 4,
		Mask_OnViewChanged = 8,
		Mask_BidirectionalText = 16,
		Mask_All = 15,
	};
protected:
	unsigned char HandlersMask; // 0x10
public:
	DocumentListener(Scaleform::Render::Text::DocView::DocumentListener &);
	DocumentListener(const Scaleform::Render::Text::DocView::DocumentListener &);
	DocumentListener(unsigned char);
	bool DoesHandleLineFormat();
	bool DoesHandleOnScroll();
	bool DoesHandleOnMaxScrollChanged();
	bool DoesHandleOnViewChanged();
	bool DoesHandleBidirectionalText();
	bool View_OnLineFormat(Scaleform::Render::Text::DocView &, Scaleform::Render::Text::DocView::LineFormatDesc &);
	bool View_PrepareBidiText(Scaleform::Render::Text::DocView &, const wchar_t *, unsigned long long, wchar_t *, unsigned long *, bool *);
	void View_OnHScroll(Scaleform::Render::Text::DocView &, unsigned long);
	void View_OnVScroll(Scaleform::Render::Text::DocView &, unsigned long);
	void View_OnMaxScrollChanged(Scaleform::Render::Text::DocView &);
	void View_OnChanged(Scaleform::Render::Text::DocView &);
	unsigned long Editor_OnKey(Scaleform::Render::Text::EditorKitBase &, unsigned long);
	wchar_t Editor_OnCharacter(Scaleform::Render::Text::EditorKitBase &, wchar_t);
	void Editor_OnChanged(Scaleform::Render::Text::EditorKitBase &);
	void Editor_OnCursorMoved(Scaleform::Render::Text::EditorKitBase &);
	void Editor_OnCursorBlink(Scaleform::Render::Text::EditorKitBase &, bool);
	bool Editor_OnInsertingText(Scaleform::Render::Text::EditorKitBase &, unsigned long long, unsigned long long, const wchar_t *);
	bool Editor_OnRemovingText(Scaleform::Render::Text::EditorKitBase &, unsigned long long, unsigned long long);
	Scaleform::String GetCharacterPath();
	virtual ~DocumentListener();
	Scaleform::Render::Text::DocView::DocumentListener & operator=(Scaleform::Render::Text::DocView::DocumentListener &);
	Scaleform::Render::Text::DocView::DocumentListener & operator=(const Scaleform::Render::Text::DocView::DocumentListener &);
	void __dflt_ctor_closure();
};
unsigned long Scaleform::Render::Text::DocView::DocumentListener::Editor_OnKey(Scaleform::Render::Text::EditorKitBase & __formal, unsigned long keyCode); // 0x140319C70
wchar_t Scaleform::Render::Text::DocView::DocumentListener::Editor_OnCharacter(Scaleform::Render::Text::EditorKitBase & __formal, wchar_t srcChar); // 0x1403F3320
struct Scaleform::Render::Text::DocView::ImageSubstitutor :
	Scaleform::NewOverrideBase<74>
{
	struct Element;
	Scaleform::ArrayLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2,Scaleform::ArrayDefaultPolicy> Elements; // 0x0
	Scaleform::Render::Text::ImageDesc * FindImageDesc(const wchar_t *, unsigned long long, unsigned long long *);
	void AddImageDesc(const Scaleform::Render::Text::DocView::ImageSubstitutor::Element &);
	void RemoveImageDesc(Scaleform::Render::Text::ImageDesc *);
	ImageSubstitutor(Scaleform::Render::Text::DocView::ImageSubstitutor &);
	ImageSubstitutor(const Scaleform::Render::Text::DocView::ImageSubstitutor &);
	ImageSubstitutor();
	~ImageSubstitutor();
	Scaleform::Render::Text::DocView::ImageSubstitutor & operator=(Scaleform::Render::Text::DocView::ImageSubstitutor &);
	Scaleform::Render::Text::DocView::ImageSubstitutor & operator=(const Scaleform::Render::Text::DocView::ImageSubstitutor &);
};
struct Scaleform::Render::Text::DocView::ImageSubstitutor::Element
{
	wchar_t SubString[20]; // 0x0
	Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> pImageDesc; // 0x28
	unsigned char SubStringLen; // 0x30
	Element(Scaleform::Render::Text::DocView::ImageSubstitutor::Element &);
	Element(const Scaleform::Render::Text::DocView::ImageSubstitutor::Element &);
	Element();
	~Element();
	Scaleform::Render::Text::DocView::ImageSubstitutor::Element & operator=(Scaleform::Render::Text::DocView::ImageSubstitutor::Element &);
	Scaleform::Render::Text::DocView::ImageSubstitutor::Element & operator=(const Scaleform::Render::Text::DocView::ImageSubstitutor::Element &);
};
class Scaleform::ArrayLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,Scaleform::AllocatorLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Render::Text::DocView::ImageSubstitutor::Element,2,Scaleform::ArrayDefaultPolicy>();
};
struct Scaleform::Render::Text::DocView::FindFontInfo
{
	Scaleform::HashIdentityDH<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,74,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> > * pFontCache; // 0x0
	const Scaleform::Render::Text::TextFormat * pCurrentFormat; // 0x8
	const Scaleform::Render::Text::TextFormat * pPrevFormat; // 0x10
	Scaleform::Ptr<Scaleform::Render::Text::FontHandle> pCurrentFont; // 0x18
	FindFontInfo(Scaleform::Render::Text::DocView::FindFontInfo &);
	FindFontInfo(const Scaleform::Render::Text::DocView::FindFontInfo &);
	FindFontInfo(Scaleform::HashIdentityDH<Scaleform::Render::Text::TextFormat const *,Scaleform::Ptr<Scaleform::Render::Text::FontHandle>,74,Scaleform::IdentityHash<Scaleform::Render::Text::TextFormat const *> > *);
	void init();
	~FindFontInfo();
	Scaleform::Render::Text::DocView::FindFontInfo & operator=(Scaleform::Render::Text::DocView::FindFontInfo &);
	Scaleform::Render::Text::DocView::FindFontInfo & operator=(const Scaleform::Render::Text::DocView::FindFontInfo &);
	void __dflt_ctor_closure();
};
struct Scaleform::Render::Text::DocView::LineMetrics
{
	unsigned long Width; // 0x0
	unsigned long Height; // 0x4
	unsigned long Ascent; // 0x8
	unsigned long Descent; // 0xC
	long FirstCharXOff; // 0x10
	long Leading; // 0x14
};
class Scaleform::Render::Text::DocView::DocumentText :
	Scaleform::Render::Text::StyledText
{
private:
	Scaleform::Render::Text::DocView * pDocument; // 0x48
public:
	DocumentText(Scaleform::Render::Text::DocView::DocumentText &);
	DocumentText(const Scaleform::Render::Text::DocView::DocumentText &);
	DocumentText(Scaleform::Render::Text::DocView *, Scaleform::Render::Text::Allocator *);
	virtual void OnParagraphRemoving(const Scaleform::Render::Text::Paragraph &);
	virtual void OnTextInserting(unsigned long long, unsigned long long, const char *);
	virtual void OnTextInserting(unsigned long long, unsigned long long, const wchar_t *);
	virtual void OnTextRemoving(unsigned long long, unsigned long long);
	virtual ~DocumentText();
	Scaleform::Render::Text::DocView::DocumentText & operator=(Scaleform::Render::Text::DocView::DocumentText &);
	Scaleform::Render::Text::DocView::DocumentText & operator=(const Scaleform::Render::Text::DocView::DocumentText &);
};
class Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText>
{
protected:
	Scaleform::Render::Text::DocView::DocumentText * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Text::DocView::DocumentText>(const Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> &);
	Ptr<Scaleform::Render::Text::DocView::DocumentText>(Scaleform::Render::Text::DocView::DocumentText *);
	Ptr<Scaleform::Render::Text::DocView::DocumentText>(Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Text::DocView::DocumentText>(Scaleform::Pickable<Scaleform::Render::Text::DocView::DocumentText>);
	Ptr<Scaleform::Render::Text::DocView::DocumentText>(Scaleform::Render::Text::DocView::DocumentText &);
	Ptr<Scaleform::Render::Text::DocView::DocumentText>();
	~Ptr<Scaleform::Render::Text::DocView::DocumentText>();
	bool operator==(Scaleform::Render::Text::DocView::DocumentText *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> &);
	bool operator!=(Scaleform::Render::Text::DocView::DocumentText *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> &);
	Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> & operator=(Scaleform::Pickable<Scaleform::Render::Text::DocView::DocumentText>);
	const Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> & operator=(Scaleform::Render::Text::DocView::DocumentText &);
	const Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> & operator=(Scaleform::Render::Text::DocView::DocumentText *);
	const Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> & operator=(const Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> &);
	Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> & SetPtr(Scaleform::Pickable<Scaleform::Render::Text::DocView::DocumentText>);
	Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> & SetPtr(Scaleform::Render::Text::DocView::DocumentText &);
	Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> & SetPtr(Scaleform::Render::Text::DocView::DocumentText *);
	Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Text::DocView::DocumentText * & GetRawRef();
	Scaleform::Render::Text::DocView::DocumentText * GetPtr();
	Scaleform::Render::Text::DocView::DocumentText & operator*();
	Scaleform::Render::Text::DocView::DocumentText * operator->();
	Scaleform::Render::Text::DocView::DocumentText * operator class Scaleform::Render::Text::DocView::DocumentText *();
	Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> & Pick(Scaleform::Render::Text::DocView::DocumentText *);
	Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> & Pick(Scaleform::Pickable<Scaleform::Render::Text::DocView::DocumentText>);
	Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> & Pick(Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentText> &);
};
class Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase>
{
protected:
	Scaleform::Render::Text::FontManagerBase * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Text::FontManagerBase>(const Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> &);
	Ptr<Scaleform::Render::Text::FontManagerBase>(Scaleform::Render::Text::FontManagerBase *);
	Ptr<Scaleform::Render::Text::FontManagerBase>(Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Text::FontManagerBase>(Scaleform::Pickable<Scaleform::Render::Text::FontManagerBase>);
	Ptr<Scaleform::Render::Text::FontManagerBase>(Scaleform::Render::Text::FontManagerBase &);
	Ptr<Scaleform::Render::Text::FontManagerBase>();
	~Ptr<Scaleform::Render::Text::FontManagerBase>();
	bool operator==(Scaleform::Render::Text::FontManagerBase *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> &);
	bool operator!=(Scaleform::Render::Text::FontManagerBase *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> &);
	Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> & operator=(Scaleform::Pickable<Scaleform::Render::Text::FontManagerBase>);
	const Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> & operator=(Scaleform::Render::Text::FontManagerBase &);
	const Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> & operator=(Scaleform::Render::Text::FontManagerBase *);
	const Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> & operator=(const Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> &);
	Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> & SetPtr(Scaleform::Pickable<Scaleform::Render::Text::FontManagerBase>);
	Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> & SetPtr(Scaleform::Render::Text::FontManagerBase &);
	Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> & SetPtr(Scaleform::Render::Text::FontManagerBase *);
	Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Text::FontManagerBase * & GetRawRef();
	Scaleform::Render::Text::FontManagerBase * GetPtr();
	Scaleform::Render::Text::FontManagerBase & operator*();
	Scaleform::Render::Text::FontManagerBase * operator->();
	Scaleform::Render::Text::FontManagerBase * operator class Scaleform::Render::Text::FontManagerBase *();
	Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> & Pick(Scaleform::Render::Text::FontManagerBase *);
	Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> & Pick(Scaleform::Pickable<Scaleform::Render::Text::FontManagerBase>);
	Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> & Pick(Scaleform::Ptr<Scaleform::Render::Text::FontManagerBase> &);
};
class Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener>
{
protected:
	Scaleform::Render::Text::DocView::DocumentListener * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Text::DocView::DocumentListener>(const Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> &);
	Ptr<Scaleform::Render::Text::DocView::DocumentListener>(Scaleform::Render::Text::DocView::DocumentListener *);
	Ptr<Scaleform::Render::Text::DocView::DocumentListener>(Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Text::DocView::DocumentListener>(Scaleform::Pickable<Scaleform::Render::Text::DocView::DocumentListener>);
	Ptr<Scaleform::Render::Text::DocView::DocumentListener>(Scaleform::Render::Text::DocView::DocumentListener &);
	Ptr<Scaleform::Render::Text::DocView::DocumentListener>();
	~Ptr<Scaleform::Render::Text::DocView::DocumentListener>();
	bool operator==(Scaleform::Render::Text::DocView::DocumentListener *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> &);
	bool operator!=(Scaleform::Render::Text::DocView::DocumentListener *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> &);
	Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> & operator=(Scaleform::Pickable<Scaleform::Render::Text::DocView::DocumentListener>);
	const Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> & operator=(Scaleform::Render::Text::DocView::DocumentListener &);
	const Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> & operator=(Scaleform::Render::Text::DocView::DocumentListener *);
	const Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> & operator=(const Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> &);
	Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> & SetPtr(Scaleform::Pickable<Scaleform::Render::Text::DocView::DocumentListener>);
	Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> & SetPtr(Scaleform::Render::Text::DocView::DocumentListener &);
	Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> & SetPtr(Scaleform::Render::Text::DocView::DocumentListener *);
	Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Text::DocView::DocumentListener * & GetRawRef();
	Scaleform::Render::Text::DocView::DocumentListener * GetPtr();
	Scaleform::Render::Text::DocView::DocumentListener & operator*();
	Scaleform::Render::Text::DocView::DocumentListener * operator->();
	Scaleform::Render::Text::DocView::DocumentListener * operator class Scaleform::Render::Text::DocView::DocumentListener *();
	Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> & Pick(Scaleform::Render::Text::DocView::DocumentListener *);
	Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> & Pick(Scaleform::Pickable<Scaleform::Render::Text::DocView::DocumentListener>);
	Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> & Pick(Scaleform::Ptr<Scaleform::Render::Text::DocView::DocumentListener> &);
};
struct Scaleform::Render::Text::DocView::HighlightDescLoc :
	Scaleform::NewOverrideBase<74>
{
	Scaleform::Render::Text::Highlighter HighlightManager; // 0x0
	float HScrollOffset; // 0x38
	float VScrollOffset; // 0x3C
	unsigned short FormatCounter; // 0x40
	HighlightDescLoc(Scaleform::Render::Text::DocView::HighlightDescLoc &);
	HighlightDescLoc(const Scaleform::Render::Text::DocView::HighlightDescLoc &);
	HighlightDescLoc();
	void Invalidate();
	void Validate();
	bool IsValid();
	~HighlightDescLoc();
	Scaleform::Render::Text::DocView::HighlightDescLoc & operator=(Scaleform::Render::Text::DocView::HighlightDescLoc &);
	Scaleform::Render::Text::DocView::HighlightDescLoc & operator=(const Scaleform::Render::Text::DocView::HighlightDescLoc &);
};
struct Scaleform::Render::Text::CachedPrimValue<unsigned int>
{
	unsigned long Value; // 0x0
	unsigned short FormatCounter; // 0x4
	CachedPrimValue<unsigned int>(unsigned long, unsigned short);
	CachedPrimValue<unsigned int>(unsigned long);
	CachedPrimValue<unsigned int>();
	void SetValue(unsigned long, unsigned short);
	unsigned long operator unsigned int();
	bool IsValid(unsigned short);
};
class Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase>
{
protected:
	Scaleform::Render::Text::EditorKitBase * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Text::EditorKitBase>(const Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> &);
	Ptr<Scaleform::Render::Text::EditorKitBase>(Scaleform::Render::Text::EditorKitBase *);
	Ptr<Scaleform::Render::Text::EditorKitBase>(Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Text::EditorKitBase>(Scaleform::Pickable<Scaleform::Render::Text::EditorKitBase>);
	Ptr<Scaleform::Render::Text::EditorKitBase>(Scaleform::Render::Text::EditorKitBase &);
	Ptr<Scaleform::Render::Text::EditorKitBase>();
	~Ptr<Scaleform::Render::Text::EditorKitBase>();
	bool operator==(Scaleform::Render::Text::EditorKitBase *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> &);
	bool operator!=(Scaleform::Render::Text::EditorKitBase *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> &);
	Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> & operator=(Scaleform::Pickable<Scaleform::Render::Text::EditorKitBase>);
	const Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> & operator=(Scaleform::Render::Text::EditorKitBase &);
	const Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> & operator=(Scaleform::Render::Text::EditorKitBase *);
	const Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> & operator=(const Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> &);
	Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> & SetPtr(Scaleform::Pickable<Scaleform::Render::Text::EditorKitBase>);
	Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> & SetPtr(Scaleform::Render::Text::EditorKitBase &);
	Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> & SetPtr(Scaleform::Render::Text::EditorKitBase *);
	Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Text::EditorKitBase * & GetRawRef();
	Scaleform::Render::Text::EditorKitBase * GetPtr();
	Scaleform::Render::Text::EditorKitBase & operator*();
	Scaleform::Render::Text::EditorKitBase * operator->();
	Scaleform::Render::Text::EditorKitBase * operator class Scaleform::Render::Text::EditorKitBase *();
	Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> & Pick(Scaleform::Render::Text::EditorKitBase *);
	Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> & Pick(Scaleform::Pickable<Scaleform::Render::Text::EditorKitBase>);
	Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> & Pick(Scaleform::Ptr<Scaleform::Render::Text::EditorKitBase> &);
};
class Scaleform::Ptr<Scaleform::Log>
{
protected:
	Scaleform::Log * pObject; // 0x0
public:
	Ptr<Scaleform::Log>(const Scaleform::Ptr<Scaleform::Log> &);
	Ptr<Scaleform::Log>(Scaleform::Log *);
	Ptr<Scaleform::Log>(Scaleform::Ptr<Scaleform::Log> &, Scaleform::PickType);
	Ptr<Scaleform::Log>(Scaleform::Pickable<Scaleform::Log>);
	Ptr<Scaleform::Log>(Scaleform::Log &);
	Ptr<Scaleform::Log>();
	~Ptr<Scaleform::Log>();
	bool operator==(Scaleform::Log *);
	bool operator==(const Scaleform::Ptr<Scaleform::Log> &);
	bool operator!=(Scaleform::Log *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Log> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Log> &);
	Scaleform::Ptr<Scaleform::Log> & operator=(Scaleform::Pickable<Scaleform::Log>);
	const Scaleform::Ptr<Scaleform::Log> & operator=(Scaleform::Log &);
	const Scaleform::Ptr<Scaleform::Log> & operator=(Scaleform::Log *);
	const Scaleform::Ptr<Scaleform::Log> & operator=(const Scaleform::Ptr<Scaleform::Log> &);
	Scaleform::Ptr<Scaleform::Log> & SetPtr(Scaleform::Pickable<Scaleform::Log>);
	Scaleform::Ptr<Scaleform::Log> & SetPtr(Scaleform::Log &);
	Scaleform::Ptr<Scaleform::Log> & SetPtr(Scaleform::Log *);
	Scaleform::Ptr<Scaleform::Log> & SetPtr(const Scaleform::Ptr<Scaleform::Log> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Log * & GetRawRef();
	Scaleform::Log * GetPtr();
	Scaleform::Log & operator*();
	Scaleform::Log * operator->();
	Scaleform::Log * operator class Scaleform::Log *();
	Scaleform::Ptr<Scaleform::Log> & Pick(Scaleform::Log *);
	Scaleform::Ptr<Scaleform::Log> & Pick(Scaleform::Pickable<Scaleform::Log>);
	Scaleform::Ptr<Scaleform::Log> & Pick(Scaleform::Ptr<Scaleform::Log> &);
};