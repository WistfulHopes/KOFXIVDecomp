#pragma once

class Scaleform::Render::TreeText :
	Scaleform::Render::TreeNode
{
	class NodeData;
public:
	Scaleform::Render::TreeText::NodeData * GetWritableData(unsigned long);
	const Scaleform::Render::TreeText::NodeData * GetReadOnlyData();
	const Scaleform::Render::TreeText::NodeData * GetDisplayData();
	void SetLayout(const Scaleform::Render::TextLayout::Builder &);
	const Scaleform::Render::TextLayout * GetLayout();
	Scaleform::Render::Text::DocView * GetDocView();
	void Init(Scaleform::Render::Text::DocView *);
	void Init(Scaleform::Render::Text::Allocator *, Scaleform::Render::Text::FontManagerBase *, Scaleform::Log *);
	void SetBounds(const Scaleform::Render::Rect<float> &);
	Scaleform::Render::Rect<float> GetBounds();
	void SetBorderColor(unsigned long);
	void SetBorderColor(const Scaleform::Render::Color &);
	Scaleform::Render::Color GetBorderColor();
	void SetBackgroundColor(unsigned long);
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
	void SetAlignment(Scaleform::Render::TreeText::Alignment);
	Scaleform::Render::TreeText::Alignment GetAlignment();
	enum VAlignment
	{
		VAlign_Top = 0,
		VAlign_Default = 0,
		VAlign_Center = 1,
		VAlign_Bottom = 2,
	};
	void SetVAlignment(Scaleform::Render::TreeText::VAlignment);
	Scaleform::Render::TreeText::VAlignment GetVAlignment();
	void SetText(const Scaleform::String &);
	void SetText(const wchar_t *, unsigned long long);
	void SetText(const char *, unsigned long long);
	Scaleform::String GetText();
	void SetHtmlText(const Scaleform::String &, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *);
	void SetHtmlText(const wchar_t *, unsigned long long, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *);
	void SetHtmlText(const char *, unsigned long long, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *);
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
	void SetFontStyle(Scaleform::Render::TreeText::FontStyle, unsigned long long, unsigned long long);
	void SetUnderline(bool, unsigned long long, unsigned long long);
	void SetMultiline(bool);
	bool IsMultiline();
	void SetWordWrap(bool);
	bool IsWordWrap();
	enum AAMode
	{
		AA_Animation = 0,
		AA_Readability = 1,
	};
	void SetAAMode(Scaleform::Render::TreeText::AAMode);
	Scaleform::Render::TreeText::AAMode GetAAMode();
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
	void SetFilters(const Scaleform::Render::TreeText::Filter *, unsigned long long);
	unsigned long long GetFilters(Scaleform::Render::TreeText::Filter *, unsigned long long);
	void ClearFilters();
	Scaleform::Render::Size<float> GetTextSize();
	void NotifyLayoutChanged();
private:
	void UpdateDefaultTextFormat(Scaleform::Render::Text::DocView *, const Scaleform::Render::Text::TextFormat &);
	void UpdateDefaultParagraphFormat(Scaleform::Render::Text::DocView *, const Scaleform::Render::Text::ParagraphFormat &);
public:
	TreeText();
};
class Scaleform::Render::TreeText::NodeData :
	Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData>
{
	class BaseClass;
public:
	Scaleform::Ptr<Scaleform::Render::Text::DocView> pDocView; // 0x90
	Scaleform::Ptr<Scaleform::Render::TextLayout> pLayout; // 0x98
	enum <unnamed-enum-TextFlags_RebuildLayout>
	{
		TextFlags_RebuildLayout = 1,
	};
	unsigned char TextFlags; // 0xA0
	NodeData(const Scaleform::Render::TreeText::NodeData &);
	NodeData(Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::TreeText::NodeData>);
	NodeData();
	virtual ~NodeData();
	virtual bool PropagateUp(Scaleform::Render::ContextImpl::Entry *);
	virtual Scaleform::Render::TreeCacheNode * updateCache(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheNode *, Scaleform::Render::TreeCacheNode *, Scaleform::Render::TreeNode *, unsigned short);
	virtual Scaleform::Render::TreeNode * CloneCreate(Scaleform::Render::ContextImpl::Context *);
	Scaleform::Render::TreeText::NodeData & operator=(const Scaleform::Render::TreeText::NodeData &);
};
class Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData> :
	Scaleform::Render::TreeNode::NodeData
{
public:
	ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData>(Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData> &);
	ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData>(const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData> &);
	ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData>(Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData> >);
	ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData>(Scaleform::Render::ContextImpl::EntryData::EntryType);
	virtual Scaleform::Render::ContextImpl::EntryData * ConstructCopy(Scaleform::Render::LinearHeap &);
	virtual void CopyTo(void *);
	virtual void Destroy();
	virtual ~ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData>();
	Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData> & operator=(Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData> &);
	Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData> & operator=(const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData> &);
	void __dflt_ctor_closure();
};
class Scaleform::Ptr<Scaleform::Render::Text::DocView>
{
protected:
	Scaleform::Render::Text::DocView * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Text::DocView>(const Scaleform::Ptr<Scaleform::Render::Text::DocView> &);
	Ptr<Scaleform::Render::Text::DocView>(Scaleform::Render::Text::DocView *);
	Ptr<Scaleform::Render::Text::DocView>(Scaleform::Ptr<Scaleform::Render::Text::DocView> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Text::DocView>(Scaleform::Pickable<Scaleform::Render::Text::DocView>);
	Ptr<Scaleform::Render::Text::DocView>(Scaleform::Render::Text::DocView &);
	Ptr<Scaleform::Render::Text::DocView>();
	~Ptr<Scaleform::Render::Text::DocView>();
	bool operator==(Scaleform::Render::Text::DocView *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Text::DocView> &);
	bool operator!=(Scaleform::Render::Text::DocView *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Text::DocView> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Text::DocView> &);
	Scaleform::Ptr<Scaleform::Render::Text::DocView> & operator=(Scaleform::Pickable<Scaleform::Render::Text::DocView>);
	const Scaleform::Ptr<Scaleform::Render::Text::DocView> & operator=(Scaleform::Render::Text::DocView &);
	const Scaleform::Ptr<Scaleform::Render::Text::DocView> & operator=(Scaleform::Render::Text::DocView *);
	const Scaleform::Ptr<Scaleform::Render::Text::DocView> & operator=(const Scaleform::Ptr<Scaleform::Render::Text::DocView> &);
	Scaleform::Ptr<Scaleform::Render::Text::DocView> & SetPtr(Scaleform::Pickable<Scaleform::Render::Text::DocView>);
	Scaleform::Ptr<Scaleform::Render::Text::DocView> & SetPtr(Scaleform::Render::Text::DocView &);
	Scaleform::Ptr<Scaleform::Render::Text::DocView> & SetPtr(Scaleform::Render::Text::DocView *);
	Scaleform::Ptr<Scaleform::Render::Text::DocView> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Text::DocView> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Text::DocView * & GetRawRef();
	Scaleform::Render::Text::DocView * GetPtr();
	Scaleform::Render::Text::DocView & operator*();
	Scaleform::Render::Text::DocView * operator->();
	Scaleform::Render::Text::DocView * operator class Scaleform::Render::Text::DocView *();
	Scaleform::Ptr<Scaleform::Render::Text::DocView> & Pick(Scaleform::Render::Text::DocView *);
	Scaleform::Ptr<Scaleform::Render::Text::DocView> & Pick(Scaleform::Pickable<Scaleform::Render::Text::DocView>);
	Scaleform::Ptr<Scaleform::Render::Text::DocView> & Pick(Scaleform::Ptr<Scaleform::Render::Text::DocView> &);
};
class Scaleform::Ptr<Scaleform::Render::TextLayout>
{
protected:
	Scaleform::Render::TextLayout * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TextLayout>(const Scaleform::Ptr<Scaleform::Render::TextLayout> &);
	Ptr<Scaleform::Render::TextLayout>(Scaleform::Render::TextLayout *);
	Ptr<Scaleform::Render::TextLayout>(Scaleform::Ptr<Scaleform::Render::TextLayout> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TextLayout>(Scaleform::Pickable<Scaleform::Render::TextLayout>);
	Ptr<Scaleform::Render::TextLayout>(Scaleform::Render::TextLayout &);
	Ptr<Scaleform::Render::TextLayout>();
	~Ptr<Scaleform::Render::TextLayout>();
	bool operator==(Scaleform::Render::TextLayout *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TextLayout> &);
	bool operator!=(Scaleform::Render::TextLayout *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TextLayout> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TextLayout> &);
	Scaleform::Ptr<Scaleform::Render::TextLayout> & operator=(Scaleform::Pickable<Scaleform::Render::TextLayout>);
	const Scaleform::Ptr<Scaleform::Render::TextLayout> & operator=(Scaleform::Render::TextLayout &);
	const Scaleform::Ptr<Scaleform::Render::TextLayout> & operator=(Scaleform::Render::TextLayout *);
	const Scaleform::Ptr<Scaleform::Render::TextLayout> & operator=(const Scaleform::Ptr<Scaleform::Render::TextLayout> &);
	Scaleform::Ptr<Scaleform::Render::TextLayout> & SetPtr(Scaleform::Pickable<Scaleform::Render::TextLayout>);
	Scaleform::Ptr<Scaleform::Render::TextLayout> & SetPtr(Scaleform::Render::TextLayout &);
	Scaleform::Ptr<Scaleform::Render::TextLayout> & SetPtr(Scaleform::Render::TextLayout *);
	Scaleform::Ptr<Scaleform::Render::TextLayout> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TextLayout> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TextLayout * & GetRawRef();
	Scaleform::Render::TextLayout * GetPtr();
	Scaleform::Render::TextLayout & operator*();
	Scaleform::Render::TextLayout * operator->();
	Scaleform::Render::TextLayout * operator class Scaleform::Render::TextLayout *();
	Scaleform::Ptr<Scaleform::Render::TextLayout> & Pick(Scaleform::Render::TextLayout *);
	Scaleform::Ptr<Scaleform::Render::TextLayout> & Pick(Scaleform::Pickable<Scaleform::Render::TextLayout>);
	Scaleform::Ptr<Scaleform::Render::TextLayout> & Pick(Scaleform::Ptr<Scaleform::Render::TextLayout> &);
};
struct Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::TreeText::NodeData>
{
	const Scaleform::Render::TreeText::NodeData * pC; // 0x0
	NonlocalCloneArg<Scaleform::Render::TreeText::NodeData>(const Scaleform::Render::TreeText::NodeData &);
	const Scaleform::Render::TreeText::NodeData * operator->();
};
struct Scaleform::Render::TreeText::Filter
{
	unsigned long Type; // 0x0
	Scaleform::Render::TreeText::Filter::<unnamed-tag>::<unnamed-type-Blur> Blur; // 0x4
	Scaleform::Render::TreeText::Filter::<unnamed-tag>::<unnamed-type-Glow> Glow; // 0x4
	Scaleform::Render::TreeText::Filter::<unnamed-tag>::<unnamed-type-DropShadow> DropShadow; // 0x4
	Filter(Scaleform::Render::TreeText::FilterType);
	Filter();
	void SetFilterType(Scaleform::Render::TreeText::FilterType);
	void InitByDefaultValues();
	void SetKnockOut();
	void ClearKnockOut();
	void SetHideObject();
	void ClearHideObject();
};
struct Scaleform::Render::TreeText::Filter::<unnamed-tag>::<unnamed-type-Blur>
{
	float BlurX; // 0x0
	float BlurY; // 0x4
	float Strength; // 0x8
};
struct Scaleform::Render::TreeText::Filter::<unnamed-tag>::<unnamed-type-Glow>
{
	float BlurX; // 0x0
	float BlurY; // 0x4
	float Strength; // 0x8
	unsigned long Color; // 0xC
	unsigned char Flags; // 0x10
};
struct Scaleform::Render::TreeText::Filter::<unnamed-tag>::<unnamed-type-DropShadow>
{
	float BlurX; // 0x0
	float BlurY; // 0x4
	float Strength; // 0x8
	unsigned long Color; // 0xC
	unsigned char Flags; // 0x10
	float Angle; // 0x14
	float Distance; // 0x18
};