#pragma once

class Scaleform::String
{
	enum FlagConstants
	{
		Flag_LengthIsSizeShift = 63,
	};
	struct DataDesc;
	enum HeapType
	{
		HT_Global = 0,
		HT_Local = 1,
		HT_Dynamic = 2,
		HT_Mask = 3,
	};
protected:
	Scaleform::String::DataDesc * pData; // 0x0
	unsigned long long HeapTypeBits; // 0x0
	union DataDescUnion;
	Scaleform::String::HeapType GetHeapType();
	Scaleform::String::DataDesc * GetData();
	void SetData(Scaleform::String::DataDesc *);
	Scaleform::String::DataDesc * AllocData(Scaleform::MemoryHeap *, unsigned long long, unsigned long long);
	Scaleform::String::DataDesc * AllocDataCopy1(Scaleform::MemoryHeap *, unsigned long long, unsigned long long, const char *, unsigned long long);
	Scaleform::String::DataDesc * AllocDataCopy2(Scaleform::MemoryHeap *, unsigned long long, unsigned long long, const char *, unsigned long long, const char *, unsigned long long);
	struct NoConstructor;
public:
	String(const wchar_t *);
	String(const Scaleform::String::InitStruct &, unsigned long long);
	String(const Scaleform::StringDataPtr);
	String(const Scaleform::StringBuffer &);
	String(const Scaleform::String &);
	String(const char *, unsigned long long);
	String(const char *, const char *, const char *);
	String(const char *);
	String();
protected:
	String(const Scaleform::String::NoConstructor &);
	struct InitStruct;
public:
	~String();
	static Scaleform::String::DataDesc NullData; // 0xFFFFFFFFFFFFFFFF
	Scaleform::MemoryHeap * GetHeap();
	void Clear();
	const char * operator const char *();
	const char * ToCStr();
	unsigned long long GetSize();
	bool IsEmpty();
	unsigned long long GetLength();
	unsigned long GetCharAt(unsigned long long);
	unsigned long GetFirstCharAt(unsigned long long, const char * *);
	unsigned long GetNextChar(const char * *);
	void AppendChar(unsigned long);
	void AppendString(const char *, long long);
	void AppendString(const wchar_t *, long long);
	void AssignString(const char *, unsigned long long);
	void AssignString(const Scaleform::String::InitStruct &, unsigned long long);
	void Remove(unsigned long long, long long);
	Scaleform::String Substring(unsigned long long, unsigned long long);
	Scaleform::String ToUpper();
	Scaleform::String ToLower();
	Scaleform::String & Insert(const char *, unsigned long long, long long);
	unsigned long long InsertCharAt(unsigned long, unsigned long long);
	unsigned long long GetByteIndex(unsigned long long);
	long CompareNoCase(const Scaleform::String &);
	long CompareNoCase(const char *);
	static long CompareNoCase(const char *, const char *, long long);
	static long CompareNoCase(const char *, const char *);
	static unsigned long long BernsteinHashFunctionCIS(const void *, unsigned long long, unsigned long long);
	static unsigned long long BernsteinHashFunction(const void *, unsigned long long, unsigned long long);
	static void EscapeSpecialHTML(const char *, unsigned long long, Scaleform::String *);
	static void UnescapeSpecialHTML(const char *, unsigned long long, Scaleform::String *);
	bool HasAbsolutePath();
	static bool HasAbsolutePath(const char *);
	bool HasExtension();
	static bool HasExtension(const char *);
	bool HasProtocol();
	static bool HasProtocol(const char *);
	Scaleform::String GetProtocol();
	Scaleform::String GetPath();
	Scaleform::String GetFilename();
	Scaleform::String GetExtension();
	Scaleform::String & StripProtocol();
	Scaleform::String & StripExtension();
	void operator=(const Scaleform::StringBuffer &);
	void operator=(const Scaleform::String &);
	void operator=(const wchar_t *);
	void operator=(const char *);
	void operator+=(char);
	void operator+=(const wchar_t *);
	void operator+=(const char *);
	void operator+=(const Scaleform::String &);
	Scaleform::String operator+(const Scaleform::String &);
	Scaleform::String operator+(const char *);
	bool operator==(const Scaleform::String::NoCaseKey &);
	bool operator==(const char *);
	bool operator==(const Scaleform::String &);
	bool operator!=(const Scaleform::String::NoCaseKey &);
	bool operator!=(const char *);
	bool operator!=(const Scaleform::String &);
	bool operator<(const Scaleform::String &);
	bool operator<(const char *);
	bool operator>(const Scaleform::String &);
	bool operator>(const char *);
	const char & operator[](unsigned long long);
	const char & operator[](long);
	struct NoCaseKey;
	struct HashFunctor;
	struct NoCaseHashFunctor;
};
struct Scaleform::String::DataDesc
{
	unsigned long long Size; // 0x0
	volatile long RefCount; // 0x8
	char Data[1]; // 0xC
	void AddRef();
	void Release();
	static unsigned long long GetLengthFlagBit();
	unsigned long long GetSize();
	unsigned long long GetLengthFlag();
	bool LengthIsSize();
	DataDesc(Scaleform::String::DataDesc &);
	DataDesc(const Scaleform::String::DataDesc &);
	Scaleform::String::DataDesc & operator=(Scaleform::String::DataDesc &);
	Scaleform::String::DataDesc & operator=(const Scaleform::String::DataDesc &);
};
class Scaleform::AtomicOps<long>
{
	struct Ops;
	typedef long T;
	typedef volatile long PT;
	union C2T_union;
public:
	static long Exchange_Sync(volatile long *, long);
	static long Exchange_Release(volatile long *, long);
	static long Exchange_Acquire(volatile long *, long);
	static long Exchange_NoSync(volatile long *, long);
	static long ExchangeAdd_Sync(volatile long *, long);
	static long ExchangeAdd_Release(volatile long *, long);
	static long ExchangeAdd_Acquire(volatile long *, long);
	static long ExchangeAdd_NoSync(volatile long *, long);
	static bool CompareAndSet_Sync(volatile long *, long, long);
	static bool CompareAndSet_Release(volatile long *, long, long);
	static bool CompareAndSet_Acquire(volatile long *, long, long);
	static bool CompareAndSet_NoSync(volatile long *, long, long);
	static void Store_Release(volatile long *, long);
	static long Load_Acquire(const long *);
};
union Scaleform::String::DataDescUnion
{
public:
	Scaleform::String::DataDesc * pData; // 0x0
	unsigned long long HeapTypeBits; // 0x0
};
struct Scaleform::String::NoConstructor
{
};
struct Scaleform::String::InitStruct
{
	~InitStruct();
	void InitString(char *, unsigned long long);
	InitStruct(const Scaleform::String::InitStruct &);
	InitStruct();
	Scaleform::String::InitStruct & operator=(const Scaleform::String::InitStruct &);
};
Scaleform::String::~String(); // 0x1400C0490
struct Scaleform::String::NoCaseKey
{
	const Scaleform::String * pStr; // 0x0
	NoCaseKey(const Scaleform::String &);
};
struct Scaleform::String::HashFunctor
{
	unsigned long long operator()(const Scaleform::String &);
};
struct Scaleform::String::NoCaseHashFunctor
{
	unsigned long long operator()(const Scaleform::String::NoCaseKey &);
	unsigned long long operator()(const Scaleform::String &);
};
class Scaleform::StringLH :
	Scaleform::String
{
private:
	void SetDataLcl(Scaleform::String::DataDesc *);
	void CopyConstructHelper(const Scaleform::String &);
public:
	StringLH(const wchar_t *);
	StringLH(const Scaleform::String::InitStruct &, unsigned long long);
	StringLH(const Scaleform::String &);
	StringLH(const Scaleform::StringLH &);
	StringLH(const char *, unsigned long long);
	StringLH(const char *);
	StringLH();
	Scaleform::StringLH & operator=(const Scaleform::StringLH &);
	void operator=(const Scaleform::StringBuffer &);
	void operator=(const Scaleform::String &);
	void operator=(const wchar_t *);
	void operator=(const char *);
	~StringLH();
};
class Scaleform::StringDH :
	Scaleform::String
{
private:
	Scaleform::MemoryHeap * pHeap; // 0x8
	void SetDataLcl(Scaleform::String::DataDesc *);
	void CopyConstructHelper(const Scaleform::String &, Scaleform::MemoryHeap *);
public:
	StringDH(Scaleform::MemoryHeap *, const wchar_t *);
	StringDH(Scaleform::MemoryHeap *, const Scaleform::String::InitStruct &, unsigned long long);
	StringDH(Scaleform::MemoryHeap *, const Scaleform::String &);
	StringDH(const Scaleform::String &);
	StringDH(const Scaleform::StringDH &);
	StringDH(Scaleform::MemoryHeap *, const char *, unsigned long long);
	StringDH(Scaleform::MemoryHeap *, const char *, const char *, const char *);
	StringDH(Scaleform::MemoryHeap *, const char *);
	StringDH(Scaleform::MemoryHeap *);
	Scaleform::StringDH & operator=(const Scaleform::StringBuffer &);
	Scaleform::StringDH & operator=(const Scaleform::String &);
	Scaleform::StringDH & operator=(const wchar_t *);
	Scaleform::StringDH & operator=(const char *);
	Scaleform::StringDH & operator=(const Scaleform::StringDH &);
	Scaleform::MemoryHeap * GetHeap();
	~StringDH();
	void __dflt_ctor_closure();
};
class Scaleform::StringBuffer
{
private:
	char * pData; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long BufferSize; // 0x10
	unsigned long long GrowSize; // 0x18
	bool LengthIsSize; // 0x20
	Scaleform::MemoryHeap * pHeap; // 0x28
public:
	StringBuffer(const wchar_t *, Scaleform::MemoryHeap *);
	StringBuffer(const Scaleform::StringBuffer &, Scaleform::MemoryHeap *);
	StringBuffer(const Scaleform::String &, Scaleform::MemoryHeap *);
	StringBuffer(const char *, unsigned long long, Scaleform::MemoryHeap *);
	StringBuffer(const char *, Scaleform::MemoryHeap *);
	StringBuffer(unsigned long long, Scaleform::MemoryHeap *);
	StringBuffer(Scaleform::MemoryHeap *);
	~StringBuffer();
	Scaleform::MemoryHeap * GetHeap();
	unsigned long long GetGrowSize();
	void SetGrowSize(unsigned long long);
	void Clear();
	const char * operator const char *();
	const char * ToCStr();
	unsigned long long GetSize();
	bool IsEmpty();
	unsigned long long GetLength();
	unsigned long GetCharAt(unsigned long long);
	unsigned long GetFirstCharAt(unsigned long long, const char * *);
	unsigned long GetNextChar(const char * *);
	void Resize(unsigned long long);
	void Reserve(unsigned long long);
	void AppendChar(unsigned long);
	void AppendString(const char *, long long);
	void AppendString(const wchar_t *, long long);
	void Insert(const char *, unsigned long long, long long);
	unsigned long long InsertCharAt(unsigned long, unsigned long long);
	void operator=(const Scaleform::StringBuffer &);
	void operator=(const Scaleform::String &);
	void operator=(const wchar_t *);
	void operator=(const char *);
	void operator+=(char);
	void operator+=(const wchar_t *);
	void operator+=(const char *);
	void operator+=(const Scaleform::String &);
	void operator+=(const Scaleform::StringBuffer &);
	const char & operator[](unsigned long long);
	const char & operator[](long);
	char & operator[](unsigned long long);
	char & operator[](long);
	void __dflt_ctor_closure();
	void __copy_ctor_closure(Scaleform::StringBuffer &);
};
class Scaleform::StringDataPtr
{
public:
	StringDataPtr(const Scaleform::String &);
	StringDataPtr(const char *);
	StringDataPtr(const char *, unsigned long long);
	StringDataPtr();
	char operator[](unsigned long long);
	const char * ToCStr();
	unsigned long long GetSize();
	bool IsEmpty();
	bool IsPrefix(const Scaleform::StringDataPtr &);
	bool IsSuffix(const Scaleform::StringDataPtr &);
	long long FindChar(char, unsigned long long);
	long long FindLastChar(char, unsigned long long);
	long long FindSubstring(const Scaleform::StringDataPtr &, unsigned long long);
	Scaleform::StringDataPtr GetTrimLeft(unsigned long long);
	Scaleform::StringDataPtr GetTrimRight(unsigned long long);
	Scaleform::StringDataPtr GetNextToken(char);
	Scaleform::StringDataPtr & TrimLeft(unsigned long long);
	Scaleform::StringDataPtr & TrimRight(unsigned long long);
	Scaleform::StringDataPtr GetPrefix(unsigned long long);
	Scaleform::StringDataPtr GetSuffix(unsigned long long);
	Scaleform::StringDataPtr & Prefix(unsigned long long);
	Scaleform::StringDataPtr & Suffix(unsigned long long);
	static bool IsWhiteSpace(unsigned long);
	Scaleform::StringDataPtr GetTruncateWhitespace();
	Scaleform::StringDataPtr & TruncateWhitespace();
	const char * Begin();
	const char * End();
	struct HashFunctor;
	bool operator==(const Scaleform::StringDataPtr &);
	bool operator!=(const Scaleform::StringDataPtr &);
	static Scaleform::StringDataPtr Null; // 0xFFFFFFFFFFFFFFFF
protected:
	const char * pStr; // 0x0
	unsigned long long Size; // 0x8
};
struct Scaleform::StringDataPtr::HashFunctor
{
	unsigned long long operator()(const Scaleform::StringDataPtr &);
};