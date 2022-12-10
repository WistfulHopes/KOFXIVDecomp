#pragma once

class Scaleform::RefCountBase<Scaleform::Render::Text::FontHandle,74> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,74>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 74,
	};
public:
	RefCountBase<Scaleform::Render::Text::FontHandle,74>(Scaleform::RefCountBase<Scaleform::Render::Text::FontHandle,74> &);
	RefCountBase<Scaleform::Render::Text::FontHandle,74>(const Scaleform::RefCountBase<Scaleform::Render::Text::FontHandle,74> &);
	RefCountBase<Scaleform::Render::Text::FontHandle,74>();
	virtual ~RefCountBase<Scaleform::Render::Text::FontHandle,74>();
	Scaleform::RefCountBase<Scaleform::Render::Text::FontHandle,74> & operator=(Scaleform::RefCountBase<Scaleform::Render::Text::FontHandle,74> &);
	Scaleform::RefCountBase<Scaleform::Render::Text::FontHandle,74> & operator=(const Scaleform::RefCountBase<Scaleform::Render::Text::FontHandle,74> &);
};
class Scaleform::Render::Text::FontHandle :
	Scaleform::RefCountBase<Scaleform::Render::Text::FontHandle,74>
{
protected:
	Scaleform::Render::Text::FontManagerBase * pFontManager; // 0x10
	unsigned long OverridenFontFlags; // 0x18
	Scaleform::StringLH FontName; // 0x20
	float FontScaleFactor; // 0x28
	Scaleform::Ptr<Scaleform::Render::Font> pFont; // 0x30
	enum FontFlags
	{
		FF_Italic = 1,
		FF_Bold = 2,
		FF_BoldItalic = 3,
		FF_Style_Mask = 3,
		FF_NoAutoFit = 32,
	};
public:
	FontHandle(const Scaleform::Render::Text::FontHandle &);
	FontHandle(Scaleform::Render::Text::FontManagerBase *, Scaleform::Render::Font *, const char *, unsigned long);
	virtual ~FontHandle();
	Scaleform::Render::Font * GetFont();
	const char * GetFontName();
	unsigned long GetFontFlags();
	bool IsFauxBold();
	bool IsFauxItalic();
	bool IsFauxBoldItalic();
	unsigned long GetFauxFontStyle();
	unsigned long GetFontStyle();
	bool IsAutoFitDisabled();
	float GetFontScaleFactor();
	bool operator==(const Scaleform::Render::Text::FontHandle &);
	Scaleform::Render::Text::FontHandle & operator=(const Scaleform::Render::Text::FontHandle &);
};
class Scaleform::Ptr<Scaleform::Render::Font>
{
protected:
	Scaleform::Render::Font * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Font>(const Scaleform::Ptr<Scaleform::Render::Font> &);
	Ptr<Scaleform::Render::Font>(Scaleform::Render::Font *);
	Ptr<Scaleform::Render::Font>(Scaleform::Ptr<Scaleform::Render::Font> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Font>(Scaleform::Pickable<Scaleform::Render::Font>);
	Ptr<Scaleform::Render::Font>(Scaleform::Render::Font &);
	Ptr<Scaleform::Render::Font>();
	~Ptr<Scaleform::Render::Font>();
	bool operator==(Scaleform::Render::Font *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Font> &);
	bool operator!=(Scaleform::Render::Font *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Font> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Font> &);
	Scaleform::Ptr<Scaleform::Render::Font> & operator=(Scaleform::Pickable<Scaleform::Render::Font>);
	const Scaleform::Ptr<Scaleform::Render::Font> & operator=(Scaleform::Render::Font &);
	const Scaleform::Ptr<Scaleform::Render::Font> & operator=(Scaleform::Render::Font *);
	const Scaleform::Ptr<Scaleform::Render::Font> & operator=(const Scaleform::Ptr<Scaleform::Render::Font> &);
	Scaleform::Ptr<Scaleform::Render::Font> & SetPtr(Scaleform::Pickable<Scaleform::Render::Font>);
	Scaleform::Ptr<Scaleform::Render::Font> & SetPtr(Scaleform::Render::Font &);
	Scaleform::Ptr<Scaleform::Render::Font> & SetPtr(Scaleform::Render::Font *);
	Scaleform::Ptr<Scaleform::Render::Font> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Font> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Font * & GetRawRef();
	Scaleform::Render::Font * GetPtr();
	Scaleform::Render::Font & operator*();
	Scaleform::Render::Font * operator->();
	Scaleform::Render::Font * operator class Scaleform::Render::Font *();
	Scaleform::Ptr<Scaleform::Render::Font> & Pick(Scaleform::Render::Font *);
	Scaleform::Ptr<Scaleform::Render::Font> & Pick(Scaleform::Pickable<Scaleform::Render::Font>);
	Scaleform::Ptr<Scaleform::Render::Font> & Pick(Scaleform::Ptr<Scaleform::Render::Font> &);
};
Scaleform::Render::Text::FontHandle::FontHandle(Scaleform::Render::Text::FontManagerBase * pmanager, Scaleform::Render::Font * pfont, const char * pfontName, unsigned long overridenFontFlags); // 0x14035DF00
bool Scaleform::Render::Text::FontHandle::operator==(const Scaleform::Render::Text::FontHandle & f); // 0x1402F6650
class Scaleform::Render::Text::FontManagerBase :
	Scaleform::RefCountBase<Scaleform::Render::Text::FontManagerBase,74>
{
	struct FontSearchPathInfo;
public:
	virtual ~FontManagerBase();
	Scaleform::Render::Text::FontHandle * CreateFontHandle(const char *, bool, bool, bool, bool, Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo *);
	Scaleform::Render::Text::FontHandle * CreateFontHandle(const char *, unsigned long, bool, Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo *);
	Scaleform::Render::Text::FontHandle * GetEmptyFont();
	void CleanCache();
	FontManagerBase(const Scaleform::Render::Text::FontManagerBase &);
	FontManagerBase();
	Scaleform::Render::Text::FontManagerBase & operator=(const Scaleform::Render::Text::FontManagerBase &);
};
class Scaleform::RefCountBase<Scaleform::Render::Text::FontManagerBase,74> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,74>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 74,
	};
public:
	RefCountBase<Scaleform::Render::Text::FontManagerBase,74>(Scaleform::RefCountBase<Scaleform::Render::Text::FontManagerBase,74> &);
	RefCountBase<Scaleform::Render::Text::FontManagerBase,74>(const Scaleform::RefCountBase<Scaleform::Render::Text::FontManagerBase,74> &);
	RefCountBase<Scaleform::Render::Text::FontManagerBase,74>();
	virtual ~RefCountBase<Scaleform::Render::Text::FontManagerBase,74>();
	Scaleform::RefCountBase<Scaleform::Render::Text::FontManagerBase,74> & operator=(Scaleform::RefCountBase<Scaleform::Render::Text::FontManagerBase,74> &);
	Scaleform::RefCountBase<Scaleform::Render::Text::FontManagerBase,74> & operator=(const Scaleform::RefCountBase<Scaleform::Render::Text::FontManagerBase,74> &);
};
struct Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo
{
	FontSearchPathInfo(Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo &);
	FontSearchPathInfo(const Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo &);
	FontSearchPathInfo(long);
	long Indent; // 0x0
	Scaleform::StringBuffer Info; // 0x8
	~FontSearchPathInfo();
	Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo & operator=(Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo &);
	Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo & operator=(const Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo &);
	void __dflt_ctor_closure();
};