#pragma once

struct Scaleform::GFx::Text::StyleKey
{
	enum KeyType
	{
		CSS_Tag = 0,
		CSS_Class = 1,
		CSS_None = 2,
	};
	Scaleform::Render::Text::StyleManagerBase::KeyType Type; // 0x0
	Scaleform::StringLH Value; // 0x8
	unsigned long long HashValue; // 0x10
	StyleKey(Scaleform::GFx::Text::StyleKey &);
	StyleKey(const Scaleform::GFx::Text::StyleKey &);
	StyleKey(Scaleform::Render::Text::StyleManagerBase::KeyType, const Scaleform::String &);
	StyleKey();
	void Set(Scaleform::Render::Text::StyleManagerBase::KeyType, const Scaleform::String &);
	~StyleKey();
	Scaleform::GFx::Text::StyleKey & operator=(Scaleform::GFx::Text::StyleKey &);
	Scaleform::GFx::Text::StyleKey & operator=(const Scaleform::GFx::Text::StyleKey &);
};
class Scaleform::HashUncachedLH<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>,325> :
	Scaleform::HashLH<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>,325,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >,Scaleform::HashNode<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey> >::NodeHashF> >
{
	class SelfType;
	class BaseType;
public:
	HashUncachedLH<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>,325>(const Scaleform::HashUncachedLH<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>,325> &);
	HashUncachedLH<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>,325>(long);
	HashUncachedLH<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>,325>();
	~HashUncachedLH<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>,325>();
	void operator=(const Scaleform::HashUncachedLH<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>,325> &);
};
class Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>
{
	struct ValueType;
public:
	unsigned long long operator()(const Scaleform::GFx::Text::StyleKey &);
	static unsigned long long GetCachedHash(const Scaleform::GFx::Text::StyleKey &);
	static void SetCachedHash(Scaleform::GFx::Text::StyleKey &, unsigned long long);
	static const Scaleform::GFx::Text::StyleKey & GetValue(const Scaleform::GFx::Text::StyleKey &);
	static Scaleform::GFx::Text::StyleKey & GetValue(Scaleform::GFx::Text::StyleKey &);
};
class Scaleform::GFx::Text::StyleManager :
	Scaleform::Render::Text::StyleManagerBase
{
	enum States
	{
		Ready = 0,
		Loading = 1,
		LoadingFinished = 2,
		Error = 3,
	};
public:
	StyleManager(const Scaleform::GFx::Text::StyleManager &);
	StyleManager();
	virtual ~StyleManager();
	bool ParseCSS(const wchar_t *, unsigned long long);
	bool ParseCSS(const char *, unsigned long long);
	const Scaleform::HashUncachedLH<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>,325> & GetStyles();
	virtual const Scaleform::Render::Text::Style * GetStyle(Scaleform::Render::Text::StyleManagerBase::KeyType, const wchar_t *, unsigned long long);
	virtual const Scaleform::Render::Text::Style * GetStyle(Scaleform::Render::Text::StyleManagerBase::KeyType, const char *, unsigned long long);
	virtual const Scaleform::Render::Text::Style * GetStyle(Scaleform::Render::Text::StyleManagerBase::KeyType, const Scaleform::String &);
	void AddStyle(const Scaleform::GFx::Text::StyleKey &, Scaleform::Render::Text::Style *);
	void ClearStyles();
	void ClearStyle(Scaleform::Render::Text::StyleManagerBase::KeyType, const char *, unsigned long long);
	void ClearStyle(Scaleform::Render::Text::StyleManagerBase::KeyType, const Scaleform::String &);
	const Scaleform::GFx::Text::StyleKey & GetTempStyleKey(Scaleform::Render::Text::StyleManagerBase::KeyType, const Scaleform::String &);
	bool IsReady();
	bool IsLoading();
	bool IsLoadingFinished();
	bool IsError();
	void SetState(Scaleform::GFx::Text::StyleManager::States);
	void SetReady();
private:
	Scaleform::HashUncachedLH<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>,325> Styles; // 0x8
	Scaleform::GFx::Text::StyleKey TempKey; // 0x10
	Scaleform::GFx::Text::StyleManager::States State; // 0x28
public:
	Scaleform::GFx::Text::StyleManager & operator=(const Scaleform::GFx::Text::StyleManager &);
};