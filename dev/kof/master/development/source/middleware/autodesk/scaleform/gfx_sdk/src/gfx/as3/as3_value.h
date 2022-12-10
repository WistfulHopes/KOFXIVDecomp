#pragma once

enum Scaleform::GFx::AS3::QNameFormat
{
	qnfWithColons = 0,
	qnfWithDot = 1,
};
enum Scaleform::GFx::AS3::TCodeType
{
	CT_Method = 0,
	CT_Get = 1,
	CT_Set = 2,
};
struct Scaleform::GFx::AS3::ThunkInfo
{
	typedef void(*TThunkFunc)(const Scaleform::GFx::AS3::ThunkInfo &, Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &, unsigned long, Scaleform::GFx::AS3::Value *);
	void(*Method)(const Scaleform::GFx::AS3::ThunkInfo &, Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &, unsigned long, Scaleform::GFx::AS3::Value *); // 0x0
	const Scaleform::GFx::AS3::TypeInfo * * ArgType; // 0x8
	const char * Name; // 0x10
	const char * NamespaceName; // 0x18
	unsigned long long NsKind : 4; // 0x20
	unsigned long long CodeType_ : 2; // 0x20
	unsigned long long MinArgNum_ : 3; // 0x20
	unsigned long long MaxArgNum_ : 12; // 0x20
	unsigned long long Ellipsis_ : 1; // 0x20
	unsigned long long DefArgNum_ : 10; // 0x20
	const Scaleform::GFx::AS3::Abc::ConstValue * DefArgValue; // 0x28
	Scaleform::GFx::AS3::Abc::NamespaceKind GetNsKind();
	Scaleform::GFx::AS3::TCodeType GetCodeType();
	unsigned long GetMinArgNum();
	unsigned long GetMaxArgNum();
	unsigned long GetDefArgNum();
	bool HasEllipsis();
	const Scaleform::GFx::AS3::TypeInfo * GetResultType();
	static void EmptyFunc(const Scaleform::GFx::AS3::ThunkInfo &, Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value &, unsigned long, Scaleform::GFx::AS3::Value *);
	Scaleform::GFx::ASString GetQualifiedName(Scaleform::GFx::AS3::StringManager &, Scaleform::GFx::AS3::QNameFormat);
};
struct Scaleform::GFx::AS3::OpStackLayout
{
	OpStackLayout();
	bool DiscardResult; // 0x0
	bool ResultOnStack; // 0x1
	bool Closure; // 0x2
	unsigned char NsDataNum; // 0x3
	unsigned short ArgC; // 0x4
};
enum Scaleform::GFx::AS3::StrongRefType
{
	StrongRefValue = 0,
};
class Scaleform::GFx::AS3::Value
{
	typedef double Number;
	enum KindType
	{
		kUndefined = 0,
		kBoolean = 1,
		kInt = 2,
		kUInt = 3,
		kNumber = 4,
		kThunk = 5,
		kMethodInd = 6,
		kVTableInd = 7,
		kInstanceTraits = 8,
		kClassTraits = 9,
		kString = 10,
		kNamespace = 11,
		kObject = 12,
		kThunkClosure = 13,
		kVTableIndClosure = 14,
	};
	enum Hint
	{
		hintNone = 0,
		hintNumber = 1,
		hintString = 2,
	};
	enum TraceNullType
	{
		NotNull = 0,
		Null = 1,
		NullOrNot = 2,
	};
	enum NotRefCountedType
	{
		NotRefCounted = 0,
	};
	enum ObjectTag
	{
		otObject = 0,
		otNamespace = 2,
		ObjectTagMask = 2,
	};
public:
	Value(Scaleform::GFx::AS3::Object *, const Scaleform::GFx::AS3::ThunkInfo &, Scaleform::PickType);
	Value(Scaleform::GFx::AS3::Value &, Scaleform::PickType);
	Value(Scaleform::GFx::AS3::ClassTraits::Traits &, Scaleform::GFx::AS3::Value::TraceNullType);
	Value(Scaleform::GFx::AS3::InstanceTraits::Traits &, Scaleform::GFx::AS3::Value::TraceNullType);
	Value(Scaleform::GFx::AS3::Object *, long, bool);
	Value(Scaleform::GFx::AS3::Object *, const Scaleform::GFx::AS3::ThunkInfo &);
	Value(Scaleform::GFx::AS3::Instances::fl::Namespace *);
	Value(Scaleform::GFx::AS3::Object *);
	Value(Scaleform::GFx::ASStringNode *);
	Value(const Scaleform::GFx::ASString &);
	Value(const Scaleform::GFx::AS3::ThunkInfo &);
	Value(double);
	Value(float);
	Value(unsigned long);
	Value(unsigned long long);
	Value(long);
	Value(bool);
	Value(long, const Scaleform::GFx::AS3::Traits &, Scaleform::GFx::AS3::Value::KindType);
	Value();
	Value(const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::StrongRefType);
	Value(Scaleform::GFx::AS3::StackWindowBase &);
	Value(Scaleform::GFx::AS3::VSBase &);
	Value(const Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value::NotRefCountedType);
	Value(const Scaleform::GFx::AS3::Value &);
	~Value();
	void Assign(Scaleform::GFx::AS3::Instances::fl::Namespace *);
	void Assign(Scaleform::GFx::AS3::Object *);
	void Assign(Scaleform::GFx::ASStringNode *);
	void Assign(const Scaleform::GFx::ASString &);
	void Assign(const Scaleform::GFx::AS3::ThunkInfo &);
	void Assign(double);
	void Assign(unsigned long);
	void Assign(long);
	void Assign(bool);
	void Assign(const Scaleform::GFx::AS3::Value &);
	void AssignUnsafe(Scaleform::GFx::AS3::Instances::fl::Namespace *);
	void AssignUnsafe(Scaleform::GFx::AS3::Object *);
	void AssignUnsafe(Scaleform::GFx::ASStringNode *);
	void AssignUnsafe(const Scaleform::GFx::ASString &);
	void AssignUnsafe(const Scaleform::GFx::AS3::ThunkInfo &);
	void AssignUnsafe(double);
	void AssignUnsafe(unsigned long);
	void AssignUnsafe(long);
	void AssignUnsafe(bool);
	void AssignUnsafe(const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::Value & operator=(Scaleform::GFx::AS3::Instances::fl::Namespace *);
	Scaleform::GFx::AS3::Value & operator=(Scaleform::GFx::AS3::Object *);
	Scaleform::GFx::AS3::Value & operator=(Scaleform::GFx::ASStringNode *);
	Scaleform::GFx::AS3::Value & operator=(const Scaleform::GFx::ASString &);
	Scaleform::GFx::AS3::Value & operator=(const Scaleform::GFx::AS3::ThunkInfo &);
	Scaleform::GFx::AS3::Value & operator=(double);
	Scaleform::GFx::AS3::Value & operator=(unsigned long);
	Scaleform::GFx::AS3::Value & operator=(long);
	Scaleform::GFx::AS3::Value & operator=(bool);
	Scaleform::GFx::AS3::Value & operator=(const Scaleform::GFx::AS3::Value &);
	void Pick(Scaleform::GFx::AS3::StackWindowBase &);
	void Pick(Scaleform::GFx::AS3::VSBase &);
	void PickUnsafe(Scaleform::GFx::AS3::StackWindowBase &);
	void PickUnsafe(Scaleform::GFx::AS3::VSBase &);
	void PickUnsafe(Scaleform::GFx::AS3::Instances::fl::Namespace *);
	void PickUnsafe(Scaleform::GFx::AS3::Object *);
	void PickUnsafe(Scaleform::GFx::AS3::Value &);
	void SetUndefined();
	void SetUndefinedUnsafe();
	void SetNull();
	void SetNullUnsafe();
	void SetBool(bool);
	void SetBoolUnsafe(bool);
	void SetSInt32(long);
	void SetSInt32Unsafe(long);
	void SetUPInt(unsigned long long);
	void SetUPIntUnsafe(unsigned long long);
	void SetUInt32(unsigned long);
	void SetUInt32Unsafe(unsigned long);
	void SetNumber(double);
	void SetNumberUnsafe(double);
	void SetWith(bool);
	void SetWeakRef(bool);
	void SetSuperCall(bool);
	void Swap(Scaleform::GFx::AS3::Value &);
	void SetTraceNullType(Scaleform::GFx::AS3::Value::TraceNullType);
	Scaleform::GFx::ASStringNode * operator struct Scaleform::GFx::ASStringNode *();
	Scaleform::GFx::ASString operator class Scaleform::GFx::ASString();
	bool & operator bool &();
	bool operator bool();
	long & operator long &();
	long operator long();
	unsigned long & operator unsigned long &();
	unsigned long operator unsigned long();
	double & operator double &();
	double operator double();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> operator class Scaleform::GFx::AS3::SPtr<class Scaleform::GFx::AS3::Object>();
	Scaleform::GFx::AS3::Object & operator class Scaleform::GFx::AS3::Object &();
	const Scaleform::GFx::AS3::ThunkInfo & operator const struct Scaleform::GFx::AS3::ThunkInfo &();
	Scaleform::GFx::AS3::Instances::fl::Namespace & operator class Scaleform::GFx::AS3::Instances::fl::Namespace &();
	const Scaleform::GFx::AS3::ThunkInfo & GetThunkFunct();
	bool AsBool();
	bool & AsBool();
	long AsInt();
	long & AsInt();
	unsigned long AsUInt();
	unsigned long & AsUInt();
	double AsNumber();
	double & AsNumber();
	Scaleform::GFx::ASStringNode * AsStringNode();
	Scaleform::GFx::ASString AsString();
	Scaleform::GFx::AS3::Object * GetObjectA();
	Scaleform::Pickable<Scaleform::GFx::AS3::Object> GetPickableObject();
	Scaleform::GFx::AS3::GASRefCountBase * GetGASRefCountBase();
	Scaleform::GFx::AS3::Instances::fl::Namespace * GetNamespace();
	Scaleform::GFx::AS3::Object * GetClosure();
	Scaleform::GFx::AS3::GASRefCountBase * * AsGASRefCountBasePtrPtr();
	Scaleform::GFx::AS3::GASRefCountBase * * AsClosurePtrPtr();
	const Scaleform::GFx::AS3::ThunkInfo & AsThunk();
	const Scaleform::GFx::AS3::Instances::fl::Namespace & AsNamespace();
	const Scaleform::GFx::AS3::Traits & GetTraits();
	static const Scaleform::GFx::AS3::Value & GetUndefined();
	static const Scaleform::GFx::AS3::Value & GetNull();
	bool IsWeakRef();
	bool IsValidWeakRef();
	bool MakeWeakRef();
	bool MakeStrongRef();
	enum <unnamed-enum-kindMask>
	{
		kindMask = 31,
		valueTypeMask = 96,
		valueTypeOffset = 5,
		withMask = 256,
		weakRefMask = 512,
		superCallMask = 1024,
	};
	Scaleform::GFx::AS3::Value::KindType GetKind();
	Scaleform::GFx::AS3::Value::ObjectTag GetObjectTag();
	Scaleform::GFx::ASStringNode * GetStringNode();
	Scaleform::GFx::AS3::Abc::MiInd GetMethodInfoInd();
	long GetVTableInd();
	Scaleform::GFx::AS3::Value::TraceNullType GetTraceNullType();
	bool GetWith();
	bool IsSuperCall();
	Scaleform::GFx::AS3::InstanceTraits::Traits & GetInstanceTraits();
	Scaleform::GFx::AS3::ClassTraits::Traits & GetClassTraits();
	Scaleform::GFx::AS3::CheckResult Convert2PrimitiveValueUnsafe(Scaleform::GFx::ASStringManager &, Scaleform::GFx::AS3::Value &, Scaleform::GFx::AS3::Value::Hint);
	Scaleform::GFx::AS3::CheckResult Convert2PrimitiveValueUnsafeHintNumber(Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::CheckResult ToPrimitiveValue(Scaleform::GFx::ASStringManager &);
	Scaleform::GFx::AS3::CheckResult ToPrimitiveValueHintNumber();
	bool Convert2Boolean();
	void ToBooleanValue();
	Scaleform::GFx::AS3::CheckResult Convert2NumberInline(double &);
	Scaleform::GFx::AS3::CheckResult Convert2Number(double &);
	Scaleform::GFx::AS3::CheckResult ToNumberValueInline();
	Scaleform::GFx::AS3::CheckResult ToNumberValue();
	Scaleform::GFx::AS3::CheckResult Convert2Int32(long &);
	Scaleform::GFx::AS3::CheckResult ToInt32Value();
	Scaleform::GFx::AS3::CheckResult Convert2UInt32(unsigned long &);
	Scaleform::GFx::AS3::CheckResult ToUInt32Value();
	Scaleform::GFx::AS3::CheckResult Convert2String(Scaleform::StringBuffer &);
	Scaleform::GFx::AS3::CheckResult Convert2String(Scaleform::GFx::ASString &);
	Scaleform::GFx::AS3::CheckResult ToStringValue(Scaleform::GFx::AS3::StringManager &);
	void Clean();
	bool IsNull();
	bool IsInt();
	static bool IsInt(const Scaleform::GFx::AS3::Value::KindType);
	bool IsIntStrict();
	static bool IsIntStrict(const Scaleform::GFx::AS3::Value::KindType);
	bool IsBool();
	static bool IsBool(const Scaleform::GFx::AS3::Value::KindType);
	bool IsUInt();
	static bool IsUInt(const Scaleform::GFx::AS3::Value::KindType);
	bool IsUIntStrict();
	static bool IsUIntStrict(const Scaleform::GFx::AS3::Value::KindType);
	bool IsNumber();
	static bool IsNumber(const Scaleform::GFx::AS3::Value::KindType);
	bool IsString();
	static bool IsString(const Scaleform::GFx::AS3::Value::KindType);
	bool IsUndefined();
	static bool IsUndefined(const Scaleform::GFx::AS3::Value::KindType);
	bool IsNullOrUndefined();
	bool IsObjectStrict();
	static bool IsObjectStrict(const Scaleform::GFx::AS3::Value::KindType);
	bool IsObject();
	static bool IsObject(const Scaleform::GFx::AS3::Value::KindType);
	bool IsThunk();
	static bool IsThunk(const Scaleform::GFx::AS3::Value::KindType);
	bool HasThunk();
	static bool HasThunk(const Scaleform::GFx::AS3::Value::KindType);
	bool IsNamespace();
	static bool IsNamespace(const Scaleform::GFx::AS3::Value::KindType);
	bool IsThunkClosure();
	static bool IsThunkClosure(const Scaleform::GFx::AS3::Value::KindType);
	bool IsMethodInd();
	static bool IsMethodInd(const Scaleform::GFx::AS3::Value::KindType);
	bool IsVTableInd();
	static bool IsVTableInd(const Scaleform::GFx::AS3::Value::KindType);
	bool IsVTableIndClosure();
	static bool IsVTableIndClosure(const Scaleform::GFx::AS3::Value::KindType);
	bool IsClosure();
	static bool IsClosure(const Scaleform::GFx::AS3::Value::KindType);
	bool IsCallable();
	static bool IsCallable(const Scaleform::GFx::AS3::Value::KindType);
	bool IsNumeric();
	static bool IsNumeric(const Scaleform::GFx::AS3::Value::KindType);
	bool IsPrimitive();
	static bool IsPrimitive(const Scaleform::GFx::AS3::Value::KindType);
	bool IsRefCounted();
	static bool IsRefCounted(const Scaleform::GFx::AS3::Value::KindType);
	bool IsFunction();
	bool IsGarbageCollectable();
	bool IsTraits();
	static bool IsTraits(const Scaleform::GFx::AS3::Value::KindType);
	bool IsTraitsStrict();
	static bool IsTraitsStrict(const Scaleform::GFx::AS3::Value::KindType);
	bool IsClassTraits();
	static bool IsClassTraits(const Scaleform::GFx::AS3::Value::KindType);
	bool IsInstanceTraits();
	static bool IsInstanceTraits(const Scaleform::GFx::AS3::Value::KindType);
	bool IsNaN();
	bool IsPOSITIVE_INFINITY();
	bool IsNEGATIVE_INFINITY();
	bool IsNaNOrInfinity();
	bool IsPOSITIVE_ZERO();
	bool IsNEGATIVE_ZERO();
	bool IsNaN_OR_NP_ZERO();
	bool operator==(const Scaleform::GFx::AS3::Value &);
	bool operator!=(const Scaleform::GFx::AS3::Value &);
	struct HashFunctor;
	Scaleform::GFx::AS3::Value operator()(Scaleform::GFx::AS3::VM &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> constructor(Scaleform::GFx::AS3::VM &);
private:
	void AddRefString();
	void AddRefSNode();
	void ReleaseSNode();
	void AddRefObject();
	void AddRefClosure();
	void AddRefMethodClosure();
	void AddRefInternal();
	void ReleaseInternal();
	void AddRefWeakRef();
	void ReleaseWeakRef();
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::GASRefCountBase * GetWeakBase();
	static unsigned long GetFlags(Scaleform::GFx::AS3::Value::KindType);
	void SetFlags(unsigned long);
	void SetKind(Scaleform::GFx::AS3::Value::KindType);
	Scaleform::GFx::AS3::CheckResult Convert2NumberInternal(double &, Scaleform::GFx::AS3::Value::KindType);
	union Extra;
	union V1U;
	union V2U;
	struct VStruct;
	union VU;
	unsigned long Flags; // 0x0
	Scaleform::GFx::AS3::Value::Extra Bonus; // 0x8
	Scaleform::GFx::AS3::Value::VU value; // 0x10
};
Scaleform::GFx::AS3::Value::~Value(); // 0x14043D2D0
Scaleform::GFx::AS3::Value & Scaleform::GFx::AS3::Value::operator=(Scaleform::GFx::AS3::Instances::fl::Namespace * v); // 0x1404EC530
void Scaleform::GFx::AS3::Value::SetUndefined(); // 0x1404AAEA0
void Scaleform::GFx::AS3::Value::SetNull(); // 0x1404A8C10
void Scaleform::GFx::AS3::Value::SetBool(bool v); // 0x1404A7D50
void Scaleform::GFx::AS3::Value::SetSInt32(long v); // 0x1404A93D0
void Scaleform::GFx::AS3::Value::SetUInt32(unsigned long v); // 0x1404AAE20
void Scaleform::GFx::AS3::Value::SetNumber(double v); // 0x1404A8C90
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::Object>(Scaleform::Pickable<Scaleform::GFx::AS3::Object>);
	SPtr<Scaleform::GFx::AS3::Object>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::Object>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> &);
	SPtr<Scaleform::GFx::AS3::Object>(Scaleform::GFx::AS3::Object *);
	~SPtr<Scaleform::GFx::AS3::Object>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::Object>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> & operator=(Scaleform::GFx::AS3::Object *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> & Pick(Scaleform::GFx::AS3::Object *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::Object>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> & SetPtr(Scaleform::GFx::AS3::Object *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Object> &);
	Scaleform::GFx::AS3::Object * operator->();
	Scaleform::GFx::AS3::Object & operator*();
	Scaleform::GFx::AS3::Object * & GetRawRef();
	Scaleform::GFx::AS3::Object * * GetRawPtr();
	Scaleform::GFx::AS3::Object * GetPtr();
	Scaleform::GFx::AS3::Object * operator class Scaleform::GFx::AS3::Object *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::Object * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::Pickable<Scaleform::GFx::AS3::Object>
{
public:
	Pickable<Scaleform::GFx::AS3::Object>(Scaleform::GFx::AS3::Object *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::Object>(Scaleform::GFx::AS3::Object *);
	Pickable<Scaleform::GFx::AS3::Object>();
	Scaleform::Pickable<Scaleform::GFx::AS3::Object> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::Object> &);
	Scaleform::GFx::AS3::Object * GetPtr();
	Scaleform::GFx::AS3::Object * operator->();
	Scaleform::GFx::AS3::Object & operator*();
private:
	Scaleform::GFx::AS3::Object * pV; // 0x0
};
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Value::ToPrimitiveValue(Scaleform::GFx::ASStringManager & sm); // 0x1404AF8A0
Scaleform::GFx::AS3::CheckResult Scaleform::GFx::AS3::Value::Convert2NumberInline(double & result); // 0x140467E00
bool Scaleform::GFx::AS3::Value::IsNullOrUndefined(); // 0x14048FDA0
bool Scaleform::GFx::AS3::Value::IsCallable(); // 0x14050CB10
struct Scaleform::GFx::AS3::Value::HashFunctor
{
	static unsigned long long SDBM_Hash(const void *, unsigned long long, unsigned long long);
	unsigned long long operator()(const Scaleform::GFx::AS3::Value &);
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::Class>(Scaleform::Pickable<Scaleform::GFx::AS3::Class>);
	SPtr<Scaleform::GFx::AS3::Class>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::Class>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> &);
	SPtr<Scaleform::GFx::AS3::Class>(Scaleform::GFx::AS3::Class *);
	~SPtr<Scaleform::GFx::AS3::Class>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::Class>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> & operator=(Scaleform::GFx::AS3::Class *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> & Pick(Scaleform::GFx::AS3::Class *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::Class>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> & SetPtr(Scaleform::GFx::AS3::Class *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Class> &);
	Scaleform::GFx::AS3::Class * operator->();
	Scaleform::GFx::AS3::Class & operator*();
	Scaleform::GFx::AS3::Class * & GetRawRef();
	Scaleform::GFx::AS3::Class * * GetRawPtr();
	Scaleform::GFx::AS3::Class * GetPtr();
	Scaleform::GFx::AS3::Class * operator class Scaleform::GFx::AS3::Class *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::Class * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
union Scaleform::GFx::AS3::Value::Extra
{
	struct
	{
		Extra(Scaleform::GFx::AS3::WeakProxy *);
		Extra();
	};
public:
	Scaleform::GFx::AS3::WeakProxy * pWeakProxy; // 0x0
};
union Scaleform::GFx::AS3::Value::V1U
{
public:
	bool VBool; // 0x0
	long VInt; // 0x0
	unsigned long VUInt; // 0x0
	Scaleform::GFx::ASStringNode * VStr; // 0x0
	Scaleform::GFx::AS3::Object * VObj; // 0x0
	const Scaleform::GFx::AS3::ThunkInfo * VThunk; // 0x0
	Scaleform::GFx::AS3::Instances::fl::Namespace * VNs; // 0x0
	Scaleform::GFx::AS3::InstanceTraits::Traits * ITr; // 0x0
	Scaleform::GFx::AS3::ClassTraits::Traits * CTr; // 0x0
};
union Scaleform::GFx::AS3::Value::V2U
{
public:
	Scaleform::GFx::AS3::Object * VObj; // 0x0
	const Scaleform::GFx::AS3::Traits * pTraits; // 0x0
};
struct Scaleform::GFx::AS3::Value::VStruct
{
	Scaleform::GFx::AS3::Value::V1U _1; // 0x0
	Scaleform::GFx::AS3::Value::V2U _2; // 0x8
};
union Scaleform::GFx::AS3::Value::VU
{
	struct
	{
		VU(long, const Scaleform::GFx::AS3::Traits &);
		VU(Scaleform::GFx::AS3::Object *, long);
		VU(Scaleform::GFx::AS3::Object *, const Scaleform::GFx::AS3::ThunkInfo &);
		VU(Scaleform::GFx::AS3::ClassTraits::Traits &);
		VU(Scaleform::GFx::AS3::InstanceTraits::Traits &);
		VU(Scaleform::GFx::AS3::Instances::fl::Namespace *);
		VU(const Scaleform::GFx::AS3::ThunkInfo &);
		VU(Scaleform::GFx::AS3::Object *);
		VU(Scaleform::GFx::ASStringNode *);
		VU(double);
		VU(float);
		VU(unsigned long);
		VU(long);
		VU(bool);
		VU();
		bool & operator bool &();
		bool operator bool();
		long & operator long &();
		long operator long();
		unsigned long & operator unsigned long &();
		unsigned long operator unsigned long();
		unsigned long long operator unsigned __int64();
		double & operator double &();
		double operator double();
		Scaleform::GFx::ASStringNode * operator struct Scaleform::GFx::ASStringNode *();
		Scaleform::GFx::AS3::Object * operator class Scaleform::GFx::AS3::Object *();
		const Scaleform::GFx::AS3::ThunkInfo & operator const struct Scaleform::GFx::AS3::ThunkInfo &();
		Scaleform::GFx::AS3::Instances::fl::Namespace * operator class Scaleform::GFx::AS3::Instances::fl::Namespace *();
		const Scaleform::GFx::AS3::ThunkInfo & GetThunkFunct();
		const Scaleform::GFx::AS3::Traits & GetTraits();
	};
public:
	double VNumber; // 0x0
	Scaleform::GFx::AS3::Value::VStruct VS; // 0x0
};
class Scaleform::GFx::AS3::STPtr
{
	class ObjType;
	class SelfType;
public:
	STPtr(const Scaleform::GFx::AS3::STPtr &);
	STPtr(const Scaleform::GFx::AS3::Value &);
	STPtr();
	~STPtr();
	Scaleform::GFx::AS3::STPtr & operator=(const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::STPtr & operator=(const Scaleform::GFx::AS3::STPtr &);
	Scaleform::GFx::AS3::STPtr & SetValue(const Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::STPtr & Set(const Scaleform::GFx::AS3::STPtr &);
	void GetValue(Scaleform::GFx::AS3::Value &);
	void GetValueUnsafe(Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::GASRefCountBase * GetPtr();
	Scaleform::GFx::AS3::GASRefCountBase * operator class Scaleform::GFx::AS3::GASRefCountBase *();
private:
	Scaleform::GFx::AS3::GASRefCountBase * GetAddrNoTag();
	static Scaleform::GFx::AS3::GASRefCountBase * GetAddrNoTag(Scaleform::GFx::AS3::GASRefCountBase *);
	Scaleform::GFx::AS3::GASRefCountBase * GetRawAddr();
	static Scaleform::GFx::AS3::GASRefCountBase * GetRawAddr(Scaleform::GFx::AS3::GASRefCountBase *);
	static Scaleform::GFx::AS3::GASRefCountBase * MakeAddr(const Scaleform::GFx::AS3::Value &);
	void AddRef();
	static void AddRef(Scaleform::GFx::AS3::GASRefCountBase *);
	void Release();
	Scaleform::GFx::AS3::GASRefCountBase * pObject; // 0x0
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Value,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Value,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayDH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<Scaleform::GFx::AS3::Value,Scaleform::AllocatorDH<Scaleform::GFx::AS3::Value,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH<Scaleform::GFx::AS3::Value,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl::GlobalObject *,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Instances::fl::GlobalObject *,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Instances::fl::GlobalObject *,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::GFx::AS3::Instances::fl::GlobalObject ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::Instances::fl::GlobalObject *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl::GlobalObject *,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::Instances::fl::GlobalObject *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::Instances::fl::GlobalObject *,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::Instances::fl::GlobalObject *,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl::GlobalObject *,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Instances::fl::GlobalObject *,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::Instances::fl::GlobalObject *,2,Scaleform::ArrayDefaultPolicy>();
};
bool Scaleform::GFx::AS3::IsXMLObject(const Scaleform::GFx::AS3::Value & v); // 0x1404907D0
bool Scaleform::GFx::AS3::IsXMLListObject(const Scaleform::GFx::AS3::Value & v); // 0x14050CD00
enum Scaleform::GFx::AS3::Boolean3
{
	undefined3 = 0,
	true3 = 1,
	false3 = 2,
};
struct Scaleform::GFx::AS3::BoxArgV1<bool>
{
	enum <unnamed-enum-AN>
	{
		AN = 1,
	};
	BoxArgV1<bool>(const Scaleform::GFx::AS3::BoxArgV1<bool> &);
	BoxArgV1<bool>(bool, Scaleform::GFx::AS3::StringManager &);
	Scaleform::GFx::AS3::BoxArgV1<bool> & operator=(const Scaleform::GFx::AS3::BoxArgV1<bool> &);
	const Scaleform::GFx::AS3::Value V; // 0x0
	~BoxArgV1<bool>();
};
struct Scaleform::GFx::AS3::BoxArgV1<long>
{
	enum <unnamed-enum-AN>
	{
		AN = 1,
	};
	BoxArgV1<long>(const Scaleform::GFx::AS3::BoxArgV1<long> &);
	BoxArgV1<long>(long, Scaleform::GFx::AS3::StringManager &);
	Scaleform::GFx::AS3::BoxArgV1<long> & operator=(const Scaleform::GFx::AS3::BoxArgV1<long> &);
	const Scaleform::GFx::AS3::Value V; // 0x0
	~BoxArgV1<long>();
};
struct Scaleform::GFx::AS3::BoxArgV1<unsigned long>
{
	enum <unnamed-enum-AN>
	{
		AN = 1,
	};
	BoxArgV1<unsigned long>(const Scaleform::GFx::AS3::BoxArgV1<unsigned long> &);
	BoxArgV1<unsigned long>(unsigned long, Scaleform::GFx::AS3::StringManager &);
	Scaleform::GFx::AS3::BoxArgV1<unsigned long> & operator=(const Scaleform::GFx::AS3::BoxArgV1<unsigned long> &);
	const Scaleform::GFx::AS3::Value V; // 0x0
	~BoxArgV1<unsigned long>();
};
struct Scaleform::GFx::AS3::BoxArgV1<double>
{
	enum <unnamed-enum-AN>
	{
		AN = 1,
	};
	BoxArgV1<double>(const Scaleform::GFx::AS3::BoxArgV1<double> &);
	BoxArgV1<double>(double, Scaleform::GFx::AS3::StringManager &);
	Scaleform::GFx::AS3::BoxArgV1<double> & operator=(const Scaleform::GFx::AS3::BoxArgV1<double> &);
	const Scaleform::GFx::AS3::Value V; // 0x0
	~BoxArgV1<double>();
};
struct Scaleform::GFx::AS3::BoxArgV1<char *>
{
	enum <unnamed-enum-AN>
	{
		AN = 1,
	};
	BoxArgV1<char *>(const Scaleform::GFx::AS3::BoxArgV1<char *> &);
	BoxArgV1<char *>(const char *, Scaleform::GFx::AS3::StringManager &);
	Scaleform::GFx::AS3::BoxArgV1<char *> & operator=(const Scaleform::GFx::AS3::BoxArgV1<char *> &);
	const Scaleform::GFx::AS3::Value V; // 0x0
	~BoxArgV1<char *>();
};
struct Scaleform::GFx::AS3::BoxArgV1<char const *>
{
	enum <unnamed-enum-AN>
	{
		AN = 1,
	};
	BoxArgV1<char const *>(const Scaleform::GFx::AS3::BoxArgV1<char const *> &);
	BoxArgV1<char const *>(const char *, Scaleform::GFx::AS3::StringManager &);
	Scaleform::GFx::AS3::BoxArgV1<char const *> & operator=(const Scaleform::GFx::AS3::BoxArgV1<char const *> &);
	const Scaleform::GFx::AS3::Value V; // 0x0
	~BoxArgV1<char const *>();
};