#pragma once

class extension::gfxi_detail::RefleshableTextNode :
	extension::BiLinkable<extension::gfxi_detail::RefleshableTextNode>
{
public:
	RefleshableTextNode();
	~RefleshableTextNode();
};
class extension::BiLinkable<extension::gfxi_detail::RefleshableTextNode>
{
private:
	extension::BiLinkable<extension::gfxi_detail::RefleshableTextNode> * m_Prev; // 0x0
	extension::BiLinkable<extension::gfxi_detail::RefleshableTextNode> * m_Next; // 0x8
	BiLinkable<extension::gfxi_detail::RefleshableTextNode>(extension::BiLinkable<extension::gfxi_detail::RefleshableTextNode> &);
public:
	BiLinkable<extension::gfxi_detail::RefleshableTextNode>();
protected:
	~BiLinkable<extension::gfxi_detail::RefleshableTextNode>();
public:
	static extension::gfxi_detail::RefleshableTextNode * Prev(const extension::BiLinkable<extension::gfxi_detail::RefleshableTextNode> *);
	static extension::gfxi_detail::RefleshableTextNode * Next(const extension::BiLinkable<extension::gfxi_detail::RefleshableTextNode> *);
	static void Link(extension::BiLinkable<extension::gfxi_detail::RefleshableTextNode> *, extension::BiLinkable<extension::gfxi_detail::RefleshableTextNode> *);
	static void Isolate(extension::BiLinkable<extension::gfxi_detail::RefleshableTextNode> *);
	static bool IsIsolated(extension::BiLinkable<extension::gfxi_detail::RefleshableTextNode> *);
private:
	extension::BiLinkable<extension::gfxi_detail::RefleshableTextNode> & operator=(extension::BiLinkable<extension::gfxi_detail::RefleshableTextNode> &);
};
class extension::GFXIText
{
	enum HAlignment
	{
		HAlign_Left = 0,
		HAlign_Center = 1,
		HAlign_Right = 2,
	};
	enum VAlignment
	{
		VAlign_Top = 0,
		VAlign_Center = 1,
		VAlign_Bottom = 2,
	};
	struct FilterParams;
public:
	GFXIText(const extension::GFXIText &);
	GFXIText();
	~GFXIText();
	extension::GFXIText & operator=(const extension::GFXIText &);
	bool isVisible();
	float recommendWidth();
	Scaleform::Render::Point<float> position();
	Scaleform::Render::Size<float> size();
	Scaleform::Render::Point<float> pivot();
	extension::GFXIText::HAlignment hAlign();
	extension::GFXIText::VAlignment vAlign();
	bool isEmpty();
	const char * str();
	const char * htmlStr();
	unsigned long color();
	unsigned long bgColor();
	const extension::GFXIText::FilterParams & filterParams();
	const char * fontName();
	float fontSize();
	float lineSpacing();
	bool isDefaultLineSpacing();
	bool isLineSpaceChanging(float);
	void setVisible(bool);
	void setRecommendWidth(float);
	void setPosition(float, float);
	void setPosition(const Scaleform::Render::Point<float> &);
	void setX(float);
	void setY(float);
	void setPivot(float, float);
	void setPivot(const Scaleform::Render::Point<float> &);
	void setAlign(extension::GFXIText::HAlignment, extension::GFXIText::VAlignment);
	void setHAlign(extension::GFXIText::HAlignment);
	void setVAlign(extension::GFXIText::VAlignment);
	void setColor(unsigned long);
	void setBgColor(unsigned long);
	void setFilterParams(const extension::GFXIText::FilterParams &);
	void setStr(const wchar_t *);
	void setStr(const char *);
	void setStr(const Scaleform::String &);
	void setHtmlStr(const wchar_t *);
	void setHtmlStr(const char *);
	void setHtmlStr(const Scaleform::String &);
	void setFontName(const char *);
	void setFontSize(float);
	void setLineSpacing(float);
	void setIsRefleshable(bool);
	class TextProxy;
private:
	extension::gfxi_detail::TextProxy & cloneIfShared();
	extension::RefCountablePtr<extension::gfxi_detail::TextProxy> m_body; // 0x0
};
struct extension::GFXIText::FilterParams
{
	float BlurStrength; // 0x0
	float BlurX; // 0x4
	float BlurY; // 0x8
	float ShadowStrength; // 0xC
	float ShadowBlurX; // 0x10
	float ShadowBlurY; // 0x14
	unsigned long ShadowColor; // 0x18
	float ShadowAngle; // 0x1C
	float ShadowDistance; // 0x20
	FilterParams();
	bool operator==(const extension::GFXIText::FilterParams &);
	bool operator!=(const extension::GFXIText::FilterParams &);
};
void extension::GFXIText::setPosition(float x, float y); // 0x1400C3310
void extension::GFXIText::setStr(const char * utf8); // 0x1400C0650
class extension::RefCountablePtr<extension::gfxi_detail::TextProxy>
{
private:
	extension::gfxi_detail::TextProxy * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::gfxi_detail::TextProxy>(const extension::RefCountablePtr<extension::gfxi_detail::TextProxy> &);
	RefCountablePtr<extension::gfxi_detail::TextProxy>(extension::gfxi_detail::TextProxy *, bool);
	RefCountablePtr<extension::gfxi_detail::TextProxy>(extension::gfxi_detail::TextProxy *);
	RefCountablePtr<extension::gfxi_detail::TextProxy>();
	~RefCountablePtr<extension::gfxi_detail::TextProxy>();
	void swap(extension::RefCountablePtr<extension::gfxi_detail::TextProxy> &);
	extension::RefCountablePtr<extension::gfxi_detail::TextProxy> & operator=(const extension::RefCountablePtr<extension::gfxi_detail::TextProxy> &);
	void reset(extension::gfxi_detail::TextProxy *);
	void resetWithAddRef(extension::gfxi_detail::TextProxy *);
	extension::gfxi_detail::TextProxy * get();
	extension::gfxi_detail::TextProxy & operator*();
	extension::gfxi_detail::TextProxy * operator->();
	bool isNull();
};