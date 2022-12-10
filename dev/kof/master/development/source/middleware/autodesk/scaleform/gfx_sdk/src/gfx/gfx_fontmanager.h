#pragma once

class Scaleform::GFx::FontHandle :
	Scaleform::Render::Text::FontHandle
{
public:
	Scaleform::Ptr<Scaleform::GFx::MovieDef> pSourceMovieDef; // 0x38
	FontHandle(const Scaleform::GFx::FontHandle &);
	FontHandle(Scaleform::Render::Text::FontManagerBase *, Scaleform::Render::Font *, const char *, unsigned long, Scaleform::GFx::MovieDef *);
	virtual ~FontHandle();
	bool operator==(const Scaleform::GFx::FontHandle &);
	Scaleform::GFx::FontHandle & operator=(const Scaleform::GFx::FontHandle &);
};
class Scaleform::Ptr<Scaleform::GFx::MovieDef>
{
protected:
	Scaleform::GFx::MovieDef * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::MovieDef>(const Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
	Ptr<Scaleform::GFx::MovieDef>(Scaleform::GFx::MovieDef *);
	Ptr<Scaleform::GFx::MovieDef>(Scaleform::Ptr<Scaleform::GFx::MovieDef> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::MovieDef>(Scaleform::Pickable<Scaleform::GFx::MovieDef>);
	Ptr<Scaleform::GFx::MovieDef>(Scaleform::GFx::MovieDef &);
	Ptr<Scaleform::GFx::MovieDef>();
	~Ptr<Scaleform::GFx::MovieDef>();
	bool operator==(Scaleform::GFx::MovieDef *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
	bool operator!=(Scaleform::GFx::MovieDef *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & operator=(Scaleform::Pickable<Scaleform::GFx::MovieDef>);
	const Scaleform::Ptr<Scaleform::GFx::MovieDef> & operator=(Scaleform::GFx::MovieDef &);
	const Scaleform::Ptr<Scaleform::GFx::MovieDef> & operator=(Scaleform::GFx::MovieDef *);
	const Scaleform::Ptr<Scaleform::GFx::MovieDef> & operator=(const Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & SetPtr(Scaleform::Pickable<Scaleform::GFx::MovieDef>);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & SetPtr(Scaleform::GFx::MovieDef &);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & SetPtr(Scaleform::GFx::MovieDef *);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::MovieDef * & GetRawRef();
	Scaleform::GFx::MovieDef * GetPtr();
	Scaleform::GFx::MovieDef & operator*();
	Scaleform::GFx::MovieDef * operator->();
	Scaleform::GFx::MovieDef * operator class Scaleform::GFx::MovieDef *();
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & Pick(Scaleform::GFx::MovieDef *);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & Pick(Scaleform::Pickable<Scaleform::GFx::MovieDef>);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & Pick(Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
};
Scaleform::GFx::FontHandle::FontHandle(Scaleform::Render::Text::FontManagerBase * pmanager, Scaleform::Render::Font * pfont, const char * pfontName, unsigned long overridenFontFlags, Scaleform::GFx::MovieDef * pdefImpl); // 0x140360C90
Scaleform::GFx::FontHandle::FontHandle(const Scaleform::GFx::FontHandle & f); // 0x140360C40
class Scaleform::GFx::FontManagerStates :
	Scaleform::RefCountBaseNTS<Scaleform::GFx::FontManagerStates,327>,
	Scaleform::GFx::StateBag
{
public:
	FontManagerStates(Scaleform::GFx::FontManagerStates &);
	FontManagerStates(const Scaleform::GFx::FontManagerStates &);
	FontManagerStates(Scaleform::GFx::StateBag *);
	virtual Scaleform::GFx::StateBag * GetStateBagImpl();
	virtual Scaleform::GFx::State * GetStateAddRef(Scaleform::GFx::State::StateType);
	unsigned char CheckStateChange(Scaleform::GFx::FontLib *, Scaleform::GFx::FontMap *, Scaleform::GFx::FontProvider *, Scaleform::GFx::Translator *);
	Scaleform::Ptr<Scaleform::GFx::FontLib> pFontLib; // 0x18
	Scaleform::Ptr<Scaleform::GFx::FontMap> pFontMap; // 0x20
	Scaleform::Ptr<Scaleform::GFx::FontProvider> pFontProvider; // 0x28
	Scaleform::Ptr<Scaleform::GFx::Translator> pTranslator; // 0x30
private:
	Scaleform::GFx::StateBag * pDelegate; // 0x38
public:
	virtual ~FontManagerStates();
	Scaleform::GFx::FontManagerStates & operator=(Scaleform::GFx::FontManagerStates &);
	Scaleform::GFx::FontManagerStates & operator=(const Scaleform::GFx::FontManagerStates &);
};
class Scaleform::RefCountBaseNTS<Scaleform::GFx::FontManagerStates,327> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,327>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 327,
	};
public:
	RefCountBaseNTS<Scaleform::GFx::FontManagerStates,327>(Scaleform::RefCountBaseNTS<Scaleform::GFx::FontManagerStates,327> &);
	RefCountBaseNTS<Scaleform::GFx::FontManagerStates,327>(const Scaleform::RefCountBaseNTS<Scaleform::GFx::FontManagerStates,327> &);
	RefCountBaseNTS<Scaleform::GFx::FontManagerStates,327>();
	virtual ~RefCountBaseNTS<Scaleform::GFx::FontManagerStates,327>();
	Scaleform::RefCountBaseNTS<Scaleform::GFx::FontManagerStates,327> & operator=(Scaleform::RefCountBaseNTS<Scaleform::GFx::FontManagerStates,327> &);
	Scaleform::RefCountBaseNTS<Scaleform::GFx::FontManagerStates,327> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::GFx::FontManagerStates,327> &);
};
Scaleform::Render::Image * Scaleform::Render::ImageDelegate::GetAsImage(); // 0x140488880
class Scaleform::GFx::FontManager :
	Scaleform::Render::Text::FontManagerBase
{
	struct FontKey;
	struct NodePtr;
	struct NodePtrHashOp;
	class FontSet;
protected:
	Scaleform::HashSetLH<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > CreatedFonts; // 0x10
	Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy> FontMovies; // 0x18
	Scaleform::GFx::MovieDefImpl * pDefImpl; // 0x30
	Scaleform::GFx::ResourceWeakLib * pWeakLib; // 0x38
	Scaleform::GFx::FontManagerStates * pState; // 0x40
	Scaleform::Ptr<Scaleform::GFx::FontHandle> pEmptyFont; // 0x48
	Scaleform::GFx::FontMap::MapEntry FontMapEntry; // 0x50
	Scaleform::GFx::MovieImpl * pMovie; // 0x60
	Scaleform::Ptr<Scaleform::GFx::FontHandle> pIMECandidateFont; // 0x68
	Scaleform::GFx::FontHandle * FindOrCreateHandle(const char *, unsigned long, Scaleform::GFx::FontResource * *, Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo *);
	Scaleform::GFx::FontHandle * CreateFontHandleFromName(const char *, unsigned long, Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo *);
private:
	void commonInit();
public:
	FontManager(const Scaleform::GFx::FontManager &);
	FontManager(Scaleform::GFx::ResourceWeakLib *, Scaleform::GFx::FontManagerStates *);
	FontManager(Scaleform::GFx::MovieImpl *, Scaleform::GFx::MovieDefImpl *, Scaleform::GFx::FontManagerStates *);
	virtual ~FontManager();
	virtual Scaleform::GFx::FontHandle * CreateFontHandle(const char *, unsigned long, bool, Scaleform::Render::Text::FontManagerBase::FontSearchPathInfo *);
	void RemoveFontHandle(Scaleform::GFx::FontHandle *);
	virtual Scaleform::GFx::FontHandle * GetEmptyFont();
	virtual void CleanCache();
	void CleanCacheFor(Scaleform::GFx::MovieDefImpl *);
	void SetIMECandidateFont(Scaleform::GFx::FontHandle *);
	Scaleform::GFx::MovieDefImpl * GetDefImpl();
	Scaleform::GFx::FontManager & operator=(const Scaleform::GFx::FontManager &);
};
struct Scaleform::GFx::FontManager::FontKey
{
	const char * pFontName; // 0x0
	unsigned long FontStyle; // 0x8
	FontKey(const char *, unsigned long);
	FontKey();
	static unsigned long long CalcHashCode(const char *, unsigned long long, unsigned long);
};
struct Scaleform::GFx::FontManager::NodePtr
{
	Scaleform::GFx::FontHandle * pNode; // 0x0
	bool SearchedForNonDeviceFont; // 0x8
	NodePtr(Scaleform::GFx::FontHandle *);
	NodePtr();
	bool operator==(const Scaleform::GFx::FontManager::FontKey &);
	bool operator==(const Scaleform::GFx::FontManager::NodePtr &);
};
bool Scaleform::GFx::FontManager::NodePtr::operator==(const Scaleform::GFx::FontManager::NodePtr & other); // 0x140360FD0
enum Scaleform::GFx::FontManager::NodePtr::==::__l4::<unnamed-enum-FontFlagsMask>
{
	FontFlagsMask = 787,
};
struct Scaleform::GFx::FontManager::NodePtrHashOp
{
	unsigned long long operator()(const Scaleform::GFx::FontManager::FontKey &);
	unsigned long long operator()(const Scaleform::GFx::FontHandle *);
	unsigned long long operator()(const Scaleform::GFx::FontManager::NodePtr &);
};
class Scaleform::HashSetLH<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > :
	Scaleform::HashSet<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::AllocatorLH<Scaleform::GFx::FontManager::NodePtr,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >
{
	class SelfType;
	class BaseType;
	struct ValueType;
public:
	HashSetLH<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >(const Scaleform::HashSetLH<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > &);
	HashSetLH<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >(long);
	HashSetLH<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >();
	~HashSetLH<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> >();
	void operator=(const Scaleform::HashSetLH<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp,Scaleform::GFx::FontManager::NodePtrHashOp,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontManager::NodePtr,Scaleform::GFx::FontManager::NodePtrHashOp> > &);
};
class Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::Ptr<Scaleform::GFx::MovieDataDef>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Ptr<Scaleform::GFx::MovieDataDef>
{
protected:
	Scaleform::GFx::MovieDataDef * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::MovieDataDef>(const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> &);
	Ptr<Scaleform::GFx::MovieDataDef>(Scaleform::GFx::MovieDataDef *);
	Ptr<Scaleform::GFx::MovieDataDef>(Scaleform::Ptr<Scaleform::GFx::MovieDataDef> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::MovieDataDef>(Scaleform::Pickable<Scaleform::GFx::MovieDataDef>);
	Ptr<Scaleform::GFx::MovieDataDef>(Scaleform::GFx::MovieDataDef &);
	Ptr<Scaleform::GFx::MovieDataDef>();
	~Ptr<Scaleform::GFx::MovieDataDef>();
	bool operator==(Scaleform::GFx::MovieDataDef *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> &);
	bool operator!=(Scaleform::GFx::MovieDataDef *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> &);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & operator=(Scaleform::Pickable<Scaleform::GFx::MovieDataDef>);
	const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & operator=(Scaleform::GFx::MovieDataDef &);
	const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & operator=(Scaleform::GFx::MovieDataDef *);
	const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & operator=(const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> &);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & SetPtr(Scaleform::Pickable<Scaleform::GFx::MovieDataDef>);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & SetPtr(Scaleform::GFx::MovieDataDef &);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & SetPtr(Scaleform::GFx::MovieDataDef *);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::MovieDataDef> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::MovieDataDef * & GetRawRef();
	Scaleform::GFx::MovieDataDef * GetPtr();
	Scaleform::GFx::MovieDataDef & operator*();
	Scaleform::GFx::MovieDataDef * operator->();
	Scaleform::GFx::MovieDataDef * operator class Scaleform::GFx::MovieDataDef *();
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & Pick(Scaleform::GFx::MovieDataDef *);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & Pick(Scaleform::Pickable<Scaleform::GFx::MovieDataDef>);
	Scaleform::Ptr<Scaleform::GFx::MovieDataDef> & Pick(Scaleform::Ptr<Scaleform::GFx::MovieDataDef> &);
};
class Scaleform::Ptr<Scaleform::GFx::FontHandle>
{
protected:
	Scaleform::GFx::FontHandle * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::FontHandle>(const Scaleform::Ptr<Scaleform::GFx::FontHandle> &);
	Ptr<Scaleform::GFx::FontHandle>(Scaleform::GFx::FontHandle *);
	Ptr<Scaleform::GFx::FontHandle>(Scaleform::Ptr<Scaleform::GFx::FontHandle> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::FontHandle>(Scaleform::Pickable<Scaleform::GFx::FontHandle>);
	Ptr<Scaleform::GFx::FontHandle>(Scaleform::GFx::FontHandle &);
	Ptr<Scaleform::GFx::FontHandle>();
	~Ptr<Scaleform::GFx::FontHandle>();
	bool operator==(Scaleform::GFx::FontHandle *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::FontHandle> &);
	bool operator!=(Scaleform::GFx::FontHandle *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::FontHandle> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::FontHandle> &);
	Scaleform::Ptr<Scaleform::GFx::FontHandle> & operator=(Scaleform::Pickable<Scaleform::GFx::FontHandle>);
	const Scaleform::Ptr<Scaleform::GFx::FontHandle> & operator=(Scaleform::GFx::FontHandle &);
	const Scaleform::Ptr<Scaleform::GFx::FontHandle> & operator=(Scaleform::GFx::FontHandle *);
	const Scaleform::Ptr<Scaleform::GFx::FontHandle> & operator=(const Scaleform::Ptr<Scaleform::GFx::FontHandle> &);
	Scaleform::Ptr<Scaleform::GFx::FontHandle> & SetPtr(Scaleform::Pickable<Scaleform::GFx::FontHandle>);
	Scaleform::Ptr<Scaleform::GFx::FontHandle> & SetPtr(Scaleform::GFx::FontHandle &);
	Scaleform::Ptr<Scaleform::GFx::FontHandle> & SetPtr(Scaleform::GFx::FontHandle *);
	Scaleform::Ptr<Scaleform::GFx::FontHandle> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::FontHandle> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::FontHandle * & GetRawRef();
	Scaleform::GFx::FontHandle * GetPtr();
	Scaleform::GFx::FontHandle & operator*();
	Scaleform::GFx::FontHandle * operator->();
	Scaleform::GFx::FontHandle * operator class Scaleform::GFx::FontHandle *();
	Scaleform::Ptr<Scaleform::GFx::FontHandle> & Pick(Scaleform::GFx::FontHandle *);
	Scaleform::Ptr<Scaleform::GFx::FontHandle> & Pick(Scaleform::Pickable<Scaleform::GFx::FontHandle>);
	Scaleform::Ptr<Scaleform::GFx::FontHandle> & Pick(Scaleform::Ptr<Scaleform::GFx::FontHandle> &);
};
Scaleform::GFx::FontHandle::~FontHandle(); // 0x14035E140