#pragma once

class Scaleform::GFx::AS3::NamespaceSet :
	Scaleform::GFx::AS3::GASRefCountBase
{
public:
	NamespaceSet(Scaleform::GFx::AS3::VM &);
	bool Contains(const Scaleform::GFx::AS3::Instances::fl::Namespace &);
	class TContainer;
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,2,Scaleform::ArrayDefaultPolicy> & GetNamespaces();
	void Add(Scaleform::GFx::AS3::Instances::fl::Namespace &);
	virtual void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
private:
	Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,2,Scaleform::ArrayDefaultPolicy> Namespaces; // 0x28
public:
	virtual ~NamespaceSet();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace>);
	SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> &);
	SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>(Scaleform::GFx::AS3::Instances::fl::Namespace *);
	~SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> & operator=(Scaleform::GFx::AS3::Instances::fl::Namespace *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> & Pick(Scaleform::GFx::AS3::Instances::fl::Namespace *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> & SetPtr(Scaleform::GFx::AS3::Instances::fl::Namespace *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace> &);
	Scaleform::GFx::AS3::Instances::fl::Namespace * operator->();
	Scaleform::GFx::AS3::Instances::fl::Namespace & operator*();
	Scaleform::GFx::AS3::Instances::fl::Namespace * & GetRawRef();
	Scaleform::GFx::AS3::Instances::fl::Namespace * * GetRawPtr();
	Scaleform::GFx::AS3::Instances::fl::Namespace * GetPtr();
	Scaleform::GFx::AS3::Instances::fl::Namespace * operator class Scaleform::GFx::AS3::Instances::fl::Namespace *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::Instances::fl::Namespace * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,Scaleform::AllocatorLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::AS3::PropRef
{
public:
	PropRef(Scaleform::GFx::AS3::PropRef &);
	PropRef(const Scaleform::GFx::AS3::PropRef &);
	PropRef(const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Object *);
	PropRef(Scaleform::GFx::AS3::Object *, Scaleform::GFx::AS3::Object *);
	PropRef(const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value *);
	PropRef(Scaleform::GFx::AS3::Object *, Scaleform::GFx::AS3::Value *);
	PropRef(const Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::SlotInfo *, Scaleform::GFx::AS3::AbsoluteIndex);
	PropRef(Scaleform::GFx::AS3::Object *, const Scaleform::GFx::AS3::SlotInfo *, Scaleform::GFx::AS3::AbsoluteIndex);
	PropRef();
	bool operator bool();
	bool IsFound();
	bool IsAsValue();
	bool IsAsObject();
	Scaleform::GFx::AS3::Value & GetThis();
	const Scaleform::GFx::AS3::Value & GetThis();
	Scaleform::GFx::AS3::AbsoluteIndex GetSlotIndex();
	const Scaleform::GFx::AS3::SlotInfo * GetAsSlotInfo();
	Scaleform::GFx::AS3::Value * GetAsValue();
	Scaleform::GFx::AS3::Object * GetAsObject();
	Scaleform::GFx::AS3::CheckResult GetSlotValueUnsafe(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::VTable &);
	Scaleform::GFx::AS3::CheckResult GetSlotValueUnsafe(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::SlotInfo::ValTarget);
	Scaleform::GFx::AS3::CheckResult SetSlotValue(Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::Value &);
	enum <unnamed-enum-SlotInfoFlagMask>
	{
		SlotInfoFlagMask = 0,
		ValueFlagMask = 1,
		ObjectFlagMask = 2,
	};
private:
	static Scaleform::GFx::AS3::Value * SetValueFlag(Scaleform::GFx::AS3::Value *);
	static Scaleform::GFx::AS3::Object * SetObjectFlag(Scaleform::GFx::AS3::Object *);
	const Scaleform::GFx::AS3::SlotInfo * pSI; // 0x0
	Scaleform::GFx::AS3::Value * pValue; // 0x0
	Scaleform::GFx::AS3::Object * pObject; // 0x0
	Scaleform::GFx::AS3::AbsoluteIndex SlotIndex; // 0x8
	Scaleform::GFx::AS3::Value This; // 0x10
public:
	~PropRef();
	Scaleform::GFx::AS3::PropRef & operator=(Scaleform::GFx::AS3::PropRef &);
	Scaleform::GFx::AS3::PropRef & operator=(const Scaleform::GFx::AS3::PropRef &);
};
bool Scaleform::GFx::AS3::PropRef::operator bool(); // 0x140457100
enum Scaleform::GFx::AS3::BuiltinTraitsType
{
	Traits_Unknown = 0,
	Traits_Boolean = 1,
	Traits_SInt = 2,
	Traits_UInt = 3,
	Traits_Number = 4,
	Traits_String = 5,
	Traits_Namespace = 6,
	Traits_Array = 7,
	Traits_ByteArray = 8,
	Traits_Date = 9,
	Traits_Function = 10,
	Traits_Dictionary = 11,
	Traits_Vector_int = 12,
	Traits_Vector_uint = 13,
	Traits_Vector_double = 14,
	Traits_Vector_String = 15,
	Traits_Vector_object = 16,
	Traits_QName = 17,
	Traits_XML = 18,
	Traits_XMLList = 19,
	Traits_Activation = 20,
	Traits_Catch = 21,
	Traits_Proxy = 22,
	Traits_Global = 23,
	Traits_DisplayObject_Begin = 24,
	Traits_DisplayObject = 24,
	Traits_InteractiveObject = 25,
	Traits_Shape = 26,
	Traits_MorphShape = 27,
	Traits_AVM1Movie = 28,
	Traits_Bitmap = 29,
	Traits_SimpleButton = 30,
	Traits_DisplayObjectContainer = 31,
	Traits_Sprite = 32,
	Traits_MovieClip = 33,
	Traits_Stage = 34,
	Traits_Loader = 35,
	Traits_DisplayObject_End = 36,
};
enum Scaleform::GFx::AS3::FindPropAttr
{
	FindGet = 0,
	FindSet = 1,
	FindCall = 2,
};
class Scaleform::GFx::AS3::Object :
	Scaleform::GFx::AS3::GASRefCountBase
{
	struct DynAttrsKey;
	class DynAttrsType;
private:
	Object(Scaleform::GFx::AS3::VM &);
public:
	Object(Scaleform::GFx::AS3::Traits &);
	virtual ~Object();
	Scaleform::GFx::AS3::CheckResult SetProperty(const Scaleform::GFx::AS3::Multiname &, const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::CheckResult GetProperty(const Scaleform::GFx::AS3::Multiname &, Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::CheckResult GetDynamicProperty(Scaleform::GFx::AS3::AbsoluteIndex, Scaleform::GFx::AS3::Value &);
	bool HasProperty(const Scaleform::GFx::AS3::Multiname &, bool);
	void GetDescendants(Scaleform::GFx::AS3::Instances::fl::XMLList &, const Scaleform::GFx::AS3::Multiname &);
	Scaleform::GFx::AS3::CheckResult DeleteProperty(const Scaleform::GFx::AS3::Multiname &);
	Scaleform::GFx::AS3::CheckResult GetDefaultValueUnsafe(Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value::Hint);
	void Call(const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &, unsigned long &, Scaleform::GFx::AS3::Value *, bool);
	Scaleform::GFx::AS3::CheckResult ExecutePropertyUnsafe(const Scaleform::GFx::AS3::Multiname &, Scaleform::GFx::AS3::Value &, unsigned long, Scaleform::GFx::AS3::Value *);
	void AS3Constructor(unsigned long, Scaleform::GFx::AS3::Value *);
protected:
	void Construct(Scaleform::GFx::AS3::Value &, unsigned long &, Scaleform::GFx::AS3::Value *, bool, bool);
public:
	void Construct(Scaleform::GFx::AS3::Value &, unsigned long, Scaleform::GFx::AS3::Value *);
	void InitInstance(bool);
	Scaleform::GFx::ASString GetName();
	Scaleform::GFx::ASString GetQualifiedName(Scaleform::GFx::AS3::QNameFormat);
	void AddDynamicSlotValuePair(const Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::SlotInfo::Attribute);
	void AddDynamicSlotValuePair(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::SlotInfo::Attribute);
	Scaleform::GFx::AS3::CheckResult DeleteDynamicSlotValuePair(const Scaleform::GFx::AS3::Multiname &);
protected:
	void AddDynamicFunc(const Scaleform::GFx::AS3::ThunkInfo &);
public:
	void ValueOfUnsafe(Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::ASRefCountCollector * GetCollector();
	virtual void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	void ForEachChild_GC_NoValues(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
protected:
	Scaleform::GFx::AS3::Class & GetClass();
public:
	const Scaleform::GFx::AS3::Class & GetClass();
	bool IsDynamic();
	void GetNextPropertyName(Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::GlobalSlotIndex);
	Scaleform::GFx::AS3::GlobalSlotIndex GetNextDynPropIndex(Scaleform::GFx::AS3::GlobalSlotIndex);
	void GetNextPropertyValue(Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::GlobalSlotIndex);
private:
	Scaleform::GFx::AS3::CheckResult GetSlotValueUnsafe(const Scaleform::GFx::ASString &, Scaleform::GFx::AS3::Instances::fl::Namespace &, Scaleform::GFx::AS3::Value &);
public:
	Scaleform::GFx::AS3::CheckResult GetSlotValueUnsafe(Scaleform::GFx::AS3::GlobalSlotIndex, Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::CheckResult GetSlotValueUnsafe(Scaleform::GFx::AS3::SlotIndex, Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::CheckResult SetSlotValue(Scaleform::GFx::AS3::SlotIndex, const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::Traits & GetTraits();
	const Scaleform::GFx::AS3::Traits & GetTraitsSafe();
	Scaleform::GFx::AS3::VM & GetVM();
	Scaleform::GFx::AS3::VM & GetVMSafe();
	Scaleform::GFx::AS3::BuiltinTraitsType GetTraitsType();
	bool IsFunction();
	const Scaleform::GFx::AS3::VTable & GetVT();
	Scaleform::GFx::AS3::VTable & GetVT();
	const Scaleform::GFx::AS3::PrimitiveVS & GetStoredScopeStack();
	Scaleform::GFx::AS3::StringManager & GetStringManager();
	Scaleform::GFx::ASString GetASString(const Scaleform::String &);
	Scaleform::GFx::ASString GetASString(const char *, unsigned long long);
	Scaleform::GFx::ASString GetASString(const char *);
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectCPP & GetGlobalObjectCPP();
	void constructor(Scaleform::GFx::AS3::Value &);
	void FindProperty(Scaleform::GFx::AS3::PropRef &, const Scaleform::GFx::AS3::Multiname &, Scaleform::GFx::AS3::FindPropAttr);
	const Scaleform::GFx::AS3::SlotInfo * FindFixedSlot(const Scaleform::GFx::AS3::Multiname &, Scaleform::GFx::AS3::AbsoluteIndex &);
	const Scaleform::GFx::AS3::SlotInfo * FindFixedSlot(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &, Scaleform::GFx::AS3::AbsoluteIndex &);
	Scaleform::GFx::AS3::PropRef FindDynamicSlot(const Scaleform::GFx::AS3::Multiname &);
	const Scaleform::GFx::AS3::Value * FindDynamicSlot(const Scaleform::GFx::ASString &);
	const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332> * GetDynamicAttrs();
	const Scaleform::GFx::AS3::SlotInfo * InitializeOnDemand(const Scaleform::GFx::AS3::SlotInfo *, const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &, Scaleform::GFx::AS3::AbsoluteIndex &);
	Scaleform::GFx::ASUserData * GetUserData();
	void SetUserData(Scaleform::GFx::Movie *, Scaleform::GFx::ASUserData *, bool);
protected:
	bool IsException();
	struct UserDataHolder;
private:
	void Set(Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::Value &);
	void Set(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> &, const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits> pTraits; // 0x28
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332> DynAttrs; // 0x30
	Scaleform::GFx::AS3::Object::UserDataHolder * pUserDataHolder; // 0x38
};
struct Scaleform::GFx::AS3::Object::DynAttrsKey
{
	enum <unnamed-enum-DoNotEnumMask>
	{
		DoNotEnumMask = 1,
	};
	DynAttrsKey(Scaleform::GFx::AS3::Object::DynAttrsKey &);
	DynAttrsKey(const Scaleform::GFx::AS3::Object::DynAttrsKey &);
	DynAttrsKey(const Scaleform::GFx::ASString &, unsigned long);
	struct HashFunctor;
	bool operator==(const Scaleform::GFx::AS3::Object::DynAttrsKey &);
	const Scaleform::GFx::ASString & GetName();
	bool IsDoNotEnum();
	void SetDoNotEnum(bool);
private:
	unsigned long Flags; // 0x0
	Scaleform::GFx::ASString Name; // 0x8
public:
	~DynAttrsKey();
	Scaleform::GFx::AS3::Object::DynAttrsKey & operator=(Scaleform::GFx::AS3::Object::DynAttrsKey &);
	Scaleform::GFx::AS3::Object::DynAttrsKey & operator=(const Scaleform::GFx::AS3::Object::DynAttrsKey &);
};
struct Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor
{
};
class Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>
{
	enum <unnamed-enum-MinTableSize>
	{
		MinTableSize = 8,
	};
	struct RawData;
	struct DataInd;
	struct KeyType;
	class ValueType;
	class SelfType;
	class HashTableType;
public:
	HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>();
	~HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>();
	struct KeyInd;
	struct Range;
	struct RangeUnsafe;
	struct ForwardRange;
	struct ForwardRangeUnsafe;
	struct BidirRange;
	struct ResultUnsafe;
	void Clean();
	unsigned long GetTableSize();
protected:
	static unsigned long GetKeyCapacity(unsigned long);
public:
	unsigned long GetKeyCapacity();
	unsigned long GetEntryNum();
	void Add(const Scaleform::GFx::AS3::Object::DynAttrsKey &, const Scaleform::GFx::AS3::Value &, const unsigned long long);
	void Add(const Scaleform::GFx::AS3::Object::DynAttrsKey &, const Scaleform::GFx::AS3::Value &);
	void SetAdd(const Scaleform::GFx::AS3::Object::DynAttrsKey &, const Scaleform::GFx::AS3::Value &, const unsigned long long);
	void SetAdd(const Scaleform::GFx::AS3::Object::DynAttrsKey &, const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::Value * Get(const Scaleform::GFx::AS3::Object::DynAttrsKey &);
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::ResultUnsafe Find(const Scaleform::GFx::AS3::Object::DynAttrsKey &);
	bool Remove(const Scaleform::GFx::AS3::Object::DynAttrsKey &);
	static Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData * GetSentinel();
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::ForwardRange GetForwardRange();
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::ForwardRangeUnsafe GetForwardRangeUnsafe();
	struct Bucket;
	struct TblInd;
protected:
	unsigned long GetBitSetSize();
	static unsigned long GetBitSetSize(unsigned long);
	void SetKeyCapacity(unsigned long);
	static unsigned long long CalcRawDataSize(const unsigned long long, const unsigned long, const unsigned long);
	void SetTableSize(unsigned long, Scaleform::MemoryHeap *, const unsigned long);
	void Add0(const Scaleform::GFx::AS3::Object::DynAttrsKey &, const Scaleform::GFx::AS3::Value &, unsigned long long);
	void SetAdd0(const Scaleform::GFx::AS3::Object::DynAttrsKey &, const Scaleform::GFx::AS3::Value &, unsigned long long);
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::ResultUnsafe Find0(const Scaleform::GFx::AS3::Object::DynAttrsKey &);
	Scaleform::GFx::AS3::Value * Get0(const Scaleform::GFx::AS3::Object::DynAttrsKey &);
	bool Remove0(const Scaleform::GFx::AS3::Object::DynAttrsKey &);
	void CheckExpand(Scaleform::MemoryHeap *, const unsigned long);
private:
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData * Data; // 0x0
	static Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData Sentinel; // 0xFFFFFFFFFFFFFFFF
};
struct Scaleform::GFx::AS3::Object::UserDataHolder :
	Scaleform::NewOverrideBase<338>
{
	Scaleform::GFx::Movie * pMovieView; // 0x0
	Scaleform::GFx::ASUserData * pUserData; // 0x8
	UserDataHolder(Scaleform::GFx::Movie *, Scaleform::GFx::ASUserData *);
	~UserDataHolder();
	void NotifyDestroy(Scaleform::GFx::AS3::Object *);
};
class Scaleform::NewOverrideBase<338>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 338,
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
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::Traits>(Scaleform::Pickable<Scaleform::GFx::AS3::Traits>);
	SPtr<Scaleform::GFx::AS3::Traits>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::Traits>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits> &);
	SPtr<Scaleform::GFx::AS3::Traits>(Scaleform::GFx::AS3::Traits *);
	~SPtr<Scaleform::GFx::AS3::Traits>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::Traits>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits> & operator=(Scaleform::GFx::AS3::Traits *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits> & Pick(Scaleform::GFx::AS3::Traits *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::Traits>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits> & SetPtr(Scaleform::GFx::AS3::Traits *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits> &);
	Scaleform::GFx::AS3::Traits * operator->();
	Scaleform::GFx::AS3::Traits & operator*();
	Scaleform::GFx::AS3::Traits * & GetRawRef();
	Scaleform::GFx::AS3::Traits * * GetRawPtr();
	Scaleform::GFx::AS3::Traits * GetPtr();
	Scaleform::GFx::AS3::Traits * operator class Scaleform::GFx::AS3::Traits *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::Traits * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::Class :
	Scaleform::GFx::AS3::Object
{
	class ClassType;
	enum <unnamed-enum-IsInstance>
	{
		IsInstance = 0,
		IsClass = 1,
	};
public:
	static const Scaleform::GFx::AS3::TypeInfo & GetTypeInfo();
	Class(Scaleform::GFx::AS3::ClassTraits::Traits &);
	virtual ~Class();
	const Scaleform::GFx::AS3::ClassTraits::Traits & ApplyTypeArgs(unsigned long, Scaleform::GFx::AS3::Value *);
	virtual void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
protected:
	virtual void Construct(Scaleform::GFx::AS3::Value &, unsigned long &, Scaleform::GFx::AS3::Value *, bool, bool);
public:
	Scaleform::GFx::AS3::Class * GetParentClass();
	Scaleform::GFx::AS3::Object & GetPrototype();
	Scaleform::GFx::AS3::ClassTraits::Traits & GetClassTraits();
	const Scaleform::GFx::AS3::ClassTraits::Traits & GetClassTraits();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetInstanceTraits();
	const Scaleform::GFx::AS3::InstanceTraits::Traits & GetInstanceTraits();
	virtual void Call(const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &, unsigned long &, Scaleform::GFx::AS3::Value *, bool);
	typedef Scaleform::GFx::AS3::Value(*ConvertFunc)(const Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::Traits &);
	void InitPrototypeFromVTable(Scaleform::GFx::AS3::Object &, Scaleform::GFx::AS3::Value(*)(const Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::Traits &));
	void InitPrototypeFromVTableCheckType(Scaleform::GFx::AS3::Object &);
	void InitPrototype(Scaleform::GFx::AS3::Object &);
	Scaleform::Pickable<Scaleform::GFx::AS3::Object> MakePrototype();
protected:
	void AddConstructor(Scaleform::GFx::AS3::Object &);
	void SetPrototype(Scaleform::Pickable<Scaleform::GFx::AS3::Object>);
	static void AddDynamicFunc(Scaleform::GFx::AS3::Object &, const Scaleform::GFx::AS3::ThunkInfo &);
private:
	Scaleform::GFx::AS3::Value ConvertCopy(const Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::Traits &);
	Scaleform::GFx::AS3::Value ConvertCheckType(const Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::Traits &);
public:
	void lengthGet(long &);
	void prototypeGet(Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::ASString toString();
	void toString(Scaleform::GFx::ASString &);
	long length();
	Scaleform::GFx::AS3::Value prototype();
private:
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> ParentClass; // 0x40
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> pPrototype; // 0x48
};
class Scaleform::GFx::AS3::ClassCallConstruct :
	Scaleform::GFx::AS3::Class
{
public:
	ClassCallConstruct(Scaleform::GFx::AS3::ClassTraits::Traits &);
	virtual void Call(const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &, unsigned long &, Scaleform::GFx::AS3::Value *, bool);
	virtual ~ClassCallConstruct();
};