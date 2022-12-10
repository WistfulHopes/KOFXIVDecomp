#pragma once

class Scaleform::GFx::DrawText :
	Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawText,325>
{
	class Matrix;
	class Cxform;
	class RectF;
	class SizeF;
	class PointF;
public:
	void SetText(const Scaleform::String &);
	void SetText(const wchar_t *, unsigned long long);
	void SetText(const char *, unsigned long long);
	Scaleform::String GetText();
	void SetHtmlText(const Scaleform::String &);
	void SetHtmlText(const wchar_t *, unsigned long long);
	void SetHtmlText(const char *, unsigned long long);
	Scaleform::String GetHtmlText();
	void SetColor(Scaleform::Render::Color, unsigned long long, unsigned long long);
	void SetFont(const char *, unsigned long long, unsigned long long);
	void SetFontSize(float, unsigned long long, unsigned long long);
	void SetLetterSpacing(float, unsigned long long, unsigned long long);
	enum FontStyle
	{
		Normal = 0,
		Bold = 1,
		Italic = 2,
		BoldItalic = 3,
		ItalicBold = 3,
	};
	void SetFontStyle(Scaleform::GFx::DrawText::FontStyle, unsigned long long, unsigned long long);
	void SetUnderline(bool, unsigned long long, unsigned long long);
	void SetMultiline(bool);
	bool IsMultiline();
	void SetWordWrap(bool);
	bool IsWordWrap();
	void SetRect(const Scaleform::Render::Rect<float> &);
	Scaleform::Render::Rect<float> GetRect();
	void SetMatrix(const Scaleform::Render::Matrix2x4<float> &);
	Scaleform::Render::Matrix2x4<float> GetMatrix();
	void SetCxform(const Scaleform::Render::Cxform &);
	const Scaleform::Render::Cxform & GetCxform();
	void SetBorderColor(const Scaleform::Render::Color &);
	Scaleform::Render::Color GetBorderColor();
	void SetBackgroundColor(const Scaleform::Render::Color &);
	Scaleform::Render::Color GetBackgroundColor();
	enum Alignment
	{
		Align_Left = 0,
		Align_Default = 0,
		Align_Right = 1,
		Align_Center = 2,
		Align_Justify = 3,
	};
	void SetAlignment(Scaleform::GFx::DrawText::Alignment);
	Scaleform::GFx::DrawText::Alignment GetAlignment();
	enum VAlignment
	{
		VAlign_Top = 0,
		VAlign_Default = 0,
		VAlign_Center = 1,
		VAlign_Bottom = 2,
	};
	void SetVAlignment(Scaleform::GFx::DrawText::VAlignment);
	Scaleform::GFx::DrawText::VAlignment GetVAlignment();
	enum AAMode
	{
		AA_Animation = 0,
		AA_Readability = 1,
	};
	void SetAAMode(Scaleform::GFx::DrawText::AAMode);
	Scaleform::GFx::DrawText::AAMode GetAAMode();
	enum FilterType
	{
		Filter_Unknown = 0,
		Filter_DropShadow = 1,
		Filter_Blur = 2,
		Filter_Glow = 3,
	};
	enum FilterFlagsType
	{
		FilterFlag_KnockOut = 32,
		FilterFlag_HideObject = 64,
		FilterFlag_FineBlur = 128,
	};
	struct Filter;
	void SetFilters(const Scaleform::GFx::DrawText::Filter *, unsigned long long);
	void ClearFilters();
	void SetDepth(unsigned long);
	unsigned long GetDepth();
	void SetVisible(bool);
	bool IsVisible();
protected:
	virtual ~DrawText();
	Scaleform::Render::Text::DocView * GetDocView();
public:
	DrawText(const Scaleform::GFx::DrawText &);
	DrawText();
	Scaleform::GFx::DrawText & operator=(const Scaleform::GFx::DrawText &);
};
class Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawText,325> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,325>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 325,
	};
