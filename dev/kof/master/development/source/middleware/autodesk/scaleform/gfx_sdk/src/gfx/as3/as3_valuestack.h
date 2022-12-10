#pragma once

class Scaleform::GFx::AS3::VSBase
{
	class ValueType;
public:
	VSBase(Scaleform::GFx::AS3::Value *);
	VSBase();
	Scaleform::GFx::AS3::Value * GetCurrent();
	unsigned long long GetSize();
	Scaleform::GFx::AS3::Value & Top0();
	Scaleform::GFx::AS3::Value & Top1();
	Scaleform::GFx::AS3::Value & TopN(unsigned short);
	Scaleform::GFx::AS3::Value & Back();
	const Scaleform::GFx::AS3::Value & Back();
	void PushBack(unsigned long);
	void PushBack(const Scaleform::GFx::AS3::Value &);
	void PushBack();
	void PickPushBack(Scaleform::GFx::AS3::Value &);
	void PushBackNRC(Scaleform::GFx::AS3::Value &);
	void PopBack(unsigned long);
	void PopBack();
	void PopBack2();
	void PopBack3();
	Scaleform::GFx::AS3::Value & Release0();
	void ReleaseN(unsigned long long);
	void Acquire1();
	void SwapTop();
	Scaleform::GFx::AS3::Value & operator[](unsigned long long);
	Scaleform::GFx::AS3::Value & At(unsigned long long);
	void Clear();
	bool IsEmpty();
	Scaleform::GFx::AS3::Value * GetFirst();
protected:
	Scaleform::GFx::AS3::Value * pCurrent; // 0x0
	Scaleform::GFx::AS3::Value * pStack; // 0x8
};
void Scaleform::GFx::AS3::VSBase::PopBack(unsigned long n); // 0x14049ABE0
struct Scaleform::GFx::AS3::PrimitiveVS :
	Scaleform::GFx::AS3::VSBase
{
	class ValueType;
	PrimitiveVS(const Scaleform::GFx::AS3::VSBase &);
	PrimitiveVS();
	~PrimitiveVS();
	void Reserve(unsigned short);
private:
	void Init(unsigned short);
};
struct Scaleform::GFx::AS3::ValueStack :
	Scaleform::GFx::AS3::VSBase
{
	class ValueType;
	enum <unnamed-enum-DefPageSize>
	{
		DefPageSize = 256,
	};
	struct Page;
	ValueStack();
	~ValueStack();
	void Reserve(unsigned short);
	void ReleaseReserved(const Scaleform::GFx::AS3::VSBase &);
	void PopReserved(const Scaleform::GFx::AS3::VSBase &);
private:
	Scaleform::GFx::AS3::ValueStack::Page * AllocPage(unsigned short);
	Scaleform::GFx::AS3::ValueStack::Page * NewPage(unsigned short);
	void Init(unsigned short);
	Scaleform::GFx::AS3::ValueStack::Page * pCurrentPage; // 0x10
	Scaleform::GFx::AS3::ValueStack::Page * pReserved; // 0x18
};
struct Scaleform::GFx::AS3::ValueStack::Page
{
	unsigned short ReservationNum; // 0x0
	unsigned short PageSize; // 0x2
	Scaleform::GFx::AS3::ValueStack::Page * pNext; // 0x8
	Scaleform::GFx::AS3::ValueStack::Page * pPrev; // 0x10
	Scaleform::GFx::AS3::Value Values[1]; // 0x18
	Page(Scaleform::GFx::AS3::ValueStack::Page &);
	Page(const Scaleform::GFx::AS3::ValueStack::Page &);
	Page();
	~Page();
	Scaleform::GFx::AS3::ValueStack::Page & operator=(Scaleform::GFx::AS3::ValueStack::Page &);
	Scaleform::GFx::AS3::ValueStack::Page & operator=(const Scaleform::GFx::AS3::ValueStack::Page &);
};
class Scaleform::GFx::AS3::VRFBase
{
	class ValueType;
public:
	VRFBase(Scaleform::GFx::AS3::Value *, Scaleform::GFx::AS3::Value *);
	VRFBase();
	Scaleform::GFx::AS3::Value & operator[](unsigned long long);
	Scaleform::GFx::AS3::Value & At(unsigned long long);
	Scaleform::GFx::AS3::Value & GetThis();
	void SetThis(const Scaleform::GFx::AS3::Value &);
	void SetThisPickUnsafe(Scaleform::GFx::AS3::Value &);
	Scaleform::GFx::AS3::Value * GetFirst();
	Scaleform::GFx::AS3::Value * GetEnd();
	unsigned short GetNumOfReservedElem();
	unsigned short GetSize();
protected:
	Scaleform::GFx::AS3::Value * pRFStart; // 0x0
	Scaleform::GFx::AS3::Value * pRFEnd; // 0x8
};
class Scaleform::GFx::AS3::ValueRegisterFile :
	Scaleform::GFx::AS3::VRFBase
{
	enum <unnamed-enum-DefPageSize>
	{
		DefPageSize = 256,
	};
	struct Page;
public:
	ValueRegisterFile();
	~ValueRegisterFile();
	void Reserve(unsigned short);
	void ReleaseReserved(const Scaleform::GFx::AS3::VRFBase &);
private:
	Scaleform::GFx::AS3::ValueRegisterFile::Page * AllocPage(unsigned short);
	Scaleform::GFx::AS3::ValueRegisterFile::Page * NewPage(unsigned short);
	Scaleform::GFx::AS3::ValueRegisterFile::Page * pCurrentPage; // 0x10
	Scaleform::GFx::AS3::ValueRegisterFile::Page * pReserved; // 0x18
};
struct Scaleform::GFx::AS3::ValueRegisterFile::Page
{
	unsigned short ReservationNum; // 0x0
	unsigned short PageSize; // 0x2
	Scaleform::GFx::AS3::ValueRegisterFile::Page * pNext; // 0x8
	Scaleform::GFx::AS3::ValueRegisterFile::Page * pPrev; // 0x10
	Scaleform::GFx::AS3::Value Values[1]; // 0x18
	Page(Scaleform::GFx::AS3::ValueRegisterFile::Page &);
	Page(const Scaleform::GFx::AS3::ValueRegisterFile::Page &);
	Page();
	~Page();
	Scaleform::GFx::AS3::ValueRegisterFile::Page & operator=(Scaleform::GFx::AS3::ValueRegisterFile::Page &);
	Scaleform::GFx::AS3::ValueRegisterFile::Page & operator=(const Scaleform::GFx::AS3::ValueRegisterFile::Page &);
};
class Scaleform::GFx::AS3::StackWindowBase
{
	class ValueType;
public:
	StackWindowBase(Scaleform::GFx::AS3::Value *, unsigned short);
	StackWindowBase();
	Scaleform::GFx::AS3::Value * GetCurrent();
	unsigned long long GetStackSize();
	Scaleform::GFx::AS3::Value & Top0();
	Scaleform::GFx::AS3::Value & Top1();
	Scaleform::GFx::AS3::Value & TopN(unsigned short);
	Scaleform::GFx::AS3::Value & Back();
	const Scaleform::GFx::AS3::Value & Back();
	void PushBack(unsigned long);
	void PushBack(const Scaleform::GFx::AS3::Value &);
	void PushBack();
	void PickPushBack(Scaleform::GFx::AS3::Value &);
	void PushBackNRC(Scaleform::GFx::AS3::Value &);
	void PopBack(unsigned long);
	void PopBack();
	void PopBack2();
	void PopBack3();
	Scaleform::GFx::AS3::Value & Release0();
	void ReleaseN(unsigned long long);
	void Acquire1();
	void SwapTop();
	Scaleform::GFx::AS3::Value & operator[](unsigned long long);
	Scaleform::GFx::AS3::Value & At(unsigned long long);
	Scaleform::GFx::AS3::Value * GetRegStart();
	Scaleform::GFx::AS3::Value * GetRegEnd();
	Scaleform::GFx::AS3::Value * GetStack();
	const Scaleform::GFx::AS3::Value * GetThis();
	void SetThis(const Scaleform::GFx::AS3::Value &);
	unsigned short GetNumOfRegElem();
	unsigned short GetRFSize();
protected:
	const Scaleform::GFx::AS3::Value * pThis; // 0x0
	Scaleform::GFx::AS3::Value * pRFStart; // 0x8
	Scaleform::GFx::AS3::Value * pStack; // 0x10
	Scaleform::GFx::AS3::Value * pCurrent; // 0x18
};
class Scaleform::GFx::AS3::StackWindow :
	Scaleform::GFx::AS3::StackWindowBase
{
	enum <unnamed-enum-DefPageSize>
	{
		DefPageSize = 256,
	};
	struct Page;
public:
	StackWindow();
	~StackWindow();
	void Reserve(const Scaleform::GFx::AS3::Value *, unsigned short, Scaleform::GFx::AS3::Value *, unsigned short, unsigned short, bool);
	void ReleaseReserved(const Scaleform::GFx::AS3::StackWindowBase &);
	void PopReserved(const Scaleform::GFx::AS3::StackWindowBase &);
private:
	Scaleform::GFx::AS3::StackWindow::Page * AllocPage(unsigned short);
	Scaleform::GFx::AS3::StackWindow::Page * NewPage(unsigned short);
	Scaleform::GFx::AS3::StackWindow::Page * pCurrentPage; // 0x20
	Scaleform::GFx::AS3::StackWindow::Page * pReserved; // 0x28
};
struct Scaleform::GFx::AS3::StackWindow::Page
{
	unsigned short ReservationNum; // 0x0
	unsigned short PageSize; // 0x2
	Scaleform::GFx::AS3::StackWindow::Page * pNext; // 0x8
	Scaleform::GFx::AS3::StackWindow::Page * pPrev; // 0x10
	Scaleform::GFx::AS3::Value Values[1]; // 0x18
	Page(Scaleform::GFx::AS3::StackWindow::Page &);
	Page(const Scaleform::GFx::AS3::StackWindow::Page &);
	Page();
	~Page();
	Scaleform::GFx::AS3::StackWindow::Page & operator=(Scaleform::GFx::AS3::StackWindow::Page &);
	Scaleform::GFx::AS3::StackWindow::Page & operator=(const Scaleform::GFx::AS3::StackWindow::Page &);
};