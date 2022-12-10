#pragma once

class Scaleform::GFx::TextField :
	Scaleform::GFx::InteractiveObject
{
	struct ShadowParams;
	class TextDocumentListener;
	enum LinkEvent
	{
		Link_press = 0,
		Link_release = 1,
		Link_rollover = 2,
		Link_rollout = 3,
	};
protected:
	Scaleform::Ptr<Scaleform::GFx::TextFieldDef> pDef; // 0xD8
	Scaleform::Ptr<Scaleform::Render::Text::DocView> pDocument; // 0xE0
	Scaleform::GFx::ResourceBinding * pBinding; // 0xE8
	Scaleform::Ptr<Scaleform::Render::FilterSet> pFilters; // 0xF0
	enum <unnamed-enum-Flags_AutoSize>
	{
		Flags_AutoSize = 1,
		Flags_Html = 2,
		Flags_Password = 4,
		Flags_NoTranslate = 8,
		Flags_CondenseWhite = 16,
		Flags_HandCursor = 32,
		Flags_NextFrame = 64,
		Flags_MouseWheelEnabled = 128,
		Flags_UseRichClipboard = 256,
		Flags_AlwaysShowSelection = 512,
		Flags_NoAutoSelection = 1024,
		Flags_IMEDisabled = 2048,
		Flags_OriginalIsHtml = 4096,
		Flags_NeedUpdateGeomData = 8192,
		Flags_ForceOneTimeAdvance = 16384,
		Flags_ForceAdvance = 32768,
		Flags_NeedUpdateLayout = 65536,
	};
private:
	Scaleform::GFx::TextFieldDef::alignment Alignment; // 0xF8
	unsigned long Flags; // 0xFC
protected:
	Scaleform::StringLH OriginalTextValue; // 0x100
	struct CSSHolderBase;
private:
	Scaleform::AutoPtr<Scaleform::GFx::TextField::CSSHolderBase> pCSSData; // 0x108
	Scaleform::GFx::TextField::ShadowParams * pShadow; // 0x118
	Scaleform::StringHashLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > * pImageDescAssoc; // 0x120
	unsigned long FocusedControllerIdx; // 0x128
	Scaleform::GFx::TextField::TextDocumentListener TextDocListener; // 0x130
public:
	void SetDirtyFlag();
	void SetAutoSize(bool);
	void ClearAutoSize();
	bool IsAutoSize();
	void SetHtml(bool);
	void ClearHtml();
	bool IsHtml();
	void SetOriginalHtml(bool);
	void ClearOriginalHtml();
	bool IsOriginalHtml();
	void SetPassword(bool);
	void ClearPassword();
	bool IsPassword();
	void SetCondenseWhite(bool);
	void ClearCondenseWhite();
	bool IsCondenseWhite();
	void SetHandCursor(bool);
	void ClearHandCursor();
	bool IsHandCursor();
	void SetMouseWheelEnabled(bool);
	void ClearMouseWheelEnabled();
	bool IsMouseWheelEnabled();
	void SetSelectable(bool);
	void ClearSelectable();
	bool IsSelectable();
	void SetNoTranslate(bool);
	void ClearNoTranslate();
	bool IsNoTranslate();
	bool IsReadOnly();
	void SetUseRichClipboard(bool);
	void ClearUseRichClipboard();
	bool DoesUseRichClipboard();
	void SetAlwaysShowSelection(bool);
	void ClearAlwaysShowSelection();
	bool DoesAlwaysShowSelection();
	void SetNoAutoSelection(bool);
	void ClearNoAutoSelection();
	bool IsNoAutoSelection();
	void SetIMEDisabledFlag(bool);
	void ClearIMEDisabledFlag();
	bool IsIMEDisabledFlag();
	void SetForceOneTimeAdvance(bool);
	void ClearForceOneTimeAdvance();
	bool IsForceOneTimeAdvance();
	void SetForceAdvance(bool);
	void ClearForceAdvance();
	bool IsForceAdvance();
	void SetNeedUpdateLayoutFlag(bool);
	void ClearNeedUpdateLayoutFlag();
	bool IsNeedUpdateLayoutFlag();
	Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> CreateEditorKit();
	Scaleform::GFx::AvmTextFieldBase * GetAvmTextField();
	const Scaleform::GFx::AvmTextFieldBase * GetAvmTextField();
	TextField(const Scaleform::GFx::TextField &);
	TextField(Scaleform::GFx::TextFieldDef *, Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::ASMovieRootBase *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::ResourceId);
	virtual ~TextField();
	void SetCSSData(Scaleform::GFx::TextField::CSSHolderBase *);
	Scaleform::GFx::TextField::CSSHolderBase * GetCSSData();
	virtual void UpdateTransform3D();
	virtual void AdvanceFrame(bool, float);
	virtual Scaleform::Render::Rect<float> GetBounds(const Scaleform::Render::Matrix2x4<float> &);
	virtual Scaleform::Render::Rect<float> GetRectBounds(const Scaleform::Render::Matrix2x4<float> &);
	virtual Scaleform::GFx::CharacterDef * GetCharacterDef();
	virtual unsigned long GetCursorType();
	virtual Scaleform::GFx::CharacterDef::CharacterDefType GetType();
	virtual double GetX();
	virtual double GetY();
	virtual Scaleform::Ptr<Scaleform::Render::TreeNode> CreateRenderNode(Scaleform::Render::ContextImpl::Context &);
	virtual void OnEventLoad();
	virtual void OnEventUnload();
	virtual bool PointTestLocal(const Scaleform::Render::Point<float> &, unsigned char);
	virtual void SetRotation(double);
	virtual void SetStateChangeFlags(unsigned char);
	virtual void SetHeight(double);
	virtual void SetWidth(double);
	virtual void SetX(double);
	virtual void SetY(double);
	virtual void SetXScale(double);
	virtual void SetYScale(double);
	virtual void SetFilters(const Scaleform::Render::FilterSet *);
	virtual const Scaleform::Render::FilterSet * GetFilters();
	virtual long CheckAdvanceStatus(bool);
	virtual Scaleform::GFx::DisplayObjectBase::TopMostResult GetTopMostMouseEntity(const Scaleform::Render::Point<float> &, Scaleform::GFx::DisplayObjectBase::TopMostDescr *);
	virtual bool IsFocusEnabled(Scaleform::GFx::FocusMovedType);
	virtual bool IsFocusRectEnabled();
	virtual bool IsTabable();
	virtual bool OnMouseEvent(const Scaleform::GFx::EventId &);
	virtual bool OnKeyEvent(const Scaleform::GFx::EventId &, long *);
	virtual bool OnCharEvent(unsigned long, unsigned long);
	virtual bool IsFocusAllowed(Scaleform::GFx::MovieImpl *, unsigned long);
	virtual bool IsFocusAllowed(Scaleform::GFx::MovieImpl *, unsigned long);
	virtual void OnFocus(Scaleform::GFx::InteractiveObject::FocusEventType, Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	virtual bool OnLosingKeyboardFocus(Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	virtual bool OnMouseWheelEvent(long);
	virtual void PropagateMouseEvent(const Scaleform::GFx::EventId &);
	void AddIdImageDescAssoc(const char *, Scaleform::Render::Text::ImageDesc *);
	void AppendText(const char *, unsigned long long);
	void AppendText(const wchar_t *, unsigned long long);
	void AppendHtml(const char *, unsigned long long, bool, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *);
	void AppendHtml(const wchar_t *, unsigned long long, bool, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *);
	bool ChangeUrlFormat(Scaleform::GFx::TextField::LinkEvent, unsigned long, const Scaleform::Range *);
	void ClearAAForReadability();
	void ClearAutoFit();
	void ClearAutoSizeX();
	void ClearAutoSizeY();
	void ClearIdImageDescAssoc();
	void ClearImageSubstitutor();
	void ClearMultiline();
	void ClearPasswordMode();
	void ClearUseDeviceFont();
	void ClearWordWrap();
	void ClearUrlZones();
	void CollectUrlZones();
	Scaleform::Render::Text::DocView::ImageSubstitutor * CreateImageSubstitutor();
	bool DoesUseDeviceFont();
	void EnableSoftShadow();
	void EnableBidirectionalText(bool);
	void ForceCompleteReformat();
	void ForceReformat();
	Scaleform::Render::Text::DocView::ViewAlignment GetAlignment();
	Scaleform::Render::Rect<float> GetCursorBounds(unsigned long long, float *, float *);
	long long GetCaretIndex();
	Scaleform::Render::Color GetBackgroundColor();
	unsigned long GetBackgroundColor24();
	unsigned long GetBackgroundColor32();
	float GetBlurX();
	float GetBlurY();
	float GetBlurStrength();
	float GetOutline();
	Scaleform::Render::Color GetBorderColor();
	unsigned long GetBorderColor24();
	unsigned long GetBorderColor32();
	unsigned long GetBottomVScroll();
	unsigned long long GetBeginIndex();
	bool GetCharBoundaries(Scaleform::Render::Rect<float> *, unsigned long long);
	unsigned long long GetCharIndexAtPoint(float, float);
	long long GetCursorPos();
	const Scaleform::Render::Text::TextFormat * GetDefaultTextFormat();
	const Scaleform::Render::Text::ParagraphFormat * GetDefaultParagraphFormat();
	Scaleform::GFx::Text::EditorKit * GetEditorKit();
	unsigned long long GetEndIndex();
	bool GetExactCharBoundaries(Scaleform::Render::Rect<float> *, unsigned long long);
	bool GetFauxBold();
	bool GetFauxItalic();
	bool GetForceVector();
	unsigned long long GetFirstCharInParagraph(unsigned long long);
	unsigned long GetFocusedControllerIdx();
	float GetFontScaleFactor();
	Scaleform::StringHashLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > * GetImageDescAssoc();
	double GetHScrollOffset();
	double GetMaxHScroll();
	unsigned long GetLineIndexAtPoint(float, float);
	unsigned long GetLineIndexOfChar(unsigned long long);
	unsigned long long GetLineLength(unsigned long, bool *);
	bool GetLineMetrics(unsigned long, Scaleform::Render::Text::DocView::LineMetrics *);
	unsigned long long GetLineOffset(unsigned long);
	const wchar_t * GetLineText(unsigned long, unsigned long long *);
	unsigned long GetLinesCount();
	unsigned long GetMaxLength();
	unsigned long GetMaxVScroll();
	const Scaleform::StringLH & GetOriginalTextValue();
	Scaleform::GFx::ASString GetText(bool);
	Scaleform::GFx::ASString GetHtml();
	Scaleform::Render::Text::DocView::ViewTextAutoSize GetTextAutoSize();
	unsigned long long GetTextLength();
	Scaleform::GFx::TextFieldDef * GetTextFieldDef();
	void GetInitialFormats(Scaleform::Render::Text::TextFormat *, Scaleform::Render::Text::ParagraphFormat *);
	long long GetParagraphLength(unsigned long long);
	void GetPosition(Scaleform::GFx::Value::DisplayInfo *);
	unsigned long GetSelectedBackgroundColor();
	unsigned long GetSelectedTextColor();
	float GetShadowAlpha();
	float GetShadowAngle();
	float GetShadowBlurX();
	float GetShadowBlurY();
	Scaleform::Render::Color GetShadowColor();
	unsigned long GetShadowColor32();
	float GetShadowDistance();
	unsigned long GetShadowQuality();
	float GetShadowStrength();
	Scaleform::GFx::ASString GetShadowStyle();
	const Scaleform::GFx::Text::StyleManager * GetStyleSheet();
	bool GetTextAndParagraphFormat(const Scaleform::Render::Text::TextFormat * *, const Scaleform::Render::Text::ParagraphFormat * *, unsigned long long);
	void GetTextAndParagraphFormat(Scaleform::Render::Text::TextFormat *, Scaleform::Render::Text::ParagraphFormat *, unsigned long long, unsigned long long);
	Scaleform::Render::Color GetTextColor();
	unsigned long GetTextColor32();
	double GetTextWidth();
	double GetTextHeight();
	Scaleform::Render::Text::DocView::ViewVAlignment GetVAlignment();
	unsigned long GetVScrollOffset();
	bool HasBackground();
	bool HasBorder();
	bool HasEditorKit();
	bool HasMaxLength();
	bool HasStyleSheet();
	bool IsAAForReadability();
	bool IsAutoFit();
	bool IsAutoSizeX();
	bool IsAutoSizeY();
	bool IsBidirectionalTextEnabled();
	bool IsMultiline();
	bool IsOverwriteMode();
	bool IsShadowHiddenObject();
	bool IsShadowKnockOut();
	bool IsUrlUnderMouseCursor(unsigned long, Scaleform::Render::Point<float> *, Scaleform::Range *);
	bool IsUrlTheSame(unsigned long, const Scaleform::Range &);
	bool IsWordWrap();
	bool MayHaveUrl();
	void NotifyChanged();
	bool SetRestrict(const Scaleform::GFx::ASString &);
	const Scaleform::String * GetRestrict();
	void ClearRestrict();
	void ProcessImageTags(Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> &);
	void RemoveIdImageDescAssoc(const char *);
	void ReplaceText(const wchar_t *, unsigned long long, unsigned long long, unsigned long long);
	void ResetBlink(bool, bool);
	void SetAAForReadability();
	void SetAlignment(Scaleform::Render::Text::DocView::ViewAlignment);
	void SetAutoFit();
	void SetAutoSizeX();
	void SetAutoSizeY();
	void SetBackground(bool);
	void SetBackgroundColor(const Scaleform::Render::Color &);
	void SetBackgroundColor(unsigned long);
	void SetBlurStrength(float);
	void SetBlurX(float);
	void SetBlurY(float);
	void SetBorder(bool);
	void SetBorderColor(const Scaleform::Render::Color &);
	void SetBorderColor(unsigned long);
	void SetDefaultParagraphFormat(const Scaleform::Render::Text::ParagraphFormat &);
	void SetDefaultTextFormat(const Scaleform::Render::Text::TextFormat &);
	void SetFauxBold(bool);
	void SetFauxItalic(bool);
	void SetForceVector(bool);
	void SetTextFilters(const Scaleform::Render::Text::TextFilter &);
	void SetFontScaleFactor(float);
	void SetHScrollOffset(double);
	void SetInitialFormatsAsDefault();
	void SetMaxLength(unsigned long long);
	void SetMultiline();
	void SetNeedUpdateGeomData();
	void SetOverwriteMode(bool);
	void SetParagraphFormat(const Scaleform::Render::Text::ParagraphFormat &, unsigned long long, unsigned long long);
	void SetPasswordMode();
	void SetSelection(long long, long long);
	void SetShadowAlpha(float);
	void SetShadowAngle(float);
	void SetShadowBlurX(float);
	void SetShadowBlurY(float);
	void SetShadowColor(const Scaleform::Render::Color &);
	void SetShadowColor(unsigned long);
	void SetShadowDistance(float);
	void SetShadowHideObject(bool);
	void SetShadowKnockOut(bool);
	void SetShadowQuality(unsigned long);
	void SetShadowStrength(float);
	void SetOutline(float);
	bool SetShadowStyle(const char *);
	void SetText(const wchar_t *, bool);
	void SetText(const char *, bool);
	void SetTextAutoSize(Scaleform::Render::Text::DocView::ViewTextAutoSize);
	void SetTextColor(const Scaleform::Render::Color &);
	void SetTextColor(unsigned long);
	void SetTextFormat(const Scaleform::Render::Text::TextFormat &, unsigned long long, unsigned long long);
	bool SetTextValue(const char *, bool, bool);
	void SetUseDeviceFont();
	void SetVAlignment(Scaleform::Render::Text::DocView::ViewVAlignment);
	void SetVScrollOffset(unsigned long);
	void SetWideCursor(bool);
	void SetWordWrap();
	Scaleform::Render::Point<float> TransformToTextRectSpace(const Scaleform::GFx::Value::DisplayInfo &);
	Scaleform::GFx::DisplayObjectBase::GeomDataType & UpdateAndGetGeomData(Scaleform::GFx::DisplayObjectBase::GeomDataType *, bool);
	void UpdateUrlStyles();
	void ClearCompositionString();
	void CommitCompositionString(const wchar_t *, unsigned long long);
	const wchar_t * GetCompositionString();
	void CreateCompositionString();
	Scaleform::GFx::FontResource * GetFontResource();
	void SetCandidateListFont(Scaleform::GFx::Sprite *);
	void HighlightCompositionStringText(unsigned long long, unsigned long long, Scaleform::GFx::Text::IMEStyle::Category);
	bool IsIMEEnabled();
	void ReleaseCompositionString();
	void SetCompositionStringText(const wchar_t *, unsigned long long);
	void SetCompositionStringPosition(unsigned long long);
	unsigned long long GetCompositionStringPosition();
	unsigned long long GetCompositionStringLength();
	void SetCursorInCompositionString(unsigned long long);
	Scaleform::GFx::TextField & operator=(const Scaleform::GFx::TextField &);
};
struct Scaleform::GFx::TextField::ShadowParams :
	Scaleform::NewOverrideBase<323>
{
	Scaleform::Render::Color ShadowColor; // 0x0
	Scaleform::GFx::ASString ShadowStyleStr; // 0x8
	Scaleform::ArrayLH<Scaleform::Render::Point<float>,2,Scaleform::ArrayDefaultPolicy> ShadowOffsets; // 0x10
	Scaleform::ArrayLH<Scaleform::Render::Point<float>,2,Scaleform::ArrayDefaultPolicy> TextOffsets; // 0x28
	ShadowParams(Scaleform::GFx::TextField::ShadowParams &);
	ShadowParams(const Scaleform::GFx::TextField::ShadowParams &);
	ShadowParams(Scaleform::GFx::ASStringManager *);
	~ShadowParams();
	Scaleform::GFx::TextField::ShadowParams & operator=(Scaleform::GFx::TextField::ShadowParams &);
	Scaleform::GFx::TextField::ShadowParams & operator=(const Scaleform::GFx::TextField::ShadowParams &);
};
class Scaleform::NewOverrideBase<323>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 323,
	};
public:
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
};
class Scaleform::ArrayLH<Scaleform::Render::Point<float>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Point<float>,Scaleform::AllocatorLH<Scaleform::Render::Point<float>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::Point<float>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Render::Point<float>,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Render::Point<float>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Render::Point<float>,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Render::Point<float>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Render::Point<float>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Render::Point<float>,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Render::Point<float>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::TextField::TextDocumentListener :
	Scaleform::Render::Text::DocView::DocumentListener
{
private:
	Scaleform::GFx::TextField * GetTextField();
public:
	TextDocumentListener(Scaleform::GFx::TextField::TextDocumentListener &);
	TextDocumentListener(const Scaleform::GFx::TextField::TextDocumentListener &);
	TextDocumentListener();
	void TranslatorChanged();
	void OnScroll(Scaleform::Render::Text::DocView &);
	virtual void View_OnHScroll(Scaleform::Render::Text::DocView &, unsigned long);
	virtual void View_OnVScroll(Scaleform::Render::Text::DocView &, unsigned long);
	virtual void View_OnMaxScrollChanged(Scaleform::Render::Text::DocView &);
	virtual bool View_OnLineFormat(Scaleform::Render::Text::DocView &, Scaleform::Render::Text::DocView::LineFormatDesc &);
	virtual void View_OnChanged(Scaleform::Render::Text::DocView &);
	virtual bool View_PrepareBidiText(Scaleform::Render::Text::DocView &, const wchar_t *, unsigned long long, wchar_t *, unsigned long *, bool *);
	virtual void Editor_OnChanged(Scaleform::Render::Text::EditorKitBase &);
	virtual void Editor_OnCursorMoved(Scaleform::Render::Text::EditorKitBase &);
	virtual void Editor_OnCursorBlink(Scaleform::Render::Text::EditorKitBase &, bool);
	virtual bool Editor_OnInsertingText(Scaleform::Render::Text::EditorKitBase &, unsigned long long, unsigned long long, const wchar_t *);
	virtual bool Editor_OnRemovingText(Scaleform::Render::Text::EditorKitBase &, unsigned long long, unsigned long long);
	virtual Scaleform::String GetCharacterPath();
	virtual ~TextDocumentListener();
	Scaleform::GFx::TextField::TextDocumentListener & operator=(Scaleform::GFx::TextField::TextDocumentListener &);
	Scaleform::GFx::TextField::TextDocumentListener & operator=(const Scaleform::GFx::TextField::TextDocumentListener &);
};
class Scaleform::Ptr<Scaleform::GFx::TextFieldDef>
{
protected:
	Scaleform::GFx::TextFieldDef * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::TextFieldDef>(const Scaleform::Ptr<Scaleform::GFx::TextFieldDef> &);
	Ptr<Scaleform::GFx::TextFieldDef>(Scaleform::GFx::TextFieldDef *);
	Ptr<Scaleform::GFx::TextFieldDef>(Scaleform::Ptr<Scaleform::GFx::TextFieldDef> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::TextFieldDef>(Scaleform::Pickable<Scaleform::GFx::TextFieldDef>);
	Ptr<Scaleform::GFx::TextFieldDef>(Scaleform::GFx::TextFieldDef &);
	Ptr<Scaleform::GFx::TextFieldDef>();
	~Ptr<Scaleform::GFx::TextFieldDef>();
	bool operator==(Scaleform::GFx::TextFieldDef *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::TextFieldDef> &);
	bool operator!=(Scaleform::GFx::TextFieldDef *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::TextFieldDef> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::TextFieldDef> &);
	Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & operator=(Scaleform::Pickable<Scaleform::GFx::TextFieldDef>);
	const Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & operator=(Scaleform::GFx::TextFieldDef &);
	const Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & operator=(Scaleform::GFx::TextFieldDef *);
	const Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & operator=(const Scaleform::Ptr<Scaleform::GFx::TextFieldDef> &);
	Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & SetPtr(Scaleform::Pickable<Scaleform::GFx::TextFieldDef>);
	Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & SetPtr(Scaleform::GFx::TextFieldDef &);
	Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & SetPtr(Scaleform::GFx::TextFieldDef *);
	Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::TextFieldDef> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::TextFieldDef * & GetRawRef();
	Scaleform::GFx::TextFieldDef * GetPtr();
	Scaleform::GFx::TextFieldDef & operator*();
	Scaleform::GFx::TextFieldDef * operator->();
	Scaleform::GFx::TextFieldDef * operator struct Scaleform::GFx::TextFieldDef *();
	Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & Pick(Scaleform::GFx::TextFieldDef *);
	Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & Pick(Scaleform::Pickable<Scaleform::GFx::TextFieldDef>);
	Scaleform::Ptr<Scaleform::GFx::TextFieldDef> & Pick(Scaleform::Ptr<Scaleform::GFx::TextFieldDef> &);
};
struct Scaleform::GFx::TextField::CSSHolderBase :
	Scaleform::NewOverrideBase<323>
{
	~CSSHolderBase();
	struct UrlZone;
	Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> > UrlZones; // 0x8
	struct MouseStateType;
	Scaleform::GFx::TextField::CSSHolderBase::MouseStateType MouseState[6]; // 0x20
	bool HasASStyleSheet();
	const Scaleform::Render::Text::StyleManagerBase * GetTextStyleManager();
	CSSHolderBase(const Scaleform::GFx::TextField::CSSHolderBase &);
	CSSHolderBase();
	Scaleform::GFx::TextField::CSSHolderBase & operator=(const Scaleform::GFx::TextField::CSSHolderBase &);
};
struct Scaleform::GFx::TextField::CSSHolderBase::UrlZone
{
	Scaleform::Ptr<Scaleform::Render::Text::StyledText> SavedFmt; // 0x0
	unsigned long HitCount; // 0x8
	unsigned long OverCount; // 0xC
	UrlZone(Scaleform::GFx::TextField::CSSHolderBase::UrlZone &);
	UrlZone(const Scaleform::GFx::TextField::CSSHolderBase::UrlZone &);
	UrlZone();
	bool operator==(const Scaleform::GFx::TextField::CSSHolderBase::UrlZone &);
	bool operator!=(const Scaleform::GFx::TextField::CSSHolderBase::UrlZone &);
	~UrlZone();
	Scaleform::GFx::TextField::CSSHolderBase::UrlZone & operator=(Scaleform::GFx::TextField::CSSHolderBase::UrlZone &);
	Scaleform::GFx::TextField::CSSHolderBase::UrlZone & operator=(const Scaleform::GFx::TextField::CSSHolderBase::UrlZone &);
};
class Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >
{
private:
	unsigned long long FindRangeIndex(long long);
	unsigned long long FindNearestRangeIndex(long long);
	class TypedRangeData;
	class RangeArrayType;
public:
	Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> Ranges; // 0x0
	const Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> & operator[](unsigned long long);
	Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> & operator[](unsigned long long);
	unsigned long long Count();
	void SetRange(const Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> &);
	void SetRange(long long, unsigned long long, const Scaleform::GFx::TextField::CSSHolderBase::UrlZone &);
	void ClearRange(long long, unsigned long long);
	Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> & Append(unsigned long long, const Scaleform::GFx::TextField::CSSHolderBase::UrlZone &);
	void InsertRange(long long, unsigned long long, const Scaleform::GFx::TextField::CSSHolderBase::UrlZone &);
	void ExpandRange(long long, unsigned long long);
	void RemoveRange(long long, unsigned long long);
	void RemoveAll();
	class Iterator;
	Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator Begin();
	Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >::Iterator Begin();
	Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator Last();
	Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >::Iterator Last();
	Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator GetIteratorAt(long long);
	Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >::Iterator GetIteratorAt(long long);
	Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator GetIteratorByNearestIndex(long long);
	Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >::Iterator GetIteratorByNearestIndex(long long);
	class ConstIterator;
	class ConstPositionIterator;
	void CheckIntegrity();
	RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> > &);
	RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >(const Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> > &);
	RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >();
	~RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >();
	Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> > & operator=(Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> > &);
	Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> > & operator=(const Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> > &);
};
struct Scaleform::GFx::TextField::CSSHolderBase::MouseStateType
{
	unsigned long UrlZoneIndex; // 0x0
	bool OverBit; // 0x4
	bool HitBit; // 0x5
	MouseStateType();
};
class Scaleform::AutoPtr<Scaleform::GFx::TextField::CSSHolderBase>
{
public:
	AutoPtr<Scaleform::GFx::TextField::CSSHolderBase>(const Scaleform::AutoPtr<Scaleform::GFx::TextField::CSSHolderBase> &);
	AutoPtr<Scaleform::GFx::TextField::CSSHolderBase>(Scaleform::GFx::TextField::CSSHolderBase *, bool);
	AutoPtr<Scaleform::GFx::TextField::CSSHolderBase>(Scaleform::GFx::TextField::CSSHolderBase *);
	~AutoPtr<Scaleform::GFx::TextField::CSSHolderBase>();
	Scaleform::AutoPtr<Scaleform::GFx::TextField::CSSHolderBase> & operator=(Scaleform::GFx::TextField::CSSHolderBase *);
	Scaleform::AutoPtr<Scaleform::GFx::TextField::CSSHolderBase> & operator=(const Scaleform::AutoPtr<Scaleform::GFx::TextField::CSSHolderBase> &);
	Scaleform::GFx::TextField::CSSHolderBase & operator*();
	Scaleform::GFx::TextField::CSSHolderBase * operator->();
	Scaleform::GFx::TextField::CSSHolderBase * GetPtr();
	bool operator bool();
	Scaleform::GFx::TextField::CSSHolderBase * Release();
	void Reset(Scaleform::GFx::TextField::CSSHolderBase *, bool);
private:
	Scaleform::GFx::TextField::CSSHolderBase * pObject; // 0x0
	bool Owner; // 0x8
	Scaleform::GFx::TextField::CSSHolderBase * constRelease();
public:
	void __dflt_ctor_closure();
};
class Scaleform::StringHashLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >
{
public:
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	struct Allocator;
	class ValueType;
	class SelfType;
	struct HashNodeF;
	class Container;
	Scaleform::HashSet<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > mHash; // 0x0
	StringHashLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<S(const Scaleform::StringHashLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > &);
	StringHashLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<S(long);
	StringHashLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<S();
	~StringHashLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<();
	void operator=(const Scaleform::StringHashLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > &);
	void Clear();
	bool IsEmpty();
	void Set(const Scaleform::String &, const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> &);
	void Add(const Scaleform::String &, const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> &);
	void Remove(const Scaleform::String &);
	const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> * Get(const Scaleform::String &);
	Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> * Get(const Scaleform::String &);
	bool Get(const Scaleform::String &, Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> *);
	unsigned long long GetSize();
	void Resize(unsigned long long);
	void SetSapacity(unsigned long long);
	struct ConstIterator;
	struct Iterator;
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::ConstIterator Begin();
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::Iterator Begin();
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::ConstIterator End();
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::Iterator End();
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::ConstIterator Find(const Scaleform::String &);
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::Iterator Find(const Scaleform::String &);
	Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> * GetCaseInsensitive(const Scaleform::String &);
	const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> * GetCaseInsensitive(const Scaleform::String &);
	bool GetCaseInsensitive(const Scaleform::String &, Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> *);
	Scaleform::HashSetBase<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::Iterator FindCaseInsensitive(const Scaleform::String &);
	void SetCaseInsensitive(const Scaleform::String &, const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> &);
};
class Scaleform::Ptr<Scaleform::GFx::Text::EditorKit>
{
protected:
	Scaleform::GFx::Text::EditorKit * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::Text::EditorKit>(const Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> &);
	Ptr<Scaleform::GFx::Text::EditorKit>(Scaleform::GFx::Text::EditorKit *);
	Ptr<Scaleform::GFx::Text::EditorKit>(Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::Text::EditorKit>(Scaleform::Pickable<Scaleform::GFx::Text::EditorKit>);
	Ptr<Scaleform::GFx::Text::EditorKit>(Scaleform::GFx::Text::EditorKit &);
	Ptr<Scaleform::GFx::Text::EditorKit>();
	~Ptr<Scaleform::GFx::Text::EditorKit>();
	bool operator==(Scaleform::GFx::Text::EditorKit *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> &);
	bool operator!=(Scaleform::GFx::Text::EditorKit *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> &);
	Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> & operator=(Scaleform::Pickable<Scaleform::GFx::Text::EditorKit>);
	const Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> & operator=(Scaleform::GFx::Text::EditorKit &);
	const Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> & operator=(Scaleform::GFx::Text::EditorKit *);
	const Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> & operator=(const Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> &);
	Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> & SetPtr(Scaleform::Pickable<Scaleform::GFx::Text::EditorKit>);
	Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> & SetPtr(Scaleform::GFx::Text::EditorKit &);
	Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> & SetPtr(Scaleform::GFx::Text::EditorKit *);
	Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::Text::EditorKit * & GetRawRef();
	Scaleform::GFx::Text::EditorKit * GetPtr();
	Scaleform::GFx::Text::EditorKit & operator*();
	Scaleform::GFx::Text::EditorKit * operator->();
	Scaleform::GFx::Text::EditorKit * operator class Scaleform::GFx::Text::EditorKit *();
	Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> & Pick(Scaleform::GFx::Text::EditorKit *);
	Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> & Pick(Scaleform::Pickable<Scaleform::GFx::Text::EditorKit>);
	Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> & Pick(Scaleform::Ptr<Scaleform::GFx::Text::EditorKit> &);
};
Scaleform::Render::Rect<float> Scaleform::GFx::TextField::GetRectBounds(const Scaleform::Render::Matrix2x4<float> & t); // 0x140489380
Scaleform::GFx::CharacterDef * Scaleform::GFx::TextField::GetCharacterDef(); // 0x1403F3770
Scaleform::GFx::CharacterDef::CharacterDefType Scaleform::GFx::TextField::GetType(); // 0x14002DEF0
bool Scaleform::GFx::TextField::IsFocusRectEnabled(); // 0x14004BBE0
Scaleform::Render::Text::DocView::ImageSubstitutor * Scaleform::GFx::TextField::CreateImageSubstitutor(); // 0x140548D00
bool Scaleform::GFx::TextField::IsIMEEnabled(); // 0x140365660
class Scaleform::GFx::AvmTextFieldBase :
	Scaleform::GFx::AvmInteractiveObjBase
{
public:
	const Scaleform::GFx::Text::StyleManager * GetStyleSheet();
	bool HasStyleSheet();
	void NotifyChanged();
	void OnLinkEventEx(Scaleform::GFx::TextField::LinkEvent, unsigned long, unsigned long);
	bool OnMouseEvent(const Scaleform::GFx::EventId &);
	bool OnCharEvent(wchar_t, unsigned long);
	void OnScroll();
	bool OnEditorInsertingText(unsigned long long, unsigned long long, const wchar_t *, unsigned long);
	bool OnEditorRemovingText(unsigned long long, unsigned long long, unsigned long);
	bool UpdateTextFromVariable();
	void UpdateVariable();
	AvmTextFieldBase(Scaleform::GFx::AvmTextFieldBase &);
	AvmTextFieldBase(const Scaleform::GFx::AvmTextFieldBase &);
	AvmTextFieldBase();
	virtual ~AvmTextFieldBase();
	Scaleform::GFx::AvmTextFieldBase & operator=(Scaleform::GFx::AvmTextFieldBase &);
	Scaleform::GFx::AvmTextFieldBase & operator=(const Scaleform::GFx::AvmTextFieldBase &);
};