public:
	RefCountBaseNTS<Scaleform::GFx::DrawText,325>(Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawText,325> &);
	RefCountBaseNTS<Scaleform::GFx::DrawText,325>(const Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawText,325> &);
	RefCountBaseNTS<Scaleform::GFx::DrawText,325>();
	virtual ~RefCountBaseNTS<Scaleform::GFx::DrawText,325>();
	Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawText,325> & operator=(Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawText,325> &);
	Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawText,325> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawText,325> &);
};
struct Scaleform::GFx::DrawText::Filter :
	Scaleform::Render::TreeText::Filter
{
	Filter(Scaleform::GFx::DrawText::FilterType);
	Filter();
	void SetFilterType(Scaleform::GFx::DrawText::FilterType);
};
class Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawTextManager,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBaseNTS<Scaleform::GFx::DrawTextManager,2>(Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawTextManager,2> &);
	RefCountBaseNTS<Scaleform::GFx::DrawTextManager,2>(const Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawTextManager,2> &);
	RefCountBaseNTS<Scaleform::GFx::DrawTextManager,2>();
	virtual ~RefCountBaseNTS<Scaleform::GFx::DrawTextManager,2>();
	Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawTextManager,2> & operator=(Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawTextManager,2> &);
	Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawTextManager,2> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawTextManager,2> &);
};
class Scaleform::GFx::DrawTextManager :
	Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawTextManager,2>,
	Scaleform::GFx::StateBag
{
	class Viewport;
	struct TextParams;
protected:
	Scaleform::GFx::DrawTextManagerImpl * pImpl; // 0x18
	Scaleform::MemoryHeap * pHeap; // 0x20
	virtual Scaleform::GFx::StateBag * GetStateBagImpl();
	Scaleform::Render::Text::Allocator * GetTextAllocator();
	Scaleform::GFx::FontManager * GetFontManager();
	Scaleform::GFx::FontManagerStates * GetFontManagerStates();
	void CheckFontStatesChange();
	void SetBeginDisplayInvokedFlag(bool);
	void ClearBeginDisplayInvokedFlag();
	bool IsBeginDisplayInvokedFlagSet();
public:
	DrawTextManager(const Scaleform::GFx::DrawTextManager &);
	DrawTextManager(Scaleform::GFx::Loader *);
	DrawTextManager(Scaleform::GFx::MovieDef *);
	virtual ~DrawTextManager();
	void SetDefaultTextParams(const Scaleform::GFx::DrawTextManager::TextParams &);
	const Scaleform::GFx::DrawTextManager::TextParams & GetDefaultTextParams();
	Scaleform::GFx::DrawText * CreateText(const Scaleform::String &, const Scaleform::Render::Rect<float> &, const Scaleform::GFx::DrawTextManager::TextParams *, unsigned long);
	Scaleform::GFx::DrawText * CreateText(const wchar_t *, const Scaleform::Render::Rect<float> &, const Scaleform::GFx::DrawTextManager::TextParams *, unsigned long);
	Scaleform::GFx::DrawText * CreateText(const char *, const Scaleform::Render::Rect<float> &, const Scaleform::GFx::DrawTextManager::TextParams *, unsigned long);
	Scaleform::GFx::DrawText * CreateText();
	Scaleform::GFx::DrawText * CreateHtmlText(const Scaleform::String &, const Scaleform::Render::Rect<float> &, const Scaleform::GFx::DrawTextManager::TextParams *, unsigned long);
	Scaleform::GFx::DrawText * CreateHtmlText(const wchar_t *, const Scaleform::Render::Rect<float> &, const Scaleform::GFx::DrawTextManager::TextParams *, unsigned long);
	Scaleform::GFx::DrawText * CreateHtmlText(const char *, const Scaleform::Render::Rect<float> &, const Scaleform::GFx::DrawTextManager::TextParams *, unsigned long);
	Scaleform::Render::Size<float> GetTextExtent(const Scaleform::String &, float, const Scaleform::GFx::DrawTextManager::TextParams *);
	Scaleform::Render::Size<float> GetTextExtent(const wchar_t *, float, const Scaleform::GFx::DrawTextManager::TextParams *);
	Scaleform::Render::Size<float> GetTextExtent(const char *, float, const Scaleform::GFx::DrawTextManager::TextParams *);
	Scaleform::Render::Size<float> GetHtmlTextExtent(const Scaleform::String &, float, const Scaleform::GFx::DrawTextManager::TextParams *);
	Scaleform::Render::Size<float> GetHtmlTextExtent(const wchar_t *, float, const Scaleform::GFx::DrawTextManager::TextParams *);
	Scaleform::Render::Size<float> GetHtmlTextExtent(const char *, float, const Scaleform::GFx::DrawTextManager::TextParams *);
	void SwapDepths(Scaleform::GFx::DrawText *, Scaleform::GFx::DrawText *);
	void SetViewport(const Scaleform::Render::Viewport &);
	void Capture(bool);
	const Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> & GetDisplayHandle();
	void SetCaptureThread(unsigned long);
	void ShutdownRendering(bool);
	bool IsShutdownRenderingComplete();
protected:
	void SetTextParams(Scaleform::Render::Text::DocView *, const Scaleform::GFx::DrawTextManager::TextParams &, const Scaleform::Render::Text::TextFormat *, const Scaleform::Render::Text::ParagraphFormat *);
	Scaleform::Render::Text::DocView * CreateTempDoc(const Scaleform::GFx::DrawTextManager::TextParams &, Scaleform::Render::Text::TextFormat *, Scaleform::Render::Text::ParagraphFormat *, float, float);
	Scaleform::Render::ContextImpl::Context & GetRenderContext();
	Scaleform::Render::TreeRoot * GetRenderRoot();
public:
	Scaleform::GFx::DrawTextManager & operator=(const Scaleform::GFx::DrawTextManager &);
	void __dflt_ctor_closure();
};
struct Scaleform::GFx::DrawTextManager::TextParams
{
	Scaleform::Render::Color TextColor; // 0x0
	Scaleform::GFx::DrawText::Alignment HAlignment; // 0x4
	Scaleform::GFx::DrawText::VAlignment VAlignment; // 0x8
	Scaleform::GFx::DrawText::FontStyle FontStyle; // 0xC
	float FontSize; // 0x10
	Scaleform::String FontName; // 0x18
	bool Underline; // 0x20
	bool Multiline; // 0x21
	bool WordWrap; // 0x22
	TextParams(Scaleform::GFx::DrawTextManager::TextParams &);
	TextParams(const Scaleform::GFx::DrawTextManager::TextParams &);
	TextParams();
	~TextParams();
	Scaleform::GFx::DrawTextManager::TextParams & operator=(Scaleform::GFx::DrawTextManager::TextParams &);
	Scaleform::GFx::DrawTextManager::TextParams & operator=(const Scaleform::GFx::DrawTextManager::TextParams &);
};