#pragma once

union detail::horrible_union<void (__cdecl*)(AgPointer<AgDialog>),detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>)> const *>
{
public:
	void(*out)(AgPointer<AgDialog>); // 0x0
	const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>)> * in; // 0x0
};
class detail::GenericClass
{
};
struct detail::SimplifyMemFunc<8>
{
};
struct detail::MicrosoftVirtualMFP
{
	void(*codeptr)(); // 0x0
	long delta; // 0x8
	long vtable_index; // 0xC
};
struct detail::GenericVirtualClass :
	virtual detail::GenericClass
{
	typedef detail::GenericVirtualClass *(*ProbePtrType)();
	detail::GenericVirtualClass * GetThis();
	GenericVirtualClass(detail::GenericVirtualClass &);
	GenericVirtualClass(const detail::GenericVirtualClass &);
	GenericVirtualClass();
	detail::GenericVirtualClass & operator=(detail::GenericVirtualClass &);
	detail::GenericVirtualClass & operator=(const detail::GenericVirtualClass &);
};
detail::GenericVirtualClass * detail::GenericVirtualClass::GetThis(); // 0x14004EB00
struct detail::SimplifyMemFunc<16>
{
};
class AgDelegateMemento
{
	typedef void(*GenericMemFuncType)();
protected:
	detail::GenericClass * m_pthis; // 0x0
	void(*m_pFunction)(); // 0x8
public:
	AgDelegateMemento(const AgDelegateMemento &);
	AgDelegateMemento();
	void clear();
	bool IsEqual(const AgDelegateMemento &);
	bool IsLess(const AgDelegateMemento &);
	bool operator!();
	bool empty();
	AgDelegateMemento & operator=(const AgDelegateMemento &);
	bool operator<(const AgDelegateMemento &);
	bool operator>(const AgDelegateMemento &);
protected:
	void SetMementoFrom(const AgDelegateMemento &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(void),void (__cdecl*)(void),void (__cdecl*)(void)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)() GetClosureMemPtr();
	void(*)() GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)());
	ClosurePtr<void (__cdecl detail::GenericClass::*)(void),void (__cdecl*)(void),void (__cdecl*)(void)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(void),void (__cdecl*)(void),void (__cdecl*)(void)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(void),void (__cdecl*)(void),void (__cdecl*)(void)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(void),void (__cdecl*)(void),void (__cdecl*)(void)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(void),void (__cdecl*)(void),void (__cdecl*)(void)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(void),void (__cdecl*)(void),void (__cdecl*)(void)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(void),void (__cdecl*)(void),void (__cdecl*)(void)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(void),void (__cdecl*)(void),void (__cdecl*)(void)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(void),void (__cdecl*)(void),void (__cdecl*)(void)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgTypingInputEvent &) GetClosureMemPtr();
	void(*)(const AgTypingInputEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgTypingInputEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgEditedInputEvent &) GetClosureMemPtr();
	void(*)(const AgEditedInputEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgEditedInputEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgControllerAddedEvent &) GetClosureMemPtr();
	void(*)(const AgControllerAddedEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgControllerAddedEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgControllerRemovedEvent &) GetClosureMemPtr();
	void(*)(const AgControllerRemovedEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgControllerRemovedEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(AgPointer<AgDialog>) GetClosureMemPtr();
	void(*)(AgPointer<AgDialog>) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(AgPointer<AgDialog>));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgMountWriteBeginEvent &) GetClosureMemPtr();
	void(*)(const AgMountWriteBeginEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgMountWriteBeginEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgUnmountEvent &) GetClosureMemPtr();
	void(*)(const AgUnmountEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgUnmountEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgMountWriteEndEvent &) GetClosureMemPtr();
	void(*)(const AgMountWriteEndEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgMountWriteEndEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgMountErrorEvent &) GetClosureMemPtr();
	void(*)(const AgMountErrorEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgMountErrorEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgMountEvent &) GetClosureMemPtr();
	void(*)(const AgMountEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgMountEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgControllerPairingChangedEvent &) GetClosureMemPtr();
	void(*)(const AgControllerPairingChangedEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgControllerPairingChangedEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgResumingEvent &) GetClosureMemPtr();
	void(*)(const AgResumingEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgResumingEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgSuspendingEvent &) GetClosureMemPtr();
	void(*)(const AgSuspendingEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgSuspendingEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgPrepareDumpEvent &) GetClosureMemPtr();
	void(*)(const AgPrepareDumpEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgPrepareDumpEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgActivatedEvent &) GetClosureMemPtr();
	void(*)(const AgActivatedEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgActivatedEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgDisplayChangedEvent &) GetClosureMemPtr();
	void(*)(const AgDisplayChangedEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgDisplayChangedEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgDeactivatedEvent &) GetClosureMemPtr();
	void(*)(const AgDeactivatedEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgDeactivatedEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgShutdownEvent &) GetClosureMemPtr();
	void(*)(const AgShutdownEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgShutdownEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgUserRemovedEvent &) GetClosureMemPtr();
	void(*)(const AgUserRemovedEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgUserRemovedEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgPointer<AgSession> &) GetClosureMemPtr();
	void(*)(const AgPointer<AgSession> &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgPointer<AgSession> &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgNetworkOnlineEvent &) GetClosureMemPtr();
	void(*)(const AgNetworkOnlineEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgNetworkOnlineEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgNetworkOfflineEvent &) GetClosureMemPtr();
	void(*)(const AgNetworkOfflineEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgNetworkOfflineEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgPlayerAddedEvent &) GetClosureMemPtr();
	void(*)(const AgPlayerAddedEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgPlayerAddedEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgUserAddedEvent &) GetClosureMemPtr();
	void(*)(const AgUserAddedEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgUserAddedEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgPlayerRemovedEvent &) GetClosureMemPtr();
	void(*)(const AgPlayerRemovedEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgPlayerRemovedEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgPlayerUpdatedEvent &) GetClosureMemPtr();
	void(*)(const AgPlayerUpdatedEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgPlayerUpdatedEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &)> &);
};
class detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &)> :
	AgDelegateMemento
{
public:
	detail::GenericClass * GetClosureThis();
	void(*)(const AgUserUpdatedEvent &) GetClosureMemPtr();
	void(*)(const AgUserUpdatedEvent &) GetStaticFunction();
	bool IsEqualToStaticFuncPtr(void(*)(const AgUserUpdatedEvent &));
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &)>(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &)>(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &)> &);
	ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &)>();
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &)> & operator=(detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &)> &);
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &)> & operator=(const detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &)> &);
};
struct AgDelegate1<AgPointer<AgDialog>,void>::SafeBoolStruct
{
	long a_data_pointer_to_this_is_0_on_buggy_compilers; // 0x0
	void(*m_nonzero)(AgPointer<AgDialog>); // 0x8
};
class AgDelegate0<void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)();
	typedef void(*UnvoidStaticFunctionPtr)();
	typedef void(*GenericMemFn)();
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(void),void (__cdecl*)(void),void (__cdecl*)(void)> m_Closure; // 0x0
	class type;
public:
	AgDelegate0<void>(void(*)());
	AgDelegate0<void>(const AgDelegate0<void> &);
	AgDelegate0<void>();
	void operator=(void(*)());
	void operator=(const AgDelegate0<void> &);
	bool operator==(void(*)());
	bool operator==(const AgDelegate0<void> &);
	bool operator!=(void(*)());
	bool operator!=(const AgDelegate0<void> &);
	bool operator<(const AgDelegate0<void> &);
	bool operator>(const AgDelegate0<void> &);
	void bind(void(*)());
	void operator()();
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)();
	void(*)() * operator void (__cdecl *AgDelegate0<void>::SafeBoolStruct::* )(void)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction();
};