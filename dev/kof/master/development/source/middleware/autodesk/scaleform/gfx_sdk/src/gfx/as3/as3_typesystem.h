#pragma once

class Scaleform::GFx::AS3::TR::Type
{
	enum TypeTag
	{
		tVoid = 0,
		tUndefined = 1,
		tKilled = 2,
		tEffect = 3,
		tBooleanConst = 4,
		tNumberConst = 5,
		tSIntConst = 6,
		tUIntConst = 7,
		tStringConst = 8,
		tAbsObjectConst = 9,
		tTraits = 10,
	};
protected:
	Type(const Scaleform::GFx::AS3::Traits *, Scaleform::GFx::AS3::Boolean3, Scaleform::GFx::AS3::TR::Type::TypeTag);
	struct HashFunctor;
public:
	bool operator==(const Scaleform::GFx::AS3::TR::Type &);
	bool GetWith();
	Scaleform::GFx::AS3::Boolean3 IsNull();
	Scaleform::GFx::AS3::TR::Type::TypeTag GetTag();
	const Scaleform::GFx::AS3::Traits * GetTraits();
	bool IsConst();
	bool IsBooleanConst();
	bool IsNumberConst();
	bool IsSIntConst();
	bool IsUIntConst();
	bool IsStringConst();
	bool IsAbsObjectConst();
	bool IsUndefined();
	bool IsKilled();
	bool IsVoid();
	bool IsEffect();
	bool IsAny();
	bool IsBoolean();
	bool IsNumber();
	bool IsSInt();
	bool IsUInt();
	bool IsString();
	bool IsNamespace();
	bool IsFunction();
	bool IsPrimitiveType();
	bool IsNotRefCountedType();
	bool IsNumericType();
	bool IsOfType(const Scaleform::GFx::AS3::ClassTraits::Traits &);
	bool IsOfType(const Scaleform::GFx::AS3::TR::Type *);
	bool Coerce(const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &);
private:
	void SetWith(bool);
	enum <unnamed-enum-WithSize>
	{
		WithSize = 1,
		NullSize = 2,
		TypeTagSize = 4,
		PaddingSize = 25,
	};
	unsigned long With : 1; // 0x0
	unsigned long Null : 2; // 0x0
	unsigned long Tag : 4; // 0x0
	unsigned long Padding01 : 25; // 0x0
	unsigned long Padding02; // 0x4
	const Scaleform::GFx::AS3::Traits * Tr; // 0x8
};
struct Scaleform::GFx::AS3::TR::Type::HashFunctor
{
	unsigned long long operator()(const Scaleform::PtrCmp<Scaleform::GFx::AS3::TR::Type const > &);
};
struct Scaleform::PtrCmp<Scaleform::GFx::AS3::TR::Type const >
{
	PtrCmp<Scaleform::GFx::AS3::TR::Type const >(const Scaleform::GFx::AS3::TR::Type *);
	PtrCmp<Scaleform::GFx::AS3::TR::Type const >(const Scaleform::GFx::AS3::TR::Type &);
	PtrCmp<Scaleform::GFx::AS3::TR::Type const >();
	const Scaleform::GFx::AS3::TR::Type * GetPtr();
	const Scaleform::GFx::AS3::TR::Type * operator const class Scaleform::GFx::AS3::TR::Type *();
	const Scaleform::GFx::AS3::TR::Type * operator->();
	bool operator==(const Scaleform::PtrCmp<Scaleform::GFx::AS3::TR::Type const > &);
	bool operator==(const Scaleform::GFx::AS3::TR::Type *);
protected:
	const Scaleform::GFx::AS3::TR::Type * P; // 0x0
};
class Scaleform::GFx::AS3::TR::TypeNull :
	Scaleform::GFx::AS3::TR::Type
{
protected:
	TypeNull(Scaleform::GFx::AS3::VM &);
};
class Scaleform::GFx::AS3::TR::TypeVoid :
	Scaleform::GFx::AS3::TR::Type
{
protected:
	TypeVoid(Scaleform::GFx::AS3::VM &);
};
class Scaleform::GFx::AS3::TR::TypeUndefined :
	Scaleform::GFx::AS3::TR::Type
{
protected:
	TypeUndefined(Scaleform::GFx::AS3::VM &);
};
class Scaleform::GFx::AS3::TR::TypeKilled :
	Scaleform::GFx::AS3::TR::Type
{
protected:
	TypeKilled(Scaleform::GFx::AS3::VM &);
};
class Scaleform::GFx::AS3::TR::TypeEffect :
	Scaleform::GFx::AS3::TR::Type
{
protected:
	TypeEffect(Scaleform::GFx::AS3::VM &);
};
class Scaleform::GFx::AS3::TR::TypeBooleanConst :
	Scaleform::GFx::AS3::TR::Type
{
protected:
	TypeBooleanConst(Scaleform::GFx::AS3::VM &, bool);
public:
	bool GetVal();
private:
	bool Val; // 0x10
	char Padding1[7]; // 0x11
};
class Scaleform::GFx::AS3::TR::TypeNumberConst :
	Scaleform::GFx::AS3::TR::Type
{
protected:
	TypeNumberConst(Scaleform::GFx::AS3::VM &, double);
public:
	double GetVal();
private:
	double Val; // 0x10
};
class Scaleform::GFx::AS3::TR::TypeSIntConst :
	Scaleform::GFx::AS3::TR::Type
{
protected:
	TypeSIntConst(Scaleform::GFx::AS3::VM &, long);
public:
	long GetVal();
private:
	long Val; // 0x10
	unsigned long Padding1; // 0x14
};
class Scaleform::GFx::AS3::TR::TypeUIntConst :
	Scaleform::GFx::AS3::TR::Type
{
protected:
	TypeUIntConst(Scaleform::GFx::AS3::VM &, unsigned long);
public:
	unsigned long GetVal();
private:
	unsigned long Val; // 0x10
	unsigned long Padding1; // 0x14
};
class Scaleform::GFx::AS3::TR::TypeStringConst :
	Scaleform::GFx::AS3::TR::Type
{
protected:
	TypeStringConst(Scaleform::GFx::AS3::VM &, Scaleform::GFx::ASStringNode *);
public:
	Scaleform::GFx::ASStringNode * GetVal();
private:
	Scaleform::GFx::ASStringNode * Val; // 0x10
};
class Scaleform::GFx::AS3::TR::TypeAbsObjConst :
	Scaleform::GFx::AS3::TR::Type
{
protected:
	TypeAbsObjConst(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::Instances::fl::Namespace &);
	TypeAbsObjConst(Scaleform::GFx::AS3::Instances::fl::Object &);
	TypeAbsObjConst(const Scaleform::GFx::AS3::Value &);
public:
	Scaleform::GFx::AS3::Value::ObjectTag GetTag();
	unsigned long long GetValEncoded();
	Scaleform::GFx::AS3::Value GetAbsObject();
private:
	unsigned long long Val; // 0x10
};
class Scaleform::GFx::AS3::TR::TypeTraits :
	Scaleform::GFx::AS3::TR::Type
{
protected:
	TypeTraits(const Scaleform::GFx::AS3::Traits &, Scaleform::GFx::AS3::Boolean3);
};
Scaleform::GFx::AS3::Value Scaleform::GFx::AS3::TR::NodeConst::GetAbsObject(); // 0x140483130
class Scaleform::GFx::AS3::TR::TypeSystem
{
public:
	TypeSystem(const Scaleform::GFx::AS3::TR::TypeSystem &);
	TypeSystem(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::VMFile &, Scaleform::GFx::AS3::Bubble &);
	Scaleform::GFx::AS3::VM & GetVM();
	Scaleform::GFx::AS3::VMFile & GetFile();
	bool IsPrimitiveType(const Scaleform::GFx::AS3::Traits *);
	bool IsNumericType(const Scaleform::GFx::AS3::Traits *);
	bool IsNotRefCountedType(const Scaleform::GFx::AS3::Traits *);
	bool IsNotObjectType(const Scaleform::GFx::AS3::Traits *);
	bool IsNotNullableType(const Scaleform::GFx::AS3::TR::Type *);
	bool IsNotNullableType(const Scaleform::GFx::AS3::Traits *);
	bool IsStringType(Scaleform::GFx::AS3::TR::Def *);
	bool IsBooleanType(Scaleform::GFx::AS3::TR::Def *);
	bool IsSIntType(Scaleform::GFx::AS3::TR::Def *);
	bool IsUIntType(Scaleform::GFx::AS3::TR::Def *);
	bool IsNumberType(Scaleform::GFx::AS3::TR::Def *);
	bool IsNamespaceType(const Scaleform::GFx::AS3::Traits *);
	bool IsNamespaceType(Scaleform::GFx::AS3::TR::Def *);
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetObjectType();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetClassType();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetArrayType();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetStringType();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetNumberType();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetSIntType();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetUIntType();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetBooleanType();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetNamespaceType();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetXMLListType();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetVoidType();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetUndefinedType();
	Scaleform::GFx::AS3::Value::TraceNullType CanBeNull(const Scaleform::GFx::AS3::Traits &);
	Scaleform::GFx::AS3::Boolean3 CanBeNull3(const Scaleform::GFx::AS3::Traits &);
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetFunctType(const Scaleform::GFx::AS3::Value &);
	const Scaleform::GFx::AS3::Traits * GetValueTraits(const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::Traits * GetPropertyType(const Scaleform::GFx::AS3::Traits &, const Scaleform::GFx::AS3::SlotInfo &);
	const Scaleform::GFx::AS3::TR::Type * GetNull(const Scaleform::GFx::AS3::Traits &);
	const Scaleform::GFx::AS3::TR::Type * GetNull();
	const Scaleform::GFx::AS3::TR::Type * GetVoid();
	const Scaleform::GFx::AS3::TR::Type * GetUndefined();
	const Scaleform::GFx::AS3::TR::Type * GetKilled();
	const Scaleform::GFx::AS3::TR::Type * GetEffect();
	const Scaleform::GFx::AS3::TR::Type * GetTrue();
	const Scaleform::GFx::AS3::TR::Type * GetFalse();
	const Scaleform::GFx::AS3::TR::Type * GetTypeBoolean();
	const Scaleform::GFx::AS3::TR::Type * GetTypeNumber();
	const Scaleform::GFx::AS3::TR::Type * GetTypeSInt();
	const Scaleform::GFx::AS3::TR::Type * GetTypeUInt();
	const Scaleform::GFx::AS3::TR::Type * GetTypeFunction();
	const Scaleform::GFx::AS3::TR::Type * GetConstBoolean(bool);
	const Scaleform::GFx::AS3::TR::Type * GetConstNumber(double);
	const Scaleform::GFx::AS3::TR::Type * GetConstSInt(long);
	const Scaleform::GFx::AS3::TR::Type * GetConstUInt(unsigned long);
	const Scaleform::GFx::AS3::TR::Type * GetConstString(const Scaleform::GFx::ASString &);
	const Scaleform::GFx::AS3::TR::Type * GetConstString(Scaleform::GFx::ASStringNode *);
	const Scaleform::GFx::AS3::TR::Type * GetConstNamespace(Scaleform::GFx::AS3::Instances::fl::Namespace &);
	const Scaleform::GFx::AS3::TR::Type * GetConstAbsObj(const Scaleform::GFx::AS3::Value &);
	const Scaleform::GFx::AS3::TR::Type * GetAnyType(Scaleform::GFx::AS3::Boolean3);
	const Scaleform::GFx::AS3::TR::Type * GetType(const Scaleform::GFx::AS3::Value &);
	const Scaleform::GFx::AS3::TR::Type * GetType(const Scaleform::GFx::AS3::Traits *, bool);
	const Scaleform::GFx::AS3::TR::Type * GetType(const Scaleform::GFx::AS3::Traits &, bool);
	const Scaleform::GFx::AS3::TR::Type * GetType(const Scaleform::GFx::AS3::Traits *, Scaleform::GFx::AS3::Boolean3, bool);
	const Scaleform::GFx::AS3::TR::Type * GetType(const Scaleform::GFx::AS3::Traits &, Scaleform::GFx::AS3::Boolean3, bool);
	const Scaleform::GFx::AS3::TR::Type * GetTypeWith(const Scaleform::GFx::AS3::TR::Type *, bool);
private:
	Scaleform::GFx::AS3::TR::TypeSystem & operator=(const Scaleform::GFx::AS3::TR::TypeSystem &);
	class TTypeSet;
	class TASStringNodeSet;
	Scaleform::GFx::AS3::VM & VMRef; // 0x0
	Scaleform::GFx::AS3::VMFile & File; // 0x8
	Scaleform::GFx::AS3::Bubble & Allocator; // 0x10
	Scaleform::GFx::AS3::TR::TypeNull Null; // 0x18
	Scaleform::GFx::AS3::TR::TypeVoid Void; // 0x28
	Scaleform::GFx::AS3::TR::TypeUndefined Undefined; // 0x38
	Scaleform::GFx::AS3::TR::TypeKilled Killed; // 0x48
	Scaleform::GFx::AS3::TR::TypeEffect Effect; // 0x58
	Scaleform::GFx::AS3::TR::TypeBooleanConst True; // 0x68
	Scaleform::GFx::AS3::TR::TypeBooleanConst False; // 0x80
	Scaleform::GFx::AS3::TR::TypeTraits TBoolean; // 0x98
	Scaleform::GFx::AS3::TR::TypeTraits TNumber; // 0xA8
	Scaleform::GFx::AS3::TR::TypeTraits TSInt; // 0xB8
	Scaleform::GFx::AS3::TR::TypeTraits TUInt; // 0xC8
	Scaleform::GFx::AS3::TR::TypeTraits TFunction; // 0xD8
	Scaleform::HashSetDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,348,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor> > TypeSet; // 0xE8
	Scaleform::HashSetUncachedDH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,348> ASStringNodeSet; // 0xF8
	Scaleform::HashSetDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> > > > AbsObjects; // 0x108
public:
	~TypeSystem();
};
bool Scaleform::GFx::AS3::TR::TypeSystem::IsNotNullableType(const Scaleform::GFx::AS3::TR::Type * t); // 0x14048FC10
const Scaleform::GFx::AS3::TR::Type * Scaleform::GFx::AS3::TR::TypeSystem::GetType(const Scaleform::GFx::AS3::Traits & tr, bool with); // 0x14048BA80
const Scaleform::GFx::AS3::TR::Type * Scaleform::GFx::AS3::TR::TypeSystem::GetType(const Scaleform::GFx::AS3::Traits * tr, bool with); // 0x14048BC00
struct Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const > :
	Scaleform::PtrCmp<Scaleform::GFx::AS3::TR::Type const >
{
	PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >(const Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const > &);
	PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >(const Scaleform::GFx::AS3::TR::Type *);
	PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >(const Scaleform::GFx::AS3::TR::Type &);
	bool operator==(const Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const > &);
	bool operator==(const Scaleform::GFx::AS3::TR::Type *);
};
class Scaleform::HashSetDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,348,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor> > :
	Scaleform::HashSetBase<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::AllocatorDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,348>,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor> >
{
private:
	void * pHeap; // 0x8
	class SelfType;
	class BaseType;
	struct ValueType;
public:
	HashSetDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,348,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform:(const Scaleform::HashSetDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,348,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor> > &);
	HashSetDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,348,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform:(void *, long);
	HashSetDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,348,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform:(void *);
	~HashSetDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,348,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform();
	void operator=(const Scaleform::HashSetDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,348,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor> > &);
	void CheckExpand();
	void Resize(unsigned long long);
	void SetCapacity(unsigned long long);
};
class Scaleform::HashSetUncachedDH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,348> :
	Scaleform::HashSetDH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,348,Scaleform::HashsetEntry<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc> >
{
	class SelfType;
	class BaseType;
	class ValueType;
public:
	HashSetUncachedDH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,348>(const Scaleform::HashSetUncachedDH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,348> &);
	HashSetUncachedDH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,348>(void *, long);
	HashSetUncachedDH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,348>(void *);
	~HashSetUncachedDH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,348>();
	void operator=(const Scaleform::HashSetUncachedDH<Scaleform::Ptr<Scaleform::GFx::ASStringNode>,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,Scaleform::GFx::AS3::ASStringNodePtrHashFunc,348> &);
};
class Scaleform::HashSetDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> > > > :
	Scaleform::HashSetBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::AllocatorDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> > > >
{
private:
	void * pHeap; // 0x8
	class SelfType;
	class BaseType;
	class ValueType;
public:
	HashSetDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,(const Scaleform::HashSetDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> > > > &);
	HashSetDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,(void *, long);
	HashSetDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,(void *);
	~HashSetDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >();
	void operator=(const Scaleform::HashSetDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> >,2,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> > > > &);
	void CheckExpand();
	void Resize(unsigned long long);
	void SetCapacity(unsigned long long);
};