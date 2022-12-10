#pragma once

enum Scaleform::GFx::AS3::Abc::AbcKind
{
	AbcKind_unused = 0,
	AbcKind_Utf8 = 1,
	AbcKind_Int = 3,
	AbcKind_UInt = 4,
	AbcKind_PrivateNs = 5,
	AbcKind_Double = 6,
	AbcKind_Qname = 7,
	AbcKind_Namespace = 8,
	AbcKind_Multiname = 9,
	AbcKind_False = 10,
	AbcKind_True = 11,
	AbcKind_Null = 12,
	AbcKind_QnameA = 13,
	AbcKind_MultinameA = 14,
	AbcKind_RTQname = 15,
	AbcKind_RTQnameA = 16,
	AbcKind_RTQnameL = 17,
	AbcKind_RTQnameLA = 18,
	AbcKind_NamespaceSet = 21,
	AbcKind_PackageNamespace = 22,
	AbcKind_PackageInternalNs = 23,
	AbcKind_ProtectedNamespace = 24,
	AbcKind_ExplicitNamespace = 25,
	AbcKind_StaticProtectedNs = 26,
	AbcKind_MultinameL = 27,
	AbcKind_MultinameLA = 28,
	AbcKind_TypeName = 29,
};
class Scaleform::GFx::AS3::Abc::NamespaceInfo
{
public:
	NamespaceInfo(Scaleform::GFx::AS3::Abc::NamespaceKind, const Scaleform::StringDataPtr &);
	NamespaceInfo();
	bool HasKind();
	Scaleform::GFx::AS3::Abc::NamespaceKind GetKind();
	bool IsUserDefined();
	bool IsPublic();
	const Scaleform::StringDataPtr & GetNameURI();
private:
	bool IsValidKind();
	Scaleform::GFx::AS3::Abc::NamespaceKind Kind; // 0x0
	Scaleform::StringDataPtr NameURI; // 0x8
};
class Scaleform::GFx::AS3::Abc::NamespaceSetInfo
{
public:
	const unsigned char * GetData();
	unsigned long long GetSize();
private:
	const unsigned char * Data; // 0x0
};
enum Scaleform::GFx::AS3::Abc::MultinameKindBits
{
	MN_NS_Mask = 3,
	MN_NS_Qualified = 0,
	MN_NS_Runtime = 1,
	MN_NS_Multi = 2,
	MN_NameLate = 4,
	MN_Attr = 8,
};
enum Scaleform::GFx::AS3::Abc::MultinameKind
{
	MN_QName = 0,
	MN_QNameA = 8,
	MN_RTQName = 1,
	MN_RTQNameA = 9,
	MN_RTQNameL = 5,
	MN_RTQNameLA = 13,
	MN_Multiname = 2,
	MN_MultinameA = 10,
	MN_MultinameL = 6,
	MN_MultinameLA = 14,
	MN_Typename = 16,
	MN_Invalid = 32,
};
class Scaleform::GFx::AS3::Abc::Multiname
{
public:
	Scaleform::GFx::AS3::Abc::MultinameKind GetKind();
	bool isValidKind();
	Scaleform::GFx::AS3::Abc::MultinameKindBits getNamespaceBits();
	bool IsNameLate();
	bool IsAttr();
	bool IsQName();
	bool IsRunTime();
	bool IsCompileTime();
	bool IsMultiname();
	bool IsTypename();
	long GetNameInd();
	Scaleform::StringDataPtr GetName(const Scaleform::GFx::AS3::Abc::ConstPool &);
	const Scaleform::GFx::AS3::Abc::NamespaceInfo & GetNamespace(const Scaleform::GFx::AS3::Abc::ConstPool &);
	long GetNamespaceInd();
	const Scaleform::GFx::AS3::Abc::NamespaceSetInfo & GetNamespaceSetInfo(const Scaleform::GFx::AS3::Abc::ConstPool &);
	long GetNamespaceSetInd();
	const Scaleform::GFx::AS3::Abc::Multiname & GetNextMultiname(const Scaleform::GFx::AS3::Abc::ConstPool &);
	long GetNextMultinameIndex();
	bool IsAnyType();
	bool IsAnyNamespace();
	static const Scaleform::GFx::AS3::Abc::Multiname & GetAnyType();
	bool IsBoolean(const Scaleform::GFx::AS3::Abc::ConstPool &);
	bool IsInt(const Scaleform::GFx::AS3::Abc::ConstPool &);
	bool IsUInt(const Scaleform::GFx::AS3::Abc::ConstPool &);
	bool IsNumber(const Scaleform::GFx::AS3::Abc::ConstPool &);
	bool IsString(const Scaleform::GFx::AS3::Abc::ConstPool &);
	bool IsFixedNumType(const Scaleform::GFx::AS3::Abc::ConstPool &);
	bool IsNumericType(const Scaleform::GFx::AS3::Abc::ConstPool &);
	bool IsPrimitiveType(const Scaleform::GFx::AS3::Abc::ConstPool &);
private:
	void setKind(Scaleform::GFx::AS3::Abc::MultinameKind);
	static const Scaleform::GFx::AS3::Abc::Multiname AnyType; // 0xFFFFFFFFFFFFFFFF
public:
	long Ind; // 0x0
	long NextIndex; // 0x4
	long NameIndex; // 0x8
	Scaleform::GFx::AS3::Abc::MultinameKind Kind; // 0xC
};
class Scaleform::GFx::AS3::Abc::StringView
{
public:
	StringView(const unsigned char *);
	StringView();
	Scaleform::StringDataPtr ToStringDataPtr();
	Scaleform::StringDataPtr operator class Scaleform::StringDataPtr();
private:
	static const unsigned char Empty; // 0xFFFFFFFFFFFFFFFF
	const unsigned char * Data; // 0x0
};
class Scaleform::GFx::AS3::Abc::ConstPool :
	Scaleform::NewOverrideBase<340>
{
	class IntType;
	class UIntType;
	class MultinamesType;
	class StringsType;
	class NamespaceType;
	class NamespaceSetType;
private:
	ConstPool(const Scaleform::GFx::AS3::Abc::ConstPool &);
public:
	ConstPool();
	const Scaleform::GFx::AS3::Abc::ConstPool & GetSelf();
	Scaleform::GFx::AS3::Abc::ConstPool & GetSelf();
	long GetInt(unsigned long long);
	unsigned long long GetIntCount();
	unsigned long GetUInt(unsigned long long);
	unsigned long long GetUIntCount();
	double GetDouble(unsigned long long);
	unsigned long long GetDoubleCount();
	Scaleform::StringDataPtr GetString(Scaleform::GFx::AS3::AbsoluteIndex);
	unsigned long long GetStringCount();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::Abc::StringView,340,Scaleform::ArrayDefaultPolicy> & GetStrings();
	const Scaleform::GFx::AS3::Abc::NamespaceInfo & GetNamespace(unsigned long long);
	unsigned long long GetNamespaceCount();
	const Scaleform::GFx::AS3::Abc::NamespaceSetInfo & GetNamespaceSet(unsigned long long);
	unsigned long long GetNamespaceSetCount();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::Abc::Multiname,340,Scaleform::ArrayDefaultPolicy> & GetMultinames();
	const Scaleform::GFx::AS3::Abc::Multiname & GetMultiname(unsigned long long);
	unsigned long long GetMultinameCount();
	const Scaleform::GFx::AS3::Abc::NamespaceInfo & GetAnyNamespace();
	void Clear();
private:
	Scaleform::GFx::AS3::Abc::ConstPool & operator=(const Scaleform::GFx::AS3::Abc::ConstPool &);
	unsigned long DoubleCount; // 0x0
	const unsigned char * Doubles; // 0x8
	Scaleform::ArrayLH_POD<long,340,Scaleform::ArrayDefaultPolicy> ConstInt; // 0x10
	Scaleform::ArrayLH_POD<unsigned long,340,Scaleform::ArrayDefaultPolicy> ConstUInt; // 0x28
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Abc::StringView,340,Scaleform::ArrayDefaultPolicy> ConstStr; // 0x40
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Abc::NamespaceInfo,340,Scaleform::ArrayDefaultPolicy> ConstNamespace; // 0x58
	Scaleform::ArrayLH_POD<Scaleform::GFx::AS3::Abc::NamespaceSetInfo,340,Scaleform::ArrayDefaultPolicy> const_ns_set; // 0x70
	Scaleform::ArrayLH<Scaleform::GFx::AS3::Abc::Multiname,340,Scaleform::ArrayDefaultPolicy> const_multiname; // 0x88
	const Scaleform::GFx::AS3::Abc::NamespaceInfo any_namespace; // 0xA0
public:
	~ConstPool();
};
class Scaleform::NewOverrideBase<340>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 340,
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
class Scaleform::ArrayLH_POD<long,340,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<long,Scaleform::AllocatorLH_POD<long,340>,Scaleform::ArrayDefaultPolicy> >
{
	typedef long ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH_POD<long,340,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH_POD<long,340,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH_POD<long,340,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH_POD<long,340,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH_POD<long,340,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH_POD<long,340,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH_POD<long,340,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH_POD<long,340,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH_POD<unsigned long,340,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<unsigned long,Scaleform::AllocatorLH_POD<unsigned long,340>,Scaleform::ArrayDefaultPolicy> >
{
	typedef unsigned long ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH_POD<unsigned long,340,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH_POD<unsigned long,340,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH_POD<unsigned long,340,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH_POD<unsigned long,340,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH_POD<unsigned long,340,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH_POD<unsigned long,340,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH_POD<unsigned long,340,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH_POD<unsigned long,340,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::Abc::Multiname,340,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Abc::Multiname,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::Multiname,340>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::Abc::Multiname,340,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Abc::Multiname,340,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::Abc::Multiname,340,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::Abc::Multiname,340,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::Abc::Multiname,340,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::Abc::Multiname,340,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Abc::Multiname,340,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::Abc::Multiname,340,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::Abc::StringView,340,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Abc::StringView,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::StringView,340>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::Abc::StringView,340,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Abc::StringView,340,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::Abc::StringView,340,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::Abc::StringView,340,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::Abc::StringView,340,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::Abc::StringView,340,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Abc::StringView,340,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::Abc::StringView,340,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH<Scaleform::GFx::AS3::Abc::NamespaceInfo,340,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Abc::NamespaceInfo,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::NamespaceInfo,340>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::AS3::Abc::NamespaceInfo,340,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Abc::NamespaceInfo,340,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::AS3::Abc::NamespaceInfo,340,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::AS3::Abc::NamespaceInfo,340,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::AS3::Abc::NamespaceInfo,340,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::AS3::Abc::NamespaceInfo,340,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::AS3::Abc::NamespaceInfo,340,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::AS3::Abc::NamespaceInfo,340,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH_POD<Scaleform::GFx::AS3::Abc::NamespaceSetInfo,340,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::AS3::Abc::NamespaceSetInfo,Scaleform::AllocatorLH_POD<Scaleform::GFx::AS3::Abc::NamespaceSetInfo,340>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH_POD<Scaleform::GFx::AS3::Abc::NamespaceSetInfo,340,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH_POD<Scaleform::GFx::AS3::Abc::NamespaceSetInfo,340,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH_POD<Scaleform::GFx::AS3::Abc::NamespaceSetInfo,340,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH_POD<Scaleform::GFx::AS3::Abc::NamespaceSetInfo,340,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH_POD<Scaleform::GFx::AS3::Abc::NamespaceSetInfo,340,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH_POD<Scaleform::GFx::AS3::Abc::NamespaceSetInfo,340,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH_POD<Scaleform::GFx::AS3::Abc::NamespaceSetInfo,340,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH_POD<Scaleform::GFx::AS3::Abc::NamespaceSetInfo,340,Scaleform::ArrayDefaultPolicy>();
};