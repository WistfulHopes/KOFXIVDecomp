#pragma once

class Scaleform::GFx::FontLib :
	Scaleform::GFx::State
{
private:
	Scaleform::GFx::FontLibImpl * pImpl; // 0x18
public:
	FontLib(const Scaleform::GFx::FontLib &);
	FontLib();
	virtual ~FontLib();
	void AddFontsFrom(Scaleform::GFx::MovieDef *, bool);
	class FontResult;
	bool FindFont(Scaleform::GFx::FontLib::FontResult *, const char *, unsigned long, Scaleform::GFx::MovieDef *, Scaleform::GFx::StateBag *, Scaleform::GFx::ResourceWeakLib *);
	bool AreAllMoviesLoaded();
	void LoadFontNames(Scaleform::StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> > &);
	void LoadFonts(Scaleform::HashSet<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > > &);
	Scaleform::GFx::FontLib & operator=(const Scaleform::GFx::FontLib &);
};
class Scaleform::GFx::FontLib::FontResult
{
private:
	Scaleform::GFx::MovieDef * pMovieDef; // 0x0
	Scaleform::GFx::FontResource * pFontResource; // 0x8
	void SetResult(Scaleform::GFx::MovieDef *, Scaleform::GFx::FontResource *);
public:
	FontResult();
	~FontResult();
	Scaleform::GFx::MovieDef * GetMovieDef();
	Scaleform::GFx::FontResource * GetFontResource();
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
class Scaleform::HashSet<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > > :
	Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > >
{
	class BaseType;
	class SelfType;
	class ValueType;
public:
	HashSet<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scalefor(const Scaleform::HashSet<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > > &);
	HashSet<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scalefor(void *, long);
	HashSet<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scalefor(void *);
	HashSet<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scalefor(long);
	HashSet<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scalefor();
	~HashSet<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scalefo();
	void operator=(const Scaleform::HashSet<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> >,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Font>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::Font>,Scaleform::FixedSizeHash<Scaleform::Ptr<Scaleform::Render::Font> > > > &);
	void CheckExpand();
	void Resize(unsigned long long);
	void SetCapacity(unsigned long long);
};
class Scaleform::GFx::DefaultFontLibNameState :
	Scaleform::GFx::State
{
private:
	Scaleform::StringLH Name; // 0x18
public:
	DefaultFontLibNameState(const Scaleform::GFx::DefaultFontLibNameState &);
	DefaultFontLibNameState();
	virtual ~DefaultFontLibNameState();
	void SetName(const char *);
	const Scaleform::StringLH & GetName();
	Scaleform::GFx::DefaultFontLibNameState & operator=(const Scaleform::GFx::DefaultFontLibNameState &);
};