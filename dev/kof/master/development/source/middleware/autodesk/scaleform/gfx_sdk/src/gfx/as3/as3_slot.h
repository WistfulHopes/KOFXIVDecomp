#pragma once

class Scaleform::GFx::AS3::SlotInfo
{
	enum <unnamed-enum-aReadOnlyOffset>
	{
		aReadOnlyOffset = 0,
		aDontEnumOffset = 2,
		aCppBindingOffset = 4,
		aBindingTypeOffset = 6,
		aValueIndOffset = 9,
	};
	enum Attribute
	{
		aNone = 0,
		aReadOnly = 1,
		aDontEnum = 4,
		aCppBinding = 16,
	};
	enum ValTarget
	{
		valGet = 0,
		valExecute = 1,
	};
	enum BindingType
	{
		BT_Unknown = 0,
		BT_ValueArray = 1,
		BT_Value = 2,
		BT_ObjectAS = 3,
		BT_ObjectCpp = 4,
		BT_Boolean = 5,
		BT_Int = 6,
		BT_UInt = 7,
		BT_Number = 8,
		BT_String = 9,
		BT_ConstChar = 10,
		BT_Code = 11,
		BT_Get = 12,
		BT_Set = 13,
		BT_GetSet = 14,
	};
	enum <unnamed-enum-ValueIndMask>
	{
		ValueIndMask = 2147483647,
	};
private:
	SlotInfo(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const >, Scaleform::GFx::AS3::VMAbcFile &, const unsigned char *, long, const Scaleform::Ptr<Scaleform::GFx::ASStringNode> &);
public:
	SlotInfo(const Scaleform::GFx::AS3::SlotInfo &);
	SlotInfo(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const >, const Scaleform::GFx::AS3::ClassTraits::Traits *, long, const Scaleform::Ptr<Scaleform::GFx::ASStringNode> &);
	SlotInfo();
	~SlotInfo();
	Scaleform::GFx::AS3::SlotInfo & operator=(const Scaleform::GFx::AS3::SlotInfo &);
	bool IsBound2Value();
	bool IsReadonly();
	bool IsDontEnum();
	void SetDontEnum(bool);
	bool IsCppBinding();
	bool IsCode();
	bool IsMethod();
	bool IsGetter();
	bool IsSetter();
	bool IsReadWrite();
	bool IsConst();
	bool IsClass();
	bool IsClassOrConst();
	static bool IsValidCodeBT(Scaleform::GFx::AS3::SlotInfo::BindingType);
	Scaleform::GFx::AS3::CheckResult GetSlotValue(Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Object *);
	Scaleform::GFx::AS3::CheckResult GetSlotValueUnsafe(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::VTable *, Scaleform::GFx::AS3::SlotInfo::ValTarget);
	Scaleform::GFx::AS3::CheckResult GetSlotValueUnsafe(Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Object *);
	Scaleform::GFx::AS3::CheckResult SetSlotValue(Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::Value &, const Scaleform::GFx::AS3::VTable *);
	Scaleform::GFx::AS3::CheckResult SetSlotValue(Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Object *);
	const Scaleform::GFx::AS3::ClassTraits::Traits * GetDataType(Scaleform::GFx::AS3::VM &);
	bool IsAnyType();
	bool IsClassType();
	const unsigned char * GetTraitsInfoOffset();
	const Scaleform::GFx::AS3::VMAbcFile * GetFilePtr();
	class Collector;
	void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::Object &, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
private:
	void Bind(Scaleform::GFx::AS3::SlotInfo::BindingType, Scaleform::GFx::AS3::AbsoluteIndex);
public:
	const Scaleform::GFx::AS3::Instances::fl::Namespace & GetNamespace();
	Scaleform::GFx::AS3::SlotInfo::BindingType GetBindingType();
	long GetValueInd();
	Scaleform::GFx::AS3::AbsoluteIndex GetAValueInd();
	Scaleform::GFx::ASString GetQualifiedName();
	Scaleform::GFx::ASStringNode * GetQualifiedNameNode();
	Scaleform::GFx::ASString GetName();
private:
	void setNamespace(const Scaleform::GFx::AS3::Instances::fl::Namespace &);
	void DestroyPrimitiveMember(Scaleform::GFx::AS3::Object &);
	void ConstructPrimitiveMember(Scaleform::GFx::AS3::Object &);
	void CopyPrimitiveMember(Scaleform::GFx::AS3::Object *, Scaleform::GFx::AS3::Object *);
	void SetBindingType(Scaleform::GFx::AS3::SlotInfo::BindingType);
	void SetValueInd(Scaleform::GFx::AS3::AbsoluteIndex);
	void SetFlagsFromInt(long);
	long ReadOnly : 2; // 0x0
	long DontEnum : 2; // 0x0
	long CppBinding : 2; // 0x0
	long BindType : 5; // 0x0
	long Padding : 21; // 0x0
	long ValueInd; // 0x4
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > pNs; // 0x8
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const > CTraits; // 0x10
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> File; // 0x18
	const unsigned char * TraitsInfoOffset; // 0x20
	Scaleform::Ptr<Scaleform::GFx::ASStringNode> Name; // 0x28
};
class Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const >
{
public:
	Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const >(const Scaleform::GFx::AS3::Instances::fl::Namespace *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const >(const Scaleform::GFx::AS3::Instances::fl::Namespace *);
	Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const >();
	Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const > & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const > &);
	const Scaleform::GFx::AS3::Instances::fl::Namespace * GetPtr();
	const Scaleform::GFx::AS3::Instances::fl::Namespace * operator->();
	const Scaleform::GFx::AS3::Instances::fl::Namespace & operator*();
private:
	const Scaleform::GFx::AS3::Instances::fl::Namespace * pV; // 0x0
};
bool Scaleform::GFx::AS3::SlotInfo::IsReadWrite(); // 0x140490330
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >
{
	typedef const Scaleform::GFx::AS3::Instances::fl::Namespace ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const >);
	SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > &);
	SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >(const Scaleform::GFx::AS3::Instances::fl::Namespace *);
	~SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const >();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const >);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > & operator=(const Scaleform::GFx::AS3::Instances::fl::Namespace *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > & Pick(const Scaleform::GFx::AS3::Instances::fl::Namespace *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::Instances::fl::Namespace const >);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > & SetPtr(const Scaleform::GFx::AS3::Instances::fl::Namespace *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::Namespace const > &);
	const Scaleform::GFx::AS3::Instances::fl::Namespace * operator->();
	const Scaleform::GFx::AS3::Instances::fl::Namespace & operator*();
	const Scaleform::GFx::AS3::Instances::fl::Namespace * & GetRawRef();
	const Scaleform::GFx::AS3::Instances::fl::Namespace * * GetRawPtr();
	const Scaleform::GFx::AS3::Instances::fl::Namespace * GetPtr();
	const Scaleform::GFx::AS3::Instances::fl::Namespace * operator const class Scaleform::GFx::AS3::Instances::fl::Namespace *();
private:
	void AddRef();
	void Release();
	const Scaleform::GFx::AS3::Instances::fl::Namespace * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const >
{
	typedef const Scaleform::GFx::AS3::ClassTraits::Traits ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const >(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::Traits const >);
	SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const >(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const > &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const >(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const > &);
	SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const >(const Scaleform::GFx::AS3::ClassTraits::Traits *);
	~SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const >();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const > & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::Traits const >);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const > & operator=(const Scaleform::GFx::AS3::ClassTraits::Traits *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const > & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const > &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const > & Pick(const Scaleform::GFx::AS3::ClassTraits::Traits *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const > & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::ClassTraits::Traits const >);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const > & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const > &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const > & SetPtr(const Scaleform::GFx::AS3::ClassTraits::Traits *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const > & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::ClassTraits::Traits const > &);
	const Scaleform::GFx::AS3::ClassTraits::Traits * operator->();
	const Scaleform::GFx::AS3::ClassTraits::Traits & operator*();
	const Scaleform::GFx::AS3::ClassTraits::Traits * & GetRawRef();
	const Scaleform::GFx::AS3::ClassTraits::Traits * * GetRawPtr();
	const Scaleform::GFx::AS3::ClassTraits::Traits * GetPtr();
	const Scaleform::GFx::AS3::ClassTraits::Traits * operator const class Scaleform::GFx::AS3::ClassTraits::Traits *();
private:
	void AddRef();
	void Release();
	const Scaleform::GFx::AS3::ClassTraits::Traits * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::VMAbcFile>(Scaleform::Pickable<Scaleform::GFx::AS3::VMAbcFile>);
	SPtr<Scaleform::GFx::AS3::VMAbcFile>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::VMAbcFile>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> &);
	SPtr<Scaleform::GFx::AS3::VMAbcFile>(Scaleform::GFx::AS3::VMAbcFile *);
	~SPtr<Scaleform::GFx::AS3::VMAbcFile>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::VMAbcFile>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> & operator=(Scaleform::GFx::AS3::VMAbcFile *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> & Pick(Scaleform::GFx::AS3::VMAbcFile *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::VMAbcFile>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> & SetPtr(Scaleform::GFx::AS3::VMAbcFile *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> &);
	Scaleform::GFx::AS3::VMAbcFile * operator->();
	Scaleform::GFx::AS3::VMAbcFile & operator*();
	Scaleform::GFx::AS3::VMAbcFile * & GetRawRef();
	Scaleform::GFx::AS3::VMAbcFile * * GetRawPtr();
	Scaleform::GFx::AS3::VMAbcFile * GetPtr();
	Scaleform::GFx::AS3::VMAbcFile * operator class Scaleform::GFx::AS3::VMAbcFile *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::VMAbcFile * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::GFx::AS3::ASStringNodeHashFunc
{
public:
	unsigned long long operator()(const Scaleform::GFx::ASString &);
	unsigned long long operator()(const Scaleform::GFx::ASStringNode *);
};