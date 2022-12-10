#pragma once

class Scaleform::FmtResource
{
public:
	~FmtResource();
	struct TAttrs;
	unsigned long Reflect(const Scaleform::FmtResource::TAttrs * &);
	FmtResource(const Scaleform::FmtResource &);
	FmtResource();
	Scaleform::FmtResource & operator=(const Scaleform::FmtResource &);
};
struct Scaleform::FmtResource::TAttrs
{
	TAttrs();
	unsigned long Num; // 0x0
	unsigned long long * Attrs; // 0x8
};
class Scaleform::Formatter :
	Scaleform::FmtResource,
	Unassignable
{
	enum requirement_t
	{
		rtNone = 0,
		rtPrevStr = 1,
		rtPrevStrSS = 2,
		rtNextStr = 4,
		rtParent = 8,
	};
	typedef unsigned char requirements_t;
	enum ParentRef
	{
		prNone = 0,
		prPrev = 1,
		prNext = 2,
		prPos = 3,
	};
public:
	Formatter(const Scaleform::Formatter &);
	Formatter(Scaleform::MsgFormat &);
	Formatter();
	virtual ~Formatter();
	void Parse(const Scaleform::StringDataPtr &);
	void Convert();
	Scaleform::StringDataPtr GetResult();
	unsigned long long GetSize();
	unsigned char GetRequirements();
	bool Converted();
	void SetPrevStr(const Scaleform::StringDataPtr &);
	Scaleform::StringDataPtr GetPrevStr();
	void SetNextStr(const Scaleform::StringDataPtr &);
	Scaleform::StringDataPtr GetNextStr();
	Scaleform::Formatter::ParentRef GetParentRef();
	unsigned char GetParentPos();
	void SetParent(const Scaleform::FmtResource &);
protected:
	bool HasParent();
	const Scaleform::MsgFormat & GetParent();
	Scaleform::MsgFormat & GetParent();
	void SetParentRef(Scaleform::Formatter::ParentRef);
	void SetParentPos(unsigned char);
	void SetConverted(bool);
private:
	Scaleform::MsgFormat * pParentFmt; // 0x8
	bool IsConverted; // 0x10
};
class Scaleform::StrFormatter :
	Scaleform::Formatter
{
public:
	StrFormatter(Scaleform::StrFormatter &);
	StrFormatter(const Scaleform::StrFormatter &);
	StrFormatter(Scaleform::MsgFormat &, const Scaleform::String &);
	StrFormatter(Scaleform::MsgFormat &, const Scaleform::StringDataPtr &);
	StrFormatter(Scaleform::MsgFormat &, const char *);
	StrFormatter(const Scaleform::String &);
	StrFormatter(const Scaleform::StringDataPtr &);
	StrFormatter(const char *);
	virtual void Parse(const Scaleform::StringDataPtr &);
	virtual void Convert();
	virtual Scaleform::StringDataPtr GetResult();
	virtual unsigned long long GetSize();
private:
	const Scaleform::StringDataPtr Value; // 0x18
public:
	virtual ~StrFormatter();
};
class Scaleform::BoolFormatter :
	Scaleform::Formatter
{
public:
	BoolFormatter(Scaleform::BoolFormatter &);
	BoolFormatter(const Scaleform::BoolFormatter &);
	BoolFormatter(Scaleform::MsgFormat &, bool);
	virtual void Parse(const Scaleform::StringDataPtr &);
	virtual void Convert();
	virtual Scaleform::StringDataPtr GetResult();
	virtual unsigned long long GetSize();
private:
	bool Value : 1; // 0x18
	bool SwitchStmt : 1; // 0x18
	Scaleform::StringDataPtr result; // 0x20
public:
	virtual ~BoolFormatter();
};
class Scaleform::NumericBase
{
public:
	NumericBase();
	char * ToCStr();
	void SetPrecision(unsigned long);
	void SetWidth(unsigned long);
	void SetShowSign(bool);
	void SetPrefixChar(char);
	void SetSeparatorChar(char);
	void SetBigLetters(bool);
	void SetBlankPrefix(bool);
	void SetAlignLeft(bool);
	void SetSharpSign(bool);
protected:
	void ReadPrintFormat(Scaleform::StringDataPtr);
	void ReadWidth(Scaleform::StringDataPtr);
	void ULongLong2String(char *, unsigned long long, bool, unsigned long);
	void ULong2String(char *, unsigned long, bool, unsigned long);
	unsigned long Precision : 5; // 0x0
	unsigned long Width : 5; // 0x0
	char PrefixChar : 7; // 0x4
	char SeparatorChar : 7; // 0x5
	bool ShowSign : 1; // 0x5
	bool BigLetters : 1; // 0x6
	bool BlankPrefix : 1; // 0x6
	bool AlignLeft : 1; // 0x6
	bool SharpSign : 1; // 0x6
	char * ValueStr; // 0x8
};
class Scaleform::LongFormatter :
	Scaleform::Formatter,
	Scaleform::NumericBase,
	Scaleform::String::InitStruct
{
public:
	LongFormatter(Scaleform::LongFormatter &);
	LongFormatter(const Scaleform::LongFormatter &);
	LongFormatter(Scaleform::MsgFormat &, unsigned long long);
	LongFormatter(Scaleform::MsgFormat &, long long);
	LongFormatter(Scaleform::MsgFormat &, unsigned long);
	LongFormatter(Scaleform::MsgFormat &, long);
	LongFormatter(Scaleform::MsgFormat &, unsigned long);
	LongFormatter(Scaleform::MsgFormat &, long);
	LongFormatter(unsigned long long);
	LongFormatter(long long);
	LongFormatter(unsigned long);
	LongFormatter(long);
	LongFormatter(unsigned long);
	LongFormatter(long);
	virtual void Parse(const Scaleform::StringDataPtr &);
	virtual void Convert();
	virtual Scaleform::StringDataPtr GetResult();
	virtual unsigned long long GetSize();
	virtual void InitString(char *, unsigned long long);
	Scaleform::LongFormatter & SetPrecision(unsigned long);
	Scaleform::LongFormatter & SetWidth(unsigned long);
	Scaleform::LongFormatter & SetShowSign(bool);
	Scaleform::LongFormatter & SetBase(unsigned long);
	Scaleform::LongFormatter & SetPrefixChar(char);
	Scaleform::LongFormatter & SetSeparatorChar(char);
	Scaleform::LongFormatter & SetBigLetters(bool);
private:
	void AppendSignCharLeft(bool);
	unsigned long long GetSizeInternal();
	unsigned long Base : 5; // 0x30
	const bool SignedValue : 1; // 0x34
	bool IsLongLong : 1; // 0x34
	const long long Value; // 0x38
	char Buff[29]; // 0x40
public:
	virtual ~LongFormatter();
};
class Scaleform::DoubleFormatter :
	Scaleform::Formatter,
	Scaleform::NumericBase,
	Scaleform::String::InitStruct
{
	enum PresentationType
	{
		FmtDecimal = 0,
		FmtScientific = 1,
		FmtSignificant = 2,
	};
public:
	DoubleFormatter(Scaleform::DoubleFormatter &);
	DoubleFormatter(const Scaleform::DoubleFormatter &);
	DoubleFormatter(Scaleform::MsgFormat &, double);
	DoubleFormatter(double);
	virtual void Parse(const Scaleform::StringDataPtr &);
	virtual void Convert();
	virtual Scaleform::StringDataPtr GetResult();
	virtual unsigned long long GetSize();
	virtual void InitString(char *, unsigned long long);
	Scaleform::DoubleFormatter & SetType(Scaleform::DoubleFormatter::PresentationType);
	Scaleform::DoubleFormatter & SetPrecision(unsigned long);
	Scaleform::DoubleFormatter & SetWidth(unsigned long);
	Scaleform::DoubleFormatter & SetShowSign(bool);
	Scaleform::DoubleFormatter & SetPrefixChar(char);
	Scaleform::DoubleFormatter & SetSeparatorChar(char);
	Scaleform::DoubleFormatter & SetBigLetters(bool);
	Scaleform::DoubleFormatter & SetAlignLeft(bool);
private:
	void AppendSignCharLeft(bool, bool);
	unsigned long long GetSizeInternal();
	Scaleform::DoubleFormatter::PresentationType Type; // 0x30
	const double Value; // 0x38
	unsigned long long Len; // 0x40
	char Buff[348]; // 0x48
public:
	virtual ~DoubleFormatter();
};
class Scaleform::ResourceFormatter :
	Scaleform::Formatter
{
	class ValueType;
public:
	ResourceFormatter(const Scaleform::ResourceFormatter &);
	ResourceFormatter(Scaleform::MsgFormat &, const Scaleform::ResourceFormatter::ValueType &);
	virtual ~ResourceFormatter();
	virtual void Parse(const Scaleform::StringDataPtr &);
	virtual void Convert();
	virtual Scaleform::StringDataPtr GetResult();
	virtual unsigned long long GetSize();
private:
	Scaleform::StringDataPtr MakeString(const Scaleform::FmtResource::TAttrs &);
	const Scaleform::ResourceFormatter::ValueType Value; // 0x18
	const Scaleform::ResouceProvider * pRP; // 0x30
	Scaleform::StringDataPtr Result; // 0x38
};
class Scaleform::ResourceFormatter::ValueType :
	Unassignable
{
public:
	ValueType(const char *, const Scaleform::ResouceProvider &);
	ValueType(const char *);
	ValueType(long, const Scaleform::ResouceProvider &);
	ValueType(long);
	ValueType(unsigned long long, const Scaleform::ResouceProvider &);
	ValueType(unsigned long long);
	bool IsStrResource();
	const char * GetStrResource();
	unsigned long long GetLongResource();
	const Scaleform::ResouceProvider * GetResouceProvider();
	void SetResouceProvider(const Scaleform::ResouceProvider *);
	union ResourceType;
private:
	Scaleform::ResourceFormatter::ValueType::ResourceType Resource; // 0x0
	const bool IsString; // 0x8
	const Scaleform::ResouceProvider * RC_Provider; // 0x10
};
union Scaleform::ResourceFormatter::ValueType::ResourceType
{
public:
	const char * RStr; // 0x0
	unsigned long long RLong; // 0x0
};
class Scaleform::ResouceProvider :
	Scaleform::NewOverrideBase<2>
{
public:
	ResouceProvider(const Scaleform::ResouceProvider &);
	ResouceProvider(const Scaleform::ResouceProvider *);
	~ResouceProvider();
	unsigned long Reflect(const Scaleform::ResourceFormatter::ValueType &, const Scaleform::FmtResource::TAttrs * *);
	Scaleform::StringDataPtr MakeString(const Scaleform::ResourceFormatter::ValueType &, const Scaleform::FmtResource::TAttrs &);
protected:
	const Scaleform::ResouceProvider * GetNext();
private:
	const Scaleform::ResouceProvider * nextRP; // 0x8
public:
	Scaleform::ResouceProvider & operator=(const Scaleform::ResouceProvider &);
	void __dflt_ctor_closure();
};
class Scaleform::NewOverrideBase<2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
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
class Scaleform::FormatterFactory
{
public:
	~FormatterFactory();
	struct Args;
	Scaleform::Formatter * MakeFormatter(const Scaleform::FormatterFactory::Args &);
	FormatterFactory(const Scaleform::FormatterFactory &);
	FormatterFactory();
	Scaleform::FormatterFactory & operator=(const Scaleform::FormatterFactory &);
};
struct Scaleform::FormatterFactory::Args
{
	Args(Scaleform::MsgFormat &, const Scaleform::StringDataPtr &, const Scaleform::ResourceFormatter::ValueType &);
	Scaleform::MsgFormat & Fmt; // 0x0
	const Scaleform::StringDataPtr & Name; // 0x8
	const Scaleform::ResourceFormatter::ValueType & Value; // 0x10
private:
	Scaleform::FormatterFactory::Args & operator=(const Scaleform::FormatterFactory::Args &);
};
class Scaleform::LocaleProvider :
	Scaleform::FormatterFactory
{
public:
	virtual ~LocaleProvider();
	const Scaleform::Locale & GetLocale();
	Scaleform::ResouceProvider * GetDefaultRCProvider();
	LocaleProvider(const Scaleform::LocaleProvider &);
	LocaleProvider();
	Scaleform::LocaleProvider & operator=(const Scaleform::LocaleProvider &);
};
class Scaleform::MsgFormat :
	protected Scaleform::String::InitStruct,
	Unassignable
{
	class Sink;
public:
	MsgFormat(const Scaleform::MsgFormat &);
	MsgFormat(const Scaleform::MsgFormat::Sink &, const Scaleform::LocaleProvider &);
	MsgFormat(const Scaleform::MsgFormat::Sink &);
	virtual ~MsgFormat();
	typedef unsigned char ArgNumType;
	class MemoryPoolType;
	void Parse(const char *);
	void FormatF(const Scaleform::StringDataPtr &, char *);
	bool ReplaceFormatter(Scaleform::Formatter *, Scaleform::Formatter *, bool);
	unsigned char GetFirstArgNum();
	void SetFirstArgNum(unsigned char);
	const Scaleform::LocaleProvider * GetLocaleProvider();
	Scaleform::StackMemPool<512,8,Scaleform::MemPoolImmediateFree> & GetMemoryPool();
	unsigned long long GetStrSize();
	unsigned char GetEscapeChar();
	void SetEscapeChar(unsigned char);
	void FinishFormatD();
	enum ERecType
	{
		eStrType = 0,
		eParamStrType = 1,
		eFmtType = 2,
	};
	struct str_ptr;
	struct fmt_ptr;
	union fmt_value;
	class fmt_record;
private:
	bool NextFormatter();
	void Bind(Scaleform::Formatter *, const bool);
	void BindNonPos();
	void MakeString();
	void Evaluate(unsigned long long);
	void AddStringRecord(const Scaleform::StringDataPtr &);
	void AddFormatterRecord(Scaleform::Formatter *, bool);
	virtual void InitString(char *, unsigned long long);
	class ?$StackArray@Vfmt_record@MsgFormat@Scaleform@@$0BA@V?$ArrayPOD@Vfmt_record@MsgFormat@Scaleform@@$01UArrayDefaultPolicy@3@@3@;
	class DataType;
	unsigned char EscapeChar; // 0x8
	unsigned char FirstArgNum; // 0x9
	unsigned short NonPosParamNum; // 0xA
	unsigned short UnboundFmtrInd; // 0xC
	unsigned long long StrSize; // 0x10
	long long DataInd; // 0x18
	const Scaleform::LocaleProvider * pLocaleProvider; // 0x20
	const Scaleform::MsgFormat::Sink Result; // 0x28
	Scaleform::MsgFormat::StackArray<Scaleform::MsgFormat::fmt_record,16,Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> > Data; // 0x40
	Scaleform::StackMemPool<512,8,Scaleform::MemPoolImmediateFree> MemPool; // 0x1E0
};
class Scaleform::MsgFormat::Sink
{
public:
	Sink(const Scaleform::StringDataPtr &);
	Sink(Scaleform::StringBuffer &);
	Sink(Scaleform::String &);
	enum DataType
	{
		tStr = 0,
		tStrBuffer = 1,
		tDataPtr = 2,
	};
	struct StrDataType;
	union SinkDataType;
private:
	Scaleform::MsgFormat::Sink::DataType Type; // 0x0
	Scaleform::MsgFormat::Sink::SinkDataType SinkData; // 0x8
};
struct Scaleform::MsgFormat::Sink::StrDataType
{
	const char * pStr; // 0x0
	unsigned long long Size; // 0x8
};
union Scaleform::MsgFormat::Sink::SinkDataType
{
	struct
	{
		SinkDataType(const Scaleform::StringDataPtr &);
		SinkDataType(Scaleform::StringBuffer &);
		SinkDataType(Scaleform::String &);
	};
public:
	Scaleform::String * pStr; // 0x0
	Scaleform::StringBuffer * pStrBuffer; // 0x0
	Scaleform::MsgFormat::Sink::StrDataType DataPtr; // 0x0
};
class Scaleform::StackMemPool<512,8,Scaleform::MemPoolImmediateFree> :
	protected Scaleform::MemPoolImmediateFree
{
public:
	StackMemPool<512,8,Scaleform::MemPoolImmediateFree>(Scaleform::MemoryHeap *);
	void * Alloc(unsigned long long);
	void Free(void *);
private:
	static char * AlignMem(char *);
	enum <unnamed-enum-buff_max_size>
	{
		buff_max_size = 512,
		align = 8,
	};
	char Buff[512]; // 0x8
	char * BuffPtr; // 0x208
	unsigned long long BuffSize; // 0x210
public:
	void __dflt_ctor_closure();
};
void Scaleform::MsgFormat::FormatD1<char const * __ptr64>(const char * & v); // 0x140360370
void Scaleform::MsgFormat::FormatD1<unsigned short>(const unsigned short & v); // 0x1403D1B00
void Scaleform::MsgFormat::FormatD1<int>(const long & v); // 0x140446DF0
void Scaleform::MsgFormat::FormatD1<unsigned long>(const unsigned long & v); // 0x1402DB4B0
void Scaleform::MsgFormat::FormatD1<unsigned int>(const unsigned long & v); // 0x1402DB4B0
void Scaleform::MsgFormat::FormatD1<Scaleform::String>(const Scaleform::String & v); // 0x1402F92C0
void Scaleform::MsgFormat::FormatD1<long>(const long & v); // 0x140446DF0
void Scaleform::MsgFormat::FormatD1<Scaleform::StringDataPtr>(const Scaleform::StringDataPtr & v); // 0x140446EE0
struct Scaleform::MsgFormat::str_ptr
{
	const char * Str; // 0x0
	unsigned char Len; // 0x8
	unsigned char ArgNum; // 0x9
};
struct Scaleform::MsgFormat::fmt_ptr
{
	Scaleform::Formatter * Formatter; // 0x0
	bool Allocated; // 0x8
};
union Scaleform::MsgFormat::fmt_value
{
public:
	Scaleform::MsgFormat::str_ptr String; // 0x0
	Scaleform::MsgFormat::fmt_ptr Formatter; // 0x0
};
class Scaleform::MsgFormat::fmt_record
{
public:
	fmt_record(Scaleform::MsgFormat::ERecType, const Scaleform::MsgFormat::fmt_value &);
	Scaleform::MsgFormat::ERecType GetType();
	const Scaleform::MsgFormat::fmt_value & GetValue();
private:
	Scaleform::MsgFormat::ERecType RecType; // 0x0
	Scaleform::MsgFormat::fmt_value RecValue; // 0x8
};
class Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::MsgFormat::fmt_record,Scaleform::AllocatorGH_POD<Scaleform::MsgFormat::fmt_record,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::MsgFormat::StackArray<Scaleform::MsgFormat::fmt_record,16,Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
public:
	StackArray<Scaleform::MsgFormat::fmt_record,16,Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::MsgFormat::StackArray<Scaleform::MsgFormat::fmt_record,16,Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> > &);
	StackArray<Scaleform::MsgFormat::fmt_record,16,Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> >(const Scaleform::MsgFormat::StackArray<Scaleform::MsgFormat::fmt_record,16,Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> > &);
	StackArray<Scaleform::MsgFormat::fmt_record,16,Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> >();
	unsigned long long GetSize();
	void PushBack(const Scaleform::MsgFormat::fmt_record &);
	const Scaleform::MsgFormat::fmt_record & operator[](unsigned long long);
	Scaleform::MsgFormat::fmt_record & operator[](unsigned long long);
private:
	unsigned long long Size; // 0x0
	Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> DynamicArray; // 0x8
	char StaticArray[384]; // 0x20
public:
	~StackArray<Scaleform::MsgFormat::fmt_record,16,Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> >();
	Scaleform::MsgFormat::StackArray<Scaleform::MsgFormat::fmt_record,16,Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> > & operator=(Scaleform::MsgFormat::StackArray<Scaleform::MsgFormat::fmt_record,16,Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> > &);
	Scaleform::MsgFormat::StackArray<Scaleform::MsgFormat::fmt_record,16,Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> > & operator=(const Scaleform::MsgFormat::StackArray<Scaleform::MsgFormat::fmt_record,16,Scaleform::ArrayPOD<Scaleform::MsgFormat::fmt_record,2,Scaleform::ArrayDefaultPolicy> > &);
};
unsigned long long Scaleform::Format<Scaleform::StringDataPtr,char const * __ptr64>(const Scaleform::MsgFormat::Sink & result, const char * fmt, const Scaleform::StringDataPtr & v1, const char * & v2); // 0x140446D50