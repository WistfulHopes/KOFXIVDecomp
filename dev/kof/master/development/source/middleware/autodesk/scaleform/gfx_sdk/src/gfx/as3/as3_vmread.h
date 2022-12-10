#pragma once

class Scaleform::GFx::AS3::StackReader
{
	class SelfType;
public:
	StackReader(Scaleform::GFx::AS3::VM &);
	static void CheckObject(Scaleform::GFx::AS3::VM &, const Scaleform::GFx::AS3::Value &);
protected:
	const Scaleform::GFx::AS3::ValueStack & GetOpStack();
	Scaleform::GFx::AS3::ValueStack & GetOpStack();
	void PopBack(unsigned long long);
	void PopBack();
	void PopBack2();
	void PopBack3();
	const Scaleform::GFx::AS3::Value & Back();
	Scaleform::GFx::AS3::Value & Back();
	Scaleform::GFx::AS3::Value & Release0();
	void ReleaseN(unsigned long long);
	Scaleform::GFx::AS3::Value * GetCurrent();
	void Read(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::Multiname &);
private:
	Scaleform::GFx::AS3::StackReader & operator=(const Scaleform::GFx::AS3::StackReader &);
	Scaleform::GFx::AS3::ValueStack & OpStack; // 0x0
};
void Scaleform::GFx::AS3::StackReader::CheckObject(Scaleform::GFx::AS3::VM & vm, const Scaleform::GFx::AS3::Value & v); // 0x1404650D0
class Scaleform::GFx::AS3::MnReader
{
};
struct Scaleform::GFx::AS3::ReadArgs :
	Scaleform::GFx::AS3::StackReader
{
	struct SelfType;
	ReadArgs(const Scaleform::GFx::AS3::ReadArgs &);
	ReadArgs(Scaleform::GFx::AS3::VM &, unsigned long);
	~ReadArgs();
	Scaleform::GFx::AS3::Value * GetCallArgs();
	unsigned long GetCallArgsNum();
	unsigned long & GetCallArgsNumRef();
private:
	Scaleform::GFx::AS3::ReadArgs & operator=(const Scaleform::GFx::AS3::ReadArgs &);
	enum <unnamed-enum-eFixedArrSize>
	{
		eFixedArrSize = 8,
	};
	struct AlignedStruct;
	unsigned long ArgNum; // 0x8
	Scaleform::GFx::AS3::ReadArgs::AlignedStruct FixedArr[8]; // 0x10
	Scaleform::ArrayDH<Scaleform::GFx::AS3::ReadArgs::AlignedStruct,2,Scaleform::ArrayDefaultPolicy> CallArgs; // 0x110
};
Scaleform::GFx::AS3::ReadArgs::~ReadArgs(); // 0x1404551C0
struct Scaleform::GFx::AS3::ReadArgs::AlignedStruct
{
	union Extra;
	struct VStruct;
	union VU;
	unsigned long Flags; // 0x0
	Scaleform::GFx::AS3::ReadArgs::AlignedStruct::Extra Bonus; // 0x8
	Scaleform::GFx::AS3::ReadArgs::AlignedStruct::VU value; // 0x10
};
union Scaleform::GFx::AS3::ReadArgs::AlignedStruct::Extra
{
public:
	void * v1; // 0x0
};
struct Scaleform::GFx::AS3::ReadArgs::AlignedStruct::VStruct
{
	void * v1; // 0x0
	void * v2; // 0x8
};
union Scaleform::GFx::AS3::ReadArgs::AlignedStruct::VU
{
public:
	double VNumber; // 0x0
	Scaleform::GFx::AS3::ReadArgs::AlignedStruct::VStruct VS; // 0x0
};
class Scaleform::ArrayDH<Scaleform::GFx::AS3::ReadArgs::AlignedStruct,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<Scaleform::GFx::AS3::ReadArgs::AlignedStruct,Scaleform::AllocatorDH<Scaleform::GFx::AS3::ReadArgs::AlignedStruct,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH<Scaleform::GFx::AS3::ReadArgs::AlignedStruct,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH<Scaleform::GFx::AS3::ReadArgs::AlignedStruct,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH<Scaleform::GFx::AS3::ReadArgs::AlignedStruct,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH<Scaleform::GFx::AS3::ReadArgs::AlignedStruct,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH<Scaleform::GFx::AS3::ReadArgs::AlignedStruct,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH<Scaleform::GFx::AS3::ReadArgs::AlignedStruct,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH<Scaleform::GFx::AS3::ReadArgs::AlignedStruct,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH<Scaleform::GFx::AS3::ReadArgs::AlignedStruct,2,Scaleform::ArrayDefaultPolicy>();
};
struct Scaleform::GFx::AS3::ReadArgsThis :
	Scaleform::GFx::AS3::ReadArgs
{
	struct SelfType;
	ReadArgsThis(const Scaleform::GFx::AS3::ReadArgsThis &);
	ReadArgsThis(Scaleform::GFx::AS3::VM &, unsigned long);
	const Scaleform::GFx::AS3::Value & GetThis();
private:
	Scaleform::GFx::AS3::ReadArgsThis & operator=(const Scaleform::GFx::AS3::ReadArgsThis &);
	Scaleform::GFx::AS3::Value This; // 0x130
public:
	~ReadArgsThis();
};
struct Scaleform::GFx::AS3::ReadArgsThisRef :
	Scaleform::GFx::AS3::ReadArgs
{
	struct SelfType;
	ReadArgsThisRef(const Scaleform::GFx::AS3::ReadArgsThisRef &);
	ReadArgsThisRef(Scaleform::GFx::AS3::VM &, unsigned long);
	const Scaleform::GFx::AS3::Value & GetThis();
	Scaleform::GFx::AS3::Value & GetResult();
private:
	Scaleform::GFx::AS3::ReadArgsThisRef & operator=(const Scaleform::GFx::AS3::ReadArgsThisRef &);
	Scaleform::GFx::AS3::Value & This; // 0x130
public:
	~ReadArgsThisRef();
};
struct Scaleform::GFx::AS3::ReadArgsThisValueRef :
	Scaleform::GFx::AS3::ReadArgsThis
{
	struct SelfType;
	ReadArgsThisValueRef(Scaleform::GFx::AS3::ReadArgsThisValueRef &);
	ReadArgsThisValueRef(const Scaleform::GFx::AS3::ReadArgsThisValueRef &);
	ReadArgsThisValueRef(Scaleform::GFx::AS3::VM &, unsigned long);
	const Scaleform::GFx::AS3::Value GetValue();
	Scaleform::GFx::AS3::Value & GetResult();
private:
	Scaleform::GFx::AS3::Value & value; // 0x150
public:
	~ReadArgsThisValueRef();
};
struct Scaleform::GFx::AS3::ReadArgsMn :
	Scaleform::GFx::AS3::ReadArgs
{
	struct SelfType;
	ReadArgsMn(const Scaleform::GFx::AS3::ReadArgsMn &);
	ReadArgsMn(Scaleform::GFx::AS3::VMFile &, unsigned long, const Scaleform::GFx::AS3::Abc::Multiname &);
	Scaleform::GFx::AS3::Multiname ArgMN; // 0x130
private:
	Scaleform::GFx::AS3::ReadArgsMn & operator=(const Scaleform::GFx::AS3::ReadArgsMn &);
public:
	~ReadArgsMn();
};
struct Scaleform::GFx::AS3::ReadArgsMnThis :
	Scaleform::GFx::AS3::ReadArgsMn
{
	struct SelfType;
	ReadArgsMnThis(const Scaleform::GFx::AS3::ReadArgsMnThis &);
	ReadArgsMnThis(Scaleform::GFx::AS3::VMFile &, unsigned long, const Scaleform::GFx::AS3::Abc::Multiname &);
	const Scaleform::GFx::AS3::Value & GetThis();
private:
	Scaleform::GFx::AS3::ReadArgsMnThis & operator=(const Scaleform::GFx::AS3::ReadArgsMnThis &);
	const Scaleform::GFx::AS3::Value This; // 0x160
public:
	~ReadArgsMnThis();
};
struct Scaleform::GFx::AS3::ReadArgsMnThisRef :
	Scaleform::GFx::AS3::ReadArgsMn
{
	struct SelfType;
	ReadArgsMnThisRef(const Scaleform::GFx::AS3::ReadArgsMnThisRef &);
	ReadArgsMnThisRef(Scaleform::GFx::AS3::VMFile &, unsigned long, const Scaleform::GFx::AS3::Abc::Multiname &);
	const Scaleform::GFx::AS3::Value & GetThis();
	Scaleform::GFx::AS3::Value & GetResult();
private:
	Scaleform::GFx::AS3::ReadArgsMnThisRef & operator=(const Scaleform::GFx::AS3::ReadArgsMnThisRef &);
	Scaleform::GFx::AS3::Value & This; // 0x160
public:
	~ReadArgsMnThisRef();
};
struct Scaleform::GFx::AS3::ReadMn :
	Scaleform::GFx::AS3::StackReader
{
	struct SelfType;
	ReadMn(const Scaleform::GFx::AS3::ReadMn &);
	ReadMn(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Abc::Multiname &);
	Scaleform::GFx::AS3::Multiname ArgMN; // 0x8
private:
	Scaleform::GFx::AS3::ReadMn & operator=(const Scaleform::GFx::AS3::ReadMn &);
public:
	~ReadMn();
};
struct Scaleform::GFx::AS3::ReadValue :
	Scaleform::GFx::AS3::StackReader
{
	struct SelfType;
	ReadValue(const Scaleform::GFx::AS3::ReadValue &);
	ReadValue(Scaleform::GFx::AS3::VM &);
	const Scaleform::GFx::AS3::Value & GetValue();
private:
	Scaleform::GFx::AS3::ReadValue & operator=(const Scaleform::GFx::AS3::ReadValue &);
	Scaleform::GFx::AS3::Value ArgValue; // 0x8
public:
	~ReadValue();
};
struct Scaleform::GFx::AS3::ReadThisRef :
	Scaleform::GFx::AS3::StackReader
{
	struct SelfType;
	ReadThisRef(Scaleform::GFx::AS3::VM &);
	const Scaleform::GFx::AS3::Value & GetThis();
	Scaleform::GFx::AS3::Value & GetResult();
private:
	Scaleform::GFx::AS3::ReadThisRef & operator=(const Scaleform::GFx::AS3::ReadThisRef &);
	Scaleform::GFx::AS3::Value & This; // 0x8
};
struct Scaleform::GFx::AS3::ReadValueRef :
	Scaleform::GFx::AS3::StackReader
{
	struct SelfType;
	ReadValueRef(Scaleform::GFx::AS3::VM &);
	const Scaleform::GFx::AS3::Value & GetValue();
	Scaleform::GFx::AS3::Value & GetResult();
private:
	Scaleform::GFx::AS3::ReadValueRef & operator=(const Scaleform::GFx::AS3::ReadValueRef &);
	Scaleform::GFx::AS3::Value & value; // 0x8
};
struct Scaleform::GFx::AS3::ReadValueObject :
	Scaleform::GFx::AS3::ReadValue
{
	struct SelfType;
	ReadValueObject(const Scaleform::GFx::AS3::ReadValueObject &);
	ReadValueObject(Scaleform::GFx::AS3::VM &);
	const Scaleform::GFx::AS3::Value & GetObjectA();
private:
	Scaleform::GFx::AS3::ReadValueObject & operator=(const Scaleform::GFx::AS3::ReadValueObject &);
	const Scaleform::GFx::AS3::Value ArgObject; // 0x28
public:
	~ReadValueObject();
};
struct Scaleform::GFx::AS3::ReadValueMn :
	Scaleform::GFx::AS3::ReadValue,
	Scaleform::GFx::AS3::MnReader
{
	struct SelfType;
	ReadValueMn(const Scaleform::GFx::AS3::ReadValueMn &);
	ReadValueMn(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Abc::Multiname &);
	Scaleform::GFx::AS3::Multiname ArgMN; // 0x28
private:
	Scaleform::GFx::AS3::ReadValueMn & operator=(const Scaleform::GFx::AS3::ReadValueMn &);
public:
	~ReadValueMn();
};
struct Scaleform::GFx::AS3::ReadValueMnObject :
	Scaleform::GFx::AS3::ReadValueMn
{
	struct SelfType;
	ReadValueMnObject(const Scaleform::GFx::AS3::ReadValueMnObject &);
	ReadValueMnObject(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Abc::Multiname &);
	const Scaleform::GFx::AS3::Value & GetObjectA();
private:
	Scaleform::GFx::AS3::ReadValueMnObject & operator=(const Scaleform::GFx::AS3::ReadValueMnObject &);
	const Scaleform::GFx::AS3::Value ArgObject; // 0x58
public:
	~ReadValueMnObject();
};
struct Scaleform::GFx::AS3::ReadMnThisRef :
	Scaleform::GFx::AS3::ReadMn
{
	struct SelfType;
	ReadMnThisRef(const Scaleform::GFx::AS3::ReadMnThisRef &);
	ReadMnThisRef(Scaleform::GFx::AS3::VMFile &, const Scaleform::GFx::AS3::Abc::Multiname &);
	const Scaleform::GFx::AS3::Value & GetThis();
	Scaleform::GFx::AS3::Value & GetResult();
private:
	Scaleform::GFx::AS3::ReadMnThisRef & operator=(const Scaleform::GFx::AS3::ReadMnThisRef &);
	Scaleform::GFx::AS3::Value & This; // 0x38
public:
	~ReadMnThisRef();
};