#pragma once

class extension::gfxi_detail::CustomFontProvider :
	Scaleform::GFx::FontProvider
{
public:
	CustomFontProvider();
private:
	CustomFontProvider(extension::gfxi_detail::CustomFontProvider &);
	extension::gfxi_detail::CustomFontProvider & operator=(extension::gfxi_detail::CustomFontProvider &);
public:
	virtual ~CustomFontProvider();
	Scaleform::Render::Font * CreateFont(const char *, unsigned long) = 0;
	void LoadFontNames(Scaleform::StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> > &) = 0;
	bool PrepareFontForApplicationLanguage(const char *, long);
	static Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> Create();
};
extension::gfxi_detail::CustomFontProvider::~CustomFontProvider(); // 0x1402711C0
class Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider>
{
protected:
	extension::gfxi_detail::CustomFontProvider * pObject; // 0x0
public:
	Ptr<extension::gfxi_detail::CustomFontProvider>(const Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> &);
	Ptr<extension::gfxi_detail::CustomFontProvider>(extension::gfxi_detail::CustomFontProvider *);
	Ptr<extension::gfxi_detail::CustomFontProvider>(Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> &, Scaleform::PickType);
	Ptr<extension::gfxi_detail::CustomFontProvider>(Scaleform::Pickable<extension::gfxi_detail::CustomFontProvider>);
	Ptr<extension::gfxi_detail::CustomFontProvider>(extension::gfxi_detail::CustomFontProvider &);
	Ptr<extension::gfxi_detail::CustomFontProvider>();
	~Ptr<extension::gfxi_detail::CustomFontProvider>();
	bool operator==(extension::gfxi_detail::CustomFontProvider *);
	bool operator==(const Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> &);
	bool operator!=(extension::gfxi_detail::CustomFontProvider *);
	bool operator!=(const Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> &);
	bool operator<(const Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> &);
	Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & operator=(Scaleform::Pickable<extension::gfxi_detail::CustomFontProvider>);
	const Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & operator=(extension::gfxi_detail::CustomFontProvider &);
	const Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & operator=(extension::gfxi_detail::CustomFontProvider *);
	const Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & operator=(const Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> &);
	Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & SetPtr(Scaleform::Pickable<extension::gfxi_detail::CustomFontProvider>);
	Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & SetPtr(extension::gfxi_detail::CustomFontProvider &);
	Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & SetPtr(extension::gfxi_detail::CustomFontProvider *);
	Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & SetPtr(const Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> &);
	void NullWithoutRelease();
	void Clear();
	extension::gfxi_detail::CustomFontProvider * & GetRawRef();
	extension::gfxi_detail::CustomFontProvider * GetPtr();
	extension::gfxi_detail::CustomFontProvider & operator*();
	extension::gfxi_detail::CustomFontProvider * operator->();
	extension::gfxi_detail::CustomFontProvider * operator class extension::gfxi_detail::CustomFontProvider *();
	Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & Pick(extension::gfxi_detail::CustomFontProvider *);
	Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & Pick(Scaleform::Pickable<extension::gfxi_detail::CustomFontProvider>);
	Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> & Pick(Scaleform::Ptr<extension::gfxi_detail::CustomFontProvider> &);
};