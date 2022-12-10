#pragma once

class Scaleform::GFx::AS3::ASStringNodePtrHashFunc
{
public:
	unsigned long long operator()(const Scaleform::Ptr<Scaleform::GFx::ASStringNode> &);
};
class Scaleform::GFx::AS3::Slots
{
	class ValueType;
	class SetType;
	class CIterator;
public:
	Scaleform::GFx::AS3::Slots::CIterator Begin();
	Scaleform::GFx::AS3::Slots::CIterator End();
	Scaleform::GFx::AS3::Slots::CIterator RBegin();
	Scaleform::GFx::AS3::Slots::CIterator REnd();
	class SlotFunct;
	Scaleform::GFx::AS3::CheckResult ForEachSlot(Scaleform::GFx::AS3::Slots::SlotFunct &);
	Slots(Scaleform::GFx::AS3::Slots &);
	Slots(const Scaleform::GFx::AS3::Slots &);
	Slots();
	void Inherit(const Scaleform::GFx::AS3::Slots &);
	unsigned long long GetSlotInfoNum();
	const Scaleform::GFx::AS3::SlotInfo & GetSlotInfo(Scaleform::GFx::AS3::AbsoluteIndex);
	Scaleform::GFx::ASStringNode * GetSlotNameNode(Scaleform::GFx::AS3::AbsoluteIndex);
	Scaleform::GFx::ASString GetSlotName(Scaleform::GFx::AS3::AbsoluteIndex);
	Scaleform::GFx::AS3::AbsoluteIndex AddSlotInfo(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::SlotInfo &);
	const Scaleform::GFx::AS3::SlotInfo * FindSlotInfo(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &);
	const unsigned long * FindSlotValues(const Scaleform::GFx::ASString &);
	long long GetPrevSlotIndex(long long);
	void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
protected:
	Scaleform::GFx::AS3::AbsoluteIndex FindSlotInfoIndex(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &);
	Scaleform::GFx::AS3::SlotInfo & GetOwnSlotInfo(Scaleform::GFx::AS3::AbsoluteIndex);
	void SetSlotInfo(Scaleform::GFx::AS3::AbsoluteIndex, const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::SlotInfo &);
	Scaleform::GFx::AS3::SlotInfo & FindAddOwnSlotInfo(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::SlotInfo &, Scaleform::GFx::AS3::AbsoluteIndex &);
	void SetKey(Scaleform::GFx::AS3::AbsoluteIndex, const Scaleform::GFx::ASString &);
	Scaleform::GFx::AS3::AbsoluteIndex Add(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::SlotInfo &);
	struct Pair;
	class VArrayType;
private:
	unsigned long long FirstOwnSlotNum; // 0x0
	const Scaleform::GFx::AS3::Slots * Parent; // 0x8
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Slots::Pair,333,Scaleform::ArrayDefaultPolicy> VArray; // 0x10
	Scaleform::HashUncachedLH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,unsigned long,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,334> Set; // 0x28
public:
	~Slots();
	Scaleform::GFx::AS3::Slots & operator=(Scaleform::GFx::AS3::Slots &);
	Scaleform::GFx::AS3::Slots & operator=(const Scaleform::GFx::AS3::Slots &);
};
class Scaleform::HashUncachedLH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,unsigned long,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,334> :
	Scaleform::HashLH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,unsigned long,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,334,Scaleform::HashNode<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,unsigned long,Scaleform::GFx::AS3::ASStringNodePtrHashFunc>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,unsigned long,Scaleform::GFx::AS3::ASStringNodePtrHashFunc>,Scaleform::HashNode<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,unsigned long,Scaleform::GFx::AS3::ASStringNodePtrHashFunc>::NodeHashF> >
{
	class SelfType;
	class BaseType;
public:
	HashUncachedLH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,unsigned long,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,334>(const Scaleform::HashUncachedLH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,unsigned long,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,334> &);
	HashUncachedLH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,unsigned long,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,334>(long);
	HashUncachedLH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,unsigned long,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,334>();
	~HashUncachedLH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,unsigned long,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,334>();
	void operator=(const Scaleform::HashUncachedLH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,unsigned long,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,334> &);
};
class Scaleform::GFx::AS3::Slots::CIterator
{
private:
	CIterator(const Scaleform::GFx::AS3::Slots &, Scaleform::GFx::AS3::AbsoluteIndex);
public:
	bool operator==(const Scaleform::GFx::AS3::Slots::CIterator &);
	bool operator!=(const Scaleform::GFx::AS3::Slots::CIterator &);
	Scaleform::GFx::AS3::Slots::CIterator operator++(long);
	Scaleform::GFx::AS3::Slots::CIterator & operator++();
	Scaleform::GFx::AS3::Slots::CIterator operator--(long);
	Scaleform::GFx::AS3::Slots::CIterator & operator--();
	bool operator<(const Scaleform::GFx::AS3::Slots::CIterator &);
	bool operator>(const Scaleform::GFx::AS3::Slots::CIterator &);
	bool IsEnd();
	const Scaleform::GFx::AS3::SlotInfo & GetSlotInfo();
	Scaleform::GFx::ASStringNode * GetSlotName();
private:
	Scaleform::GFx::AS3::AbsoluteIndex Ind; // 0x0
	const Scaleform::GFx::AS3::Slots * Parent; // 0x8
public:
	Scaleform::GFx::AS3::Slots::CIterator & operator=(Scaleform::GFx::AS3::Slots::CIterator &);
	Scaleform::GFx::AS3::Slots::CIterator & operator=(const Scaleform::GFx::AS3::Slots::CIterator &);
};
class Scaleform::GFx::AS3::Slots::SlotFunct
{
public:
	~SlotFunct();
	Scaleform::GFx::AS3::CheckResult operator()(const Scaleform::GFx::AS3::SlotInfo &);
	SlotFunct(const Scaleform::GFx::AS3::Slots::SlotFunct &);
	SlotFunct();
	Scaleform::GFx::AS3::Slots::SlotFunct & operator=(const Scaleform::GFx::AS3::Slots::SlotFunct &);
};
const Scaleform::GFx::AS3::SlotInfo & Scaleform::GFx::AS3::Slots::GetSlotInfo(Scaleform::GFx::AS3::AbsoluteIndex ind); // 0x140489C10
Scaleform::GFx::ASStringNode * Scaleform::GFx::AS3::Slots::GetSlotNameNode(Scaleform::GFx::AS3::AbsoluteIndex ind); // 0x140489C90
const unsigned long * Scaleform::GFx::AS3::Slots::FindSlotValues(const Scaleform::GFx::ASString & name); // 0x14047F2C0
long long Scaleform::GFx::AS3::Slots::GetPrevSlotIndex(long long ind); // 0x140488890
void Scaleform::GFx::AS3::Slots::ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, void(*op)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *)); // 0x140480190
struct Scaleform::GFx::AS3::Slots::Pair
{
	Pair(Scaleform::GFx::AS3::Slots::Pair &);
	Pair(const Scaleform::GFx::AS3::Slots::Pair &);
	Pair(const Scaleform::GFx::AS3::SlotInfo &, const Scaleform::Ptr<Scaleform::GFx::ASStringNode> &);
	Scaleform::Ptr<Scaleform::GFx::ASStringNode> Key; // 0x0
	long long Prev; // 0x8
	Scaleform::GFx::AS3::SlotInfo Value; // 0x10
	~Pair();
	Scaleform::GFx::AS3::Slots::Pair & operator=(Scaleform::GFx::AS3::Slots::Pair &);
	Scaleform::GFx::AS3::Slots::Pair & operator=(const Scaleform::GFx::AS3::Slots::Pair &);
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::Slots::Pair,333,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Slots::Pair,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Slots::Pair,333>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::Slots::Pair,333,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Slots::Pair,333,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::Slots::Pair,333,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::Slots::Pair,333,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::Slots::Pair,333,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::Slots::Pair,333,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Slots::Pair,333,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::Slots::Pair,333,Scaleform::ArrayDefaultPolicy>();
};
struct Scaleform::GFx::AS3::MemberInfo
{
	const char * Name; // 0x0
	const char * NamespaceName; // 0x8
	unsigned long Offset : 16; // 0x10
	Scaleform::GFx::AS3::Abc::NamespaceKind NsKind : 4; // 0x10
	Scaleform::GFx::AS3::SlotInfo::BindingType BT : 5; // 0x10
	unsigned long Const : 1; // 0x10
};
class Scaleform::GFx::AS3::Traits :
	Scaleform::GFx::AS3::GASRefCountBase,
	Scaleform::GFx::AS3::Slots
{
	class Self;
private:
	Traits(Scaleform::GFx::AS3::VM &);
public:
	Traits(Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::Traits *, bool, bool);
	virtual ~Traits();
	bool IsGlobal();
	bool HasConstructorSetup();
	Scaleform::GFx::AS3::Class & GetConstructor();
	const Scaleform::GFx::AS3::Class & GetConstructor();
	const Scaleform::GFx::AS3::Traits * GetParent();
	bool IsParentOf(const Scaleform::GFx::AS3::Traits &);
	bool IsParentTypeOf(const Scaleform::GFx::AS3::Traits &);
	bool IsOfType(const Scaleform::GFx::AS3::Traits &);
	bool SupportsInterface(const Scaleform::GFx::AS3::Traits &);
	Scaleform::GFx::AS3::Class & GetClass();
	const Scaleform::GFx::AS3::Class & GetClass();
	Scaleform::GFx::AS3::BuiltinTraitsType GetTraitsType();
	Scaleform::GFx::ASString GetName();
	Scaleform::GFx::ASString GetQualifiedName(Scaleform::GFx::AS3::QNameFormat);
	unsigned long GetMemSize();
	unsigned long GetFixedMemSize();
	bool IsDynamic();
	bool IsSealed();
	bool IsArrayLike();
	bool IsClassTraits();
	bool IsInstanceTraits();
	bool IsInterface();
	bool HasTail();
	bool IsAbcObject();
	bool IsUserDefined();
	bool IsFinal();
	bool IsTmpBit();
	void SetTmpBit(bool);
	const Scaleform::GFx::AS3::Traits * IsTmpBitR();
	void SetTmpBitR(bool);
	Scaleform::GFx::AS3::Instances::fl::Namespace & GetPublicNamespace();
	Scaleform::GFx::AS3::VM & GetVM();
	Scaleform::GFx::AS3::VTable & GetVT();
	Scaleform::GFx::AS3::VMAbcFile * GetFilePtr();
	Scaleform::GFx::AS3::VMAppDomain & GetAppDomain();
	Scaleform::GFx::AS3::StringManager & GetStringManager();
	Scaleform::GFx::AS3::GC & GetGC();
	Scaleform::GFx::AS3::Traits & GetSelf();
	unsigned long long GetFixedValueSlotNumber();
	const Scaleform::GFx::AS3::PrimitiveVS & GetStoredScopeStack();
	Scaleform::GFx::ASString GetASString(const Scaleform::String &);
	Scaleform::GFx::ASString GetASString(const char *, unsigned long long);
	Scaleform::GFx::ASString GetASString(const char *);
	Scaleform::GFx::AS3::CheckResult GetSlotValueUnsafe(Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::AbsoluteIndex, Scaleform::GFx::AS3::Object *);
	Scaleform::GFx::AS3::CheckResult GetSlotValueUnsafe(Scaleform::GFx::AS3::Value &, const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &, Scaleform::GFx::AS3::Object *);
	Scaleform::GFx::AS3::CheckResult GetSlotValue(Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::AbsoluteIndex, Scaleform::GFx::AS3::Object *);
	Scaleform::GFx::AS3::CheckResult SetSlotValue(Scaleform::GFx::AS3::AbsoluteIndex, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Object *);
	Scaleform::GFx::AS3::CheckResult SetSlotValue(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Object *);
	const Scaleform::GFx::AS3::SlotInfo * FindSlotInfo(Scaleform::GFx::AS3::VMAbcFile &, const Scaleform::GFx::AS3::Abc::Multiname &);
	const Scaleform::GFx::AS3::SlotInfo * FindSlotInfo(const Scaleform::GFx::AS3::Multiname &);
	const Scaleform::GFx::AS3::SlotInfo * FindSlotInfo(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &);
	const Scaleform::GFx::AS3::SlotInfo & GetSlotInfo(Scaleform::GFx::AS3::AbsoluteIndex);
protected:
	Scaleform::GFx::AS3::SlotInfo & GetOwnSlotInfo(Scaleform::GFx::AS3::AbsoluteIndex);
	void SetSlot(Scaleform::GFx::AS3::AbsoluteIndex, const Scaleform::GFx::ASString &, Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const >, Scaleform::GFx::AS3::VMAbcFile &, const unsigned char *, bool);
	void AddSlotCPP(const Scaleform::GFx::ASString &, Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const >, const Scaleform::GFx::AS3::ClassTraits::Traits *, Scaleform::GFx::AS3::SlotInfo::BindingType, Scaleform::GFx::AS3::AbsoluteIndex, bool);
public:
	void AddSlot(const Scaleform::GFx::AS3::MemberInfo &);
protected:
	void AddSlot(const Scaleform::GFx::ASString &, Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const >, Scaleform::GFx::AS3::SlotInfo::BindingType, Scaleform::GFx::AS3::AbsoluteIndex, bool);
	Scaleform::GFx::AS3::AbsoluteIndex AddSlot(const Scaleform::GFx::ASString &, Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const >, Scaleform::GFx::AS3::VMAbcFile &, const unsigned char *, bool);
	void AddSlot(const Scaleform::GFx::ASString &, Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const >, const Scaleform::GFx::AS3::ClassTraits::Traits *, Scaleform::GFx::AS3::SlotInfo::BindingType, Scaleform::GFx::AS3::AbsoluteIndex, bool);
public:
	Scaleform::GFx::AS3::SlotInfo & AddSetSlot(Scaleform::GFx::AS3::RelativeIndex, const Scaleform::GFx::ASString &, Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const >, Scaleform::GFx::AS3::VMAbcFile &, const unsigned char *, bool);
	Scaleform::GFx::AS3::CheckResult AddSlots(const Scaleform::GFx::AS3::Abc::HasTraits &, Scaleform::GFx::AS3::VMAbcFile &, unsigned long);
	void AddSlotValueCPP(const Scaleform::GFx::ASString &, Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const >, const Scaleform::GFx::AS3::ClassTraits::Traits *);
protected:
	Scaleform::GFx::AS3::CheckResult SetupSlotValues(Scaleform::GFx::AS3::VMAbcFile &, const Scaleform::GFx::AS3::Abc::HasTraits &, Scaleform::GFx::AS3::Object &);
public:
	Scaleform::GFx::AS3::CheckResult SetupSlotValues(Scaleform::GFx::AS3::Object &);
	Scaleform::GFx::AS3::Instances::fl::GlobalObjectScript * GetGlobalObjectScript();
	void * Alloc();
	void Add2Pool(const Scaleform::GFx::AS3::Object *);
	void CleanObjPool();
	Scaleform::GFx::AS3::GlobalSlotIndex GetNextPropertyIndex(Scaleform::GFx::AS3::GlobalSlotIndex);
	Scaleform::GFx::AS3::AbsoluteIndex GetFirstOwnSlotIndex();
	Scaleform::GFx::AS3::Slots::CIterator BeginFirstOwnSlot();
	void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::Object &, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	virtual void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	void ForEachChild_GC_Slot(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::Object &, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
protected:
	void SetArrayLike(bool);
	void SetIsInterface(bool);
	void SetDynamicType(bool);
	void SetFinal(bool);
	void SetHasTail(bool);
	void SetIsAbcObject(bool);
	void SetIsClassTraits(bool);
	Scaleform::GFx::AS3::SlotInfo::BindingType GetBindingType(Scaleform::GFx::AS3::VMAbcFile &, const Scaleform::GFx::AS3::Abc::Multiname &);
	void SetMemSize(unsigned long);
	void CalculateMemSize(unsigned long);
	void InitOnDemand();
	static const Scaleform::GFx::AS3::ClassTraits::Traits * RetrieveParentClassTraits(Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::ClassInfo &, Scaleform::GFx::AS3::VMAppDomain &);
	Scaleform::GFx::AS3::CheckResult RegisterWithVT(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::SlotInfo &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::SlotInfo::BindingType);
private:
	void Add2VT(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &, const Scaleform::GFx::AS3::SlotInfo &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::SlotInfo::BindingType);
	void Add2VT(Scaleform::GFx::AS3::SlotInfo &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::SlotInfo::BindingType);
protected:
	void Add2VT(const Scaleform::GFx::AS3::ClassInfo &, const Scaleform::GFx::AS3::ThunkInfo &);
	void SetTraitsType(Scaleform::GFx::AS3::BuiltinTraitsType);
	void ClearInitScope();
	void SetConstructor(Scaleform::Pickable<Scaleform::GFx::AS3::Class>);
	void SetConstructor(Scaleform::GFx::AS3::Class &);
private:
	void Add2StoredScopeStack(const Scaleform::GFx::AS3::Value &);
	void StoreScopeStack(const Scaleform::GFx::AS3::VSBase &, unsigned short);
	void UpdateVT(const Scaleform::GFx::AS3::SlotInfo &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::SlotInfo::BindingType);
	void UpdateVT4IM(const Scaleform::GFx::ASString &, const Scaleform::GFx::AS3::Instances::fl::Namespace &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::SlotInfo::BindingType);
	static Scaleform::GFx::AS3::SlotInfo::BindingType GetNewBT(Scaleform::GFx::AS3::SlotInfo::BindingType, Scaleform::GFx::AS3::SlotInfo::BindingType);
	void SetParentTraits(const Scaleform::GFx::AS3::Traits *);
	void DestructTail(Scaleform::GFx::AS3::Object &);
	void ConstructTail(Scaleform::GFx::AS3::Object &);
	Scaleform::GFx::AS3::CheckResult AddSlotsWithID(const Scaleform::GFx::AS3::Abc::HasTraits &, Scaleform::GFx::AS3::VMAbcFile &);
	Scaleform::GFx::AS3::CheckResult AddSlotsWithoutID(const Scaleform::GFx::AS3::Abc::HasTraits &, Scaleform::GFx::AS3::VMAbcFile &, bool);
protected:
	Scaleform::GFx::AS3::AbsoluteIndex FirstOwnSlotInd; // 0x58
	unsigned long long FixedValueSlotNumber; // 0x60
	enum <unnamed-enum-ArrayLikeOffset>
	{
		ArrayLikeOffset = 0,
		ObjectTypeOffset = 1,
		IsInterfaceOffset = 2,
		HasTailOffset = 3,
		IsAbcObjectOffset = 4,
		IsClassOffset = 5,
		IsFinalOffset = 6,
		TmpBitOffset = 7,
	};
	enum <unnamed-enum-ArrayLikeMask>
	{
		ArrayLikeMask = 1,
		ObjectTypeMask = 2,
		IsInterfaceMask = 4,
		HasTailMask = 8,
		IsAbcObjectMask = 16,
		IsClassMask = 32,
		IsFinalMask = 64,
		TmpBitMask = 128,
	};
private:
	unsigned long MemSize; // 0x68
	long long Flags; // 0x70
	Scaleform::GFx::AS3::BuiltinTraitsType TraitsType; // 0x78
	Scaleform::GFx::AS3::VM * pVM; // 0x80
	Scaleform::GFx::AS3::Object * ObjPool; // 0x88
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> pConstructor; // 0x90
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits const > pParent; // 0x98
	Scaleform::AutoPtr<Scaleform::GFx::AS3::VTable> pVTable; // 0xA0
	Scaleform::GFx::AS3::PrimitiveVS InitScope; // 0xB0
};
Scaleform::GFx::AS3::Class & Scaleform::GFx::AS3::Traits::GetClass(); // 0x140483CE0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Traits::GetSlotValue(Scaleform::GFx::AS3::Value & value, Scaleform::GFx::AS3::AbsoluteIndex ind, Scaleform::GFx::AS3::Object * obj); // 0x14048A190
const Scaleform::GFx::AS3::SlotInfo & Scaleform::GFx::AS3::Traits::GetSlotInfo(Scaleform::GFx::AS3::AbsoluteIndex ind); // 0x140489C50
void Scaleform::GFx::AS3::Traits::SetSlot(Scaleform::GFx::AS3::AbsoluteIndex index, const Scaleform::GFx::ASString & name, Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const > ns, Scaleform::GFx::AS3::VMAbcFile & file, const unsigned char * tiOffset, bool _const); // 0x1404A9450
void Scaleform::GFx::AS3::Traits::ClearInitScope(); // 0x1404FDEA0
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits const >
{
	typedef const Scaleform::GFx::AS3::Traits ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::Traits const >(Scaleform::Pickable<Scaleform::GFx::AS3::Traits const >);
	SPtr<Scaleform::GFx::AS3::Traits const >(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits const > &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::Traits const >(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits const > &);
	SPtr<Scaleform::GFx::AS3::Traits const >(const Scaleform::GFx::AS3::Traits *);
	~SPtr<Scaleform::GFx::AS3::Traits const >();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits const > & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::Traits const >);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits const > & operator=(const Scaleform::GFx::AS3::Traits *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits const > & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits const > &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits const > & Pick(const Scaleform::GFx::AS3::Traits *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits const > & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::Traits const >);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits const > & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits const > &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits const > & SetPtr(const Scaleform::GFx::AS3::Traits *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits const > & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Traits const > &);
	const Scaleform::GFx::AS3::Traits * operator->();
	const Scaleform::GFx::AS3::Traits & operator*();
	const Scaleform::GFx::AS3::Traits * & GetRawRef();
	const Scaleform::GFx::AS3::Traits * * GetRawPtr();
	const Scaleform::GFx::AS3::Traits * GetPtr();
	const Scaleform::GFx::AS3::Traits * operator const class Scaleform::GFx::AS3::Traits *();
private:
	void AddRef();
	void Release();
	const Scaleform::GFx::AS3::Traits * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::AutoPtr<Scaleform::GFx::AS3::VTable>
{
public:
	AutoPtr<Scaleform::GFx::AS3::VTable>(const Scaleform::AutoPtr<Scaleform::GFx::AS3::VTable> &);
	AutoPtr<Scaleform::GFx::AS3::VTable>(Scaleform::GFx::AS3::VTable *, bool);
	AutoPtr<Scaleform::GFx::AS3::VTable>(Scaleform::GFx::AS3::VTable *);
	~AutoPtr<Scaleform::GFx::AS3::VTable>();
	Scaleform::AutoPtr<Scaleform::GFx::AS3::VTable> & operator=(Scaleform::GFx::AS3::VTable *);
	Scaleform::AutoPtr<Scaleform::GFx::AS3::VTable> & operator=(const Scaleform::AutoPtr<Scaleform::GFx::AS3::VTable> &);
	Scaleform::GFx::AS3::VTable & operator*();
	Scaleform::GFx::AS3::VTable * operator->();
	Scaleform::GFx::AS3::VTable * GetPtr();
	bool operator bool();
	Scaleform::GFx::AS3::VTable * Release();
	void Reset(Scaleform::GFx::AS3::VTable *, bool);
private:
	Scaleform::GFx::AS3::VTable * pObject; // 0x0
	bool Owner; // 0x8
	Scaleform::GFx::AS3::VTable * constRelease();
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::ClassTraits::Traits :
	Scaleform::GFx::AS3::Traits
{
private:
	Traits(Scaleform::GFx::AS3::VM &);
public:
	Traits(Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::ClassTraits::Traits *);
	Traits(Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::ClassInfo &);
	virtual void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	void RegisterSlots();
	const Scaleform::GFx::AS3::ClassTraits::Traits * GetParent();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetInstanceTraits();
	bool IsValid();
	bool Coerce(const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &);
	bool CoerceValue(const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &);
	virtual Scaleform::GFx::ASString GetName();
	virtual Scaleform::GFx::ASString GetQualifiedName(Scaleform::GFx::AS3::QNameFormat);
	void SetInstanceTraits(Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::Traits>);
protected:
	virtual void InitOnDemand();
private:
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> ITraits; // 0xC0
public:
	virtual ~Traits();
};
class Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::Traits>
{
public:
	Pickable<Scaleform::GFx::AS3::InstanceTraits::Traits>(Scaleform::GFx::AS3::InstanceTraits::Traits *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::InstanceTraits::Traits>(Scaleform::GFx::AS3::InstanceTraits::Traits *);
	Pickable<Scaleform::GFx::AS3::InstanceTraits::Traits>();
	Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::Traits> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::Traits> &);
	Scaleform::GFx::AS3::InstanceTraits::Traits * GetPtr();
	Scaleform::GFx::AS3::InstanceTraits::Traits * operator->();
	Scaleform::GFx::AS3::InstanceTraits::Traits & operator*();
private:
	Scaleform::GFx::AS3::InstanceTraits::Traits * pV; // 0x0
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>(Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::Traits>);
	SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> &);
	SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>(Scaleform::GFx::AS3::InstanceTraits::Traits *);
	~SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::Traits>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> & operator=(Scaleform::GFx::AS3::InstanceTraits::Traits *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> & Pick(Scaleform::GFx::AS3::InstanceTraits::Traits *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::InstanceTraits::Traits>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> & SetPtr(Scaleform::GFx::AS3::InstanceTraits::Traits *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits> &);
	Scaleform::GFx::AS3::InstanceTraits::Traits * operator->();
	Scaleform::GFx::AS3::InstanceTraits::Traits & operator*();
	Scaleform::GFx::AS3::InstanceTraits::Traits * & GetRawRef();
	Scaleform::GFx::AS3::InstanceTraits::Traits * * GetRawPtr();
	Scaleform::GFx::AS3::InstanceTraits::Traits * GetPtr();
	Scaleform::GFx::AS3::InstanceTraits::Traits * operator class Scaleform::GFx::AS3::InstanceTraits::Traits *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::InstanceTraits::Traits * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
Scaleform::GFx::AS3::VTable & Scaleform::GFx::AS3::Object::GetVT(); // 0x14048BFD0