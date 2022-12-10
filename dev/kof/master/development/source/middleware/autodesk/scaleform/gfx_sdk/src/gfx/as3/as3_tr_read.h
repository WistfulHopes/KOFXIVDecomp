#pragma once

class Scaleform::GFx::AS3::TR::StackReader
{
	class SelfType;
public:
	StackReader(const Scaleform::GFx::AS3::TR::StackReader &);
	StackReader(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::TR::State &);
protected:
	void HaveRead(long);
	long GetRead();
public:
	Scaleform::GFx::AS3::VM & GetVM();
	Scaleform::GFx::AS3::TR::State & GetState();
protected:
	Scaleform::GFx::AS3::TR::Def * PopOpValue();
	void CheckObject(Scaleform::GFx::AS3::TR::Def *);
	long Read(Scaleform::GFx::AS3::Multiname &, Scaleform::GFx::AS3::TR::Def * &, Scaleform::GFx::AS3::TR::Def * &);
private:
	Scaleform::GFx::AS3::TR::StackReader & operator=(const Scaleform::GFx::AS3::TR::StackReader &);
	Scaleform::GFx::AS3::VM & VMRef; // 0x0
	Scaleform::GFx::AS3::TR::State & StateRef; // 0x8
	long Num; // 0x10
};
class Scaleform::GFx::AS3::TR::MnReader
{
public:
	MnReader(Scaleform::GFx::AS3::VMAbcFile &);
	Scaleform::GFx::AS3::VMAbcFile & GetFile();
	const Scaleform::GFx::AS3::Abc::Multiname & GetMultiname(unsigned long long);
private:
	Scaleform::GFx::AS3::TR::MnReader & operator=(const Scaleform::GFx::AS3::TR::MnReader &);
	Scaleform::GFx::AS3::VMAbcFile & File; // 0x0
};
struct Scaleform::GFx::AS3::TR::ReadArgs :
	Scaleform::GFx::AS3::TR::StackReader
{
	struct SelfType;
	ReadArgs(const Scaleform::GFx::AS3::TR::ReadArgs &);
	ReadArgs(const Scaleform::GFx::AS3::TR::ReadArgs &, unsigned long);
	ReadArgs(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::TR::State &, unsigned long);
	Scaleform::GFx::AS3::TR::Def * * GetCallArgs();
	Scaleform::GFx::AS3::TR::Def * GetCallArg(unsigned long);
	void SetCallArg(unsigned long, Scaleform::GFx::AS3::TR::Def *);
	unsigned long GetCallArgsNum();
private:
	Scaleform::GFx::AS3::TR::ReadArgs & operator=(const Scaleform::GFx::AS3::TR::ReadArgs &);
	enum <unnamed-enum-eFixedArrSize>
	{
		eFixedArrSize = 8,
	};
	const unsigned long ArgNum; // 0x18
	Scaleform::ArrayDH_POD<Scaleform::GFx::AS3::TR::Def *,2,Scaleform::ArrayDefaultPolicy> CallArgs; // 0x20
	Scaleform::GFx::AS3::TR::Def * FixedArr[8]; // 0x40
public:
	~ReadArgs();
};
struct Scaleform::GFx::AS3::TR::ReadArgsObject :
	Scaleform::GFx::AS3::TR::ReadArgs
{
	struct SelfType;
	ReadArgsObject(const Scaleform::GFx::AS3::TR::ReadArgsObject &);
	ReadArgsObject(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::TR::State &, unsigned long);
	Scaleform::GFx::AS3::TR::Def * ArgObject; // 0x80
private:
	Scaleform::GFx::AS3::TR::ReadArgsObject & operator=(const Scaleform::GFx::AS3::TR::ReadArgsObject &);
public:
	~ReadArgsObject();
};
struct Scaleform::GFx::AS3::TR::ReadArgsObjectValue :
	Scaleform::GFx::AS3::TR::ReadArgsObject
{
	struct SelfType;
	ReadArgsObjectValue(Scaleform::GFx::AS3::TR::ReadArgsObjectValue &);
	ReadArgsObjectValue(const Scaleform::GFx::AS3::TR::ReadArgsObjectValue &);
	ReadArgsObjectValue(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::TR::State &, unsigned long);
	Scaleform::GFx::AS3::TR::Def * value; // 0x88
	~ReadArgsObjectValue();
};
struct Scaleform::GFx::AS3::TR::ReadArgsMn :
	Scaleform::GFx::AS3::TR::ReadArgs,
	Scaleform::GFx::AS3::TR::MnReader
{
	struct SelfType;
	ReadArgsMn(const Scaleform::GFx::AS3::TR::ReadArgsMn &);
	ReadArgsMn(Scaleform::GFx::AS3::VMAbcFile &, Scaleform::GFx::AS3::TR::State &, unsigned long, unsigned long);
	Scaleform::GFx::AS3::Multiname ArgMN; // 0x88
	Scaleform::GFx::AS3::TR::Def * Ns; // 0xB8
	Scaleform::GFx::AS3::TR::Def * Name; // 0xC0
private:
	Scaleform::GFx::AS3::TR::ReadArgsMn & operator=(const Scaleform::GFx::AS3::TR::ReadArgsMn &);
public:
	~ReadArgsMn();
};
struct Scaleform::GFx::AS3::TR::ReadArgsMnObject :
	Scaleform::GFx::AS3::TR::ReadArgsMn
{
	struct SelfType;
	ReadArgsMnObject(const Scaleform::GFx::AS3::TR::ReadArgsMnObject &);
	ReadArgsMnObject(Scaleform::GFx::AS3::VMAbcFile &, Scaleform::GFx::AS3::TR::State &, unsigned long, unsigned long);
	Scaleform::GFx::AS3::TR::Def * ArgObject; // 0xC8
private:
	Scaleform::GFx::AS3::TR::ReadArgsMnObject & operator=(const Scaleform::GFx::AS3::TR::ReadArgsMnObject &);
public:
	~ReadArgsMnObject();
};
struct Scaleform::GFx::AS3::TR::ReadMn :
	Scaleform::GFx::AS3::TR::StackReader,
	Scaleform::GFx::AS3::TR::MnReader
{
	struct SelfType;
	ReadMn(const Scaleform::GFx::AS3::TR::ReadMn &);
	ReadMn(Scaleform::GFx::AS3::VMAbcFile &, Scaleform::GFx::AS3::TR::State &, unsigned long);
	Scaleform::GFx::AS3::Multiname ArgMN; // 0x20
	Scaleform::GFx::AS3::TR::Def * Ns; // 0x50
	Scaleform::GFx::AS3::TR::Def * Name; // 0x58
private:
	Scaleform::GFx::AS3::TR::ReadMn & operator=(const Scaleform::GFx::AS3::TR::ReadMn &);
public:
	~ReadMn();
};
struct Scaleform::GFx::AS3::TR::ReadMnCt :
	Scaleform::GFx::AS3::TR::StackReader,
	Scaleform::GFx::AS3::TR::MnReader
{
	struct SelfType;
	ReadMnCt(const Scaleform::GFx::AS3::TR::ReadMnCt &);
	ReadMnCt(Scaleform::GFx::AS3::VMAbcFile &, Scaleform::GFx::AS3::TR::State &, unsigned long);
	const Scaleform::GFx::AS3::Abc::Multiname & ArgMN; // 0x20
private:
	Scaleform::GFx::AS3::TR::ReadMnCt & operator=(const Scaleform::GFx::AS3::TR::ReadMnCt &);
};
struct Scaleform::GFx::AS3::TR::ReadValue :
	Scaleform::GFx::AS3::TR::StackReader
{
	struct SelfType;
	ReadValue(const Scaleform::GFx::AS3::TR::ReadValue &);
	ReadValue(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::TR::State &);
	Scaleform::GFx::AS3::TR::Def * ArgValue; // 0x18
private:
	Scaleform::GFx::AS3::TR::ReadValue & operator=(const Scaleform::GFx::AS3::TR::ReadValue &);
};
struct Scaleform::GFx::AS3::TR::ReadObject :
	Scaleform::GFx::AS3::TR::StackReader
{
	struct SelfType;
	ReadObject(const Scaleform::GFx::AS3::TR::ReadObject &);
	ReadObject(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::TR::State &);
	Scaleform::GFx::AS3::TR::Def * ArgObject; // 0x18
private:
	Scaleform::GFx::AS3::TR::ReadObject & operator=(const Scaleform::GFx::AS3::TR::ReadObject &);
};
struct Scaleform::GFx::AS3::TR::ReadMnCtValue :
	Scaleform::GFx::AS3::TR::ReadMnCt
{
	struct SelfType;
	ReadMnCtValue(const Scaleform::GFx::AS3::TR::ReadMnCtValue &);
	ReadMnCtValue(Scaleform::GFx::AS3::VMAbcFile &, Scaleform::GFx::AS3::TR::State &, unsigned long);
	Scaleform::GFx::AS3::TR::Def * value; // 0x28
private:
	Scaleform::GFx::AS3::TR::ReadMnCtValue & operator=(const Scaleform::GFx::AS3::TR::ReadMnCtValue &);
};
struct Scaleform::GFx::AS3::TR::ReadValueObject :
	Scaleform::GFx::AS3::TR::ReadValue
{
	struct SelfType;
	ReadValueObject(const Scaleform::GFx::AS3::TR::ReadValueObject &);
	ReadValueObject(Scaleform::GFx::AS3::VM &, Scaleform::GFx::AS3::TR::State &);
	Scaleform::GFx::AS3::TR::Def * ArgObject; // 0x20
private:
	Scaleform::GFx::AS3::TR::ReadValueObject & operator=(const Scaleform::GFx::AS3::TR::ReadValueObject &);
};
struct Scaleform::GFx::AS3::TR::ReadValueMn :
	Scaleform::GFx::AS3::TR::ReadValue,
	Scaleform::GFx::AS3::TR::MnReader
{
	struct SelfType;
	ReadValueMn(const Scaleform::GFx::AS3::TR::ReadValueMn &);
	ReadValueMn(Scaleform::GFx::AS3::VMAbcFile &, Scaleform::GFx::AS3::TR::State &, unsigned long);
	Scaleform::GFx::AS3::Multiname ArgMN; // 0x28
	Scaleform::GFx::AS3::TR::Def * Ns; // 0x58
	Scaleform::GFx::AS3::TR::Def * Name; // 0x60
private:
	Scaleform::GFx::AS3::TR::ReadValueMn & operator=(const Scaleform::GFx::AS3::TR::ReadValueMn &);
public:
	~ReadValueMn();
};
struct Scaleform::GFx::AS3::TR::ReadValueMnObject :
	Scaleform::GFx::AS3::TR::ReadValueMn
{
	struct SelfType;
	ReadValueMnObject(const Scaleform::GFx::AS3::TR::ReadValueMnObject &);
	ReadValueMnObject(Scaleform::GFx::AS3::VMAbcFile &, Scaleform::GFx::AS3::TR::State &, unsigned long);
	Scaleform::GFx::AS3::TR::Def * ArgObject; // 0x68
private:
	Scaleform::GFx::AS3::TR::ReadValueMnObject & operator=(const Scaleform::GFx::AS3::TR::ReadValueMnObject &);
public:
	~ReadValueMnObject();
};
struct Scaleform::GFx::AS3::TR::ReadMnObject :
	Scaleform::GFx::AS3::TR::ReadMn
{
	struct SelfType;
	ReadMnObject(const Scaleform::GFx::AS3::TR::ReadMnObject &);
	ReadMnObject(Scaleform::GFx::AS3::VMAbcFile &, Scaleform::GFx::AS3::TR::State &, unsigned long);
	Scaleform::GFx::AS3::TR::Def * ArgObject; // 0x60
private:
	Scaleform::GFx::AS3::TR::ReadMnObject & operator=(const Scaleform::GFx::AS3::TR::ReadMnObject &);
public:
	~ReadMnObject();
};