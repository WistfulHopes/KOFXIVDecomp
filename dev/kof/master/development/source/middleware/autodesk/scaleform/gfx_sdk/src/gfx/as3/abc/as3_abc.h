#pragma once

enum Scaleform::GFx::AS3::Abc::ValueKind
{
	CONSTANT_Undefined = 0,
	CONSTANT_Utf8 = 1,
	CONSTANT_Int = 3,
	CONSTANT_UInt = 4,
	CONSTANT_Double = 6,
	CONSTANT_Namespace = 8,
	CONSTANT_True = 11,
	CONSTANT_False = 10,
	CONSTANT_Null = 12,
	CONSTANT_PackageNamespace = 22,
	CONSTANT_PackageInternalNs = 23,
	CONSTANT_ProtectedNamespace = 24,
	CONSTANT_ExplicitNamespace = 25,
	CONSTANT_StaticProtectedNs = 26,
	CONSTANT_PrivateNs = 5,
};
class Scaleform::GFx::AS3::Abc::ValueDetail
{
public:
	ValueDetail(long, Scaleform::GFx::AS3::Abc::ValueKind);
	ValueDetail();
	long GetIndex();
	Scaleform::GFx::AS3::Abc::ValueKind GetKind();
private:
	unsigned char Kind; // 0x0
	long ValueIndex; // 0x4
};
struct Scaleform::GFx::AS3::Abc::ConstValue
{
	unsigned short GetIndex();
	Scaleform::GFx::AS3::Abc::ValueKind GetKind();
	unsigned short Kind; // 0x0
	unsigned short ValueIndex; // 0x2
};
struct Scaleform::GFx::AS3::Abc::MethodInfoSmallHeader
{
	unsigned long GetParamNum();
	unsigned long GetRetTypeInd();
private:
	unsigned long ParamNum; // 0x0
	unsigned long RetTypeInd; // 0x4
};
struct Scaleform::GFx::AS3::Abc::MethodInfoHeader :
	Scaleform::GFx::AS3::Abc::MethodInfoSmallHeader
{
	MethodInfoHeader();
	enum Flag
	{
		fNEED_ARGUMENTS = 1,
		fNEED_ACTIVATION = 2,
		fNEED_REST = 4,
		fHAS_OPTIONAL = 8,
		fSET_DXNS = 64,
		fHAS_PARAM_NAMES = 128,
	};
	unsigned char GetFlags();
	bool NeedArguments();
	static bool NeedArguments(unsigned char);
	bool DoesNeedArguments();
	static void SetNeedArguments(unsigned char &, bool);
	bool NeedActivation();
	static bool NeedActivation(unsigned char);
	bool NeedRest();
	static bool NeedRest(unsigned char);
	bool DoesNeedRest();
	static void SetNeedRest(unsigned char &, bool);
	bool HasOptionalParams();
	static bool HasOptionalParams(unsigned char);
	bool NeedToSetDXNS();
	static bool NeedToSetDXNS(unsigned char);
	bool HasParamNames();
	static bool HasParamNames(unsigned char);
	unsigned long GetOptParamNum();
	const unsigned char * GetParamTypes();
	const unsigned char * GetOptParams();
	const unsigned char * GetParamNames();
private:
	unsigned char Flags; // 0x8
	unsigned long OptParamNum; // 0xC
	const unsigned char * ParamTypes; // 0x10
	const unsigned char * OptParams; // 0x18
	const unsigned char * ParamNames; // 0x20
};
struct Scaleform::GFx::AS3::Abc::MetadataHeader
{
	Scaleform::StringDataPtr Name; // 0x0
	unsigned long Num; // 0x10
	MetadataHeader();
};
struct Scaleform::GFx::AS3::Abc::TraitInfoSmallHeader
{
	TraitInfoSmallHeader();
	enum Type
	{
		tSlot = 0,
		tMethod = 1,
		tGetter = 2,
		tSetter = 3,
		tClass = 4,
		tFunction = 5,
		tConst = 6,
	};
	enum Kind
	{
		kFinal = 1,
		kOverride = 2,
		kMetadata = 4,
	};
protected:
	static bool IsFinal(unsigned char);
	static bool IsOverride(unsigned char);
	static bool HasMetaData(unsigned char);
public:
	unsigned char GetKind();
	Scaleform::GFx::AS3::Abc::TraitInfoSmallHeader::Type GetType();
	bool IsClass();
	bool IsConst();
	bool IsData();
	bool IsCode();
	bool IsSlotOrConst();
	bool IsClassOrConst();
	bool HasMethodInd();
	bool HasSlotID();
	const Scaleform::GFx::AS3::Abc::Multiname & GetName(const Scaleform::GFx::AS3::Abc::ConstPool &);
protected:
	unsigned char kind; // 0x0
	long name_ind; // 0x4
};
struct Scaleform::GFx::AS3::Abc::TraitInfoHeader :
	Scaleform::GFx::AS3::Abc::TraitInfoSmallHeader
{
	TraitInfoHeader();
	const Scaleform::GFx::AS3::Abc::Multiname & GetTypeName(const Scaleform::GFx::AS3::Abc::File &);
	long GetSlotID();
	Scaleform::GFx::AS3::Abc::MiInd GetMethodInd();
private:
	long SlotId; // 0x8
	long Ind; // 0xC
};
class Scaleform::GFx::AS3::Abc::TraitInfo :
	Scaleform::GFx::AS3::Abc::TraitInfoHeader
{
public:
	TraitInfo();
	bool HasDefaultValue();
	const Scaleform::GFx::AS3::Abc::ValueDetail & GetDefaultValue();
	bool HasMetaData();
	unsigned long GetMetaDataNum();
	const unsigned char * GetMetaDataOffset();
private:
	Scaleform::GFx::AS3::Abc::ValueDetail default_value; // 0x10
	unsigned long MetaDataNum; // 0x18
	const unsigned char * MetaDataOffset; // 0x20
};
class Scaleform::GFx::AS3::Abc::HasTraits
{
public:
	HasTraits();
	unsigned long GetTraitsNum();
	const unsigned char * GetTraitsOffset();
protected:
	unsigned long TraitsNum; // 0x0
	const unsigned char * TraitsOffset; // 0x8
};
class Scaleform::GFx::AS3::Abc::HasCode :
	Scaleform::GFx::AS3::Abc::HasTraits
{
public:
	HasCode();
	Scaleform::GFx::AS3::Abc::MiInd GetMethodInfoInd();
private:
	long method_info_ind; // 0x10
};
struct Scaleform::GFx::AS3::Abc::InstanceHeader
{
	InstanceHeader();
	enum Flag
	{
		fSealed = 1,
		fFinal = 2,
		fInterface = 4,
		fProtectedNs = 8,
	};
	bool IsSealed();
	bool IsFinal();
	bool IsInterface();
	bool HasProtectedNamespace();
	bool HasSuperClass();
	long GetNameInd();
	const Scaleform::GFx::AS3::Abc::Multiname & GetName(const Scaleform::GFx::AS3::Abc::ConstPool &);
	const Scaleform::GFx::AS3::Abc::Multiname & GetSuperClassName(const Scaleform::GFx::AS3::Abc::ConstPool &);
	const Scaleform::GFx::AS3::Abc::NamespaceInfo & GetProtectedNamespace(const Scaleform::GFx::AS3::Abc::ConstPool &);
private:
	unsigned char flags; // 0x0
	long name_ind; // 0x4
	long super_name_ind; // 0x8
	long protected_namespace_ind; // 0xC
};
class Scaleform::GFx::AS3::Abc::Instance :
	Scaleform::GFx::AS3::Abc::HasCode,
	Scaleform::GFx::AS3::Abc::InstanceHeader
{
public:
	Instance();
};
class Scaleform::GFx::AS3::Abc::StaticInfo :
	Scaleform::GFx::AS3::Abc::HasCode
{
public:
	StaticInfo();
};
class Scaleform::GFx::AS3::Abc::ClassInfo
{
public:
	bool HasSuperClass();
	long GetNameInd();
	const Scaleform::GFx::AS3::Abc::Multiname & GetName(const Scaleform::GFx::AS3::Abc::ConstPool &);
	const Scaleform::GFx::AS3::Abc::Multiname & GetSuperClassName(const Scaleform::GFx::AS3::Abc::ConstPool &);
private:
	Scaleform::GFx::AS3::Abc::Instance & GetInstanceInfo();
public:
	const Scaleform::GFx::AS3::Abc::Instance & GetInstanceInfo();
private:
	Scaleform::GFx::AS3::Abc::StaticInfo & GetStaticInfo();
public:
	const Scaleform::GFx::AS3::Abc::StaticInfo & GetStaticInfo();
private:
	Scaleform::GFx::AS3::Abc::Instance inst_info; // 0x0
	Scaleform::GFx::AS3::Abc::StaticInfo stat_info; // 0x28
public:
	ClassInfo();
};
class Scaleform::GFx::AS3::Abc::ScriptInfo :
	Scaleform::GFx::AS3::Abc::HasCode
{
public:
	ScriptInfo();
};
class Scaleform::GFx::AS3::Abc::Code
{
	enum OpCode
	{
		op_nop = 2,
		op_throw = 3,
		op_getsuper = 4,
		op_setsuper = 5,
		op_dxns = 6,
		op_dxnslate = 7,
		op_kill = 8,
		op_label = 9,
		op_ifnlt = 12,
		op_ifnle = 13,
		op_ifngt = 14,
		op_ifnge = 15,
		op_jump = 16,
		op_iftrue = 17,
		op_iffalse = 18,
		op_ifeq = 19,
		op_ifne = 20,
		op_iflt = 21,
		op_ifle = 22,
		op_ifgt = 23,
		op_ifge = 24,
		op_ifstricteq = 25,
		op_ifstrictne = 26,
		op_lookupswitch = 27,
		op_pushwith = 28,
		op_popscope = 29,
		op_nextname = 30,
		op_hasnext = 31,
		op_pushnull = 32,
		op_pushundefined = 33,
		op_nextvalue = 35,
		op_pushbyte = 36,
		op_pushshort = 37,
		op_pushtrue = 38,
		op_pushfalse = 39,
		op_pushnan = 40,
		op_pop = 41,
		op_dup = 42,
		op_swap = 43,
		op_pushstring = 44,
		op_pushint = 45,
		op_pushuint = 46,
		op_pushdouble = 47,
		op_pushscope = 48,
		op_pushnamespace = 49,
		op_hasnext2 = 50,
		op_li8 = 53,
		op_li16 = 54,
		op_li32 = 55,
		op_lf32 = 56,
		op_lf64 = 57,
		op_si8 = 58,
		op_si16 = 59,
		op_si32 = 60,
		op_sf32 = 61,
		op_sf64 = 62,
		op_newfunction = 64,
		op_call = 65,
		op_construct = 66,
		op_callmethod = 67,
		op_callstatic = 68,
		op_callsuper = 69,
		op_callproperty = 70,
		op_returnvoid = 71,
		op_returnvalue = 72,
		op_constructsuper = 73,
		op_constructprop = 74,
		op_callproplex = 76,
		op_callsupervoid = 78,
		op_callpropvoid = 79,
		op_sxi1 = 80,
		op_sxi8 = 81,
		op_sxi16 = 82,
		op_applytype = 83,
		op_newobject = 85,
		op_newarray = 86,
		op_newactivation = 87,
		op_newclass = 88,
		op_getdescendants = 89,
		op_newcatch = 90,
		op_findpropstrict = 93,
		op_findproperty = 94,
		op_getlex = 96,
		op_setproperty = 97,
		op_getlocal = 98,
		op_setlocal = 99,
		op_getglobalscope = 100,
		op_getscopeobject = 101,
		op_getproperty = 102,
		op_initproperty = 104,
		op_deleteproperty = 106,
		op_getslot = 108,
		op_setslot = 109,
		op_getglobalslot = 110,
		op_setglobalslot = 111,
		op_convert_s = 112,
		op_esc_xelem = 113,
		op_esc_xattr = 114,
		op_convert_i = 115,
		op_convert_u = 116,
		op_convert_d = 117,
		op_convert_b = 118,
		op_convert_o = 119,
		op_checkfilter = 120,
		op_coerce = 128,
		op_coerce_a = 130,
		op_coerce_s = 133,
		op_astype = 134,
		op_astypelate = 135,
		op_negate = 144,
		op_increment = 145,
		op_inclocal = 146,
		op_decrement = 147,
		op_declocal = 148,
		op_typeof = 149,
		op_not = 150,
		op_bitnot = 151,
		op_add = 160,
		op_subtract = 161,
		op_multiply = 162,
		op_divide = 163,
		op_modulo = 164,
		op_lshift = 165,
		op_rshift = 166,
		op_urshift = 167,
		op_bitand = 168,
		op_bitor = 169,
		op_bitxor = 170,
		op_equals = 171,
		op_strictequals = 172,
		op_lessthan = 173,
		op_lessequals = 174,
		op_greaterthan = 175,
		op_greaterequals = 176,
		op_instanceof = 177,
		op_istype = 178,
		op_istypelate = 179,
		op_in = 180,
		op_increment_i = 192,
		op_decrement_i = 193,
		op_inclocal_i = 194,
		op_declocal_i = 195,
		op_negate_i = 196,
		op_add_i = 197,
		op_subtract_i = 198,
		op_multiply_i = 199,
		op_getlocal_0 = 208,
		op_getlocal_1 = 209,
		op_getlocal_2 = 210,
		op_getlocal_3 = 211,
		op_setlocal_0 = 212,
		op_setlocal_1 = 213,
		op_setlocal_2 = 214,
		op_setlocal_3 = 215,
		op_debug = 239,
		op_debugline = 240,
		op_debugfile = 241,
		op_OP_0xF2 = 242,
	};
	struct ByteCodeInfo;
public:
	static const Scaleform::GFx::AS3::Abc::Code::ByteCodeInfo & GetByteCodeInfo(const Scaleform::GFx::AS3::Abc::Code::OpCode);
private:
	static const Scaleform::GFx::AS3::Abc::Code::ByteCodeInfo opcode_info[128]; // 0xFFFFFFFFFFFFFFFF
};
struct Scaleform::GFx::AS3::Abc::Code::ByteCodeInfo
{
	unsigned char GetPopN();
	unsigned char GetPushN();
	bool PopArgs();
	bool PopIndex();
	char GetOperandCount();
	char operandCount : 4; // 0x0
	unsigned char canThrow : 1; // 0x0
	unsigned char hasEffect : 1; // 0x0
	unsigned char pop : 2; // 0x0
	unsigned char push : 2; // 0x1
	unsigned char pop_args : 1; // 0x1
	unsigned char pop_index : 1; // 0x1
};
class Scaleform::GFx::AS3::Abc::MethodBodyInfo :
	Scaleform::GFx::AS3::Abc::HasTraits
{
	class ExceptionInfo;
public:
	MethodBodyInfo();
};
class Scaleform::GFx::AS3::Abc::MethodBodyInfo::ExceptionInfo
{
public:
	ExceptionInfo(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);
	ExceptionInfo();
	unsigned long GetFrom();
	unsigned long GetTo();
	unsigned long GetTargetPos();
	unsigned long GetExceptionTypeInd();
	unsigned long GetVariableNameInd();
private:
	unsigned long from; // 0x0
	unsigned long to; // 0x4
	unsigned long target; // 0x8
	unsigned long exc_type_ind; // 0xC
	unsigned long var_name_ind; // 0x10
};
struct Scaleform::GFx::AS3::Abc::MethodBodyInfoHeader
{
	MethodBodyInfoHeader();
	Scaleform::GFx::AS3::Abc::MiInd GetMethodInfoInd();
	long GetMaxStackSize();
	long GetMaxLocalRegisterIndex();
	long GetMinScopeDepth();
	long GetMaxScopeDepth();
private:
	long method_info_ind; // 0x0
	long max_stack; // 0x4
	long local_reg_count; // 0x8
	long init_scope_depth; // 0xC
	long max_scope_depth; // 0x10
};
class Scaleform::GFx::AS3::Abc::File :
	Scaleform::NewOverrideBase<339>,
	Scaleform::RefCountImpl
{
	class TOffsets;
	class MBIArrayT;
private:
	File(const Scaleform::GFx::AS3::Abc::File &);
public:
	File();
	virtual ~File();
	unsigned long GetDataSize();
	void SetDataSize(unsigned long);
	unsigned short GetMinorVersion();
	unsigned short GetMajorVersion();
	const Scaleform::GFx::AS3::Abc::ConstPool & GetConstPool();
	unsigned long long GetMethodInfoNum();
	const unsigned char * GetMethodInfoOffset(Scaleform::GFx::AS3::Abc::MiInd);
	const unsigned char * GetMetadataOffset(unsigned long);
	unsigned long GetClassNum();
	const unsigned char * GetClassOffset(unsigned long);
	const unsigned char * GetInstanceOffset(unsigned long);
	const unsigned char * GetScriptSectionOffset();
	unsigned long long GetMethodBodyInfoNum();
	const unsigned char * GetMethodBodyInfoOffset(Scaleform::GFx::AS3::Abc::MbiInd);
	Scaleform::GFx::AS3::Abc::MbiInd GetMBIInd(Scaleform::GFx::AS3::Abc::MiInd);
	Scaleform::GFx::AS3::Abc::MiInd GetMiInd(Scaleform::GFx::AS3::Abc::MbiInd);
	unsigned long GetParamNum(Scaleform::GFx::AS3::Abc::MiInd);
	const Scaleform::String & GetSource();
	const Scaleform::String & GetName();
	void SetSource(const Scaleform::String &);
private:
	Scaleform::GFx::AS3::Abc::File & operator=(const Scaleform::GFx::AS3::Abc::File &);
	unsigned long DataSize; // 0x10
	Scaleform::String Source; // 0x18
	unsigned short MinorVersion; // 0x20
	unsigned short MajorVersion; // 0x22
	const unsigned char * ScriptSection; // 0x28
	Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> MethodOffsets; // 0x30
	Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> MetadataOffsets; // 0x48
	Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> ClassOffsets; // 0x60
	Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> InstOffsets; // 0x78
	Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> MethodBodyOffsets; // 0x90
	Scaleform::ArrayLH_POD<long,339,Scaleform::ArrayDefaultPolicy> Mi2Mbi; // 0xA8
	Scaleform::GFx::AS3::Abc::ConstPool Const_Pool; // 0xC0
};
class Scaleform::NewOverrideBase<339>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 339,
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
class Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<unsigned char const *,Scaleform::AllocatorLH_POD<unsigned char const *,339>,Scaleform::ArrayDefaultPolicy> >
{
	typedef const unsigned char ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH_POD<long,339,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<long,Scaleform::AllocatorLH_POD<long,339>,Scaleform::ArrayDefaultPolicy> >
{
	typedef long ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH_POD<long,339,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH_POD<long,339,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH_POD<long,339,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH_POD<long,339,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH_POD<long,339,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH_POD<long,339,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH_POD<long,339,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH_POD<long,339,Scaleform::ArrayDefaultPolicy>();
};
Scaleform::GFx::AS3::Abc::File::File(); // 0x14044ED60
class Scaleform::GFx::AS3::Abc::Reader :
	Scaleform::NewOverrideBase<339>
{
private:
	Reader(const Scaleform::GFx::AS3::Abc::Reader &);
public:
	Reader(const unsigned char *, unsigned long long);
	const unsigned char * GetCP();
	void SetCP(unsigned char *);
	bool Read8(char &);
	bool Read8(unsigned char &);
	bool Read16(short &);
	bool Read16(unsigned short &);
	bool Read(Scaleform::GFx::AS3::Abc::File &);
	bool Read(Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> &, Scaleform::ArrayLH_POD<long,339,Scaleform::ArrayDefaultPolicy> &);
	bool Read(Scaleform::GFx::AS3::Abc::ValueDetail &);
	bool Read(Scaleform::GFx::AS3::Abc::ConstPool &);
	bool Read(const Scaleform::GFx::AS3::Abc::ConstPool &, Scaleform::GFx::AS3::Abc::Multiname &, bool &);
	bool Read(Scaleform::GFx::AS3::Abc::NamespaceSetInfo &);
	bool Read(const Scaleform::GFx::AS3::Abc::ConstPool &, Scaleform::GFx::AS3::Abc::NamespaceInfo &);
	bool Read(const Scaleform::GFx::AS3::Abc::ConstPool &, Scaleform::StringDataPtr &, const Scaleform::StringDataPtr &);
	bool Read(char &);
	bool Read(unsigned char &);
	bool Read(short &);
	bool Read(unsigned short &);
	bool Read(long &);
	bool Read(unsigned long &);
	bool ReadMethodInfo(Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> &, Scaleform::ArrayLH_POD<long,339,Scaleform::ArrayDefaultPolicy> &);
	bool ReadMetadata(Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> &, const Scaleform::GFx::AS3::Abc::ConstPool &);
	bool ReadClasses(Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> &, Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> &);
	bool ReadScripts(const unsigned char * &);
private:
	Scaleform::GFx::AS3::Abc::Reader & operator=(const Scaleform::GFx::AS3::Abc::Reader &);
	const unsigned long long Size; // 0x0
	const unsigned char * CP; // 0x8
};