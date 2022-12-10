#pragma once

class Scaleform::GFx::ResourceId
{
private:
	unsigned long Id; // 0x0
	enum IdTypeConstants
	{
		IdType_Bit_IndexMask = 65535,
		IdType_Bit_TypeMask = 268369920,
		IdType_Bit_SWF = 0,
		IdType_Bit_Static = 65536,
		IdType_Bit_Export = 131072,
		IdType_Bit_GenMask = 196608,
		IdType_Bit_TypeShift = 18,
		InvalidId = 262144,
	};
	enum IdType
	{
		IdType_None = 0,
		IdType_InternalConstant = 65536,
		IdType_GradientImage = 327680,
		IdType_DynFontImage = 589824,
		IdType_FontImage = 393216,
	};
public:
	ResourceId(const Scaleform::GFx::ResourceId &);
	ResourceId(unsigned long);
	ResourceId();
	Scaleform::GFx::ResourceId operator=(const Scaleform::GFx::ResourceId &);
	bool operator==(unsigned long);
	bool operator==(const Scaleform::GFx::ResourceId &);
	bool operator!=(unsigned long);
	bool operator!=(const Scaleform::GFx::ResourceId &);
	unsigned long GetIdValue();
	unsigned long GetIdIndex();
	Scaleform::GFx::ResourceId::IdType GetIdType();
	unsigned long GenerateIdString(char *, unsigned long long, char);
	Scaleform::GFx::ResourceId GenerateNextId();
	class HashOp;
};
class Scaleform::GFx::ResourceId::HashOp
{
public:
	unsigned long long operator()(const Scaleform::GFx::ResourceId &);
};
class Scaleform::GFx::FileTypeConstants
{
	enum FileFormatType
	{
		File_Unopened = 0,
		File_Unknown = 1,
		File_SWF = 2,
		File_GFX = 3,
		File_JPEG = 10,
		File_PNG = 11,
		File_GIF = 12,
		File_TGA = 13,
		File_DDS = 14,
		File_HDR = 15,
		File_BMP = 16,
		File_DIB = 17,
		File_PFM = 18,
		File_TIFF = 19,
		File_WAVE = 20,
		File_PVR = 21,
		File_ETC = 22,
		File_SIF = 23,
		File_GXT = 24,
		File_GTX = 25,
		File_GNF = 26,
		File_KTX = 27,
		File_NextAvail = 28,
		File_DDSBC = 65533,
		File_MultiFormat = 65534,
		File_Original = 65535,
	};
};
struct Scaleform::GFx::ResourceFileInfo :
	Scaleform::RefCountBaseNTS<Scaleform::GFx::ResourceFileInfo,2>
{
	Scaleform::GFx::FileTypeConstants::FileFormatType Format; // 0x10
	const Scaleform::GFx::ExporterInfo * pExporterInfo; // 0x18
	Scaleform::String FileName; // 0x20
	ResourceFileInfo(Scaleform::GFx::ResourceFileInfo &);
	ResourceFileInfo(const Scaleform::GFx::ResourceFileInfo &);
	ResourceFileInfo();
	unsigned long long GetHashCode();
	virtual ~ResourceFileInfo();
	Scaleform::GFx::ResourceFileInfo & operator=(Scaleform::GFx::ResourceFileInfo &);
	Scaleform::GFx::ResourceFileInfo & operator=(const Scaleform::GFx::ResourceFileInfo &);
};
class Scaleform::RefCountBaseNTS<Scaleform::GFx::ResourceFileInfo,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBaseNTS<Scaleform::GFx::ResourceFileInfo,2>(Scaleform::RefCountBaseNTS<Scaleform::GFx::ResourceFileInfo,2> &);
	RefCountBaseNTS<Scaleform::GFx::ResourceFileInfo,2>(const Scaleform::RefCountBaseNTS<Scaleform::GFx::ResourceFileInfo,2> &);
	RefCountBaseNTS<Scaleform::GFx::ResourceFileInfo,2>();
	virtual ~RefCountBaseNTS<Scaleform::GFx::ResourceFileInfo,2>();
	Scaleform::RefCountBaseNTS<Scaleform::GFx::ResourceFileInfo,2> & operator=(Scaleform::RefCountBaseNTS<Scaleform::GFx::ResourceFileInfo,2> &);
	Scaleform::RefCountBaseNTS<Scaleform::GFx::ResourceFileInfo,2> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::GFx::ResourceFileInfo,2> &);
};
class Scaleform::GFx::ResourceKey
{
	enum KeyType
	{
		Key_None = 0,
		Key_Unique = 1,
		Key_File = 2,
		Key_Gradient = 3,
		Key_SubImage = 4,
	};
	typedef void *KeyHandle;
	class KeyInterface;
protected:
	Scaleform::GFx::ResourceKey::KeyInterface * pKeyInterface; // 0x0
	void * hKeyData; // 0x8
public:
	ResourceKey(const Scaleform::GFx::ResourceKey &);
	ResourceKey(Scaleform::GFx::ResourceKey::KeyInterface *, void *);
	ResourceKey();
	Scaleform::GFx::ResourceKey & operator=(const Scaleform::GFx::ResourceKey &);
	~ResourceKey();
	Scaleform::GFx::ResourceKey::KeyType GetKeyType();
	const char * GetFileURL();
	bool operator==(const Scaleform::GFx::ResourceKey &);
	Scaleform::GFx::ResourceKey::KeyInterface * GetKeyInterface();
	void * GetKeyData();
	class HashOp;
};
class Scaleform::GFx::ResourceKey::KeyInterface
{
public:
	~KeyInterface();
	void AddRef(void *);
	void Release(void *);
	Scaleform::GFx::ResourceKey::KeyType GetKeyType(void *);
	unsigned long long GetHashCode(void *);
	bool KeyEquals(void *, const Scaleform::GFx::ResourceKey &);
	const char * GetFileURL(void *);
	KeyInterface(const Scaleform::GFx::ResourceKey::KeyInterface &);
	KeyInterface();
	Scaleform::GFx::ResourceKey::KeyInterface & operator=(const Scaleform::GFx::ResourceKey::KeyInterface &);
};
class Scaleform::GFx::ResourceKey::HashOp
{
public:
	unsigned long long operator()(const Scaleform::GFx::ResourceKey &);
};
class Scaleform::GFx::ResourceLibBase :
	Scaleform::RefCountBase<Scaleform::GFx::ResourceLibBase,2>
{
public:
	void RemoveResourceOnRelease(Scaleform::GFx::Resource *);
	void PinResource(Scaleform::GFx::Resource *);
	void UnpinResource(Scaleform::GFx::Resource *);
	ResourceLibBase(Scaleform::GFx::ResourceLibBase &);
	ResourceLibBase(const Scaleform::GFx::ResourceLibBase &);
	ResourceLibBase();
	virtual ~ResourceLibBase();
	Scaleform::GFx::ResourceLibBase & operator=(Scaleform::GFx::ResourceLibBase &);
	Scaleform::GFx::ResourceLibBase & operator=(const Scaleform::GFx::ResourceLibBase &);
};
class Scaleform::RefCountBase<Scaleform::GFx::ResourceLibBase,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::ResourceLibBase,2>(Scaleform::RefCountBase<Scaleform::GFx::ResourceLibBase,2> &);
	RefCountBase<Scaleform::GFx::ResourceLibBase,2>(const Scaleform::RefCountBase<Scaleform::GFx::ResourceLibBase,2> &);
	RefCountBase<Scaleform::GFx::ResourceLibBase,2>();
	virtual ~RefCountBase<Scaleform::GFx::ResourceLibBase,2>();
	Scaleform::RefCountBase<Scaleform::GFx::ResourceLibBase,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::ResourceLibBase,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::ResourceLibBase,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::ResourceLibBase,2> &);
};
class Scaleform::GFx::Resource :
	Scaleform::NewOverrideBase<2>
{
private:
	Scaleform::AtomicInt<long> RefCount; // 0x8
	Scaleform::GFx::ResourceLibBase * pLib; // 0x10
public:
	void AddRef();
	void Release();
	bool AddRef_NotZero();
	long GetRefCount();
	Resource(const Scaleform::GFx::Resource &);
	Resource();
	~Resource();
	void PinResource();
	void UnpinResource();
	void SetOwnerResourceLib(Scaleform::GFx::ResourceLibBase *);
	enum ResourceType
	{
		RT_CharacterDef_Bit = 128,
		RT_None = 0,
		RT_Image = 1,
		RT_Font = 2,
		RT_MovieDef = 3,
		RT_SoundSample = 4,
		RT_MovieDataDef = 128,
		RT_ButtonDef = 129,
		RT_TextDef = 130,
		RT_EditTextDef = 131,
		RT_SpriteDef = 132,
		RT_ShapeDef = 133,
		RT_VideoDef = 134,
		RT_TypeCode_Mask = 65280,
		RT_TypeCode_Shift = 8,
	};
	enum ResourceUse
	{
		Use_None = 0,
		Use_Bitmap = 1,
		Use_Gradient = 2,
		Use_FontTexture = 3,
		Use_SoundSample = 4,
		Use_TypeCode_Mask = 255,
	};
	Scaleform::GFx::ResourceKey GetKey();
	unsigned long GetResourceTypeCode();
	Scaleform::GFx::ResourceReport * GetResourceReport();
	Scaleform::GFx::Resource::ResourceType GetResourceType();
	Scaleform::GFx::Resource::ResourceUse GetResourceUse();
	static unsigned long MakeTypeCode(Scaleform::GFx::Resource::ResourceType, Scaleform::GFx::Resource::ResourceUse);
	Scaleform::GFx::Resource & operator=(const Scaleform::GFx::Resource &);
};
Scaleform::GFx::ResourceKey Scaleform::GFx::Resource::GetKey(); // 0x1402E2C70
class Scaleform::GFx::ResourceReport
{
public:
	~ResourceReport();
	Scaleform::String GetResourceName();
	Scaleform::MemoryHeap * GetResourceHeap();
	void GetStats(Scaleform::StatBag *, bool);
	ResourceReport(const Scaleform::GFx::ResourceReport &);
	ResourceReport();
	Scaleform::GFx::ResourceReport & operator=(const Scaleform::GFx::ResourceReport &);
};
Scaleform::String Scaleform::GFx::ResourceReport::GetResourceName(); // 0x140341BD0
class Scaleform::GFx::ResourceLib :
	Scaleform::RefCountBase<Scaleform::GFx::ResourceLib,2>
{
	struct ResourcePtrHashFunc;
	class PinHashSet;
private:
	Scaleform::GFx::ResourceWeakLib * pWeakLib; // 0x10
	Scaleform::HashSetUncached<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2> > PinSet; // 0x18
	bool DebugFlag; // 0x20
public:
	ResourceLib(const Scaleform::GFx::ResourceLib &);
	ResourceLib(bool);
	virtual ~ResourceLib();
	enum ResolveState
	{
		RS_Unbound = 0,
		RS_Available = 1,
		RS_WaitingResolve = 2,
		RS_NeedsResolve = 3,
		RS_Error = 4,
	};
	class ResourceSlot;
	class BindHandle;
	Scaleform::GFx::ResourceWeakLib * GetWeakLib();
	Scaleform::GFx::Resource * GetResource(const Scaleform::GFx::ResourceKey &);
	Scaleform::GFx::ResourceLib::ResolveState BindResourceKey(Scaleform::GFx::ResourceLib::BindHandle *, const Scaleform::GFx::ResourceKey &);
	void GetResourceArray(Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::Resource>,2,Scaleform::ArrayDefaultPolicy> *);
	void UnpinAll();
	Scaleform::MemoryHeap * GetImageHeap();
	Scaleform::GFx::ResourceLib & operator=(const Scaleform::GFx::ResourceLib &);
	void __dflt_ctor_closure();
};
class Scaleform::RefCountBase<Scaleform::GFx::ResourceLib,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::ResourceLib,2>(Scaleform::RefCountBase<Scaleform::GFx::ResourceLib,2> &);
	RefCountBase<Scaleform::GFx::ResourceLib,2>(const Scaleform::RefCountBase<Scaleform::GFx::ResourceLib,2> &);
	RefCountBase<Scaleform::GFx::ResourceLib,2>();
	virtual ~RefCountBase<Scaleform::GFx::ResourceLib,2>();
	Scaleform::RefCountBase<Scaleform::GFx::ResourceLib,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::ResourceLib,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::ResourceLib,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::ResourceLib,2> &);
};
struct Scaleform::GFx::ResourceLib::ResourcePtrHashFunc
{
	typedef Scaleform::GFx::Resource C;
	unsigned long long operator()(Scaleform::GFx::Resource * &);
	static unsigned long long GetCachedHash(Scaleform::GFx::Resource * &);
	static void SetCachedHash(Scaleform::GFx::Resource * &, unsigned long long);
	static Scaleform::GFx::Resource * & GetValue(Scaleform::GFx::Resource * &);
	static Scaleform::GFx::Resource * & GetValue(Scaleform::GFx::Resource * &);
};
class Scaleform::HashSetUncached<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2> > :
	Scaleform::HashSet<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >
{
	class SelfType;
	class BaseType;
	typedef Scaleform::GFx::Resource ValueType;
public:
	HashSetUncached<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2> >(const Scaleform::HashSetUncached<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2> > &);
	HashSetUncached<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2> >(long);
	HashSetUncached<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2> >();
	~HashSetUncached<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2> >();
	void operator=(const Scaleform::HashSetUncached<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2> > &);
};
class Scaleform::GFx::ResourceLib::ResourceSlot :
	Scaleform::RefCountBase<Scaleform::GFx::ResourceLib::ResourceSlot,2>
{
	enum ResolveState
	{
		Resolve_InProgress = 0,
		Resolve_Success = 1,
		Resolve_Fail = 2,
	};
private:
	Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> pLib; // 0x10
	volatile Scaleform::GFx::ResourceLib::ResourceSlot::ResolveState State; // 0x18
	Scaleform::GFx::Resource * pResource; // 0x20
	Scaleform::GFx::ResourceKey Key; // 0x28
	Scaleform::String ErrorMessage; // 0x38
	Scaleform::Event ResolveComplete; // 0x40
public:
	ResourceSlot(const Scaleform::GFx::ResourceLib::ResourceSlot &);
	ResourceSlot(Scaleform::GFx::ResourceWeakLib *, const Scaleform::GFx::ResourceKey &);
	virtual ~ResourceSlot();
	const Scaleform::GFx::ResourceKey & GetKey();
	Scaleform::GFx::Resource * WaitForResolve();
	bool IsResolved();
	const char * GetError();
	void Resolve(Scaleform::GFx::Resource *);
	void CancelResolve(const char *);
	Scaleform::GFx::ResourceLib::ResourceSlot & operator=(const Scaleform::GFx::ResourceLib::ResourceSlot &);
};
class Scaleform::RefCountBase<Scaleform::GFx::ResourceLib::ResourceSlot,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::ResourceLib::ResourceSlot,2>(Scaleform::RefCountBase<Scaleform::GFx::ResourceLib::ResourceSlot,2> &);
	RefCountBase<Scaleform::GFx::ResourceLib::ResourceSlot,2>(const Scaleform::RefCountBase<Scaleform::GFx::ResourceLib::ResourceSlot,2> &);
	RefCountBase<Scaleform::GFx::ResourceLib::ResourceSlot,2>();
	virtual ~RefCountBase<Scaleform::GFx::ResourceLib::ResourceSlot,2>();
	Scaleform::RefCountBase<Scaleform::GFx::ResourceLib::ResourceSlot,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::ResourceLib::ResourceSlot,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::ResourceLib::ResourceSlot,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::ResourceLib::ResourceSlot,2> &);
};
class Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib>
{
protected:
	Scaleform::GFx::ResourceWeakLib * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ResourceWeakLib>(const Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> &);
	Ptr<Scaleform::GFx::ResourceWeakLib>(Scaleform::GFx::ResourceWeakLib *);
	Ptr<Scaleform::GFx::ResourceWeakLib>(Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ResourceWeakLib>(Scaleform::Pickable<Scaleform::GFx::ResourceWeakLib>);
	Ptr<Scaleform::GFx::ResourceWeakLib>(Scaleform::GFx::ResourceWeakLib &);
	Ptr<Scaleform::GFx::ResourceWeakLib>();
	~Ptr<Scaleform::GFx::ResourceWeakLib>();
	bool operator==(Scaleform::GFx::ResourceWeakLib *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> &);
	bool operator!=(Scaleform::GFx::ResourceWeakLib *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> &);
	Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> & operator=(Scaleform::Pickable<Scaleform::GFx::ResourceWeakLib>);
	const Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> & operator=(Scaleform::GFx::ResourceWeakLib &);
	const Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> & operator=(Scaleform::GFx::ResourceWeakLib *);
	const Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> & operator=(const Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> &);
	Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ResourceWeakLib>);
	Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> & SetPtr(Scaleform::GFx::ResourceWeakLib &);
	Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> & SetPtr(Scaleform::GFx::ResourceWeakLib *);
	Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ResourceWeakLib * & GetRawRef();
	Scaleform::GFx::ResourceWeakLib * GetPtr();
	Scaleform::GFx::ResourceWeakLib & operator*();
	Scaleform::GFx::ResourceWeakLib * operator->();
	Scaleform::GFx::ResourceWeakLib * operator class Scaleform::GFx::ResourceWeakLib *();
	Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> & Pick(Scaleform::GFx::ResourceWeakLib *);
	Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> & Pick(Scaleform::Pickable<Scaleform::GFx::ResourceWeakLib>);
	Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> & Pick(Scaleform::Ptr<Scaleform::GFx::ResourceWeakLib> &);
};
class Scaleform::GFx::ResourceLib::BindHandle
{
public:
	Scaleform::GFx::ResourceLib::ResolveState State; // 0x0
	Scaleform::GFx::Resource * pResource; // 0x8
	Scaleform::GFx::ResourceLib::ResourceSlot * pSlot; // 0x8
	BindHandle();
	~BindHandle();
	void Clear();
	Scaleform::GFx::ResourceLib::ResolveState GetState();
	bool IsAvailable();
	bool NeedsResolve();
	Scaleform::GFx::Resource * WaitForResolve();
	Scaleform::GFx::Resource * GetResource();
	const char * GetResolveError();
	void ResolveResource(Scaleform::GFx::Resource *);
	void CancelResolve(const char *);
};
class Scaleform::Ptr<Scaleform::GFx::Resource>
{
protected:
	Scaleform::GFx::Resource * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::Resource>(const Scaleform::Ptr<Scaleform::GFx::Resource> &);
	Ptr<Scaleform::GFx::Resource>(Scaleform::GFx::Resource *);
	Ptr<Scaleform::GFx::Resource>(Scaleform::Ptr<Scaleform::GFx::Resource> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::Resource>(Scaleform::Pickable<Scaleform::GFx::Resource>);
	Ptr<Scaleform::GFx::Resource>(Scaleform::GFx::Resource &);
	Ptr<Scaleform::GFx::Resource>();
	~Ptr<Scaleform::GFx::Resource>();
	bool operator==(Scaleform::GFx::Resource *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::Resource> &);
	bool operator!=(Scaleform::GFx::Resource *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::Resource> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::Resource> &);
	Scaleform::Ptr<Scaleform::GFx::Resource> & operator=(Scaleform::Pickable<Scaleform::GFx::Resource>);
	const Scaleform::Ptr<Scaleform::GFx::Resource> & operator=(Scaleform::GFx::Resource &);
	const Scaleform::Ptr<Scaleform::GFx::Resource> & operator=(Scaleform::GFx::Resource *);
	const Scaleform::Ptr<Scaleform::GFx::Resource> & operator=(const Scaleform::Ptr<Scaleform::GFx::Resource> &);
	Scaleform::Ptr<Scaleform::GFx::Resource> & SetPtr(Scaleform::Pickable<Scaleform::GFx::Resource>);
	Scaleform::Ptr<Scaleform::GFx::Resource> & SetPtr(Scaleform::GFx::Resource &);
	Scaleform::Ptr<Scaleform::GFx::Resource> & SetPtr(Scaleform::GFx::Resource *);
	Scaleform::Ptr<Scaleform::GFx::Resource> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::Resource> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::Resource * & GetRawRef();
	Scaleform::GFx::Resource * GetPtr();
	Scaleform::GFx::Resource & operator*();
	Scaleform::GFx::Resource * operator->();
	Scaleform::GFx::Resource * operator class Scaleform::GFx::Resource *();
	Scaleform::Ptr<Scaleform::GFx::Resource> & Pick(Scaleform::GFx::Resource *);
	Scaleform::Ptr<Scaleform::GFx::Resource> & Pick(Scaleform::Pickable<Scaleform::GFx::Resource>);
	Scaleform::Ptr<Scaleform::GFx::Resource> & Pick(Scaleform::Ptr<Scaleform::GFx::Resource> &);
};
class Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::Resource>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::GFx::Resource>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::GFx::Resource>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::Ptr<Scaleform::GFx::Resource>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::Resource>,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::Ptr<Scaleform::GFx::Resource>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::Ptr<Scaleform::GFx::Resource>,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::Ptr<Scaleform::GFx::Resource>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::Resource>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::Resource>,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::Ptr<Scaleform::GFx::Resource>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::ResourceWeakLib :
	Scaleform::GFx::ResourceLibBase
{
	class ResourceSlot;
	struct ResourceNode;
private:
	Scaleform::GFx::ResourceLib * pStrongLib; // 0x10
	Scaleform::Lock ResourceLock; // 0x18
	Scaleform::HashSet<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> > Resources; // 0x48
	Scaleform::Ptr<Scaleform::MemoryHeap> pImageHeap; // 0x50
public:
	ResourceWeakLib(const Scaleform::GFx::ResourceWeakLib &);
	ResourceWeakLib(Scaleform::GFx::ResourceLib *);
	virtual ~ResourceWeakLib();
	class BindHandle;
	enum ResolveState
	{
		RS_Unbound = 0,
		RS_Available = 1,
		RS_WaitingResolve = 2,
		RS_NeedsResolve = 3,
		RS_Error = 4,
	};
	Scaleform::GFx::Resource * GetResource(const Scaleform::GFx::ResourceKey &);
	Scaleform::GFx::ResourceLib::ResolveState BindResourceKey(Scaleform::GFx::ResourceLib::BindHandle *, const Scaleform::GFx::ResourceKey &);
	bool IsPinned(Scaleform::GFx::Resource *);
	virtual void PinResource(Scaleform::GFx::Resource *);
	virtual void UnpinResource(Scaleform::GFx::Resource *);
	void UnpinAll();
	void GetResourceArray(Scaleform::Array<Scaleform::Ptr<Scaleform::GFx::Resource>,2,Scaleform::ArrayDefaultPolicy> *);
	Scaleform::MemoryHeap * GetImageHeap();
	virtual void RemoveResourceOnRelease(Scaleform::GFx::Resource *);
	Scaleform::GFx::ResourceLib * GetResourceLib();
	Scaleform::GFx::ResourceWeakLib & operator=(const Scaleform::GFx::ResourceWeakLib &);
};
struct Scaleform::GFx::ResourceWeakLib::ResourceNode
{
	enum NodeType
	{
		Node_Resource = 0,
		Node_Resolver = 1,
	};
	Scaleform::GFx::ResourceWeakLib::ResourceNode::NodeType Type; // 0x0
	Scaleform::GFx::ResourceLib::ResourceSlot * pResolver; // 0x8
	Scaleform::GFx::Resource * pResource; // 0x8
	bool IsResource();
	bool operator==(const Scaleform::GFx::ResourceKey &);
	bool operator!=(const Scaleform::GFx::ResourceKey &);
	struct HashOp;
};
bool Scaleform::GFx::ResourceWeakLib::ResourceNode::operator==(const Scaleform::GFx::ResourceKey & k); // 0x140321090
struct Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp
{
	unsigned long long operator()(const Scaleform::GFx::ResourceKey &);
	unsigned long long operator()(const Scaleform::GFx::ResourceWeakLib::ResourceNode &);
};
unsigned long long Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp::operator()(const Scaleform::GFx::ResourceWeakLib::ResourceNode & node); // 0x140321120
class Scaleform::HashSet<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> > :
	Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> >
{
	class BaseType;
	class SelfType;
	struct ValueType;
public:
	HashSet<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCach(const Scaleform::HashSet<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> > &);
	HashSet<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCach(void *, long);
	HashSet<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCach(void *);
	HashSet<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCach(long);
	HashSet<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCach();
	~HashSet<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCac();
	void operator=(const Scaleform::HashSet<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> > &);
	void CheckExpand();
	void Resize(unsigned long long);
	void SetCapacity(unsigned long long);
};
class Scaleform::Ptr<Scaleform::MemoryHeap>
{
protected:
	Scaleform::MemoryHeap * pObject; // 0x0
public:
	Ptr<Scaleform::MemoryHeap>(const Scaleform::Ptr<Scaleform::MemoryHeap> &);
	Ptr<Scaleform::MemoryHeap>(Scaleform::MemoryHeap *);
	Ptr<Scaleform::MemoryHeap>(Scaleform::Ptr<Scaleform::MemoryHeap> &, Scaleform::PickType);
	Ptr<Scaleform::MemoryHeap>(Scaleform::Pickable<Scaleform::MemoryHeap>);
	Ptr<Scaleform::MemoryHeap>(Scaleform::MemoryHeap &);
	Ptr<Scaleform::MemoryHeap>();
	~Ptr<Scaleform::MemoryHeap>();
	bool operator==(Scaleform::MemoryHeap *);
	bool operator==(const Scaleform::Ptr<Scaleform::MemoryHeap> &);
	bool operator!=(Scaleform::MemoryHeap *);
	bool operator!=(const Scaleform::Ptr<Scaleform::MemoryHeap> &);
	bool operator<(const Scaleform::Ptr<Scaleform::MemoryHeap> &);
	Scaleform::Ptr<Scaleform::MemoryHeap> & operator=(Scaleform::Pickable<Scaleform::MemoryHeap>);
	const Scaleform::Ptr<Scaleform::MemoryHeap> & operator=(Scaleform::MemoryHeap &);
	const Scaleform::Ptr<Scaleform::MemoryHeap> & operator=(Scaleform::MemoryHeap *);
	const Scaleform::Ptr<Scaleform::MemoryHeap> & operator=(const Scaleform::Ptr<Scaleform::MemoryHeap> &);
	Scaleform::Ptr<Scaleform::MemoryHeap> & SetPtr(Scaleform::Pickable<Scaleform::MemoryHeap>);
	Scaleform::Ptr<Scaleform::MemoryHeap> & SetPtr(Scaleform::MemoryHeap &);
	Scaleform::Ptr<Scaleform::MemoryHeap> & SetPtr(Scaleform::MemoryHeap *);
	Scaleform::Ptr<Scaleform::MemoryHeap> & SetPtr(const Scaleform::Ptr<Scaleform::MemoryHeap> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::MemoryHeap * & GetRawRef();
	Scaleform::MemoryHeap * GetPtr();
	Scaleform::MemoryHeap & operator*();
	Scaleform::MemoryHeap * operator->();
	Scaleform::MemoryHeap * operator class Scaleform::MemoryHeap *();
	Scaleform::Ptr<Scaleform::MemoryHeap> & Pick(Scaleform::MemoryHeap *);
	Scaleform::Ptr<Scaleform::MemoryHeap> & Pick(Scaleform::Pickable<Scaleform::MemoryHeap>);
	Scaleform::Ptr<Scaleform::MemoryHeap> & Pick(Scaleform::Ptr<Scaleform::MemoryHeap> &);
};