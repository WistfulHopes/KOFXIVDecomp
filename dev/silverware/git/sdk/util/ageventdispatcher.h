#pragma once

class AgDelegate1<AgTypingInputEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgTypingInputEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgTypingInputEvent &);
	typedef void(*GenericMemFn)(const AgTypingInputEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &),void (__cdecl*)(AgTypingInputEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgTypingInputEvent const &,void>(void(*)(const AgTypingInputEvent &));
	AgDelegate1<AgTypingInputEvent const &,void>(const AgDelegate1<AgTypingInputEvent const &,void> &);
	AgDelegate1<AgTypingInputEvent const &,void>();
	void operator=(void(*)(const AgTypingInputEvent &));
	void operator=(const AgDelegate1<AgTypingInputEvent const &,void> &);
	bool operator==(void(*)(const AgTypingInputEvent &));
	bool operator==(const AgDelegate1<AgTypingInputEvent const &,void> &);
	bool operator!=(void(*)(const AgTypingInputEvent &));
	bool operator!=(const AgDelegate1<AgTypingInputEvent const &,void> &);
	bool operator<(const AgDelegate1<AgTypingInputEvent const &,void> &);
	bool operator>(const AgDelegate1<AgTypingInputEvent const &,void> &);
	void bind(void(*)(const AgTypingInputEvent &));
	void operator()(const AgTypingInputEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgTypingInputEvent &);
	void(*)(const AgTypingInputEvent &) * operator void (__cdecl *AgDelegate1<struct AgTypingInputEvent const &,void>::SafeBoolStruct::* )(const struct AgTypingInputEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgTypingInputEvent &);
};
class AgDelegate1<AgEditedInputEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgEditedInputEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgEditedInputEvent &);
	typedef void(*GenericMemFn)(const AgEditedInputEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &),void (__cdecl*)(AgEditedInputEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgEditedInputEvent const &,void>(void(*)(const AgEditedInputEvent &));
	AgDelegate1<AgEditedInputEvent const &,void>(const AgDelegate1<AgEditedInputEvent const &,void> &);
	AgDelegate1<AgEditedInputEvent const &,void>();
	void operator=(void(*)(const AgEditedInputEvent &));
	void operator=(const AgDelegate1<AgEditedInputEvent const &,void> &);
	bool operator==(void(*)(const AgEditedInputEvent &));
	bool operator==(const AgDelegate1<AgEditedInputEvent const &,void> &);
	bool operator!=(void(*)(const AgEditedInputEvent &));
	bool operator!=(const AgDelegate1<AgEditedInputEvent const &,void> &);
	bool operator<(const AgDelegate1<AgEditedInputEvent const &,void> &);
	bool operator>(const AgDelegate1<AgEditedInputEvent const &,void> &);
	void bind(void(*)(const AgEditedInputEvent &));
	void operator()(const AgEditedInputEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgEditedInputEvent &);
	void(*)(const AgEditedInputEvent &) * operator void (__cdecl *AgDelegate1<struct AgEditedInputEvent const &,void>::SafeBoolStruct::* )(const struct AgEditedInputEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgEditedInputEvent &);
};
class AgDelegate1<AgControllerAddedEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgControllerAddedEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgControllerAddedEvent &);
	typedef void(*GenericMemFn)(const AgControllerAddedEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &),void (__cdecl*)(AgControllerAddedEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgControllerAddedEvent const &,void>(void(*)(const AgControllerAddedEvent &));
	AgDelegate1<AgControllerAddedEvent const &,void>(const AgDelegate1<AgControllerAddedEvent const &,void> &);
	AgDelegate1<AgControllerAddedEvent const &,void>();
	void operator=(void(*)(const AgControllerAddedEvent &));
	void operator=(const AgDelegate1<AgControllerAddedEvent const &,void> &);
	bool operator==(void(*)(const AgControllerAddedEvent &));
	bool operator==(const AgDelegate1<AgControllerAddedEvent const &,void> &);
	bool operator!=(void(*)(const AgControllerAddedEvent &));
	bool operator!=(const AgDelegate1<AgControllerAddedEvent const &,void> &);
	bool operator<(const AgDelegate1<AgControllerAddedEvent const &,void> &);
	bool operator>(const AgDelegate1<AgControllerAddedEvent const &,void> &);
	void bind(void(*)(const AgControllerAddedEvent &));
	void operator()(const AgControllerAddedEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgControllerAddedEvent &);
	void(*)(const AgControllerAddedEvent &) * operator void (__cdecl *AgDelegate1<struct AgControllerAddedEvent const &,void>::SafeBoolStruct::* )(const struct AgControllerAddedEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgControllerAddedEvent &);
};
class AgDelegate1<AgControllerRemovedEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgControllerRemovedEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgControllerRemovedEvent &);
	typedef void(*GenericMemFn)(const AgControllerRemovedEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &),void (__cdecl*)(AgControllerRemovedEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgControllerRemovedEvent const &,void>(void(*)(const AgControllerRemovedEvent &));
	AgDelegate1<AgControllerRemovedEvent const &,void>(const AgDelegate1<AgControllerRemovedEvent const &,void> &);
	AgDelegate1<AgControllerRemovedEvent const &,void>();
	void operator=(void(*)(const AgControllerRemovedEvent &));
	void operator=(const AgDelegate1<AgControllerRemovedEvent const &,void> &);
	bool operator==(void(*)(const AgControllerRemovedEvent &));
	bool operator==(const AgDelegate1<AgControllerRemovedEvent const &,void> &);
	bool operator!=(void(*)(const AgControllerRemovedEvent &));
	bool operator!=(const AgDelegate1<AgControllerRemovedEvent const &,void> &);
	bool operator<(const AgDelegate1<AgControllerRemovedEvent const &,void> &);
	bool operator>(const AgDelegate1<AgControllerRemovedEvent const &,void> &);
	void bind(void(*)(const AgControllerRemovedEvent &));
	void operator()(const AgControllerRemovedEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgControllerRemovedEvent &);
	void(*)(const AgControllerRemovedEvent &) * operator void (__cdecl *AgDelegate1<struct AgControllerRemovedEvent const &,void>::SafeBoolStruct::* )(const struct AgControllerRemovedEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgControllerRemovedEvent &);
};
class AgDelegate1<AgMountErrorEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgMountErrorEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgMountErrorEvent &);
	typedef void(*GenericMemFn)(const AgMountErrorEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &),void (__cdecl*)(AgMountErrorEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgMountErrorEvent const &,void>(void(*)(const AgMountErrorEvent &));
	AgDelegate1<AgMountErrorEvent const &,void>(const AgDelegate1<AgMountErrorEvent const &,void> &);
	AgDelegate1<AgMountErrorEvent const &,void>();
	void operator=(void(*)(const AgMountErrorEvent &));
	void operator=(const AgDelegate1<AgMountErrorEvent const &,void> &);
	bool operator==(void(*)(const AgMountErrorEvent &));
	bool operator==(const AgDelegate1<AgMountErrorEvent const &,void> &);
	bool operator!=(void(*)(const AgMountErrorEvent &));
	bool operator!=(const AgDelegate1<AgMountErrorEvent const &,void> &);
	bool operator<(const AgDelegate1<AgMountErrorEvent const &,void> &);
	bool operator>(const AgDelegate1<AgMountErrorEvent const &,void> &);
	void bind(void(*)(const AgMountErrorEvent &));
	void operator()(const AgMountErrorEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgMountErrorEvent &);
	void(*)(const AgMountErrorEvent &) * operator void (__cdecl *AgDelegate1<struct AgMountErrorEvent const &,void>::SafeBoolStruct::* )(const struct AgMountErrorEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgMountErrorEvent &);
};
class AgDelegate1<AgMountWriteEndEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgMountWriteEndEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgMountWriteEndEvent &);
	typedef void(*GenericMemFn)(const AgMountWriteEndEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &),void (__cdecl*)(AgMountWriteEndEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgMountWriteEndEvent const &,void>(void(*)(const AgMountWriteEndEvent &));
	AgDelegate1<AgMountWriteEndEvent const &,void>(const AgDelegate1<AgMountWriteEndEvent const &,void> &);
	AgDelegate1<AgMountWriteEndEvent const &,void>();
	void operator=(void(*)(const AgMountWriteEndEvent &));
	void operator=(const AgDelegate1<AgMountWriteEndEvent const &,void> &);
	bool operator==(void(*)(const AgMountWriteEndEvent &));
	bool operator==(const AgDelegate1<AgMountWriteEndEvent const &,void> &);
	bool operator!=(void(*)(const AgMountWriteEndEvent &));
	bool operator!=(const AgDelegate1<AgMountWriteEndEvent const &,void> &);
	bool operator<(const AgDelegate1<AgMountWriteEndEvent const &,void> &);
	bool operator>(const AgDelegate1<AgMountWriteEndEvent const &,void> &);
	void bind(void(*)(const AgMountWriteEndEvent &));
	void operator()(const AgMountWriteEndEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgMountWriteEndEvent &);
	void(*)(const AgMountWriteEndEvent &) * operator void (__cdecl *AgDelegate1<struct AgMountWriteEndEvent const &,void>::SafeBoolStruct::* )(const struct AgMountWriteEndEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgMountWriteEndEvent &);
};
class AgDelegate1<AgUnmountEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgUnmountEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgUnmountEvent &);
	typedef void(*GenericMemFn)(const AgUnmountEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &),void (__cdecl*)(AgUnmountEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgUnmountEvent const &,void>(void(*)(const AgUnmountEvent &));
	AgDelegate1<AgUnmountEvent const &,void>(const AgDelegate1<AgUnmountEvent const &,void> &);
	AgDelegate1<AgUnmountEvent const &,void>();
	void operator=(void(*)(const AgUnmountEvent &));
	void operator=(const AgDelegate1<AgUnmountEvent const &,void> &);
	bool operator==(void(*)(const AgUnmountEvent &));
	bool operator==(const AgDelegate1<AgUnmountEvent const &,void> &);
	bool operator!=(void(*)(const AgUnmountEvent &));
	bool operator!=(const AgDelegate1<AgUnmountEvent const &,void> &);
	bool operator<(const AgDelegate1<AgUnmountEvent const &,void> &);
	bool operator>(const AgDelegate1<AgUnmountEvent const &,void> &);
	void bind(void(*)(const AgUnmountEvent &));
	void operator()(const AgUnmountEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgUnmountEvent &);
	void(*)(const AgUnmountEvent &) * operator void (__cdecl *AgDelegate1<struct AgUnmountEvent const &,void>::SafeBoolStruct::* )(const struct AgUnmountEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgUnmountEvent &);
};
class AgDelegate1<AgMountEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgMountEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgMountEvent &);
	typedef void(*GenericMemFn)(const AgMountEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &),void (__cdecl*)(AgMountEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgMountEvent const &,void>(void(*)(const AgMountEvent &));
	AgDelegate1<AgMountEvent const &,void>(const AgDelegate1<AgMountEvent const &,void> &);
	AgDelegate1<AgMountEvent const &,void>();
	void operator=(void(*)(const AgMountEvent &));
	void operator=(const AgDelegate1<AgMountEvent const &,void> &);
	bool operator==(void(*)(const AgMountEvent &));
	bool operator==(const AgDelegate1<AgMountEvent const &,void> &);
	bool operator!=(void(*)(const AgMountEvent &));
	bool operator!=(const AgDelegate1<AgMountEvent const &,void> &);
	bool operator<(const AgDelegate1<AgMountEvent const &,void> &);
	bool operator>(const AgDelegate1<AgMountEvent const &,void> &);
	void bind(void(*)(const AgMountEvent &));
	void operator()(const AgMountEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgMountEvent &);
	void(*)(const AgMountEvent &) * operator void (__cdecl *AgDelegate1<struct AgMountEvent const &,void>::SafeBoolStruct::* )(const struct AgMountEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgMountEvent &);
};
class AgDelegate1<AgMountWriteBeginEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgMountWriteBeginEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgMountWriteBeginEvent &);
	typedef void(*GenericMemFn)(const AgMountWriteBeginEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &),void (__cdecl*)(AgMountWriteBeginEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgMountWriteBeginEvent const &,void>(void(*)(const AgMountWriteBeginEvent &));
	AgDelegate1<AgMountWriteBeginEvent const &,void>(const AgDelegate1<AgMountWriteBeginEvent const &,void> &);
	AgDelegate1<AgMountWriteBeginEvent const &,void>();
	void operator=(void(*)(const AgMountWriteBeginEvent &));
	void operator=(const AgDelegate1<AgMountWriteBeginEvent const &,void> &);
	bool operator==(void(*)(const AgMountWriteBeginEvent &));
	bool operator==(const AgDelegate1<AgMountWriteBeginEvent const &,void> &);
	bool operator!=(void(*)(const AgMountWriteBeginEvent &));
	bool operator!=(const AgDelegate1<AgMountWriteBeginEvent const &,void> &);
	bool operator<(const AgDelegate1<AgMountWriteBeginEvent const &,void> &);
	bool operator>(const AgDelegate1<AgMountWriteBeginEvent const &,void> &);
	void bind(void(*)(const AgMountWriteBeginEvent &));
	void operator()(const AgMountWriteBeginEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgMountWriteBeginEvent &);
	void(*)(const AgMountWriteBeginEvent &) * operator void (__cdecl *AgDelegate1<struct AgMountWriteBeginEvent const &,void>::SafeBoolStruct::* )(const struct AgMountWriteBeginEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgMountWriteBeginEvent &);
};
class AgDelegate1<AgResumingEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgResumingEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgResumingEvent &);
	typedef void(*GenericMemFn)(const AgResumingEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &),void (__cdecl*)(AgResumingEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgResumingEvent const &,void>(void(*)(const AgResumingEvent &));
	AgDelegate1<AgResumingEvent const &,void>(const AgDelegate1<AgResumingEvent const &,void> &);
	AgDelegate1<AgResumingEvent const &,void>();
	void operator=(void(*)(const AgResumingEvent &));
	void operator=(const AgDelegate1<AgResumingEvent const &,void> &);
	bool operator==(void(*)(const AgResumingEvent &));
	bool operator==(const AgDelegate1<AgResumingEvent const &,void> &);
	bool operator!=(void(*)(const AgResumingEvent &));
	bool operator!=(const AgDelegate1<AgResumingEvent const &,void> &);
	bool operator<(const AgDelegate1<AgResumingEvent const &,void> &);
	bool operator>(const AgDelegate1<AgResumingEvent const &,void> &);
	void bind(void(*)(const AgResumingEvent &));
	void operator()(const AgResumingEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgResumingEvent &);
	void(*)(const AgResumingEvent &) * operator void (__cdecl *AgDelegate1<struct AgResumingEvent const &,void>::SafeBoolStruct::* )(const struct AgResumingEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgResumingEvent &);
};
class AgDelegate1<AgControllerPairingChangedEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgControllerPairingChangedEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgControllerPairingChangedEvent &);
	typedef void(*GenericMemFn)(const AgControllerPairingChangedEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &),void (__cdecl*)(AgControllerPairingChangedEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgControllerPairingChangedEvent const &,void>(void(*)(const AgControllerPairingChangedEvent &));
	AgDelegate1<AgControllerPairingChangedEvent const &,void>(const AgDelegate1<AgControllerPairingChangedEvent const &,void> &);
	AgDelegate1<AgControllerPairingChangedEvent const &,void>();
	void operator=(void(*)(const AgControllerPairingChangedEvent &));
	void operator=(const AgDelegate1<AgControllerPairingChangedEvent const &,void> &);
	bool operator==(void(*)(const AgControllerPairingChangedEvent &));
	bool operator==(const AgDelegate1<AgControllerPairingChangedEvent const &,void> &);
	bool operator!=(void(*)(const AgControllerPairingChangedEvent &));
	bool operator!=(const AgDelegate1<AgControllerPairingChangedEvent const &,void> &);
	bool operator<(const AgDelegate1<AgControllerPairingChangedEvent const &,void> &);
	bool operator>(const AgDelegate1<AgControllerPairingChangedEvent const &,void> &);
	void bind(void(*)(const AgControllerPairingChangedEvent &));
	void operator()(const AgControllerPairingChangedEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgControllerPairingChangedEvent &);
	void(*)(const AgControllerPairingChangedEvent &) * operator void (__cdecl *AgDelegate1<struct AgControllerPairingChangedEvent const &,void>::SafeBoolStruct::* )(const struct AgControllerPairingChangedEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgControllerPairingChangedEvent &);
};
class AgDelegate1<AgSuspendingEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgSuspendingEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgSuspendingEvent &);
	typedef void(*GenericMemFn)(const AgSuspendingEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &),void (__cdecl*)(AgSuspendingEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgSuspendingEvent const &,void>(void(*)(const AgSuspendingEvent &));
	AgDelegate1<AgSuspendingEvent const &,void>(const AgDelegate1<AgSuspendingEvent const &,void> &);
	AgDelegate1<AgSuspendingEvent const &,void>();
	void operator=(void(*)(const AgSuspendingEvent &));
	void operator=(const AgDelegate1<AgSuspendingEvent const &,void> &);
	bool operator==(void(*)(const AgSuspendingEvent &));
	bool operator==(const AgDelegate1<AgSuspendingEvent const &,void> &);
	bool operator!=(void(*)(const AgSuspendingEvent &));
	bool operator!=(const AgDelegate1<AgSuspendingEvent const &,void> &);
	bool operator<(const AgDelegate1<AgSuspendingEvent const &,void> &);
	bool operator>(const AgDelegate1<AgSuspendingEvent const &,void> &);
	void bind(void(*)(const AgSuspendingEvent &));
	void operator()(const AgSuspendingEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgSuspendingEvent &);
	void(*)(const AgSuspendingEvent &) * operator void (__cdecl *AgDelegate1<struct AgSuspendingEvent const &,void>::SafeBoolStruct::* )(const struct AgSuspendingEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgSuspendingEvent &);
};
class AgDelegate1<AgPrepareDumpEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgPrepareDumpEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgPrepareDumpEvent &);
	typedef void(*GenericMemFn)(const AgPrepareDumpEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &),void (__cdecl*)(AgPrepareDumpEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgPrepareDumpEvent const &,void>(void(*)(const AgPrepareDumpEvent &));
	AgDelegate1<AgPrepareDumpEvent const &,void>(const AgDelegate1<AgPrepareDumpEvent const &,void> &);
	AgDelegate1<AgPrepareDumpEvent const &,void>();
	void operator=(void(*)(const AgPrepareDumpEvent &));
	void operator=(const AgDelegate1<AgPrepareDumpEvent const &,void> &);
	bool operator==(void(*)(const AgPrepareDumpEvent &));
	bool operator==(const AgDelegate1<AgPrepareDumpEvent const &,void> &);
	bool operator!=(void(*)(const AgPrepareDumpEvent &));
	bool operator!=(const AgDelegate1<AgPrepareDumpEvent const &,void> &);
	bool operator<(const AgDelegate1<AgPrepareDumpEvent const &,void> &);
	bool operator>(const AgDelegate1<AgPrepareDumpEvent const &,void> &);
	void bind(void(*)(const AgPrepareDumpEvent &));
	void operator()(const AgPrepareDumpEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgPrepareDumpEvent &);
	void(*)(const AgPrepareDumpEvent &) * operator void (__cdecl *AgDelegate1<struct AgPrepareDumpEvent const &,void>::SafeBoolStruct::* )(const struct AgPrepareDumpEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgPrepareDumpEvent &);
};
class AgDelegate1<AgDisplayChangedEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgDisplayChangedEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgDisplayChangedEvent &);
	typedef void(*GenericMemFn)(const AgDisplayChangedEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &),void (__cdecl*)(AgDisplayChangedEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgDisplayChangedEvent const &,void>(void(*)(const AgDisplayChangedEvent &));
	AgDelegate1<AgDisplayChangedEvent const &,void>(const AgDelegate1<AgDisplayChangedEvent const &,void> &);
	AgDelegate1<AgDisplayChangedEvent const &,void>();
	void operator=(void(*)(const AgDisplayChangedEvent &));
	void operator=(const AgDelegate1<AgDisplayChangedEvent const &,void> &);
	bool operator==(void(*)(const AgDisplayChangedEvent &));
	bool operator==(const AgDelegate1<AgDisplayChangedEvent const &,void> &);
	bool operator!=(void(*)(const AgDisplayChangedEvent &));
	bool operator!=(const AgDelegate1<AgDisplayChangedEvent const &,void> &);
	bool operator<(const AgDelegate1<AgDisplayChangedEvent const &,void> &);
	bool operator>(const AgDelegate1<AgDisplayChangedEvent const &,void> &);
	void bind(void(*)(const AgDisplayChangedEvent &));
	void operator()(const AgDisplayChangedEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgDisplayChangedEvent &);
	void(*)(const AgDisplayChangedEvent &) * operator void (__cdecl *AgDelegate1<struct AgDisplayChangedEvent const &,void>::SafeBoolStruct::* )(const struct AgDisplayChangedEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgDisplayChangedEvent &);
};
class AgDelegate1<AgDeactivatedEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgDeactivatedEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgDeactivatedEvent &);
	typedef void(*GenericMemFn)(const AgDeactivatedEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &),void (__cdecl*)(AgDeactivatedEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgDeactivatedEvent const &,void>(void(*)(const AgDeactivatedEvent &));
	AgDelegate1<AgDeactivatedEvent const &,void>(const AgDelegate1<AgDeactivatedEvent const &,void> &);
	AgDelegate1<AgDeactivatedEvent const &,void>();
	void operator=(void(*)(const AgDeactivatedEvent &));
	void operator=(const AgDelegate1<AgDeactivatedEvent const &,void> &);
	bool operator==(void(*)(const AgDeactivatedEvent &));
	bool operator==(const AgDelegate1<AgDeactivatedEvent const &,void> &);
	bool operator!=(void(*)(const AgDeactivatedEvent &));
	bool operator!=(const AgDelegate1<AgDeactivatedEvent const &,void> &);
	bool operator<(const AgDelegate1<AgDeactivatedEvent const &,void> &);
	bool operator>(const AgDelegate1<AgDeactivatedEvent const &,void> &);
	void bind(void(*)(const AgDeactivatedEvent &));
	void operator()(const AgDeactivatedEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgDeactivatedEvent &);
	void(*)(const AgDeactivatedEvent &) * operator void (__cdecl *AgDelegate1<struct AgDeactivatedEvent const &,void>::SafeBoolStruct::* )(const struct AgDeactivatedEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgDeactivatedEvent &);
};
class AgDelegate1<AgActivatedEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgActivatedEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgActivatedEvent &);
	typedef void(*GenericMemFn)(const AgActivatedEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &),void (__cdecl*)(AgActivatedEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgActivatedEvent const &,void>(void(*)(const AgActivatedEvent &));
	AgDelegate1<AgActivatedEvent const &,void>(const AgDelegate1<AgActivatedEvent const &,void> &);
	AgDelegate1<AgActivatedEvent const &,void>();
	void operator=(void(*)(const AgActivatedEvent &));
	void operator=(const AgDelegate1<AgActivatedEvent const &,void> &);
	bool operator==(void(*)(const AgActivatedEvent &));
	bool operator==(const AgDelegate1<AgActivatedEvent const &,void> &);
	bool operator!=(void(*)(const AgActivatedEvent &));
	bool operator!=(const AgDelegate1<AgActivatedEvent const &,void> &);
	bool operator<(const AgDelegate1<AgActivatedEvent const &,void> &);
	bool operator>(const AgDelegate1<AgActivatedEvent const &,void> &);
	void bind(void(*)(const AgActivatedEvent &));
	void operator()(const AgActivatedEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgActivatedEvent &);
	void(*)(const AgActivatedEvent &) * operator void (__cdecl *AgDelegate1<struct AgActivatedEvent const &,void>::SafeBoolStruct::* )(const struct AgActivatedEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgActivatedEvent &);
};
class AgDelegate1<AgShutdownEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgShutdownEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgShutdownEvent &);
	typedef void(*GenericMemFn)(const AgShutdownEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &),void (__cdecl*)(AgShutdownEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgShutdownEvent const &,void>(void(*)(const AgShutdownEvent &));
	AgDelegate1<AgShutdownEvent const &,void>(const AgDelegate1<AgShutdownEvent const &,void> &);
	AgDelegate1<AgShutdownEvent const &,void>();
	void operator=(void(*)(const AgShutdownEvent &));
	void operator=(const AgDelegate1<AgShutdownEvent const &,void> &);
	bool operator==(void(*)(const AgShutdownEvent &));
	bool operator==(const AgDelegate1<AgShutdownEvent const &,void> &);
	bool operator!=(void(*)(const AgShutdownEvent &));
	bool operator!=(const AgDelegate1<AgShutdownEvent const &,void> &);
	bool operator<(const AgDelegate1<AgShutdownEvent const &,void> &);
	bool operator>(const AgDelegate1<AgShutdownEvent const &,void> &);
	void bind(void(*)(const AgShutdownEvent &));
	void operator()(const AgShutdownEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgShutdownEvent &);
	void(*)(const AgShutdownEvent &) * operator void (__cdecl *AgDelegate1<struct AgShutdownEvent const &,void>::SafeBoolStruct::* )(const struct AgShutdownEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgShutdownEvent &);
};
class AgDelegate1<AgUserRemovedEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgUserRemovedEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgUserRemovedEvent &);
	typedef void(*GenericMemFn)(const AgUserRemovedEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &),void (__cdecl*)(AgUserRemovedEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgUserRemovedEvent const &,void>(void(*)(const AgUserRemovedEvent &));
	AgDelegate1<AgUserRemovedEvent const &,void>(const AgDelegate1<AgUserRemovedEvent const &,void> &);
	AgDelegate1<AgUserRemovedEvent const &,void>();
	void operator=(void(*)(const AgUserRemovedEvent &));
	void operator=(const AgDelegate1<AgUserRemovedEvent const &,void> &);
	bool operator==(void(*)(const AgUserRemovedEvent &));
	bool operator==(const AgDelegate1<AgUserRemovedEvent const &,void> &);
	bool operator!=(void(*)(const AgUserRemovedEvent &));
	bool operator!=(const AgDelegate1<AgUserRemovedEvent const &,void> &);
	bool operator<(const AgDelegate1<AgUserRemovedEvent const &,void> &);
	bool operator>(const AgDelegate1<AgUserRemovedEvent const &,void> &);
	void bind(void(*)(const AgUserRemovedEvent &));
	void operator()(const AgUserRemovedEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgUserRemovedEvent &);
	void(*)(const AgUserRemovedEvent &) * operator void (__cdecl *AgDelegate1<struct AgUserRemovedEvent const &,void>::SafeBoolStruct::* )(const struct AgUserRemovedEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgUserRemovedEvent &);
};
class AgDelegate1<AgPointer<AgSession> const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgPointer<AgSession> &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgPointer<AgSession> &);
	typedef void(*GenericMemFn)(const AgPointer<AgSession> &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &),void (__cdecl*)(AgPointer<AgSession> const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgPointer<AgSession> const &,void>(void(*)(const AgPointer<AgSession> &));
	AgDelegate1<AgPointer<AgSession> const &,void>(const AgDelegate1<AgPointer<AgSession> const &,void> &);
	AgDelegate1<AgPointer<AgSession> const &,void>();
	void operator=(void(*)(const AgPointer<AgSession> &));
	void operator=(const AgDelegate1<AgPointer<AgSession> const &,void> &);
	bool operator==(void(*)(const AgPointer<AgSession> &));
	bool operator==(const AgDelegate1<AgPointer<AgSession> const &,void> &);
	bool operator!=(void(*)(const AgPointer<AgSession> &));
	bool operator!=(const AgDelegate1<AgPointer<AgSession> const &,void> &);
	bool operator<(const AgDelegate1<AgPointer<AgSession> const &,void> &);
	bool operator>(const AgDelegate1<AgPointer<AgSession> const &,void> &);
	void bind(void(*)(const AgPointer<AgSession> &));
	void operator()(const AgPointer<AgSession> &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgPointer<AgSession> &);
	void(*)(const AgPointer<AgSession> &) * operator void (__cdecl *AgDelegate1<class AgPointer<class AgSession> const &,void>::SafeBoolStruct::* )(const class AgPointer<class AgSession> &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgPointer<AgSession> &);
};
class AgDelegate1<AgNetworkOnlineEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgNetworkOnlineEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgNetworkOnlineEvent &);
	typedef void(*GenericMemFn)(const AgNetworkOnlineEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &),void (__cdecl*)(AgNetworkOnlineEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgNetworkOnlineEvent const &,void>(void(*)(const AgNetworkOnlineEvent &));
	AgDelegate1<AgNetworkOnlineEvent const &,void>(const AgDelegate1<AgNetworkOnlineEvent const &,void> &);
	AgDelegate1<AgNetworkOnlineEvent const &,void>();
	void operator=(void(*)(const AgNetworkOnlineEvent &));
	void operator=(const AgDelegate1<AgNetworkOnlineEvent const &,void> &);
	bool operator==(void(*)(const AgNetworkOnlineEvent &));
	bool operator==(const AgDelegate1<AgNetworkOnlineEvent const &,void> &);
	bool operator!=(void(*)(const AgNetworkOnlineEvent &));
	bool operator!=(const AgDelegate1<AgNetworkOnlineEvent const &,void> &);
	bool operator<(const AgDelegate1<AgNetworkOnlineEvent const &,void> &);
	bool operator>(const AgDelegate1<AgNetworkOnlineEvent const &,void> &);
	void bind(void(*)(const AgNetworkOnlineEvent &));
	void operator()(const AgNetworkOnlineEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgNetworkOnlineEvent &);
	void(*)(const AgNetworkOnlineEvent &) * operator void (__cdecl *AgDelegate1<struct AgNetworkOnlineEvent const &,void>::SafeBoolStruct::* )(const struct AgNetworkOnlineEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgNetworkOnlineEvent &);
};
class AgDelegate1<AgNetworkOfflineEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgNetworkOfflineEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgNetworkOfflineEvent &);
	typedef void(*GenericMemFn)(const AgNetworkOfflineEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &),void (__cdecl*)(AgNetworkOfflineEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgNetworkOfflineEvent const &,void>(void(*)(const AgNetworkOfflineEvent &));
	AgDelegate1<AgNetworkOfflineEvent const &,void>(const AgDelegate1<AgNetworkOfflineEvent const &,void> &);
	AgDelegate1<AgNetworkOfflineEvent const &,void>();
	void operator=(void(*)(const AgNetworkOfflineEvent &));
	void operator=(const AgDelegate1<AgNetworkOfflineEvent const &,void> &);
	bool operator==(void(*)(const AgNetworkOfflineEvent &));
	bool operator==(const AgDelegate1<AgNetworkOfflineEvent const &,void> &);
	bool operator!=(void(*)(const AgNetworkOfflineEvent &));
	bool operator!=(const AgDelegate1<AgNetworkOfflineEvent const &,void> &);
	bool operator<(const AgDelegate1<AgNetworkOfflineEvent const &,void> &);
	bool operator>(const AgDelegate1<AgNetworkOfflineEvent const &,void> &);
	void bind(void(*)(const AgNetworkOfflineEvent &));
	void operator()(const AgNetworkOfflineEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgNetworkOfflineEvent &);
	void(*)(const AgNetworkOfflineEvent &) * operator void (__cdecl *AgDelegate1<struct AgNetworkOfflineEvent const &,void>::SafeBoolStruct::* )(const struct AgNetworkOfflineEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgNetworkOfflineEvent &);
};
class AgDelegate1<AgPlayerAddedEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgPlayerAddedEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgPlayerAddedEvent &);
	typedef void(*GenericMemFn)(const AgPlayerAddedEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &),void (__cdecl*)(AgPlayerAddedEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgPlayerAddedEvent const &,void>(void(*)(const AgPlayerAddedEvent &));
	AgDelegate1<AgPlayerAddedEvent const &,void>(const AgDelegate1<AgPlayerAddedEvent const &,void> &);
	AgDelegate1<AgPlayerAddedEvent const &,void>();
	void operator=(void(*)(const AgPlayerAddedEvent &));
	void operator=(const AgDelegate1<AgPlayerAddedEvent const &,void> &);
	bool operator==(void(*)(const AgPlayerAddedEvent &));
	bool operator==(const AgDelegate1<AgPlayerAddedEvent const &,void> &);
	bool operator!=(void(*)(const AgPlayerAddedEvent &));
	bool operator!=(const AgDelegate1<AgPlayerAddedEvent const &,void> &);
	bool operator<(const AgDelegate1<AgPlayerAddedEvent const &,void> &);
	bool operator>(const AgDelegate1<AgPlayerAddedEvent const &,void> &);
	void bind(void(*)(const AgPlayerAddedEvent &));
	void operator()(const AgPlayerAddedEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgPlayerAddedEvent &);
	void(*)(const AgPlayerAddedEvent &) * operator void (__cdecl *AgDelegate1<struct AgPlayerAddedEvent const &,void>::SafeBoolStruct::* )(const struct AgPlayerAddedEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgPlayerAddedEvent &);
};
class AgDelegate1<AgPlayerRemovedEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgPlayerRemovedEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgPlayerRemovedEvent &);
	typedef void(*GenericMemFn)(const AgPlayerRemovedEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &),void (__cdecl*)(AgPlayerRemovedEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgPlayerRemovedEvent const &,void>(void(*)(const AgPlayerRemovedEvent &));
	AgDelegate1<AgPlayerRemovedEvent const &,void>(const AgDelegate1<AgPlayerRemovedEvent const &,void> &);
	AgDelegate1<AgPlayerRemovedEvent const &,void>();
	void operator=(void(*)(const AgPlayerRemovedEvent &));
	void operator=(const AgDelegate1<AgPlayerRemovedEvent const &,void> &);
	bool operator==(void(*)(const AgPlayerRemovedEvent &));
	bool operator==(const AgDelegate1<AgPlayerRemovedEvent const &,void> &);
	bool operator!=(void(*)(const AgPlayerRemovedEvent &));
	bool operator!=(const AgDelegate1<AgPlayerRemovedEvent const &,void> &);
	bool operator<(const AgDelegate1<AgPlayerRemovedEvent const &,void> &);
	bool operator>(const AgDelegate1<AgPlayerRemovedEvent const &,void> &);
	void bind(void(*)(const AgPlayerRemovedEvent &));
	void operator()(const AgPlayerRemovedEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgPlayerRemovedEvent &);
	void(*)(const AgPlayerRemovedEvent &) * operator void (__cdecl *AgDelegate1<struct AgPlayerRemovedEvent const &,void>::SafeBoolStruct::* )(const struct AgPlayerRemovedEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgPlayerRemovedEvent &);
};
class AgDelegate1<AgPlayerUpdatedEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgPlayerUpdatedEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgPlayerUpdatedEvent &);
	typedef void(*GenericMemFn)(const AgPlayerUpdatedEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &),void (__cdecl*)(AgPlayerUpdatedEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgPlayerUpdatedEvent const &,void>(void(*)(const AgPlayerUpdatedEvent &));
	AgDelegate1<AgPlayerUpdatedEvent const &,void>(const AgDelegate1<AgPlayerUpdatedEvent const &,void> &);
	AgDelegate1<AgPlayerUpdatedEvent const &,void>();
	void operator=(void(*)(const AgPlayerUpdatedEvent &));
	void operator=(const AgDelegate1<AgPlayerUpdatedEvent const &,void> &);
	bool operator==(void(*)(const AgPlayerUpdatedEvent &));
	bool operator==(const AgDelegate1<AgPlayerUpdatedEvent const &,void> &);
	bool operator!=(void(*)(const AgPlayerUpdatedEvent &));
	bool operator!=(const AgDelegate1<AgPlayerUpdatedEvent const &,void> &);
	bool operator<(const AgDelegate1<AgPlayerUpdatedEvent const &,void> &);
	bool operator>(const AgDelegate1<AgPlayerUpdatedEvent const &,void> &);
	void bind(void(*)(const AgPlayerUpdatedEvent &));
	void operator()(const AgPlayerUpdatedEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgPlayerUpdatedEvent &);
	void(*)(const AgPlayerUpdatedEvent &) * operator void (__cdecl *AgDelegate1<struct AgPlayerUpdatedEvent const &,void>::SafeBoolStruct::* )(const struct AgPlayerUpdatedEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgPlayerUpdatedEvent &);
};
class AgDelegate1<AgUserAddedEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgUserAddedEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgUserAddedEvent &);
	typedef void(*GenericMemFn)(const AgUserAddedEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &),void (__cdecl*)(AgUserAddedEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgUserAddedEvent const &,void>(void(*)(const AgUserAddedEvent &));
	AgDelegate1<AgUserAddedEvent const &,void>(const AgDelegate1<AgUserAddedEvent const &,void> &);
	AgDelegate1<AgUserAddedEvent const &,void>();
	void operator=(void(*)(const AgUserAddedEvent &));
	void operator=(const AgDelegate1<AgUserAddedEvent const &,void> &);
	bool operator==(void(*)(const AgUserAddedEvent &));
	bool operator==(const AgDelegate1<AgUserAddedEvent const &,void> &);
	bool operator!=(void(*)(const AgUserAddedEvent &));
	bool operator!=(const AgDelegate1<AgUserAddedEvent const &,void> &);
	bool operator<(const AgDelegate1<AgUserAddedEvent const &,void> &);
	bool operator>(const AgDelegate1<AgUserAddedEvent const &,void> &);
	void bind(void(*)(const AgUserAddedEvent &));
	void operator()(const AgUserAddedEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgUserAddedEvent &);
	void(*)(const AgUserAddedEvent &) * operator void (__cdecl *AgDelegate1<struct AgUserAddedEvent const &,void>::SafeBoolStruct::* )(const struct AgUserAddedEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgUserAddedEvent &);
};
class AgDelegate1<AgUserUpdatedEvent const &,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(const AgUserUpdatedEvent &);
	typedef void(*UnvoidStaticFunctionPtr)(const AgUserUpdatedEvent &);
	typedef void(*GenericMemFn)(const AgUserUpdatedEvent &);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &),void (__cdecl*)(AgUserUpdatedEvent const &)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgUserUpdatedEvent const &,void>(void(*)(const AgUserUpdatedEvent &));
	AgDelegate1<AgUserUpdatedEvent const &,void>(const AgDelegate1<AgUserUpdatedEvent const &,void> &);
	AgDelegate1<AgUserUpdatedEvent const &,void>();
	void operator=(void(*)(const AgUserUpdatedEvent &));
	void operator=(const AgDelegate1<AgUserUpdatedEvent const &,void> &);
	bool operator==(void(*)(const AgUserUpdatedEvent &));
	bool operator==(const AgDelegate1<AgUserUpdatedEvent const &,void> &);
	bool operator!=(void(*)(const AgUserUpdatedEvent &));
	bool operator!=(const AgDelegate1<AgUserUpdatedEvent const &,void> &);
	bool operator<(const AgDelegate1<AgUserUpdatedEvent const &,void> &);
	bool operator>(const AgDelegate1<AgUserUpdatedEvent const &,void> &);
	void bind(void(*)(const AgUserUpdatedEvent &));
	void operator()(const AgUserUpdatedEvent &);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(const AgUserUpdatedEvent &);
	void(*)(const AgUserUpdatedEvent &) * operator void (__cdecl *AgDelegate1<struct AgUserUpdatedEvent const &,void>::SafeBoolStruct::* )(const struct AgUserUpdatedEvent &)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(const AgUserUpdatedEvent &);
};
class std::vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgEditedInputEvent const &,void> pointer;
	typedef const AgDelegate1<AgEditedInputEvent const &,void> const_pointer;
	typedef AgDelegate1<AgEditedInputEvent const &,void> reference;
	typedef const AgDelegate1<AgEditedInputEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > >(std::initializer_list<AgDelegate1<AgEditedInputEvent const &,void> >, const std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > &);
	vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > >(std::vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > > &, const std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > &);
	vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > >(std::vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > > &);
	vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > >(const std::vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > > &, const std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > &);
	vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > >(const std::vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > > &);
	vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > >(unsigned long long, const AgDelegate1<AgEditedInputEvent const &,void> &, const std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > &);
	vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > >(unsigned long long, const AgDelegate1<AgEditedInputEvent const &,void> &);
	vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > >(const std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > &);
	vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgEditedInputEvent const &,void> *);
	std::vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > > &);
	std::vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgEditedInputEvent const &,void> >);
	std::vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgEditedInputEvent const &,void> &);
	void push_back(AgDelegate1<AgEditedInputEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgEditedInputEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > >, const AgDelegate1<AgEditedInputEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgEditedInputEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > >, AgDelegate1<AgEditedInputEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgEditedInputEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgEditedInputEvent const &,void> >);
	~vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgEditedInputEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > get_allocator();
	AgDelegate1<AgEditedInputEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgEditedInputEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgEditedInputEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgEditedInputEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgEditedInputEvent const &,void> * data();
	AgDelegate1<AgEditedInputEvent const &,void> * data();
	const AgDelegate1<AgEditedInputEvent const &,void> & front();
	AgDelegate1<AgEditedInputEvent const &,void> & front();
	const AgDelegate1<AgEditedInputEvent const &,void> & back();
	AgDelegate1<AgEditedInputEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgEditedInputEvent const &,void> *, AgDelegate1<AgEditedInputEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgEditedInputEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgEditedInputEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgEditedInputEvent const &,void> &);
	AgDelegate1<AgEditedInputEvent const &,void> * _Ufill(AgDelegate1<AgEditedInputEvent const &,void> *, unsigned long long, const AgDelegate1<AgEditedInputEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgEditedInputEvent const &,void> *, AgDelegate1<AgEditedInputEvent const &,void> *);
};
class std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgControllerRemovedEvent const &,void> pointer;
	typedef const AgDelegate1<AgControllerRemovedEvent const &,void> const_pointer;
	typedef AgDelegate1<AgControllerRemovedEvent const &,void> reference;
	typedef const AgDelegate1<AgControllerRemovedEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > >(std::initializer_list<AgDelegate1<AgControllerRemovedEvent const &,void> >, const std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > &);
	vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > >(std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > &);
	vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > >(std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > &);
	vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > >(const std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > &);
	vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > >(const std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > &);
	vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgControllerRemovedEvent const &,void> &, const std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > &);
	vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgControllerRemovedEvent const &,void> &);
	vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > >(const std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > &);
	vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgControllerRemovedEvent const &,void> *);
	std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > &);
	std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgControllerRemovedEvent const &,void> >);
	std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgControllerRemovedEvent const &,void> &);
	void push_back(AgDelegate1<AgControllerRemovedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgControllerRemovedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > >, const AgDelegate1<AgControllerRemovedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgControllerRemovedEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > >, AgDelegate1<AgControllerRemovedEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgControllerRemovedEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgControllerRemovedEvent const &,void> >);
	~vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgControllerRemovedEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > get_allocator();
	AgDelegate1<AgControllerRemovedEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgControllerRemovedEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgControllerRemovedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgControllerRemovedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgControllerRemovedEvent const &,void> * data();
	AgDelegate1<AgControllerRemovedEvent const &,void> * data();
	const AgDelegate1<AgControllerRemovedEvent const &,void> & front();
	AgDelegate1<AgControllerRemovedEvent const &,void> & front();
	const AgDelegate1<AgControllerRemovedEvent const &,void> & back();
	AgDelegate1<AgControllerRemovedEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgControllerRemovedEvent const &,void> *, AgDelegate1<AgControllerRemovedEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgControllerRemovedEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerRemovedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgControllerRemovedEvent const &,void> &);
	AgDelegate1<AgControllerRemovedEvent const &,void> * _Ufill(AgDelegate1<AgControllerRemovedEvent const &,void> *, unsigned long long, const AgDelegate1<AgControllerRemovedEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgControllerRemovedEvent const &,void> *, AgDelegate1<AgControllerRemovedEvent const &,void> *);
};
class std::vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgTypingInputEvent const &,void> pointer;
	typedef const AgDelegate1<AgTypingInputEvent const &,void> const_pointer;
	typedef AgDelegate1<AgTypingInputEvent const &,void> reference;
	typedef const AgDelegate1<AgTypingInputEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > >(std::initializer_list<AgDelegate1<AgTypingInputEvent const &,void> >, const std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > &);
	vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > >(std::vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > > &, const std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > &);
	vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > >(std::vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > > &);
	vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > >(const std::vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > > &, const std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > &);
	vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > >(const std::vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > > &);
	vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > >(unsigned long long, const AgDelegate1<AgTypingInputEvent const &,void> &, const std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > &);
	vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > >(unsigned long long, const AgDelegate1<AgTypingInputEvent const &,void> &);
	vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > >(const std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > &);
	vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgTypingInputEvent const &,void> *);
	std::vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > > &);
	std::vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgTypingInputEvent const &,void> >);
	std::vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgTypingInputEvent const &,void> &);
	void push_back(AgDelegate1<AgTypingInputEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgTypingInputEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > >, const AgDelegate1<AgTypingInputEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgTypingInputEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > >, AgDelegate1<AgTypingInputEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgTypingInputEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgTypingInputEvent const &,void> >);
	~vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgTypingInputEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > get_allocator();
	AgDelegate1<AgTypingInputEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgTypingInputEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgTypingInputEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgTypingInputEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgTypingInputEvent const &,void> * data();
	AgDelegate1<AgTypingInputEvent const &,void> * data();
	const AgDelegate1<AgTypingInputEvent const &,void> & front();
	AgDelegate1<AgTypingInputEvent const &,void> & front();
	const AgDelegate1<AgTypingInputEvent const &,void> & back();
	AgDelegate1<AgTypingInputEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgTypingInputEvent const &,void> *, AgDelegate1<AgTypingInputEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgTypingInputEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgTypingInputEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgTypingInputEvent const &,void> &);
	AgDelegate1<AgTypingInputEvent const &,void> * _Ufill(AgDelegate1<AgTypingInputEvent const &,void> *, unsigned long long, const AgDelegate1<AgTypingInputEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgTypingInputEvent const &,void> *, AgDelegate1<AgTypingInputEvent const &,void> *);
};
class std::vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgControllerAddedEvent const &,void> pointer;
	typedef const AgDelegate1<AgControllerAddedEvent const &,void> const_pointer;
	typedef AgDelegate1<AgControllerAddedEvent const &,void> reference;
	typedef const AgDelegate1<AgControllerAddedEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > >(std::initializer_list<AgDelegate1<AgControllerAddedEvent const &,void> >, const std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > &);
	vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > >(std::vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > &);
	vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > >(std::vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > > &);
	vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > >(const std::vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > &);
	vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > >(const std::vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > > &);
	vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgControllerAddedEvent const &,void> &, const std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > &);
	vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgControllerAddedEvent const &,void> &);
	vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > >(const std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > &);
	vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgControllerAddedEvent const &,void> *);
	std::vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > > &);
	std::vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgControllerAddedEvent const &,void> >);
	std::vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgControllerAddedEvent const &,void> &);
	void push_back(AgDelegate1<AgControllerAddedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgControllerAddedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > >, const AgDelegate1<AgControllerAddedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgControllerAddedEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > >, AgDelegate1<AgControllerAddedEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgControllerAddedEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgControllerAddedEvent const &,void> >);
	~vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgControllerAddedEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > get_allocator();
	AgDelegate1<AgControllerAddedEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgControllerAddedEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgControllerAddedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgControllerAddedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgControllerAddedEvent const &,void> * data();
	AgDelegate1<AgControllerAddedEvent const &,void> * data();
	const AgDelegate1<AgControllerAddedEvent const &,void> & front();
	AgDelegate1<AgControllerAddedEvent const &,void> & front();
	const AgDelegate1<AgControllerAddedEvent const &,void> & back();
	AgDelegate1<AgControllerAddedEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgControllerAddedEvent const &,void> *, AgDelegate1<AgControllerAddedEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgControllerAddedEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerAddedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgControllerAddedEvent const &,void> &);
	AgDelegate1<AgControllerAddedEvent const &,void> * _Ufill(AgDelegate1<AgControllerAddedEvent const &,void> *, unsigned long long, const AgDelegate1<AgControllerAddedEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgControllerAddedEvent const &,void> *, AgDelegate1<AgControllerAddedEvent const &,void> *);
};
class std::vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgUnmountEvent const &,void> pointer;
	typedef const AgDelegate1<AgUnmountEvent const &,void> const_pointer;
	typedef AgDelegate1<AgUnmountEvent const &,void> reference;
	typedef const AgDelegate1<AgUnmountEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > >(std::initializer_list<AgDelegate1<AgUnmountEvent const &,void> >, const std::allocator<AgDelegate1<AgUnmountEvent const &,void> > &);
	vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > >(std::vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > > &, const std::allocator<AgDelegate1<AgUnmountEvent const &,void> > &);
	vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > >(std::vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > > &);
	vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > >(const std::vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > > &, const std::allocator<AgDelegate1<AgUnmountEvent const &,void> > &);
	vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > >(const std::vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > > &);
	vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > >(unsigned long long, const AgDelegate1<AgUnmountEvent const &,void> &, const std::allocator<AgDelegate1<AgUnmountEvent const &,void> > &);
	vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > >(unsigned long long, const AgDelegate1<AgUnmountEvent const &,void> &);
	vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > >(const std::allocator<AgDelegate1<AgUnmountEvent const &,void> > &);
	vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgUnmountEvent const &,void> *);
	std::vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > > &);
	std::vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgUnmountEvent const &,void> >);
	std::vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgUnmountEvent const &,void> &);
	void push_back(AgDelegate1<AgUnmountEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgUnmountEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > >, const AgDelegate1<AgUnmountEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgUnmountEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > >, AgDelegate1<AgUnmountEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgUnmountEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgUnmountEvent const &,void> >);
	~vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgUnmountEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgUnmountEvent const &,void> > get_allocator();
	AgDelegate1<AgUnmountEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgUnmountEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgUnmountEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgUnmountEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgUnmountEvent const &,void> * data();
	AgDelegate1<AgUnmountEvent const &,void> * data();
	const AgDelegate1<AgUnmountEvent const &,void> & front();
	AgDelegate1<AgUnmountEvent const &,void> & front();
	const AgDelegate1<AgUnmountEvent const &,void> & back();
	AgDelegate1<AgUnmountEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgUnmountEvent const &,void> *, AgDelegate1<AgUnmountEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgUnmountEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUnmountEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgUnmountEvent const &,void> &);
	AgDelegate1<AgUnmountEvent const &,void> * _Ufill(AgDelegate1<AgUnmountEvent const &,void> *, unsigned long long, const AgDelegate1<AgUnmountEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgUnmountEvent const &,void> *, AgDelegate1<AgUnmountEvent const &,void> *);
};
class std::vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgMountWriteBeginEvent const &,void> pointer;
	typedef const AgDelegate1<AgMountWriteBeginEvent const &,void> const_pointer;
	typedef AgDelegate1<AgMountWriteBeginEvent const &,void> reference;
	typedef const AgDelegate1<AgMountWriteBeginEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > >(std::initializer_list<AgDelegate1<AgMountWriteBeginEvent const &,void> >, const std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > &);
	vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > >(std::vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > > &, const std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > &);
	vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > >(std::vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > > &);
	vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > >(const std::vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > > &, const std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > &);
	vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > >(const std::vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > > &);
	vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > >(unsigned long long, const AgDelegate1<AgMountWriteBeginEvent const &,void> &, const std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > &);
	vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > >(unsigned long long, const AgDelegate1<AgMountWriteBeginEvent const &,void> &);
	vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > >(const std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > &);
	vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgMountWriteBeginEvent const &,void> *);
	std::vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > > &);
	std::vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgMountWriteBeginEvent const &,void> >);
	std::vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgMountWriteBeginEvent const &,void> &);
	void push_back(AgDelegate1<AgMountWriteBeginEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgMountWriteBeginEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > >, const AgDelegate1<AgMountWriteBeginEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgMountWriteBeginEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > >, AgDelegate1<AgMountWriteBeginEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgMountWriteBeginEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgMountWriteBeginEvent const &,void> >);
	~vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgMountWriteBeginEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > get_allocator();
	AgDelegate1<AgMountWriteBeginEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgMountWriteBeginEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgMountWriteBeginEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgMountWriteBeginEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgMountWriteBeginEvent const &,void> * data();
	AgDelegate1<AgMountWriteBeginEvent const &,void> * data();
	const AgDelegate1<AgMountWriteBeginEvent const &,void> & front();
	AgDelegate1<AgMountWriteBeginEvent const &,void> & front();
	const AgDelegate1<AgMountWriteBeginEvent const &,void> & back();
	AgDelegate1<AgMountWriteBeginEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgMountWriteBeginEvent const &,void> *, AgDelegate1<AgMountWriteBeginEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgMountWriteBeginEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteBeginEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgMountWriteBeginEvent const &,void> &);
	AgDelegate1<AgMountWriteBeginEvent const &,void> * _Ufill(AgDelegate1<AgMountWriteBeginEvent const &,void> *, unsigned long long, const AgDelegate1<AgMountWriteBeginEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgMountWriteBeginEvent const &,void> *, AgDelegate1<AgMountWriteBeginEvent const &,void> *);
};
class std::vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgUserRemovedEvent const &,void> pointer;
	typedef const AgDelegate1<AgUserRemovedEvent const &,void> const_pointer;
	typedef AgDelegate1<AgUserRemovedEvent const &,void> reference;
	typedef const AgDelegate1<AgUserRemovedEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > >(std::initializer_list<AgDelegate1<AgUserRemovedEvent const &,void> >, const std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > &);
	vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > >(std::vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > &);
	vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > >(std::vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > > &);
	vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > >(const std::vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > &);
	vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > >(const std::vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > > &);
	vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgUserRemovedEvent const &,void> &, const std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > &);
	vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgUserRemovedEvent const &,void> &);
	vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > >(const std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > &);
	vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgUserRemovedEvent const &,void> *);
	std::vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > > &);
	std::vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgUserRemovedEvent const &,void> >);
	std::vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgUserRemovedEvent const &,void> &);
	void push_back(AgDelegate1<AgUserRemovedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgUserRemovedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > >, const AgDelegate1<AgUserRemovedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgUserRemovedEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > >, AgDelegate1<AgUserRemovedEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgUserRemovedEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgUserRemovedEvent const &,void> >);
	~vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgUserRemovedEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > get_allocator();
	AgDelegate1<AgUserRemovedEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgUserRemovedEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgUserRemovedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgUserRemovedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgUserRemovedEvent const &,void> * data();
	AgDelegate1<AgUserRemovedEvent const &,void> * data();
	const AgDelegate1<AgUserRemovedEvent const &,void> & front();
	AgDelegate1<AgUserRemovedEvent const &,void> & front();
	const AgDelegate1<AgUserRemovedEvent const &,void> & back();
	AgDelegate1<AgUserRemovedEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgUserRemovedEvent const &,void> *, AgDelegate1<AgUserRemovedEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgUserRemovedEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserRemovedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgUserRemovedEvent const &,void> &);
	AgDelegate1<AgUserRemovedEvent const &,void> * _Ufill(AgDelegate1<AgUserRemovedEvent const &,void> *, unsigned long long, const AgDelegate1<AgUserRemovedEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgUserRemovedEvent const &,void> *, AgDelegate1<AgUserRemovedEvent const &,void> *);
};
class std::vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgMountErrorEvent const &,void> pointer;
	typedef const AgDelegate1<AgMountErrorEvent const &,void> const_pointer;
	typedef AgDelegate1<AgMountErrorEvent const &,void> reference;
	typedef const AgDelegate1<AgMountErrorEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > >(std::initializer_list<AgDelegate1<AgMountErrorEvent const &,void> >, const std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > &);
	vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > >(std::vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > > &, const std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > &);
	vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > >(std::vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > > &);
	vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > >(const std::vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > > &, const std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > &);
	vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > >(const std::vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > > &);
	vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > >(unsigned long long, const AgDelegate1<AgMountErrorEvent const &,void> &, const std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > &);
	vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > >(unsigned long long, const AgDelegate1<AgMountErrorEvent const &,void> &);
	vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > >(const std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > &);
	vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgMountErrorEvent const &,void> *);
	std::vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > > &);
	std::vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgMountErrorEvent const &,void> >);
	std::vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgMountErrorEvent const &,void> &);
	void push_back(AgDelegate1<AgMountErrorEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgMountErrorEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > >, const AgDelegate1<AgMountErrorEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgMountErrorEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > >, AgDelegate1<AgMountErrorEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgMountErrorEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgMountErrorEvent const &,void> >);
	~vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgMountErrorEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > get_allocator();
	AgDelegate1<AgMountErrorEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgMountErrorEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgMountErrorEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgMountErrorEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgMountErrorEvent const &,void> * data();
	AgDelegate1<AgMountErrorEvent const &,void> * data();
	const AgDelegate1<AgMountErrorEvent const &,void> & front();
	AgDelegate1<AgMountErrorEvent const &,void> & front();
	const AgDelegate1<AgMountErrorEvent const &,void> & back();
	AgDelegate1<AgMountErrorEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgMountErrorEvent const &,void> *, AgDelegate1<AgMountErrorEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgMountErrorEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountErrorEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgMountErrorEvent const &,void> &);
	AgDelegate1<AgMountErrorEvent const &,void> * _Ufill(AgDelegate1<AgMountErrorEvent const &,void> *, unsigned long long, const AgDelegate1<AgMountErrorEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgMountErrorEvent const &,void> *, AgDelegate1<AgMountErrorEvent const &,void> *);
};
class std::vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgDeactivatedEvent const &,void> pointer;
	typedef const AgDelegate1<AgDeactivatedEvent const &,void> const_pointer;
	typedef AgDelegate1<AgDeactivatedEvent const &,void> reference;
	typedef const AgDelegate1<AgDeactivatedEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > >(std::initializer_list<AgDelegate1<AgDeactivatedEvent const &,void> >, const std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > &);
	vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > >(std::vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > &);
	vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > >(std::vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > > &);
	vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > >(const std::vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > &);
	vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > >(const std::vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > > &);
	vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgDeactivatedEvent const &,void> &, const std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > &);
	vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgDeactivatedEvent const &,void> &);
	vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > >(const std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > &);
	vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgDeactivatedEvent const &,void> *);
	std::vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > > &);
	std::vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgDeactivatedEvent const &,void> >);
	std::vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgDeactivatedEvent const &,void> &);
	void push_back(AgDelegate1<AgDeactivatedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgDeactivatedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > >, const AgDelegate1<AgDeactivatedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgDeactivatedEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > >, AgDelegate1<AgDeactivatedEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgDeactivatedEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgDeactivatedEvent const &,void> >);
	~vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgDeactivatedEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > get_allocator();
	AgDelegate1<AgDeactivatedEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgDeactivatedEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgDeactivatedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgDeactivatedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgDeactivatedEvent const &,void> * data();
	AgDelegate1<AgDeactivatedEvent const &,void> * data();
	const AgDelegate1<AgDeactivatedEvent const &,void> & front();
	AgDelegate1<AgDeactivatedEvent const &,void> & front();
	const AgDelegate1<AgDeactivatedEvent const &,void> & back();
	AgDelegate1<AgDeactivatedEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgDeactivatedEvent const &,void> *, AgDelegate1<AgDeactivatedEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgDeactivatedEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDeactivatedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgDeactivatedEvent const &,void> &);
	AgDelegate1<AgDeactivatedEvent const &,void> * _Ufill(AgDelegate1<AgDeactivatedEvent const &,void> *, unsigned long long, const AgDelegate1<AgDeactivatedEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgDeactivatedEvent const &,void> *, AgDelegate1<AgDeactivatedEvent const &,void> *);
};
class std::vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgActivatedEvent const &,void> pointer;
	typedef const AgDelegate1<AgActivatedEvent const &,void> const_pointer;
	typedef AgDelegate1<AgActivatedEvent const &,void> reference;
	typedef const AgDelegate1<AgActivatedEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > >(std::initializer_list<AgDelegate1<AgActivatedEvent const &,void> >, const std::allocator<AgDelegate1<AgActivatedEvent const &,void> > &);
	vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > >(std::vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgActivatedEvent const &,void> > &);
	vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > >(std::vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > > &);
	vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > >(const std::vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgActivatedEvent const &,void> > &);
	vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > >(const std::vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > > &);
	vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgActivatedEvent const &,void> &, const std::allocator<AgDelegate1<AgActivatedEvent const &,void> > &);
	vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgActivatedEvent const &,void> &);
	vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > >(const std::allocator<AgDelegate1<AgActivatedEvent const &,void> > &);
	vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgActivatedEvent const &,void> *);
	std::vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > > &);
	std::vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgActivatedEvent const &,void> >);
	std::vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgActivatedEvent const &,void> &);
	void push_back(AgDelegate1<AgActivatedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgActivatedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > >, const AgDelegate1<AgActivatedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgActivatedEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > >, AgDelegate1<AgActivatedEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgActivatedEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgActivatedEvent const &,void> >);
	~vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgActivatedEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgActivatedEvent const &,void> > get_allocator();
	AgDelegate1<AgActivatedEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgActivatedEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgActivatedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgActivatedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgActivatedEvent const &,void> * data();
	AgDelegate1<AgActivatedEvent const &,void> * data();
	const AgDelegate1<AgActivatedEvent const &,void> & front();
	AgDelegate1<AgActivatedEvent const &,void> & front();
	const AgDelegate1<AgActivatedEvent const &,void> & back();
	AgDelegate1<AgActivatedEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgActivatedEvent const &,void> *, AgDelegate1<AgActivatedEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgActivatedEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgActivatedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgActivatedEvent const &,void> &);
	AgDelegate1<AgActivatedEvent const &,void> * _Ufill(AgDelegate1<AgActivatedEvent const &,void> *, unsigned long long, const AgDelegate1<AgActivatedEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgActivatedEvent const &,void> *, AgDelegate1<AgActivatedEvent const &,void> *);
};
class std::vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgSuspendingEvent const &,void> pointer;
	typedef const AgDelegate1<AgSuspendingEvent const &,void> const_pointer;
	typedef AgDelegate1<AgSuspendingEvent const &,void> reference;
	typedef const AgDelegate1<AgSuspendingEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > >(std::initializer_list<AgDelegate1<AgSuspendingEvent const &,void> >, const std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > &);
	vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > >(std::vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > > &, const std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > &);
	vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > >(std::vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > > &);
	vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > >(const std::vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > > &, const std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > &);
	vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > >(const std::vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > > &);
	vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > >(unsigned long long, const AgDelegate1<AgSuspendingEvent const &,void> &, const std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > &);
	vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > >(unsigned long long, const AgDelegate1<AgSuspendingEvent const &,void> &);
	vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > >(const std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > &);
	vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgSuspendingEvent const &,void> *);
	std::vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > > &);
	std::vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgSuspendingEvent const &,void> >);
	std::vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgSuspendingEvent const &,void> &);
	void push_back(AgDelegate1<AgSuspendingEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgSuspendingEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > >, const AgDelegate1<AgSuspendingEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgSuspendingEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > >, AgDelegate1<AgSuspendingEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgSuspendingEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgSuspendingEvent const &,void> >);
	~vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgSuspendingEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > get_allocator();
	AgDelegate1<AgSuspendingEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgSuspendingEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgSuspendingEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgSuspendingEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgSuspendingEvent const &,void> * data();
	AgDelegate1<AgSuspendingEvent const &,void> * data();
	const AgDelegate1<AgSuspendingEvent const &,void> & front();
	AgDelegate1<AgSuspendingEvent const &,void> & front();
	const AgDelegate1<AgSuspendingEvent const &,void> & back();
	AgDelegate1<AgSuspendingEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgSuspendingEvent const &,void> *, AgDelegate1<AgSuspendingEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgSuspendingEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgSuspendingEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgSuspendingEvent const &,void> &);
	AgDelegate1<AgSuspendingEvent const &,void> * _Ufill(AgDelegate1<AgSuspendingEvent const &,void> *, unsigned long long, const AgDelegate1<AgSuspendingEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgSuspendingEvent const &,void> *, AgDelegate1<AgSuspendingEvent const &,void> *);
};
class std::vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgDisplayChangedEvent const &,void> pointer;
	typedef const AgDelegate1<AgDisplayChangedEvent const &,void> const_pointer;
	typedef AgDelegate1<AgDisplayChangedEvent const &,void> reference;
	typedef const AgDelegate1<AgDisplayChangedEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > >(std::initializer_list<AgDelegate1<AgDisplayChangedEvent const &,void> >, const std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > &);
	vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > >(std::vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > &);
	vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > >(std::vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > > &);
	vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > >(const std::vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > &);
	vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > >(const std::vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > > &);
	vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgDisplayChangedEvent const &,void> &, const std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > &);
	vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgDisplayChangedEvent const &,void> &);
	vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > >(const std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > &);
	vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgDisplayChangedEvent const &,void> *);
	std::vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > > &);
	std::vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgDisplayChangedEvent const &,void> >);
	std::vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgDisplayChangedEvent const &,void> &);
	void push_back(AgDelegate1<AgDisplayChangedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgDisplayChangedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > >, const AgDelegate1<AgDisplayChangedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgDisplayChangedEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > >, AgDelegate1<AgDisplayChangedEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgDisplayChangedEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgDisplayChangedEvent const &,void> >);
	~vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgDisplayChangedEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > get_allocator();
	AgDelegate1<AgDisplayChangedEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgDisplayChangedEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgDisplayChangedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgDisplayChangedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgDisplayChangedEvent const &,void> * data();
	AgDelegate1<AgDisplayChangedEvent const &,void> * data();
	const AgDelegate1<AgDisplayChangedEvent const &,void> & front();
	AgDelegate1<AgDisplayChangedEvent const &,void> & front();
	const AgDelegate1<AgDisplayChangedEvent const &,void> & back();
	AgDelegate1<AgDisplayChangedEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgDisplayChangedEvent const &,void> *, AgDelegate1<AgDisplayChangedEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgDisplayChangedEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgDisplayChangedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgDisplayChangedEvent const &,void> &);
	AgDelegate1<AgDisplayChangedEvent const &,void> * _Ufill(AgDelegate1<AgDisplayChangedEvent const &,void> *, unsigned long long, const AgDelegate1<AgDisplayChangedEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgDisplayChangedEvent const &,void> *, AgDelegate1<AgDisplayChangedEvent const &,void> *);
};
class std::vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgPlayerRemovedEvent const &,void> pointer;
	typedef const AgDelegate1<AgPlayerRemovedEvent const &,void> const_pointer;
	typedef AgDelegate1<AgPlayerRemovedEvent const &,void> reference;
	typedef const AgDelegate1<AgPlayerRemovedEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > >(std::initializer_list<AgDelegate1<AgPlayerRemovedEvent const &,void> >, const std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > &);
	vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > >(std::vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > &);
	vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > >(std::vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > > &);
	vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > >(const std::vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > &);
	vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > >(const std::vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > > &);
	vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgPlayerRemovedEvent const &,void> &, const std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > &);
	vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgPlayerRemovedEvent const &,void> &);
	vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > >(const std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > &);
	vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgPlayerRemovedEvent const &,void> *);
	std::vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > > &);
	std::vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgPlayerRemovedEvent const &,void> >);
	std::vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgPlayerRemovedEvent const &,void> &);
	void push_back(AgDelegate1<AgPlayerRemovedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgPlayerRemovedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > >, const AgDelegate1<AgPlayerRemovedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgPlayerRemovedEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > >, AgDelegate1<AgPlayerRemovedEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgPlayerRemovedEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgPlayerRemovedEvent const &,void> >);
	~vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgPlayerRemovedEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > get_allocator();
	AgDelegate1<AgPlayerRemovedEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgPlayerRemovedEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgPlayerRemovedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgPlayerRemovedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgPlayerRemovedEvent const &,void> * data();
	AgDelegate1<AgPlayerRemovedEvent const &,void> * data();
	const AgDelegate1<AgPlayerRemovedEvent const &,void> & front();
	AgDelegate1<AgPlayerRemovedEvent const &,void> & front();
	const AgDelegate1<AgPlayerRemovedEvent const &,void> & back();
	AgDelegate1<AgPlayerRemovedEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgPlayerRemovedEvent const &,void> *, AgDelegate1<AgPlayerRemovedEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgPlayerRemovedEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerRemovedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgPlayerRemovedEvent const &,void> &);
	AgDelegate1<AgPlayerRemovedEvent const &,void> * _Ufill(AgDelegate1<AgPlayerRemovedEvent const &,void> *, unsigned long long, const AgDelegate1<AgPlayerRemovedEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgPlayerRemovedEvent const &,void> *, AgDelegate1<AgPlayerRemovedEvent const &,void> *);
};
class std::vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgMountWriteEndEvent const &,void> pointer;
	typedef const AgDelegate1<AgMountWriteEndEvent const &,void> const_pointer;
	typedef AgDelegate1<AgMountWriteEndEvent const &,void> reference;
	typedef const AgDelegate1<AgMountWriteEndEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > >(std::initializer_list<AgDelegate1<AgMountWriteEndEvent const &,void> >, const std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > &);
	vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > >(std::vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > > &, const std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > &);
	vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > >(std::vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > > &);
	vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > >(const std::vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > > &, const std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > &);
	vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > >(const std::vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > > &);
	vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > >(unsigned long long, const AgDelegate1<AgMountWriteEndEvent const &,void> &, const std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > &);
	vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > >(unsigned long long, const AgDelegate1<AgMountWriteEndEvent const &,void> &);
	vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > >(const std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > &);
	vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgMountWriteEndEvent const &,void> *);
	std::vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > > &);
	std::vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgMountWriteEndEvent const &,void> >);
	std::vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgMountWriteEndEvent const &,void> &);
	void push_back(AgDelegate1<AgMountWriteEndEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgMountWriteEndEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > >, const AgDelegate1<AgMountWriteEndEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgMountWriteEndEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > >, AgDelegate1<AgMountWriteEndEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgMountWriteEndEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgMountWriteEndEvent const &,void> >);
	~vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgMountWriteEndEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > get_allocator();
	AgDelegate1<AgMountWriteEndEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgMountWriteEndEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgMountWriteEndEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgMountWriteEndEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgMountWriteEndEvent const &,void> * data();
	AgDelegate1<AgMountWriteEndEvent const &,void> * data();
	const AgDelegate1<AgMountWriteEndEvent const &,void> & front();
	AgDelegate1<AgMountWriteEndEvent const &,void> & front();
	const AgDelegate1<AgMountWriteEndEvent const &,void> & back();
	AgDelegate1<AgMountWriteEndEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgMountWriteEndEvent const &,void> *, AgDelegate1<AgMountWriteEndEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgMountWriteEndEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountWriteEndEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgMountWriteEndEvent const &,void> &);
	AgDelegate1<AgMountWriteEndEvent const &,void> * _Ufill(AgDelegate1<AgMountWriteEndEvent const &,void> *, unsigned long long, const AgDelegate1<AgMountWriteEndEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgMountWriteEndEvent const &,void> *, AgDelegate1<AgMountWriteEndEvent const &,void> *);
};
class std::vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgMountEvent const &,void> pointer;
	typedef const AgDelegate1<AgMountEvent const &,void> const_pointer;
	typedef AgDelegate1<AgMountEvent const &,void> reference;
	typedef const AgDelegate1<AgMountEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > >(std::initializer_list<AgDelegate1<AgMountEvent const &,void> >, const std::allocator<AgDelegate1<AgMountEvent const &,void> > &);
	vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > >(std::vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > > &, const std::allocator<AgDelegate1<AgMountEvent const &,void> > &);
	vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > >(std::vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > > &);
	vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > >(const std::vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > > &, const std::allocator<AgDelegate1<AgMountEvent const &,void> > &);
	vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > >(const std::vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > > &);
	vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > >(unsigned long long, const AgDelegate1<AgMountEvent const &,void> &, const std::allocator<AgDelegate1<AgMountEvent const &,void> > &);
	vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > >(unsigned long long, const AgDelegate1<AgMountEvent const &,void> &);
	vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > >(const std::allocator<AgDelegate1<AgMountEvent const &,void> > &);
	vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgMountEvent const &,void> *);
	std::vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > > &);
	std::vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgMountEvent const &,void> >);
	std::vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgMountEvent const &,void> &);
	void push_back(AgDelegate1<AgMountEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgMountEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > >, const AgDelegate1<AgMountEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgMountEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > >, AgDelegate1<AgMountEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgMountEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgMountEvent const &,void> >);
	~vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgMountEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgMountEvent const &,void> > get_allocator();
	AgDelegate1<AgMountEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgMountEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgMountEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgMountEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgMountEvent const &,void> * data();
	AgDelegate1<AgMountEvent const &,void> * data();
	const AgDelegate1<AgMountEvent const &,void> & front();
	AgDelegate1<AgMountEvent const &,void> & front();
	const AgDelegate1<AgMountEvent const &,void> & back();
	AgDelegate1<AgMountEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgMountEvent const &,void> *, AgDelegate1<AgMountEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgMountEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgMountEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgMountEvent const &,void> &);
	AgDelegate1<AgMountEvent const &,void> * _Ufill(AgDelegate1<AgMountEvent const &,void> *, unsigned long long, const AgDelegate1<AgMountEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgMountEvent const &,void> *, AgDelegate1<AgMountEvent const &,void> *);
};
class std::vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgControllerPairingChangedEvent const &,void> pointer;
	typedef const AgDelegate1<AgControllerPairingChangedEvent const &,void> const_pointer;
	typedef AgDelegate1<AgControllerPairingChangedEvent const &,void> reference;
	typedef const AgDelegate1<AgControllerPairingChangedEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > >(std::initializer_list<AgDelegate1<AgControllerPairingChangedEvent const &,void> >, const std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > &);
	vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > >(std::vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > &);
	vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > >(std::vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > &);
	vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > >(const std::vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > &);
	vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > >(const std::vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > &);
	vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgControllerPairingChangedEvent const &,void> &, const std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > &);
	vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgControllerPairingChangedEvent const &,void> &);
	vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > >(const std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > &);
	vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgControllerPairingChangedEvent const &,void> *);
	std::vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > &);
	std::vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgControllerPairingChangedEvent const &,void> >);
	std::vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgControllerPairingChangedEvent const &,void> &);
	void push_back(AgDelegate1<AgControllerPairingChangedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgControllerPairingChangedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > >, const AgDelegate1<AgControllerPairingChangedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgControllerPairingChangedEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > >, AgDelegate1<AgControllerPairingChangedEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgControllerPairingChangedEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgControllerPairingChangedEvent const &,void> >);
	~vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgControllerPairingChangedEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > get_allocator();
	AgDelegate1<AgControllerPairingChangedEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgControllerPairingChangedEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgControllerPairingChangedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgControllerPairingChangedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgControllerPairingChangedEvent const &,void> * data();
	AgDelegate1<AgControllerPairingChangedEvent const &,void> * data();
	const AgDelegate1<AgControllerPairingChangedEvent const &,void> & front();
	AgDelegate1<AgControllerPairingChangedEvent const &,void> & front();
	const AgDelegate1<AgControllerPairingChangedEvent const &,void> & back();
	AgDelegate1<AgControllerPairingChangedEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgControllerPairingChangedEvent const &,void> *, AgDelegate1<AgControllerPairingChangedEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgControllerPairingChangedEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgControllerPairingChangedEvent const &,void> &);
	AgDelegate1<AgControllerPairingChangedEvent const &,void> * _Ufill(AgDelegate1<AgControllerPairingChangedEvent const &,void> *, unsigned long long, const AgDelegate1<AgControllerPairingChangedEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgControllerPairingChangedEvent const &,void> *, AgDelegate1<AgControllerPairingChangedEvent const &,void> *);
};
class std::vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgResumingEvent const &,void> pointer;
	typedef const AgDelegate1<AgResumingEvent const &,void> const_pointer;
	typedef AgDelegate1<AgResumingEvent const &,void> reference;
	typedef const AgDelegate1<AgResumingEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > >(std::initializer_list<AgDelegate1<AgResumingEvent const &,void> >, const std::allocator<AgDelegate1<AgResumingEvent const &,void> > &);
	vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > >(std::vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > > &, const std::allocator<AgDelegate1<AgResumingEvent const &,void> > &);
	vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > >(std::vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > > &);
	vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > >(const std::vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > > &, const std::allocator<AgDelegate1<AgResumingEvent const &,void> > &);
	vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > >(const std::vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > > &);
	vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > >(unsigned long long, const AgDelegate1<AgResumingEvent const &,void> &, const std::allocator<AgDelegate1<AgResumingEvent const &,void> > &);
	vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > >(unsigned long long, const AgDelegate1<AgResumingEvent const &,void> &);
	vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > >(const std::allocator<AgDelegate1<AgResumingEvent const &,void> > &);
	vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgResumingEvent const &,void> *);
	std::vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > > &);
	std::vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgResumingEvent const &,void> >);
	std::vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgResumingEvent const &,void> &);
	void push_back(AgDelegate1<AgResumingEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgResumingEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > >, const AgDelegate1<AgResumingEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgResumingEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > >, AgDelegate1<AgResumingEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgResumingEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgResumingEvent const &,void> >);
	~vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgResumingEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgResumingEvent const &,void> > get_allocator();
	AgDelegate1<AgResumingEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgResumingEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgResumingEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgResumingEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgResumingEvent const &,void> * data();
	AgDelegate1<AgResumingEvent const &,void> * data();
	const AgDelegate1<AgResumingEvent const &,void> & front();
	AgDelegate1<AgResumingEvent const &,void> & front();
	const AgDelegate1<AgResumingEvent const &,void> & back();
	AgDelegate1<AgResumingEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgResumingEvent const &,void> *, AgDelegate1<AgResumingEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgResumingEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgResumingEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgResumingEvent const &,void> &);
	AgDelegate1<AgResumingEvent const &,void> * _Ufill(AgDelegate1<AgResumingEvent const &,void> *, unsigned long long, const AgDelegate1<AgResumingEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgResumingEvent const &,void> *, AgDelegate1<AgResumingEvent const &,void> *);
};
class std::vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgPrepareDumpEvent const &,void> pointer;
	typedef const AgDelegate1<AgPrepareDumpEvent const &,void> const_pointer;
	typedef AgDelegate1<AgPrepareDumpEvent const &,void> reference;
	typedef const AgDelegate1<AgPrepareDumpEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > >(std::initializer_list<AgDelegate1<AgPrepareDumpEvent const &,void> >, const std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > &);
	vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > >(std::vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > > &, const std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > &);
	vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > >(std::vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > > &);
	vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > >(const std::vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > > &, const std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > &);
	vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > >(const std::vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > > &);
	vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > >(unsigned long long, const AgDelegate1<AgPrepareDumpEvent const &,void> &, const std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > &);
	vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > >(unsigned long long, const AgDelegate1<AgPrepareDumpEvent const &,void> &);
	vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > >(const std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > &);
	vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgPrepareDumpEvent const &,void> *);
	std::vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > > &);
	std::vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgPrepareDumpEvent const &,void> >);
	std::vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgPrepareDumpEvent const &,void> &);
	void push_back(AgDelegate1<AgPrepareDumpEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgPrepareDumpEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > >, const AgDelegate1<AgPrepareDumpEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgPrepareDumpEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > >, AgDelegate1<AgPrepareDumpEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgPrepareDumpEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgPrepareDumpEvent const &,void> >);
	~vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgPrepareDumpEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > get_allocator();
	AgDelegate1<AgPrepareDumpEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgPrepareDumpEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgPrepareDumpEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgPrepareDumpEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgPrepareDumpEvent const &,void> * data();
	AgDelegate1<AgPrepareDumpEvent const &,void> * data();
	const AgDelegate1<AgPrepareDumpEvent const &,void> & front();
	AgDelegate1<AgPrepareDumpEvent const &,void> & front();
	const AgDelegate1<AgPrepareDumpEvent const &,void> & back();
	AgDelegate1<AgPrepareDumpEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgPrepareDumpEvent const &,void> *, AgDelegate1<AgPrepareDumpEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgPrepareDumpEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPrepareDumpEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgPrepareDumpEvent const &,void> &);
	AgDelegate1<AgPrepareDumpEvent const &,void> * _Ufill(AgDelegate1<AgPrepareDumpEvent const &,void> *, unsigned long long, const AgDelegate1<AgPrepareDumpEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgPrepareDumpEvent const &,void> *, AgDelegate1<AgPrepareDumpEvent const &,void> *);
};
class std::vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgShutdownEvent const &,void> pointer;
	typedef const AgDelegate1<AgShutdownEvent const &,void> const_pointer;
	typedef AgDelegate1<AgShutdownEvent const &,void> reference;
	typedef const AgDelegate1<AgShutdownEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > >(std::initializer_list<AgDelegate1<AgShutdownEvent const &,void> >, const std::allocator<AgDelegate1<AgShutdownEvent const &,void> > &);
	vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > >(std::vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > > &, const std::allocator<AgDelegate1<AgShutdownEvent const &,void> > &);
	vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > >(std::vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > > &);
	vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > >(const std::vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > > &, const std::allocator<AgDelegate1<AgShutdownEvent const &,void> > &);
	vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > >(const std::vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > > &);
	vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > >(unsigned long long, const AgDelegate1<AgShutdownEvent const &,void> &, const std::allocator<AgDelegate1<AgShutdownEvent const &,void> > &);
	vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > >(unsigned long long, const AgDelegate1<AgShutdownEvent const &,void> &);
	vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > >(const std::allocator<AgDelegate1<AgShutdownEvent const &,void> > &);
	vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgShutdownEvent const &,void> *);
	std::vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > > &);
	std::vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgShutdownEvent const &,void> >);
	std::vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgShutdownEvent const &,void> &);
	void push_back(AgDelegate1<AgShutdownEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgShutdownEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > >, const AgDelegate1<AgShutdownEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgShutdownEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > >, AgDelegate1<AgShutdownEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgShutdownEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgShutdownEvent const &,void> >);
	~vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgShutdownEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgShutdownEvent const &,void> > get_allocator();
	AgDelegate1<AgShutdownEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgShutdownEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgShutdownEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgShutdownEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgShutdownEvent const &,void> * data();
	AgDelegate1<AgShutdownEvent const &,void> * data();
	const AgDelegate1<AgShutdownEvent const &,void> & front();
	AgDelegate1<AgShutdownEvent const &,void> & front();
	const AgDelegate1<AgShutdownEvent const &,void> & back();
	AgDelegate1<AgShutdownEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgShutdownEvent const &,void> *, AgDelegate1<AgShutdownEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgShutdownEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgShutdownEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgShutdownEvent const &,void> &);
	AgDelegate1<AgShutdownEvent const &,void> * _Ufill(AgDelegate1<AgShutdownEvent const &,void> *, unsigned long long, const AgDelegate1<AgShutdownEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgShutdownEvent const &,void> *, AgDelegate1<AgShutdownEvent const &,void> *);
};
class std::vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgPointer<AgSession> const &,void> pointer;
	typedef const AgDelegate1<AgPointer<AgSession> const &,void> const_pointer;
	typedef AgDelegate1<AgPointer<AgSession> const &,void> reference;
	typedef const AgDelegate1<AgPointer<AgSession> const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > >(std::initializer_list<AgDelegate1<AgPointer<AgSession> const &,void> >, const std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > &);
	vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > >(std::vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > > &, const std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > &);
	vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > >(std::vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > > &);
	vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > >(const std::vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > > &, const std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > &);
	vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > >(const std::vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > > &);
	vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > >(unsigned long long, const AgDelegate1<AgPointer<AgSession> const &,void> &, const std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > &);
	vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > >(unsigned long long, const AgDelegate1<AgPointer<AgSession> const &,void> &);
	vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > >(const std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > &);
	vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgPointer<AgSession> const &,void> *);
	std::vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > > & operator=(const std::vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > > &);
	std::vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgPointer<AgSession> const &,void> >);
	std::vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > > & operator=(std::vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgPointer<AgSession> const &,void> &);
	void push_back(AgDelegate1<AgPointer<AgSession> const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > >, unsigned long long, const AgDelegate1<AgPointer<AgSession> const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > >, const AgDelegate1<AgPointer<AgSession> const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > >, std::initializer_list<AgDelegate1<AgPointer<AgSession> const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > >, AgDelegate1<AgPointer<AgSession> const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgPointer<AgSession> const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgPointer<AgSession> const &,void> >);
	~vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgPointer<AgSession> const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > get_allocator();
	AgDelegate1<AgPointer<AgSession> const &,void> & at(unsigned long long);
	const AgDelegate1<AgPointer<AgSession> const &,void> & at(unsigned long long);
	AgDelegate1<AgPointer<AgSession> const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgPointer<AgSession> const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgPointer<AgSession> const &,void> * data();
	AgDelegate1<AgPointer<AgSession> const &,void> * data();
	const AgDelegate1<AgPointer<AgSession> const &,void> & front();
	AgDelegate1<AgPointer<AgSession> const &,void> & front();
	const AgDelegate1<AgPointer<AgSession> const &,void> & back();
	AgDelegate1<AgPointer<AgSession> const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgPointer<AgSession> const &,void> *, AgDelegate1<AgPointer<AgSession> const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgPointer<AgSession> const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPointer<AgSession> const &,void> > > >, unsigned long long, const AgDelegate1<AgPointer<AgSession> const &,void> &);
	AgDelegate1<AgPointer<AgSession> const &,void> * _Ufill(AgDelegate1<AgPointer<AgSession> const &,void> *, unsigned long long, const AgDelegate1<AgPointer<AgSession> const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgPointer<AgSession> const &,void> *, AgDelegate1<AgPointer<AgSession> const &,void> *);
};
class std::vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgNetworkOnlineEvent const &,void> pointer;
	typedef const AgDelegate1<AgNetworkOnlineEvent const &,void> const_pointer;
	typedef AgDelegate1<AgNetworkOnlineEvent const &,void> reference;
	typedef const AgDelegate1<AgNetworkOnlineEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > >(std::initializer_list<AgDelegate1<AgNetworkOnlineEvent const &,void> >, const std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > &);
	vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > >(std::vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > > &, const std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > &);
	vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > >(std::vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > > &);
	vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > >(const std::vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > > &, const std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > &);
	vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > >(const std::vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > > &);
	vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > >(unsigned long long, const AgDelegate1<AgNetworkOnlineEvent const &,void> &, const std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > &);
	vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > >(unsigned long long, const AgDelegate1<AgNetworkOnlineEvent const &,void> &);
	vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > >(const std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > &);
	vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgNetworkOnlineEvent const &,void> *);
	std::vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > > &);
	std::vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgNetworkOnlineEvent const &,void> >);
	std::vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgNetworkOnlineEvent const &,void> &);
	void push_back(AgDelegate1<AgNetworkOnlineEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgNetworkOnlineEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > >, const AgDelegate1<AgNetworkOnlineEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgNetworkOnlineEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > >, AgDelegate1<AgNetworkOnlineEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgNetworkOnlineEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgNetworkOnlineEvent const &,void> >);
	~vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgNetworkOnlineEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > get_allocator();
	AgDelegate1<AgNetworkOnlineEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgNetworkOnlineEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgNetworkOnlineEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgNetworkOnlineEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgNetworkOnlineEvent const &,void> * data();
	AgDelegate1<AgNetworkOnlineEvent const &,void> * data();
	const AgDelegate1<AgNetworkOnlineEvent const &,void> & front();
	AgDelegate1<AgNetworkOnlineEvent const &,void> & front();
	const AgDelegate1<AgNetworkOnlineEvent const &,void> & back();
	AgDelegate1<AgNetworkOnlineEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgNetworkOnlineEvent const &,void> *, AgDelegate1<AgNetworkOnlineEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgNetworkOnlineEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOnlineEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgNetworkOnlineEvent const &,void> &);
	AgDelegate1<AgNetworkOnlineEvent const &,void> * _Ufill(AgDelegate1<AgNetworkOnlineEvent const &,void> *, unsigned long long, const AgDelegate1<AgNetworkOnlineEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgNetworkOnlineEvent const &,void> *, AgDelegate1<AgNetworkOnlineEvent const &,void> *);
};
class std::vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgNetworkOfflineEvent const &,void> pointer;
	typedef const AgDelegate1<AgNetworkOfflineEvent const &,void> const_pointer;
	typedef AgDelegate1<AgNetworkOfflineEvent const &,void> reference;
	typedef const AgDelegate1<AgNetworkOfflineEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > >(std::initializer_list<AgDelegate1<AgNetworkOfflineEvent const &,void> >, const std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > &);
	vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > >(std::vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > > &, const std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > &);
	vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > >(std::vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > > &);
	vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > >(const std::vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > > &, const std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > &);
	vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > >(const std::vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > > &);
	vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > >(unsigned long long, const AgDelegate1<AgNetworkOfflineEvent const &,void> &, const std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > &);
	vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > >(unsigned long long, const AgDelegate1<AgNetworkOfflineEvent const &,void> &);
	vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > >(const std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > &);
	vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgNetworkOfflineEvent const &,void> *);
	std::vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > > &);
	std::vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgNetworkOfflineEvent const &,void> >);
	std::vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgNetworkOfflineEvent const &,void> &);
	void push_back(AgDelegate1<AgNetworkOfflineEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgNetworkOfflineEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > >, const AgDelegate1<AgNetworkOfflineEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgNetworkOfflineEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > >, AgDelegate1<AgNetworkOfflineEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgNetworkOfflineEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgNetworkOfflineEvent const &,void> >);
	~vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgNetworkOfflineEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > get_allocator();
	AgDelegate1<AgNetworkOfflineEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgNetworkOfflineEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgNetworkOfflineEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgNetworkOfflineEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgNetworkOfflineEvent const &,void> * data();
	AgDelegate1<AgNetworkOfflineEvent const &,void> * data();
	const AgDelegate1<AgNetworkOfflineEvent const &,void> & front();
	AgDelegate1<AgNetworkOfflineEvent const &,void> & front();
	const AgDelegate1<AgNetworkOfflineEvent const &,void> & back();
	AgDelegate1<AgNetworkOfflineEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgNetworkOfflineEvent const &,void> *, AgDelegate1<AgNetworkOfflineEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgNetworkOfflineEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgNetworkOfflineEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgNetworkOfflineEvent const &,void> &);
	AgDelegate1<AgNetworkOfflineEvent const &,void> * _Ufill(AgDelegate1<AgNetworkOfflineEvent const &,void> *, unsigned long long, const AgDelegate1<AgNetworkOfflineEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgNetworkOfflineEvent const &,void> *, AgDelegate1<AgNetworkOfflineEvent const &,void> *);
};
class std::vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgUserAddedEvent const &,void> pointer;
	typedef const AgDelegate1<AgUserAddedEvent const &,void> const_pointer;
	typedef AgDelegate1<AgUserAddedEvent const &,void> reference;
	typedef const AgDelegate1<AgUserAddedEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > >(std::initializer_list<AgDelegate1<AgUserAddedEvent const &,void> >, const std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > &);
	vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > >(std::vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > &);
	vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > >(std::vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > > &);
	vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > >(const std::vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > &);
	vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > >(const std::vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > > &);
	vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgUserAddedEvent const &,void> &, const std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > &);
	vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgUserAddedEvent const &,void> &);
	vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > >(const std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > &);
	vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgUserAddedEvent const &,void> *);
	std::vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > > &);
	std::vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgUserAddedEvent const &,void> >);
	std::vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgUserAddedEvent const &,void> &);
	void push_back(AgDelegate1<AgUserAddedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgUserAddedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > >, const AgDelegate1<AgUserAddedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgUserAddedEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > >, AgDelegate1<AgUserAddedEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgUserAddedEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgUserAddedEvent const &,void> >);
	~vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgUserAddedEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > get_allocator();
	AgDelegate1<AgUserAddedEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgUserAddedEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgUserAddedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgUserAddedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgUserAddedEvent const &,void> * data();
	AgDelegate1<AgUserAddedEvent const &,void> * data();
	const AgDelegate1<AgUserAddedEvent const &,void> & front();
	AgDelegate1<AgUserAddedEvent const &,void> & front();
	const AgDelegate1<AgUserAddedEvent const &,void> & back();
	AgDelegate1<AgUserAddedEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgUserAddedEvent const &,void> *, AgDelegate1<AgUserAddedEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgUserAddedEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserAddedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgUserAddedEvent const &,void> &);
	AgDelegate1<AgUserAddedEvent const &,void> * _Ufill(AgDelegate1<AgUserAddedEvent const &,void> *, unsigned long long, const AgDelegate1<AgUserAddedEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgUserAddedEvent const &,void> *, AgDelegate1<AgUserAddedEvent const &,void> *);
};
class std::vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgPlayerUpdatedEvent const &,void> pointer;
	typedef const AgDelegate1<AgPlayerUpdatedEvent const &,void> const_pointer;
	typedef AgDelegate1<AgPlayerUpdatedEvent const &,void> reference;
	typedef const AgDelegate1<AgPlayerUpdatedEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > >(std::initializer_list<AgDelegate1<AgPlayerUpdatedEvent const &,void> >, const std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > &);
	vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > >(std::vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > &);
	vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > >(std::vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > &);
	vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > >(const std::vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > &);
	vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > >(const std::vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > &);
	vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgPlayerUpdatedEvent const &,void> &, const std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > &);
	vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgPlayerUpdatedEvent const &,void> &);
	vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > >(const std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > &);
	vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgPlayerUpdatedEvent const &,void> *);
	std::vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > &);
	std::vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgPlayerUpdatedEvent const &,void> >);
	std::vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgPlayerUpdatedEvent const &,void> &);
	void push_back(AgDelegate1<AgPlayerUpdatedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgPlayerUpdatedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > >, const AgDelegate1<AgPlayerUpdatedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgPlayerUpdatedEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > >, AgDelegate1<AgPlayerUpdatedEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgPlayerUpdatedEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgPlayerUpdatedEvent const &,void> >);
	~vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgPlayerUpdatedEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > get_allocator();
	AgDelegate1<AgPlayerUpdatedEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgPlayerUpdatedEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgPlayerUpdatedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgPlayerUpdatedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgPlayerUpdatedEvent const &,void> * data();
	AgDelegate1<AgPlayerUpdatedEvent const &,void> * data();
	const AgDelegate1<AgPlayerUpdatedEvent const &,void> & front();
	AgDelegate1<AgPlayerUpdatedEvent const &,void> & front();
	const AgDelegate1<AgPlayerUpdatedEvent const &,void> & back();
	AgDelegate1<AgPlayerUpdatedEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgPlayerUpdatedEvent const &,void> *, AgDelegate1<AgPlayerUpdatedEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgPlayerUpdatedEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgPlayerUpdatedEvent const &,void> &);
	AgDelegate1<AgPlayerUpdatedEvent const &,void> * _Ufill(AgDelegate1<AgPlayerUpdatedEvent const &,void> *, unsigned long long, const AgDelegate1<AgPlayerUpdatedEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgPlayerUpdatedEvent const &,void> *, AgDelegate1<AgPlayerUpdatedEvent const &,void> *);
};
class std::vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgPlayerAddedEvent const &,void> pointer;
	typedef const AgDelegate1<AgPlayerAddedEvent const &,void> const_pointer;
	typedef AgDelegate1<AgPlayerAddedEvent const &,void> reference;
	typedef const AgDelegate1<AgPlayerAddedEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > >(std::initializer_list<AgDelegate1<AgPlayerAddedEvent const &,void> >, const std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > &);
	vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > >(std::vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > &);
	vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > >(std::vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > > &);
	vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > >(const std::vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > &);
	vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > >(const std::vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > > &);
	vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgPlayerAddedEvent const &,void> &, const std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > &);
	vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgPlayerAddedEvent const &,void> &);
	vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > >(const std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > &);
	vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgPlayerAddedEvent const &,void> *);
	std::vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > > &);
	std::vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgPlayerAddedEvent const &,void> >);
	std::vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgPlayerAddedEvent const &,void> &);
	void push_back(AgDelegate1<AgPlayerAddedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgPlayerAddedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > >, const AgDelegate1<AgPlayerAddedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgPlayerAddedEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > >, AgDelegate1<AgPlayerAddedEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgPlayerAddedEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgPlayerAddedEvent const &,void> >);
	~vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgPlayerAddedEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > get_allocator();
	AgDelegate1<AgPlayerAddedEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgPlayerAddedEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgPlayerAddedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgPlayerAddedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgPlayerAddedEvent const &,void> * data();
	AgDelegate1<AgPlayerAddedEvent const &,void> * data();
	const AgDelegate1<AgPlayerAddedEvent const &,void> & front();
	AgDelegate1<AgPlayerAddedEvent const &,void> & front();
	const AgDelegate1<AgPlayerAddedEvent const &,void> & back();
	AgDelegate1<AgPlayerAddedEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgPlayerAddedEvent const &,void> *, AgDelegate1<AgPlayerAddedEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgPlayerAddedEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgPlayerAddedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgPlayerAddedEvent const &,void> &);
	AgDelegate1<AgPlayerAddedEvent const &,void> * _Ufill(AgDelegate1<AgPlayerAddedEvent const &,void> *, unsigned long long, const AgDelegate1<AgPlayerAddedEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgPlayerAddedEvent const &,void> *, AgDelegate1<AgPlayerAddedEvent const &,void> *);
};
class std::vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDelegate1<AgUserUpdatedEvent const &,void> pointer;
	typedef const AgDelegate1<AgUserUpdatedEvent const &,void> const_pointer;
	typedef AgDelegate1<AgUserUpdatedEvent const &,void> reference;
	typedef const AgDelegate1<AgUserUpdatedEvent const &,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > >(std::initializer_list<AgDelegate1<AgUserUpdatedEvent const &,void> >, const std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > &);
	vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > >(std::vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > &);
	vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > >(std::vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > &);
	vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > >(const std::vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > &, const std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > &);
	vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > >(const std::vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > &);
	vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgUserUpdatedEvent const &,void> &, const std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > &);
	vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > >(unsigned long long, const AgDelegate1<AgUserUpdatedEvent const &,void> &);
	vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > >(unsigned long long);
	vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > >(const std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > &);
	vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > >();
	void _Construct_n(unsigned long long, const AgDelegate1<AgUserUpdatedEvent const &,void> *);
	std::vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > & operator=(const std::vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > &);
	std::vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > & operator=(std::initializer_list<AgDelegate1<AgUserUpdatedEvent const &,void> >);
	std::vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > & operator=(std::vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > &);
	void _Assign_rv(std::vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > &, std::integral_constant<bool,1>);
	void push_back(const AgDelegate1<AgUserUpdatedEvent const &,void> &);
	void push_back(AgDelegate1<AgUserUpdatedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgUserUpdatedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > >, const AgDelegate1<AgUserUpdatedEvent const &,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > >, std::initializer_list<AgDelegate1<AgUserUpdatedEvent const &,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > >, AgDelegate1<AgUserUpdatedEvent const &,void> &);
	void assign(unsigned long long, const AgDelegate1<AgUserUpdatedEvent const &,void> &);
	void assign(std::initializer_list<AgDelegate1<AgUserUpdatedEvent const &,void> >);
	~vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDelegate1<AgUserUpdatedEvent const &,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > get_allocator();
	AgDelegate1<AgUserUpdatedEvent const &,void> & at(unsigned long long);
	const AgDelegate1<AgUserUpdatedEvent const &,void> & at(unsigned long long);
	AgDelegate1<AgUserUpdatedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgUserUpdatedEvent const &,void> & operator[](unsigned long long);
	const AgDelegate1<AgUserUpdatedEvent const &,void> * data();
	AgDelegate1<AgUserUpdatedEvent const &,void> * data();
	const AgDelegate1<AgUserUpdatedEvent const &,void> & front();
	AgDelegate1<AgUserUpdatedEvent const &,void> & front();
	const AgDelegate1<AgUserUpdatedEvent const &,void> & back();
	AgDelegate1<AgUserUpdatedEvent const &,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDelegate1<AgUserUpdatedEvent const &,void> *, AgDelegate1<AgUserUpdatedEvent const &,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDelegate1<AgUserUpdatedEvent const &,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDelegate1<AgUserUpdatedEvent const &,void> > > >, unsigned long long, const AgDelegate1<AgUserUpdatedEvent const &,void> &);
	AgDelegate1<AgUserUpdatedEvent const &,void> * _Ufill(AgDelegate1<AgUserUpdatedEvent const &,void> *, unsigned long long, const AgDelegate1<AgUserUpdatedEvent const &,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDelegate1<AgUserUpdatedEvent const &,void> *, AgDelegate1<AgUserUpdatedEvent const &,void> *);
};
void AgEventDispatcherBase<AgEditedInputEvent>::unbind(AgDelegate1<AgEditedInputEvent const &,void> f); // 0x14002F200
void AgEventDispatcherBase<AgControllerAddedEvent>::unbind(AgDelegate1<AgControllerAddedEvent const &,void> f); // 0x14002F200
void AgEventDispatcherBase<AgResumingEvent>::unbind(AgDelegate1<AgResumingEvent const &,void> f); // 0x140655C80
void AgEventDispatcherBase<AgSuspendingEvent>::unbind(AgDelegate1<AgSuspendingEvent const &,void> f); // 0x140655D30
void AgEventDispatcherBase<AgUserAddedEvent>::unbind(AgDelegate1<AgUserAddedEvent const &,void> f); // 0x140673620
void AgEventDispatcherBase<AgUserRemovedEvent>::unbind(AgDelegate1<AgUserRemovedEvent const &,void> f); // 0x1406736D0
void AgEventDispatcherBase<AgShutdownEvent>::unbind(AgDelegate1<AgShutdownEvent const &,void> f); // 0x1406696B0
void AgEventDispatcherBase<AgMountErrorEvent>::call(const AgMountErrorEvent & e); // 0x1406633C0
void AgEventDispatcherBase<AgMountEvent>::call(const AgMountEvent & e); // 0x140663480
void AgEventDispatcherBase<AgMountWriteBeginEvent>::call(const AgMountWriteBeginEvent & e); // 0x140663540
void AgEventDispatcherBase<AgMountWriteEndEvent>::call(const AgMountWriteEndEvent & e); // 0x140663600
void AgEventDispatcherBase<AgUnmountEvent>::call(const AgUnmountEvent & e); // 0x1406636C0
void AgEventDispatcherBase<AgControllerAddedEvent>::call(const AgControllerAddedEvent & e); // 0x1406516F0
void AgEventDispatcherBase<AgControllerPairingChangedEvent>::call(const AgControllerPairingChangedEvent & e); // 0x1406517B0
void AgEventDispatcherBase<AgControllerRemovedEvent>::call(const AgControllerRemovedEvent & e); // 0x140651870
void AgEventDispatcherBase<AgEditedInputEvent>::call(const AgEditedInputEvent & e); // 0x140651930
void AgEventDispatcherBase<AgTypingInputEvent>::call(const AgTypingInputEvent & e); // 0x1406519F0
void AgEventDispatcherBase<AgPrepareDumpEvent>::call(const AgPrepareDumpEvent & e); // 0x140695F80
void AgEventDispatcherBase<AgPointer<AgSession> >::call(const AgPointer<AgSession> & e); // 0x140681F70
void AgEventDispatcherBase<AgActivatedEvent>::call(const AgActivatedEvent & e); // 0x14065B1C0
void AgEventDispatcherBase<AgDeactivatedEvent>::call(const AgDeactivatedEvent & e); // 0x14065B280
void AgEventDispatcherBase<AgDisplayChangedEvent>::call(const AgDisplayChangedEvent & e); // 0x14065B340
void AgEventDispatcherBase<AgResumingEvent>::call(const AgResumingEvent & e); // 0x14065B400
void AgEventDispatcherBase<AgShutdownEvent>::call(const AgShutdownEvent & e); // 0x14065B4C0
void AgEventDispatcherBase<AgSuspendingEvent>::call(const AgSuspendingEvent & e); // 0x14065B580
void AgEventDispatcherBase<AgUserAddedEvent>::call(const AgUserAddedEvent & e); // 0x14067CF40
void AgEventDispatcherBase<AgUserRemovedEvent>::call(const AgUserRemovedEvent & e); // 0x14067D000
void AgEventDispatcherBase<AgUserUpdatedEvent>::call(const AgUserUpdatedEvent & e); // 0x14067D0C0
class AgEventDispatcherBase<AgControllerPairingChangedEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgControllerPairingChangedEvent const &,void>);
	void unbind(AgDelegate1<AgControllerPairingChangedEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgControllerPairingChangedEvent const &,void>);
	void operator-=(AgDelegate1<AgControllerPairingChangedEvent const &,void>);
protected:
	void call(const AgControllerPairingChangedEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgControllerPairingChangedEvent const &,void>,std::allocator<AgDelegate1<AgControllerPairingChangedEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgControllerPairingChangedEvent>();
	~AgEventDispatcherBase<AgControllerPairingChangedEvent>();
};
class AgEventDispatcherBase<AgControllerAddedEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgControllerAddedEvent const &,void>);
	void unbind(AgDelegate1<AgControllerAddedEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgControllerAddedEvent const &,void>);
	void operator-=(AgDelegate1<AgControllerAddedEvent const &,void>);
protected:
	void call(const AgControllerAddedEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgControllerAddedEvent const &,void>,std::allocator<AgDelegate1<AgControllerAddedEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgControllerAddedEvent>();
	~AgEventDispatcherBase<AgControllerAddedEvent>();
};
class AgEventDispatcherBase<AgControllerRemovedEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgControllerRemovedEvent const &,void>);
	void unbind(AgDelegate1<AgControllerRemovedEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgControllerRemovedEvent const &,void>);
	void operator-=(AgDelegate1<AgControllerRemovedEvent const &,void>);
protected:
	void call(const AgControllerRemovedEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgControllerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgControllerRemovedEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgControllerRemovedEvent>();
	~AgEventDispatcherBase<AgControllerRemovedEvent>();
};
class AgEventDispatcherBase<AgTypingInputEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgTypingInputEvent const &,void>);
	void unbind(AgDelegate1<AgTypingInputEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgTypingInputEvent const &,void>);
	void operator-=(AgDelegate1<AgTypingInputEvent const &,void>);
protected:
	void call(const AgTypingInputEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgTypingInputEvent const &,void>,std::allocator<AgDelegate1<AgTypingInputEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgTypingInputEvent>();
	~AgEventDispatcherBase<AgTypingInputEvent>();
};
class AgEventDispatcherBase<AgEditedInputEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgEditedInputEvent const &,void>);
	void unbind(AgDelegate1<AgEditedInputEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgEditedInputEvent const &,void>);
	void operator-=(AgDelegate1<AgEditedInputEvent const &,void>);
protected:
	void call(const AgEditedInputEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgEditedInputEvent const &,void>,std::allocator<AgDelegate1<AgEditedInputEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgEditedInputEvent>();
	~AgEventDispatcherBase<AgEditedInputEvent>();
};
class AgEventDispatcherBase<AgUserUpdatedEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgUserUpdatedEvent const &,void>);
	void unbind(AgDelegate1<AgUserUpdatedEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgUserUpdatedEvent const &,void>);
	void operator-=(AgDelegate1<AgUserUpdatedEvent const &,void>);
protected:
	void call(const AgUserUpdatedEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgUserUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgUserUpdatedEvent>();
	~AgEventDispatcherBase<AgUserUpdatedEvent>();
};
class AgEventDispatcherBase<AgUserAddedEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgUserAddedEvent const &,void>);
	void unbind(AgDelegate1<AgUserAddedEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgUserAddedEvent const &,void>);
	void operator-=(AgDelegate1<AgUserAddedEvent const &,void>);
protected:
	void call(const AgUserAddedEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgUserAddedEvent const &,void>,std::allocator<AgDelegate1<AgUserAddedEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgUserAddedEvent>();
	~AgEventDispatcherBase<AgUserAddedEvent>();
};
class AgEventDispatcherBase<AgMountEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgMountEvent const &,void>);
	void unbind(AgDelegate1<AgMountEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgMountEvent const &,void>);
	void operator-=(AgDelegate1<AgMountEvent const &,void>);
protected:
	void call(const AgMountEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgMountEvent const &,void>,std::allocator<AgDelegate1<AgMountEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgMountEvent>();
	~AgEventDispatcherBase<AgMountEvent>();
};
class AgEventDispatcherBase<AgUnmountEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgUnmountEvent const &,void>);
	void unbind(AgDelegate1<AgUnmountEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgUnmountEvent const &,void>);
	void operator-=(AgDelegate1<AgUnmountEvent const &,void>);
protected:
	void call(const AgUnmountEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgUnmountEvent const &,void>,std::allocator<AgDelegate1<AgUnmountEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgUnmountEvent>();
	~AgEventDispatcherBase<AgUnmountEvent>();
};
class AgEventDispatcherBase<AgMountWriteEndEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgMountWriteEndEvent const &,void>);
	void unbind(AgDelegate1<AgMountWriteEndEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgMountWriteEndEvent const &,void>);
	void operator-=(AgDelegate1<AgMountWriteEndEvent const &,void>);
protected:
	void call(const AgMountWriteEndEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgMountWriteEndEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteEndEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgMountWriteEndEvent>();
	~AgEventDispatcherBase<AgMountWriteEndEvent>();
};
class AgEventDispatcherBase<AgUserRemovedEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgUserRemovedEvent const &,void>);
	void unbind(AgDelegate1<AgUserRemovedEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgUserRemovedEvent const &,void>);
	void operator-=(AgDelegate1<AgUserRemovedEvent const &,void>);
protected:
	void call(const AgUserRemovedEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgUserRemovedEvent const &,void>,std::allocator<AgDelegate1<AgUserRemovedEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgUserRemovedEvent>();
	~AgEventDispatcherBase<AgUserRemovedEvent>();
};
class AgEventDispatcherBase<AgMountWriteBeginEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgMountWriteBeginEvent const &,void>);
	void unbind(AgDelegate1<AgMountWriteBeginEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgMountWriteBeginEvent const &,void>);
	void operator-=(AgDelegate1<AgMountWriteBeginEvent const &,void>);
protected:
	void call(const AgMountWriteBeginEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgMountWriteBeginEvent const &,void>,std::allocator<AgDelegate1<AgMountWriteBeginEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgMountWriteBeginEvent>();
	~AgEventDispatcherBase<AgMountWriteBeginEvent>();
};
class AgEventDispatcherBase<AgMountErrorEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgMountErrorEvent const &,void>);
	void unbind(AgDelegate1<AgMountErrorEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgMountErrorEvent const &,void>);
	void operator-=(AgDelegate1<AgMountErrorEvent const &,void>);
protected:
	void call(const AgMountErrorEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgMountErrorEvent const &,void>,std::allocator<AgDelegate1<AgMountErrorEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgMountErrorEvent>();
	~AgEventDispatcherBase<AgMountErrorEvent>();
};
class AgEventDispatcherBase<AgResumingEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgResumingEvent const &,void>);
	void unbind(AgDelegate1<AgResumingEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgResumingEvent const &,void>);
	void operator-=(AgDelegate1<AgResumingEvent const &,void>);
protected:
	void call(const AgResumingEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgResumingEvent const &,void>,std::allocator<AgDelegate1<AgResumingEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgResumingEvent>();
	~AgEventDispatcherBase<AgResumingEvent>();
};
class AgEventDispatcherBase<AgShutdownEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgShutdownEvent const &,void>);
	void unbind(AgDelegate1<AgShutdownEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgShutdownEvent const &,void>);
	void operator-=(AgDelegate1<AgShutdownEvent const &,void>);
protected:
	void call(const AgShutdownEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgShutdownEvent const &,void>,std::allocator<AgDelegate1<AgShutdownEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgShutdownEvent>();
	~AgEventDispatcherBase<AgShutdownEvent>();
};
class AgEventDispatcherBase<AgDeactivatedEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgDeactivatedEvent const &,void>);
	void unbind(AgDelegate1<AgDeactivatedEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgDeactivatedEvent const &,void>);
	void operator-=(AgDelegate1<AgDeactivatedEvent const &,void>);
protected:
	void call(const AgDeactivatedEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgDeactivatedEvent const &,void>,std::allocator<AgDelegate1<AgDeactivatedEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgDeactivatedEvent>();
	~AgEventDispatcherBase<AgDeactivatedEvent>();
};
class AgEventDispatcherBase<AgActivatedEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgActivatedEvent const &,void>);
	void unbind(AgDelegate1<AgActivatedEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgActivatedEvent const &,void>);
	void operator-=(AgDelegate1<AgActivatedEvent const &,void>);
protected:
	void call(const AgActivatedEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgActivatedEvent const &,void>,std::allocator<AgDelegate1<AgActivatedEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgActivatedEvent>();
	~AgEventDispatcherBase<AgActivatedEvent>();
};
class AgEventDispatcherBase<AgDisplayChangedEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgDisplayChangedEvent const &,void>);
	void unbind(AgDelegate1<AgDisplayChangedEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgDisplayChangedEvent const &,void>);
	void operator-=(AgDelegate1<AgDisplayChangedEvent const &,void>);
protected:
	void call(const AgDisplayChangedEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgDisplayChangedEvent const &,void>,std::allocator<AgDelegate1<AgDisplayChangedEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgDisplayChangedEvent>();
	~AgEventDispatcherBase<AgDisplayChangedEvent>();
};
class AgEventDispatcherBase<AgSuspendingEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgSuspendingEvent const &,void>);
	void unbind(AgDelegate1<AgSuspendingEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgSuspendingEvent const &,void>);
	void operator-=(AgDelegate1<AgSuspendingEvent const &,void>);
protected:
	void call(const AgSuspendingEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgSuspendingEvent const &,void>,std::allocator<AgDelegate1<AgSuspendingEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgSuspendingEvent>();
	~AgEventDispatcherBase<AgSuspendingEvent>();
};
class AgEventDispatcherBase<AgPointer<AgSession> >
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgPointer<AgSession> const &,void>);
	void unbind(AgDelegate1<AgPointer<AgSession> const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgPointer<AgSession> const &,void>);
	void operator-=(AgDelegate1<AgPointer<AgSession> const &,void>);
protected:
	void call(const AgPointer<AgSession> &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgPointer<AgSession> const &,void>,std::allocator<AgDelegate1<AgPointer<AgSession> const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgPointer<AgSession> >();
	~AgEventDispatcherBase<AgPointer<AgSession> >();
};
class std::vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> > :
	std::_Vector_alloc<std::_Vec_base_types<AgTypingInputEvent,std::allocator<AgTypingInputEvent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgTypingInputEvent pointer;
	typedef const AgTypingInputEvent const_pointer;
	typedef AgTypingInputEvent reference;
	typedef const AgTypingInputEvent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> >(std::initializer_list<AgTypingInputEvent>, const std::allocator<AgTypingInputEvent> &);
	vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> >(std::vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> > &, const std::allocator<AgTypingInputEvent> &);
	vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> >(std::vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> > &);
	vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> >(const std::vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> > &, const std::allocator<AgTypingInputEvent> &);
	vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> >(const std::vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> > &);
	vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> >(unsigned long long, const AgTypingInputEvent &, const std::allocator<AgTypingInputEvent> &);
	vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> >(unsigned long long, const AgTypingInputEvent &);
	vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> >(unsigned long long);
	vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> >(const std::allocator<AgTypingInputEvent> &);
	vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> >();
	void _Construct_n(unsigned long long, const AgTypingInputEvent *);
	std::vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> > & operator=(const std::vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> > &);
	std::vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> > & operator=(std::initializer_list<AgTypingInputEvent>);
	std::vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> > & operator=(std::vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> > &);
	void _Assign_rv(std::vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> > &);
	void _Assign_rv(std::vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> > &, std::integral_constant<bool,1>);
	void push_back(const AgTypingInputEvent &);
	void push_back(AgTypingInputEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > >, unsigned long long, const AgTypingInputEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > >, const AgTypingInputEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > >, std::initializer_list<AgTypingInputEvent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > >, AgTypingInputEvent &);
	void assign(unsigned long long, const AgTypingInputEvent &);
	void assign(std::initializer_list<AgTypingInputEvent>);
	~vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgTypingInputEvent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgTypingInputEvent> get_allocator();
	AgTypingInputEvent & at(unsigned long long);
	const AgTypingInputEvent & at(unsigned long long);
	AgTypingInputEvent & operator[](unsigned long long);
	const AgTypingInputEvent & operator[](unsigned long long);
	const AgTypingInputEvent * data();
	AgTypingInputEvent * data();
	const AgTypingInputEvent & front();
	AgTypingInputEvent & front();
	const AgTypingInputEvent & back();
	AgTypingInputEvent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgTypingInputEvent *, AgTypingInputEvent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgTypingInputEvent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgTypingInputEvent> > >, unsigned long long, const AgTypingInputEvent &);
	AgTypingInputEvent * _Ufill(AgTypingInputEvent *, unsigned long long, const AgTypingInputEvent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgTypingInputEvent *, AgTypingInputEvent *);
};
class std::vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> > :
	std::_Vector_alloc<std::_Vec_base_types<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgControllerAddedEvent pointer;
	typedef const AgControllerAddedEvent const_pointer;
	typedef AgControllerAddedEvent reference;
	typedef const AgControllerAddedEvent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> >(std::initializer_list<AgControllerAddedEvent>, const std::allocator<AgControllerAddedEvent> &);
	vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> >(std::vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> > &, const std::allocator<AgControllerAddedEvent> &);
	vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> >(std::vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> > &);
	vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> >(const std::vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> > &, const std::allocator<AgControllerAddedEvent> &);
	vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> >(const std::vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> > &);
	vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> >(unsigned long long, const AgControllerAddedEvent &, const std::allocator<AgControllerAddedEvent> &);
	vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> >(unsigned long long, const AgControllerAddedEvent &);
	vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> >(unsigned long long);
	vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> >(const std::allocator<AgControllerAddedEvent> &);
	vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> >();
	void _Construct_n(unsigned long long, const AgControllerAddedEvent *);
	std::vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> > & operator=(const std::vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> > &);
	std::vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> > & operator=(std::initializer_list<AgControllerAddedEvent>);
	std::vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> > & operator=(std::vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> > &);
	void _Assign_rv(std::vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> > &);
	void _Assign_rv(std::vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> > &, std::integral_constant<bool,1>);
	void push_back(const AgControllerAddedEvent &);
	void push_back(AgControllerAddedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > >, unsigned long long, const AgControllerAddedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > >, const AgControllerAddedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > >, std::initializer_list<AgControllerAddedEvent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > >, AgControllerAddedEvent &);
	void assign(unsigned long long, const AgControllerAddedEvent &);
	void assign(std::initializer_list<AgControllerAddedEvent>);
	~vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgControllerAddedEvent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgControllerAddedEvent> get_allocator();
	AgControllerAddedEvent & at(unsigned long long);
	const AgControllerAddedEvent & at(unsigned long long);
	AgControllerAddedEvent & operator[](unsigned long long);
	const AgControllerAddedEvent & operator[](unsigned long long);
	const AgControllerAddedEvent * data();
	AgControllerAddedEvent * data();
	const AgControllerAddedEvent & front();
	AgControllerAddedEvent & front();
	const AgControllerAddedEvent & back();
	AgControllerAddedEvent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgControllerAddedEvent *, AgControllerAddedEvent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgControllerAddedEvent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerAddedEvent> > >, unsigned long long, const AgControllerAddedEvent &);
	AgControllerAddedEvent * _Ufill(AgControllerAddedEvent *, unsigned long long, const AgControllerAddedEvent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgControllerAddedEvent *, AgControllerAddedEvent *);
};
class std::vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> > :
	std::_Vector_alloc<std::_Vec_base_types<AgEditedInputEvent,std::allocator<AgEditedInputEvent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgEditedInputEvent pointer;
	typedef const AgEditedInputEvent const_pointer;
	typedef AgEditedInputEvent reference;
	typedef const AgEditedInputEvent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> >(std::initializer_list<AgEditedInputEvent>, const std::allocator<AgEditedInputEvent> &);
	vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> >(std::vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> > &, const std::allocator<AgEditedInputEvent> &);
	vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> >(std::vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> > &);
	vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> >(const std::vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> > &, const std::allocator<AgEditedInputEvent> &);
	vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> >(const std::vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> > &);
	vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> >(unsigned long long, const AgEditedInputEvent &, const std::allocator<AgEditedInputEvent> &);
	vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> >(unsigned long long, const AgEditedInputEvent &);
	vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> >(unsigned long long);
	vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> >(const std::allocator<AgEditedInputEvent> &);
	vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> >();
	void _Construct_n(unsigned long long, const AgEditedInputEvent *);
	std::vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> > & operator=(const std::vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> > &);
	std::vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> > & operator=(std::initializer_list<AgEditedInputEvent>);
	std::vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> > & operator=(std::vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> > &);
	void _Assign_rv(std::vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> > &);
	void _Assign_rv(std::vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> > &, std::integral_constant<bool,1>);
	void push_back(const AgEditedInputEvent &);
	void push_back(AgEditedInputEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > >, unsigned long long, const AgEditedInputEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > >, const AgEditedInputEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > >, std::initializer_list<AgEditedInputEvent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > >, AgEditedInputEvent &);
	void assign(unsigned long long, const AgEditedInputEvent &);
	void assign(std::initializer_list<AgEditedInputEvent>);
	~vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgEditedInputEvent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgEditedInputEvent> get_allocator();
	AgEditedInputEvent & at(unsigned long long);
	const AgEditedInputEvent & at(unsigned long long);
	AgEditedInputEvent & operator[](unsigned long long);
	const AgEditedInputEvent & operator[](unsigned long long);
	const AgEditedInputEvent * data();
	AgEditedInputEvent * data();
	const AgEditedInputEvent & front();
	AgEditedInputEvent & front();
	const AgEditedInputEvent & back();
	AgEditedInputEvent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgEditedInputEvent *, AgEditedInputEvent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgEditedInputEvent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgEditedInputEvent> > >, unsigned long long, const AgEditedInputEvent &);
	AgEditedInputEvent * _Ufill(AgEditedInputEvent *, unsigned long long, const AgEditedInputEvent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgEditedInputEvent *, AgEditedInputEvent *);
};
class std::vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> > :
	std::_Vector_alloc<std::_Vec_base_types<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgControllerRemovedEvent pointer;
	typedef const AgControllerRemovedEvent const_pointer;
	typedef AgControllerRemovedEvent reference;
	typedef const AgControllerRemovedEvent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> >(std::initializer_list<AgControllerRemovedEvent>, const std::allocator<AgControllerRemovedEvent> &);
	vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> >(std::vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> > &, const std::allocator<AgControllerRemovedEvent> &);
	vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> >(std::vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> > &);
	vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> >(const std::vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> > &, const std::allocator<AgControllerRemovedEvent> &);
	vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> >(const std::vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> > &);
	vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> >(unsigned long long, const AgControllerRemovedEvent &, const std::allocator<AgControllerRemovedEvent> &);
	vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> >(unsigned long long, const AgControllerRemovedEvent &);
	vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> >(unsigned long long);
	vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> >(const std::allocator<AgControllerRemovedEvent> &);
	vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> >();
	void _Construct_n(unsigned long long, const AgControllerRemovedEvent *);
	std::vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> > & operator=(const std::vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> > &);
	std::vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> > & operator=(std::initializer_list<AgControllerRemovedEvent>);
	std::vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> > & operator=(std::vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> > &);
	void _Assign_rv(std::vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> > &);
	void _Assign_rv(std::vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> > &, std::integral_constant<bool,1>);
	void push_back(const AgControllerRemovedEvent &);
	void push_back(AgControllerRemovedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > >, unsigned long long, const AgControllerRemovedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > >, const AgControllerRemovedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > >, std::initializer_list<AgControllerRemovedEvent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > >, AgControllerRemovedEvent &);
	void assign(unsigned long long, const AgControllerRemovedEvent &);
	void assign(std::initializer_list<AgControllerRemovedEvent>);
	~vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgControllerRemovedEvent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgControllerRemovedEvent> get_allocator();
	AgControllerRemovedEvent & at(unsigned long long);
	const AgControllerRemovedEvent & at(unsigned long long);
	AgControllerRemovedEvent & operator[](unsigned long long);
	const AgControllerRemovedEvent & operator[](unsigned long long);
	const AgControllerRemovedEvent * data();
	AgControllerRemovedEvent * data();
	const AgControllerRemovedEvent & front();
	AgControllerRemovedEvent & front();
	const AgControllerRemovedEvent & back();
	AgControllerRemovedEvent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgControllerRemovedEvent *, AgControllerRemovedEvent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgControllerRemovedEvent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerRemovedEvent> > >, unsigned long long, const AgControllerRemovedEvent &);
	AgControllerRemovedEvent * _Ufill(AgControllerRemovedEvent *, unsigned long long, const AgControllerRemovedEvent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgControllerRemovedEvent *, AgControllerRemovedEvent *);
};
class std::vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> > :
	std::_Vector_alloc<std::_Vec_base_types<AgMountErrorEvent,std::allocator<AgMountErrorEvent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgMountErrorEvent pointer;
	typedef const AgMountErrorEvent const_pointer;
	typedef AgMountErrorEvent reference;
	typedef const AgMountErrorEvent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> >(std::initializer_list<AgMountErrorEvent>, const std::allocator<AgMountErrorEvent> &);
	vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> >(std::vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> > &, const std::allocator<AgMountErrorEvent> &);
	vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> >(std::vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> > &);
	vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> >(const std::vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> > &, const std::allocator<AgMountErrorEvent> &);
	vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> >(const std::vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> > &);
	vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> >(unsigned long long, const AgMountErrorEvent &, const std::allocator<AgMountErrorEvent> &);
	vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> >(unsigned long long, const AgMountErrorEvent &);
	vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> >(unsigned long long);
	vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> >(const std::allocator<AgMountErrorEvent> &);
	vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> >();
	void _Construct_n(unsigned long long, const AgMountErrorEvent *);
	std::vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> > & operator=(const std::vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> > &);
	std::vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> > & operator=(std::initializer_list<AgMountErrorEvent>);
	std::vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> > & operator=(std::vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> > &);
	void _Assign_rv(std::vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> > &);
	void _Assign_rv(std::vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> > &, std::integral_constant<bool,1>);
	void push_back(const AgMountErrorEvent &);
	void push_back(AgMountErrorEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > >, unsigned long long, const AgMountErrorEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > >, const AgMountErrorEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > >, std::initializer_list<AgMountErrorEvent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > >, AgMountErrorEvent &);
	void assign(unsigned long long, const AgMountErrorEvent &);
	void assign(std::initializer_list<AgMountErrorEvent>);
	~vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgMountErrorEvent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgMountErrorEvent> get_allocator();
	AgMountErrorEvent & at(unsigned long long);
	const AgMountErrorEvent & at(unsigned long long);
	AgMountErrorEvent & operator[](unsigned long long);
	const AgMountErrorEvent & operator[](unsigned long long);
	const AgMountErrorEvent * data();
	AgMountErrorEvent * data();
	const AgMountErrorEvent & front();
	AgMountErrorEvent & front();
	const AgMountErrorEvent & back();
	AgMountErrorEvent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgMountErrorEvent,std::allocator<AgMountErrorEvent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgMountErrorEvent *, AgMountErrorEvent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgMountErrorEvent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountErrorEvent> > >, unsigned long long, const AgMountErrorEvent &);
	AgMountErrorEvent * _Ufill(AgMountErrorEvent *, unsigned long long, const AgMountErrorEvent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgMountErrorEvent *, AgMountErrorEvent *);
};
class std::vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> > :
	std::_Vector_alloc<std::_Vec_base_types<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgUserRemovedEvent pointer;
	typedef const AgUserRemovedEvent const_pointer;
	typedef AgUserRemovedEvent reference;
	typedef const AgUserRemovedEvent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> >(std::initializer_list<AgUserRemovedEvent>, const std::allocator<AgUserRemovedEvent> &);
	vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> >(std::vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> > &, const std::allocator<AgUserRemovedEvent> &);
	vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> >(std::vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> > &);
	vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> >(const std::vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> > &, const std::allocator<AgUserRemovedEvent> &);
	vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> >(const std::vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> > &);
	vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> >(unsigned long long, const AgUserRemovedEvent &, const std::allocator<AgUserRemovedEvent> &);
	vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> >(unsigned long long, const AgUserRemovedEvent &);
	vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> >(unsigned long long);
	vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> >(const std::allocator<AgUserRemovedEvent> &);
	vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> >();
	void _Construct_n(unsigned long long, const AgUserRemovedEvent *);
	std::vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> > & operator=(const std::vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> > &);
	std::vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> > & operator=(std::initializer_list<AgUserRemovedEvent>);
	std::vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> > & operator=(std::vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> > &);
	void _Assign_rv(std::vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> > &);
	void _Assign_rv(std::vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> > &, std::integral_constant<bool,1>);
	void push_back(const AgUserRemovedEvent &);
	void push_back(AgUserRemovedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > >, unsigned long long, const AgUserRemovedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > >, const AgUserRemovedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > >, std::initializer_list<AgUserRemovedEvent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > >, AgUserRemovedEvent &);
	void assign(unsigned long long, const AgUserRemovedEvent &);
	void assign(std::initializer_list<AgUserRemovedEvent>);
	~vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgUserRemovedEvent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgUserRemovedEvent> get_allocator();
	AgUserRemovedEvent & at(unsigned long long);
	const AgUserRemovedEvent & at(unsigned long long);
	AgUserRemovedEvent & operator[](unsigned long long);
	const AgUserRemovedEvent & operator[](unsigned long long);
	const AgUserRemovedEvent * data();
	AgUserRemovedEvent * data();
	const AgUserRemovedEvent & front();
	AgUserRemovedEvent & front();
	const AgUserRemovedEvent & back();
	AgUserRemovedEvent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgUserRemovedEvent,std::allocator<AgUserRemovedEvent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgUserRemovedEvent *, AgUserRemovedEvent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgUserRemovedEvent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserRemovedEvent> > >, unsigned long long, const AgUserRemovedEvent &);
	AgUserRemovedEvent * _Ufill(AgUserRemovedEvent *, unsigned long long, const AgUserRemovedEvent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgUserRemovedEvent *, AgUserRemovedEvent *);
};
class std::vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> > :
	std::_Vector_alloc<std::_Vec_base_types<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgMountWriteBeginEvent pointer;
	typedef const AgMountWriteBeginEvent const_pointer;
	typedef AgMountWriteBeginEvent reference;
	typedef const AgMountWriteBeginEvent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> >(std::initializer_list<AgMountWriteBeginEvent>, const std::allocator<AgMountWriteBeginEvent> &);
	vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> >(std::vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> > &, const std::allocator<AgMountWriteBeginEvent> &);
	vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> >(std::vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> > &);
	vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> >(const std::vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> > &, const std::allocator<AgMountWriteBeginEvent> &);
	vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> >(const std::vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> > &);
	vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> >(unsigned long long, const AgMountWriteBeginEvent &, const std::allocator<AgMountWriteBeginEvent> &);
	vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> >(unsigned long long, const AgMountWriteBeginEvent &);
	vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> >(unsigned long long);
	vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> >(const std::allocator<AgMountWriteBeginEvent> &);
	vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> >();
	void _Construct_n(unsigned long long, const AgMountWriteBeginEvent *);
	std::vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> > & operator=(const std::vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> > &);
	std::vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> > & operator=(std::initializer_list<AgMountWriteBeginEvent>);
	std::vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> > & operator=(std::vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> > &);
	void _Assign_rv(std::vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> > &);
	void _Assign_rv(std::vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> > &, std::integral_constant<bool,1>);
	void push_back(const AgMountWriteBeginEvent &);
	void push_back(AgMountWriteBeginEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > >, unsigned long long, const AgMountWriteBeginEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > >, const AgMountWriteBeginEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > >, std::initializer_list<AgMountWriteBeginEvent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > >, AgMountWriteBeginEvent &);
	void assign(unsigned long long, const AgMountWriteBeginEvent &);
	void assign(std::initializer_list<AgMountWriteBeginEvent>);
	~vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgMountWriteBeginEvent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgMountWriteBeginEvent> get_allocator();
	AgMountWriteBeginEvent & at(unsigned long long);
	const AgMountWriteBeginEvent & at(unsigned long long);
	AgMountWriteBeginEvent & operator[](unsigned long long);
	const AgMountWriteBeginEvent & operator[](unsigned long long);
	const AgMountWriteBeginEvent * data();
	AgMountWriteBeginEvent * data();
	const AgMountWriteBeginEvent & front();
	AgMountWriteBeginEvent & front();
	const AgMountWriteBeginEvent & back();
	AgMountWriteBeginEvent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgMountWriteBeginEvent,std::allocator<AgMountWriteBeginEvent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgMountWriteBeginEvent *, AgMountWriteBeginEvent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgMountWriteBeginEvent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteBeginEvent> > >, unsigned long long, const AgMountWriteBeginEvent &);
	AgMountWriteBeginEvent * _Ufill(AgMountWriteBeginEvent *, unsigned long long, const AgMountWriteBeginEvent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgMountWriteBeginEvent *, AgMountWriteBeginEvent *);
};
class std::vector<AgUnmountEvent,std::allocator<AgUnmountEvent> > :
	std::_Vector_alloc<std::_Vec_base_types<AgUnmountEvent,std::allocator<AgUnmountEvent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgUnmountEvent pointer;
	typedef const AgUnmountEvent const_pointer;
	typedef AgUnmountEvent reference;
	typedef const AgUnmountEvent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgUnmountEvent,std::allocator<AgUnmountEvent> >(std::initializer_list<AgUnmountEvent>, const std::allocator<AgUnmountEvent> &);
	vector<AgUnmountEvent,std::allocator<AgUnmountEvent> >(std::vector<AgUnmountEvent,std::allocator<AgUnmountEvent> > &, const std::allocator<AgUnmountEvent> &);
	vector<AgUnmountEvent,std::allocator<AgUnmountEvent> >(std::vector<AgUnmountEvent,std::allocator<AgUnmountEvent> > &);
	vector<AgUnmountEvent,std::allocator<AgUnmountEvent> >(const std::vector<AgUnmountEvent,std::allocator<AgUnmountEvent> > &, const std::allocator<AgUnmountEvent> &);
	vector<AgUnmountEvent,std::allocator<AgUnmountEvent> >(const std::vector<AgUnmountEvent,std::allocator<AgUnmountEvent> > &);
	vector<AgUnmountEvent,std::allocator<AgUnmountEvent> >(unsigned long long, const AgUnmountEvent &, const std::allocator<AgUnmountEvent> &);
	vector<AgUnmountEvent,std::allocator<AgUnmountEvent> >(unsigned long long, const AgUnmountEvent &);
	vector<AgUnmountEvent,std::allocator<AgUnmountEvent> >(unsigned long long);
	vector<AgUnmountEvent,std::allocator<AgUnmountEvent> >(const std::allocator<AgUnmountEvent> &);
	vector<AgUnmountEvent,std::allocator<AgUnmountEvent> >();
	void _Construct_n(unsigned long long, const AgUnmountEvent *);
	std::vector<AgUnmountEvent,std::allocator<AgUnmountEvent> > & operator=(const std::vector<AgUnmountEvent,std::allocator<AgUnmountEvent> > &);
	std::vector<AgUnmountEvent,std::allocator<AgUnmountEvent> > & operator=(std::initializer_list<AgUnmountEvent>);
	std::vector<AgUnmountEvent,std::allocator<AgUnmountEvent> > & operator=(std::vector<AgUnmountEvent,std::allocator<AgUnmountEvent> > &);
	void _Assign_rv(std::vector<AgUnmountEvent,std::allocator<AgUnmountEvent> > &);
	void _Assign_rv(std::vector<AgUnmountEvent,std::allocator<AgUnmountEvent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgUnmountEvent,std::allocator<AgUnmountEvent> > &, std::integral_constant<bool,1>);
	void push_back(const AgUnmountEvent &);
	void push_back(AgUnmountEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > >, unsigned long long, const AgUnmountEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > >, const AgUnmountEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > >, std::initializer_list<AgUnmountEvent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > >, AgUnmountEvent &);
	void assign(unsigned long long, const AgUnmountEvent &);
	void assign(std::initializer_list<AgUnmountEvent>);
	~vector<AgUnmountEvent,std::allocator<AgUnmountEvent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgUnmountEvent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgUnmountEvent> get_allocator();
	AgUnmountEvent & at(unsigned long long);
	const AgUnmountEvent & at(unsigned long long);
	AgUnmountEvent & operator[](unsigned long long);
	const AgUnmountEvent & operator[](unsigned long long);
	const AgUnmountEvent * data();
	AgUnmountEvent * data();
	const AgUnmountEvent & front();
	AgUnmountEvent & front();
	const AgUnmountEvent & back();
	AgUnmountEvent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgUnmountEvent,std::allocator<AgUnmountEvent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgUnmountEvent *, AgUnmountEvent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgUnmountEvent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUnmountEvent> > >, unsigned long long, const AgUnmountEvent &);
	AgUnmountEvent * _Ufill(AgUnmountEvent *, unsigned long long, const AgUnmountEvent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgUnmountEvent *, AgUnmountEvent *);
};
class std::vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> > :
	std::_Vector_alloc<std::_Vec_base_types<AgSuspendingEvent,std::allocator<AgSuspendingEvent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgSuspendingEvent pointer;
	typedef const AgSuspendingEvent const_pointer;
	typedef AgSuspendingEvent reference;
	typedef const AgSuspendingEvent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> >(std::initializer_list<AgSuspendingEvent>, const std::allocator<AgSuspendingEvent> &);
	vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> >(std::vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> > &, const std::allocator<AgSuspendingEvent> &);
	vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> >(std::vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> > &);
	vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> >(const std::vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> > &, const std::allocator<AgSuspendingEvent> &);
	vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> >(const std::vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> > &);
	vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> >(unsigned long long, const AgSuspendingEvent &, const std::allocator<AgSuspendingEvent> &);
	vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> >(unsigned long long, const AgSuspendingEvent &);
	vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> >(unsigned long long);
	vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> >(const std::allocator<AgSuspendingEvent> &);
	vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> >();
	void _Construct_n(unsigned long long, const AgSuspendingEvent *);
	std::vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> > & operator=(const std::vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> > &);
	std::vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> > & operator=(std::initializer_list<AgSuspendingEvent>);
	std::vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> > & operator=(std::vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> > &);
	void _Assign_rv(std::vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> > &);
	void _Assign_rv(std::vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> > &, std::integral_constant<bool,1>);
	void push_back(const AgSuspendingEvent &);
	void push_back(AgSuspendingEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > >, unsigned long long, const AgSuspendingEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > >, const AgSuspendingEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > >, std::initializer_list<AgSuspendingEvent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > >, AgSuspendingEvent &);
	void assign(unsigned long long, const AgSuspendingEvent &);
	void assign(std::initializer_list<AgSuspendingEvent>);
	~vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgSuspendingEvent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgSuspendingEvent> get_allocator();
	AgSuspendingEvent & at(unsigned long long);
	const AgSuspendingEvent & at(unsigned long long);
	AgSuspendingEvent & operator[](unsigned long long);
	const AgSuspendingEvent & operator[](unsigned long long);
	const AgSuspendingEvent * data();
	AgSuspendingEvent * data();
	const AgSuspendingEvent & front();
	AgSuspendingEvent & front();
	const AgSuspendingEvent & back();
	AgSuspendingEvent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgSuspendingEvent,std::allocator<AgSuspendingEvent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgSuspendingEvent *, AgSuspendingEvent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgSuspendingEvent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgSuspendingEvent> > >, unsigned long long, const AgSuspendingEvent &);
	AgSuspendingEvent * _Ufill(AgSuspendingEvent *, unsigned long long, const AgSuspendingEvent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgSuspendingEvent *, AgSuspendingEvent *);
};
class std::vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> > :
	std::_Vector_alloc<std::_Vec_base_types<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDisplayChangedEvent pointer;
	typedef const AgDisplayChangedEvent const_pointer;
	typedef AgDisplayChangedEvent reference;
	typedef const AgDisplayChangedEvent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> >(std::initializer_list<AgDisplayChangedEvent>, const std::allocator<AgDisplayChangedEvent> &);
	vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> >(std::vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> > &, const std::allocator<AgDisplayChangedEvent> &);
	vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> >(std::vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> > &);
	vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> >(const std::vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> > &, const std::allocator<AgDisplayChangedEvent> &);
	vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> >(const std::vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> > &);
	vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> >(unsigned long long, const AgDisplayChangedEvent &, const std::allocator<AgDisplayChangedEvent> &);
	vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> >(unsigned long long, const AgDisplayChangedEvent &);
	vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> >(unsigned long long);
	vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> >(const std::allocator<AgDisplayChangedEvent> &);
	vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> >();
	void _Construct_n(unsigned long long, const AgDisplayChangedEvent *);
	std::vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> > & operator=(const std::vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> > &);
	std::vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> > & operator=(std::initializer_list<AgDisplayChangedEvent>);
	std::vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> > & operator=(std::vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> > &);
	void _Assign_rv(std::vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> > &);
	void _Assign_rv(std::vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> > &, std::integral_constant<bool,1>);
	void push_back(const AgDisplayChangedEvent &);
	void push_back(AgDisplayChangedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > >, unsigned long long, const AgDisplayChangedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > >, const AgDisplayChangedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > >, std::initializer_list<AgDisplayChangedEvent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > >, AgDisplayChangedEvent &);
	void assign(unsigned long long, const AgDisplayChangedEvent &);
	void assign(std::initializer_list<AgDisplayChangedEvent>);
	~vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDisplayChangedEvent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDisplayChangedEvent> get_allocator();
	AgDisplayChangedEvent & at(unsigned long long);
	const AgDisplayChangedEvent & at(unsigned long long);
	AgDisplayChangedEvent & operator[](unsigned long long);
	const AgDisplayChangedEvent & operator[](unsigned long long);
	const AgDisplayChangedEvent * data();
	AgDisplayChangedEvent * data();
	const AgDisplayChangedEvent & front();
	AgDisplayChangedEvent & front();
	const AgDisplayChangedEvent & back();
	AgDisplayChangedEvent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDisplayChangedEvent,std::allocator<AgDisplayChangedEvent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDisplayChangedEvent *, AgDisplayChangedEvent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDisplayChangedEvent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDisplayChangedEvent> > >, unsigned long long, const AgDisplayChangedEvent &);
	AgDisplayChangedEvent * _Ufill(AgDisplayChangedEvent *, unsigned long long, const AgDisplayChangedEvent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDisplayChangedEvent *, AgDisplayChangedEvent *);
};
class std::vector<AgActivatedEvent,std::allocator<AgActivatedEvent> > :
	std::_Vector_alloc<std::_Vec_base_types<AgActivatedEvent,std::allocator<AgActivatedEvent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgActivatedEvent pointer;
	typedef const AgActivatedEvent const_pointer;
	typedef AgActivatedEvent reference;
	typedef const AgActivatedEvent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgActivatedEvent,std::allocator<AgActivatedEvent> >(std::initializer_list<AgActivatedEvent>, const std::allocator<AgActivatedEvent> &);
	vector<AgActivatedEvent,std::allocator<AgActivatedEvent> >(std::vector<AgActivatedEvent,std::allocator<AgActivatedEvent> > &, const std::allocator<AgActivatedEvent> &);
	vector<AgActivatedEvent,std::allocator<AgActivatedEvent> >(std::vector<AgActivatedEvent,std::allocator<AgActivatedEvent> > &);
	vector<AgActivatedEvent,std::allocator<AgActivatedEvent> >(const std::vector<AgActivatedEvent,std::allocator<AgActivatedEvent> > &, const std::allocator<AgActivatedEvent> &);
	vector<AgActivatedEvent,std::allocator<AgActivatedEvent> >(const std::vector<AgActivatedEvent,std::allocator<AgActivatedEvent> > &);
	vector<AgActivatedEvent,std::allocator<AgActivatedEvent> >(unsigned long long, const AgActivatedEvent &, const std::allocator<AgActivatedEvent> &);
	vector<AgActivatedEvent,std::allocator<AgActivatedEvent> >(unsigned long long, const AgActivatedEvent &);
	vector<AgActivatedEvent,std::allocator<AgActivatedEvent> >(unsigned long long);
	vector<AgActivatedEvent,std::allocator<AgActivatedEvent> >(const std::allocator<AgActivatedEvent> &);
	vector<AgActivatedEvent,std::allocator<AgActivatedEvent> >();
	void _Construct_n(unsigned long long, const AgActivatedEvent *);
	std::vector<AgActivatedEvent,std::allocator<AgActivatedEvent> > & operator=(const std::vector<AgActivatedEvent,std::allocator<AgActivatedEvent> > &);
	std::vector<AgActivatedEvent,std::allocator<AgActivatedEvent> > & operator=(std::initializer_list<AgActivatedEvent>);
	std::vector<AgActivatedEvent,std::allocator<AgActivatedEvent> > & operator=(std::vector<AgActivatedEvent,std::allocator<AgActivatedEvent> > &);
	void _Assign_rv(std::vector<AgActivatedEvent,std::allocator<AgActivatedEvent> > &);
	void _Assign_rv(std::vector<AgActivatedEvent,std::allocator<AgActivatedEvent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgActivatedEvent,std::allocator<AgActivatedEvent> > &, std::integral_constant<bool,1>);
	void push_back(const AgActivatedEvent &);
	void push_back(AgActivatedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > >, unsigned long long, const AgActivatedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > >, const AgActivatedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > >, std::initializer_list<AgActivatedEvent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > >, AgActivatedEvent &);
	void assign(unsigned long long, const AgActivatedEvent &);
	void assign(std::initializer_list<AgActivatedEvent>);
	~vector<AgActivatedEvent,std::allocator<AgActivatedEvent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgActivatedEvent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgActivatedEvent> get_allocator();
	AgActivatedEvent & at(unsigned long long);
	const AgActivatedEvent & at(unsigned long long);
	AgActivatedEvent & operator[](unsigned long long);
	const AgActivatedEvent & operator[](unsigned long long);
	const AgActivatedEvent * data();
	AgActivatedEvent * data();
	const AgActivatedEvent & front();
	AgActivatedEvent & front();
	const AgActivatedEvent & back();
	AgActivatedEvent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgActivatedEvent,std::allocator<AgActivatedEvent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgActivatedEvent *, AgActivatedEvent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgActivatedEvent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgActivatedEvent> > >, unsigned long long, const AgActivatedEvent &);
	AgActivatedEvent * _Ufill(AgActivatedEvent *, unsigned long long, const AgActivatedEvent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgActivatedEvent *, AgActivatedEvent *);
};
class std::vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> > :
	std::_Vector_alloc<std::_Vec_base_types<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDeactivatedEvent pointer;
	typedef const AgDeactivatedEvent const_pointer;
	typedef AgDeactivatedEvent reference;
	typedef const AgDeactivatedEvent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> >(std::initializer_list<AgDeactivatedEvent>, const std::allocator<AgDeactivatedEvent> &);
	vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> >(std::vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> > &, const std::allocator<AgDeactivatedEvent> &);
	vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> >(std::vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> > &);
	vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> >(const std::vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> > &, const std::allocator<AgDeactivatedEvent> &);
	vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> >(const std::vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> > &);
	vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> >(unsigned long long, const AgDeactivatedEvent &, const std::allocator<AgDeactivatedEvent> &);
	vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> >(unsigned long long, const AgDeactivatedEvent &);
	vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> >(unsigned long long);
	vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> >(const std::allocator<AgDeactivatedEvent> &);
	vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> >();
	void _Construct_n(unsigned long long, const AgDeactivatedEvent *);
	std::vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> > & operator=(const std::vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> > &);
	std::vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> > & operator=(std::initializer_list<AgDeactivatedEvent>);
	std::vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> > & operator=(std::vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> > &);
	void _Assign_rv(std::vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> > &);
	void _Assign_rv(std::vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> > &, std::integral_constant<bool,1>);
	void push_back(const AgDeactivatedEvent &);
	void push_back(AgDeactivatedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > >, unsigned long long, const AgDeactivatedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > >, const AgDeactivatedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > >, std::initializer_list<AgDeactivatedEvent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > >, AgDeactivatedEvent &);
	void assign(unsigned long long, const AgDeactivatedEvent &);
	void assign(std::initializer_list<AgDeactivatedEvent>);
	~vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDeactivatedEvent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDeactivatedEvent> get_allocator();
	AgDeactivatedEvent & at(unsigned long long);
	const AgDeactivatedEvent & at(unsigned long long);
	AgDeactivatedEvent & operator[](unsigned long long);
	const AgDeactivatedEvent & operator[](unsigned long long);
	const AgDeactivatedEvent * data();
	AgDeactivatedEvent * data();
	const AgDeactivatedEvent & front();
	AgDeactivatedEvent & front();
	const AgDeactivatedEvent & back();
	AgDeactivatedEvent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDeactivatedEvent,std::allocator<AgDeactivatedEvent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDeactivatedEvent *, AgDeactivatedEvent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDeactivatedEvent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDeactivatedEvent> > >, unsigned long long, const AgDeactivatedEvent &);
	AgDeactivatedEvent * _Ufill(AgDeactivatedEvent *, unsigned long long, const AgDeactivatedEvent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDeactivatedEvent *, AgDeactivatedEvent *);
};
class std::vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> > :
	std::_Vector_alloc<std::_Vec_base_types<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgMountWriteEndEvent pointer;
	typedef const AgMountWriteEndEvent const_pointer;
	typedef AgMountWriteEndEvent reference;
	typedef const AgMountWriteEndEvent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> >(std::initializer_list<AgMountWriteEndEvent>, const std::allocator<AgMountWriteEndEvent> &);
	vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> >(std::vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> > &, const std::allocator<AgMountWriteEndEvent> &);
	vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> >(std::vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> > &);
	vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> >(const std::vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> > &, const std::allocator<AgMountWriteEndEvent> &);
	vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> >(const std::vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> > &);
	vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> >(unsigned long long, const AgMountWriteEndEvent &, const std::allocator<AgMountWriteEndEvent> &);
	vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> >(unsigned long long, const AgMountWriteEndEvent &);
	vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> >(unsigned long long);
	vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> >(const std::allocator<AgMountWriteEndEvent> &);
	vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> >();
	void _Construct_n(unsigned long long, const AgMountWriteEndEvent *);
	std::vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> > & operator=(const std::vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> > &);
	std::vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> > & operator=(std::initializer_list<AgMountWriteEndEvent>);
	std::vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> > & operator=(std::vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> > &);
	void _Assign_rv(std::vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> > &);
	void _Assign_rv(std::vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> > &, std::integral_constant<bool,1>);
	void push_back(const AgMountWriteEndEvent &);
	void push_back(AgMountWriteEndEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > >, unsigned long long, const AgMountWriteEndEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > >, const AgMountWriteEndEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > >, std::initializer_list<AgMountWriteEndEvent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > >, AgMountWriteEndEvent &);
	void assign(unsigned long long, const AgMountWriteEndEvent &);
	void assign(std::initializer_list<AgMountWriteEndEvent>);
	~vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgMountWriteEndEvent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgMountWriteEndEvent> get_allocator();
	AgMountWriteEndEvent & at(unsigned long long);
	const AgMountWriteEndEvent & at(unsigned long long);
	AgMountWriteEndEvent & operator[](unsigned long long);
	const AgMountWriteEndEvent & operator[](unsigned long long);
	const AgMountWriteEndEvent * data();
	AgMountWriteEndEvent * data();
	const AgMountWriteEndEvent & front();
	AgMountWriteEndEvent & front();
	const AgMountWriteEndEvent & back();
	AgMountWriteEndEvent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgMountWriteEndEvent,std::allocator<AgMountWriteEndEvent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgMountWriteEndEvent *, AgMountWriteEndEvent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgMountWriteEndEvent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountWriteEndEvent> > >, unsigned long long, const AgMountWriteEndEvent &);
	AgMountWriteEndEvent * _Ufill(AgMountWriteEndEvent *, unsigned long long, const AgMountWriteEndEvent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgMountWriteEndEvent *, AgMountWriteEndEvent *);
};
class std::vector<AgMountEvent,std::allocator<AgMountEvent> > :
	std::_Vector_alloc<std::_Vec_base_types<AgMountEvent,std::allocator<AgMountEvent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgMountEvent pointer;
	typedef const AgMountEvent const_pointer;
	typedef AgMountEvent reference;
	typedef const AgMountEvent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgMountEvent,std::allocator<AgMountEvent> >(std::initializer_list<AgMountEvent>, const std::allocator<AgMountEvent> &);
	vector<AgMountEvent,std::allocator<AgMountEvent> >(std::vector<AgMountEvent,std::allocator<AgMountEvent> > &, const std::allocator<AgMountEvent> &);
	vector<AgMountEvent,std::allocator<AgMountEvent> >(std::vector<AgMountEvent,std::allocator<AgMountEvent> > &);
	vector<AgMountEvent,std::allocator<AgMountEvent> >(const std::vector<AgMountEvent,std::allocator<AgMountEvent> > &, const std::allocator<AgMountEvent> &);
	vector<AgMountEvent,std::allocator<AgMountEvent> >(const std::vector<AgMountEvent,std::allocator<AgMountEvent> > &);
	vector<AgMountEvent,std::allocator<AgMountEvent> >(unsigned long long, const AgMountEvent &, const std::allocator<AgMountEvent> &);
	vector<AgMountEvent,std::allocator<AgMountEvent> >(unsigned long long, const AgMountEvent &);
	vector<AgMountEvent,std::allocator<AgMountEvent> >(unsigned long long);
	vector<AgMountEvent,std::allocator<AgMountEvent> >(const std::allocator<AgMountEvent> &);
	vector<AgMountEvent,std::allocator<AgMountEvent> >();
	void _Construct_n(unsigned long long, const AgMountEvent *);
	std::vector<AgMountEvent,std::allocator<AgMountEvent> > & operator=(const std::vector<AgMountEvent,std::allocator<AgMountEvent> > &);
	std::vector<AgMountEvent,std::allocator<AgMountEvent> > & operator=(std::initializer_list<AgMountEvent>);
	std::vector<AgMountEvent,std::allocator<AgMountEvent> > & operator=(std::vector<AgMountEvent,std::allocator<AgMountEvent> > &);
	void _Assign_rv(std::vector<AgMountEvent,std::allocator<AgMountEvent> > &);
	void _Assign_rv(std::vector<AgMountEvent,std::allocator<AgMountEvent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgMountEvent,std::allocator<AgMountEvent> > &, std::integral_constant<bool,1>);
	void push_back(const AgMountEvent &);
	void push_back(AgMountEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > >, unsigned long long, const AgMountEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > >, const AgMountEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > >, std::initializer_list<AgMountEvent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > >, AgMountEvent &);
	void assign(unsigned long long, const AgMountEvent &);
	void assign(std::initializer_list<AgMountEvent>);
	~vector<AgMountEvent,std::allocator<AgMountEvent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgMountEvent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgMountEvent> get_allocator();
	AgMountEvent & at(unsigned long long);
	const AgMountEvent & at(unsigned long long);
	AgMountEvent & operator[](unsigned long long);
	const AgMountEvent & operator[](unsigned long long);
	const AgMountEvent * data();
	AgMountEvent * data();
	const AgMountEvent & front();
	AgMountEvent & front();
	const AgMountEvent & back();
	AgMountEvent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgMountEvent,std::allocator<AgMountEvent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgMountEvent *, AgMountEvent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgMountEvent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMountEvent> > >, unsigned long long, const AgMountEvent &);
	AgMountEvent * _Ufill(AgMountEvent *, unsigned long long, const AgMountEvent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgMountEvent *, AgMountEvent *);
};
class std::vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> > :
	std::_Vector_alloc<std::_Vec_base_types<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgControllerPairingChangedEvent pointer;
	typedef const AgControllerPairingChangedEvent const_pointer;
	typedef AgControllerPairingChangedEvent reference;
	typedef const AgControllerPairingChangedEvent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> >(std::initializer_list<AgControllerPairingChangedEvent>, const std::allocator<AgControllerPairingChangedEvent> &);
	vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> >(std::vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> > &, const std::allocator<AgControllerPairingChangedEvent> &);
	vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> >(std::vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> > &);
	vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> >(const std::vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> > &, const std::allocator<AgControllerPairingChangedEvent> &);
	vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> >(const std::vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> > &);
	vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> >(unsigned long long, const AgControllerPairingChangedEvent &, const std::allocator<AgControllerPairingChangedEvent> &);
	vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> >(unsigned long long, const AgControllerPairingChangedEvent &);
	vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> >(unsigned long long);
	vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> >(const std::allocator<AgControllerPairingChangedEvent> &);
	vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> >();
	void _Construct_n(unsigned long long, const AgControllerPairingChangedEvent *);
	std::vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> > & operator=(const std::vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> > &);
	std::vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> > & operator=(std::initializer_list<AgControllerPairingChangedEvent>);
	std::vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> > & operator=(std::vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> > &);
	void _Assign_rv(std::vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> > &);
	void _Assign_rv(std::vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> > &, std::integral_constant<bool,1>);
	void push_back(const AgControllerPairingChangedEvent &);
	void push_back(AgControllerPairingChangedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > >, unsigned long long, const AgControllerPairingChangedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > >, const AgControllerPairingChangedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > >, std::initializer_list<AgControllerPairingChangedEvent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > >, AgControllerPairingChangedEvent &);
	void assign(unsigned long long, const AgControllerPairingChangedEvent &);
	void assign(std::initializer_list<AgControllerPairingChangedEvent>);
	~vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgControllerPairingChangedEvent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgControllerPairingChangedEvent> get_allocator();
	AgControllerPairingChangedEvent & at(unsigned long long);
	const AgControllerPairingChangedEvent & at(unsigned long long);
	AgControllerPairingChangedEvent & operator[](unsigned long long);
	const AgControllerPairingChangedEvent & operator[](unsigned long long);
	const AgControllerPairingChangedEvent * data();
	AgControllerPairingChangedEvent * data();
	const AgControllerPairingChangedEvent & front();
	AgControllerPairingChangedEvent & front();
	const AgControllerPairingChangedEvent & back();
	AgControllerPairingChangedEvent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgControllerPairingChangedEvent *, AgControllerPairingChangedEvent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgControllerPairingChangedEvent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgControllerPairingChangedEvent> > >, unsigned long long, const AgControllerPairingChangedEvent &);
	AgControllerPairingChangedEvent * _Ufill(AgControllerPairingChangedEvent *, unsigned long long, const AgControllerPairingChangedEvent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgControllerPairingChangedEvent *, AgControllerPairingChangedEvent *);
};
class std::vector<AgResumingEvent,std::allocator<AgResumingEvent> > :
	std::_Vector_alloc<std::_Vec_base_types<AgResumingEvent,std::allocator<AgResumingEvent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgResumingEvent pointer;
	typedef const AgResumingEvent const_pointer;
	typedef AgResumingEvent reference;
	typedef const AgResumingEvent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgResumingEvent,std::allocator<AgResumingEvent> >(std::initializer_list<AgResumingEvent>, const std::allocator<AgResumingEvent> &);
	vector<AgResumingEvent,std::allocator<AgResumingEvent> >(std::vector<AgResumingEvent,std::allocator<AgResumingEvent> > &, const std::allocator<AgResumingEvent> &);
	vector<AgResumingEvent,std::allocator<AgResumingEvent> >(std::vector<AgResumingEvent,std::allocator<AgResumingEvent> > &);
	vector<AgResumingEvent,std::allocator<AgResumingEvent> >(const std::vector<AgResumingEvent,std::allocator<AgResumingEvent> > &, const std::allocator<AgResumingEvent> &);
	vector<AgResumingEvent,std::allocator<AgResumingEvent> >(const std::vector<AgResumingEvent,std::allocator<AgResumingEvent> > &);
	vector<AgResumingEvent,std::allocator<AgResumingEvent> >(unsigned long long, const AgResumingEvent &, const std::allocator<AgResumingEvent> &);
	vector<AgResumingEvent,std::allocator<AgResumingEvent> >(unsigned long long, const AgResumingEvent &);
	vector<AgResumingEvent,std::allocator<AgResumingEvent> >(unsigned long long);
	vector<AgResumingEvent,std::allocator<AgResumingEvent> >(const std::allocator<AgResumingEvent> &);
	vector<AgResumingEvent,std::allocator<AgResumingEvent> >();
	void _Construct_n(unsigned long long, const AgResumingEvent *);
	std::vector<AgResumingEvent,std::allocator<AgResumingEvent> > & operator=(const std::vector<AgResumingEvent,std::allocator<AgResumingEvent> > &);
	std::vector<AgResumingEvent,std::allocator<AgResumingEvent> > & operator=(std::initializer_list<AgResumingEvent>);
	std::vector<AgResumingEvent,std::allocator<AgResumingEvent> > & operator=(std::vector<AgResumingEvent,std::allocator<AgResumingEvent> > &);
	void _Assign_rv(std::vector<AgResumingEvent,std::allocator<AgResumingEvent> > &);
	void _Assign_rv(std::vector<AgResumingEvent,std::allocator<AgResumingEvent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgResumingEvent,std::allocator<AgResumingEvent> > &, std::integral_constant<bool,1>);
	void push_back(const AgResumingEvent &);
	void push_back(AgResumingEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > >, unsigned long long, const AgResumingEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > >, const AgResumingEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > >, std::initializer_list<AgResumingEvent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > >, AgResumingEvent &);
	void assign(unsigned long long, const AgResumingEvent &);
	void assign(std::initializer_list<AgResumingEvent>);
	~vector<AgResumingEvent,std::allocator<AgResumingEvent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgResumingEvent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgResumingEvent> get_allocator();
	AgResumingEvent & at(unsigned long long);
	const AgResumingEvent & at(unsigned long long);
	AgResumingEvent & operator[](unsigned long long);
	const AgResumingEvent & operator[](unsigned long long);
	const AgResumingEvent * data();
	AgResumingEvent * data();
	const AgResumingEvent & front();
	AgResumingEvent & front();
	const AgResumingEvent & back();
	AgResumingEvent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgResumingEvent,std::allocator<AgResumingEvent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgResumingEvent *, AgResumingEvent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgResumingEvent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgResumingEvent> > >, unsigned long long, const AgResumingEvent &);
	AgResumingEvent * _Ufill(AgResumingEvent *, unsigned long long, const AgResumingEvent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgResumingEvent *, AgResumingEvent *);
};
class std::vector<AgShutdownEvent,std::allocator<AgShutdownEvent> > :
	std::_Vector_alloc<std::_Vec_base_types<AgShutdownEvent,std::allocator<AgShutdownEvent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgShutdownEvent pointer;
	typedef const AgShutdownEvent const_pointer;
	typedef AgShutdownEvent reference;
	typedef const AgShutdownEvent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgShutdownEvent,std::allocator<AgShutdownEvent> >(std::initializer_list<AgShutdownEvent>, const std::allocator<AgShutdownEvent> &);
	vector<AgShutdownEvent,std::allocator<AgShutdownEvent> >(std::vector<AgShutdownEvent,std::allocator<AgShutdownEvent> > &, const std::allocator<AgShutdownEvent> &);
	vector<AgShutdownEvent,std::allocator<AgShutdownEvent> >(std::vector<AgShutdownEvent,std::allocator<AgShutdownEvent> > &);
	vector<AgShutdownEvent,std::allocator<AgShutdownEvent> >(const std::vector<AgShutdownEvent,std::allocator<AgShutdownEvent> > &, const std::allocator<AgShutdownEvent> &);
	vector<AgShutdownEvent,std::allocator<AgShutdownEvent> >(const std::vector<AgShutdownEvent,std::allocator<AgShutdownEvent> > &);
	vector<AgShutdownEvent,std::allocator<AgShutdownEvent> >(unsigned long long, const AgShutdownEvent &, const std::allocator<AgShutdownEvent> &);
	vector<AgShutdownEvent,std::allocator<AgShutdownEvent> >(unsigned long long, const AgShutdownEvent &);
	vector<AgShutdownEvent,std::allocator<AgShutdownEvent> >(unsigned long long);
	vector<AgShutdownEvent,std::allocator<AgShutdownEvent> >(const std::allocator<AgShutdownEvent> &);
	vector<AgShutdownEvent,std::allocator<AgShutdownEvent> >();
	void _Construct_n(unsigned long long, const AgShutdownEvent *);
	std::vector<AgShutdownEvent,std::allocator<AgShutdownEvent> > & operator=(const std::vector<AgShutdownEvent,std::allocator<AgShutdownEvent> > &);
	std::vector<AgShutdownEvent,std::allocator<AgShutdownEvent> > & operator=(std::initializer_list<AgShutdownEvent>);
	std::vector<AgShutdownEvent,std::allocator<AgShutdownEvent> > & operator=(std::vector<AgShutdownEvent,std::allocator<AgShutdownEvent> > &);
	void _Assign_rv(std::vector<AgShutdownEvent,std::allocator<AgShutdownEvent> > &);
	void _Assign_rv(std::vector<AgShutdownEvent,std::allocator<AgShutdownEvent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgShutdownEvent,std::allocator<AgShutdownEvent> > &, std::integral_constant<bool,1>);
	void push_back(const AgShutdownEvent &);
	void push_back(AgShutdownEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > >, unsigned long long, const AgShutdownEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > >, const AgShutdownEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > >, std::initializer_list<AgShutdownEvent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > >, AgShutdownEvent &);
	void assign(unsigned long long, const AgShutdownEvent &);
	void assign(std::initializer_list<AgShutdownEvent>);
	~vector<AgShutdownEvent,std::allocator<AgShutdownEvent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgShutdownEvent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgShutdownEvent> get_allocator();
	AgShutdownEvent & at(unsigned long long);
	const AgShutdownEvent & at(unsigned long long);
	AgShutdownEvent & operator[](unsigned long long);
	const AgShutdownEvent & operator[](unsigned long long);
	const AgShutdownEvent * data();
	AgShutdownEvent * data();
	const AgShutdownEvent & front();
	AgShutdownEvent & front();
	const AgShutdownEvent & back();
	AgShutdownEvent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgShutdownEvent,std::allocator<AgShutdownEvent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgShutdownEvent *, AgShutdownEvent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgShutdownEvent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgShutdownEvent> > >, unsigned long long, const AgShutdownEvent &);
	AgShutdownEvent * _Ufill(AgShutdownEvent *, unsigned long long, const AgShutdownEvent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgShutdownEvent *, AgShutdownEvent *);
};
class std::vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgPointer<AgSession> pointer;
	typedef const AgPointer<AgSession> const_pointer;
	typedef AgPointer<AgSession> reference;
	typedef const AgPointer<AgSession> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > >(std::initializer_list<AgPointer<AgSession> >, const std::allocator<AgPointer<AgSession> > &);
	vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > >(std::vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > > &, const std::allocator<AgPointer<AgSession> > &);
	vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > >(std::vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > > &);
	vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > >(const std::vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > > &, const std::allocator<AgPointer<AgSession> > &);
	vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > >(const std::vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > > &);
	vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > >(unsigned long long, const AgPointer<AgSession> &, const std::allocator<AgPointer<AgSession> > &);
	vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > >(unsigned long long, const AgPointer<AgSession> &);
	vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > >(unsigned long long);
	vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > >(const std::allocator<AgPointer<AgSession> > &);
	vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > >();
	void _Construct_n(unsigned long long, const AgPointer<AgSession> *);
	std::vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > > & operator=(const std::vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > > &);
	std::vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > > & operator=(std::initializer_list<AgPointer<AgSession> >);
	std::vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > > & operator=(std::vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > > &);
	void _Assign_rv(std::vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > > &);
	void _Assign_rv(std::vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > > &, std::integral_constant<bool,1>);
	void push_back(const AgPointer<AgSession> &);
	void push_back(AgPointer<AgSession> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > >, unsigned long long, const AgPointer<AgSession> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > >, const AgPointer<AgSession> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > >, std::initializer_list<AgPointer<AgSession> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > >, AgPointer<AgSession> &);
	void assign(unsigned long long, const AgPointer<AgSession> &);
	void assign(std::initializer_list<AgPointer<AgSession> >);
	~vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgPointer<AgSession> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgPointer<AgSession> > get_allocator();
	AgPointer<AgSession> & at(unsigned long long);
	const AgPointer<AgSession> & at(unsigned long long);
	AgPointer<AgSession> & operator[](unsigned long long);
	const AgPointer<AgSession> & operator[](unsigned long long);
	const AgPointer<AgSession> * data();
	AgPointer<AgSession> * data();
	const AgPointer<AgSession> & front();
	AgPointer<AgSession> & front();
	const AgPointer<AgSession> & back();
	AgPointer<AgSession> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgPointer<AgSession>,std::allocator<AgPointer<AgSession> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgPointer<AgSession> *, AgPointer<AgSession> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgPointer<AgSession> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgSession> > > >, unsigned long long, const AgPointer<AgSession> &);
	AgPointer<AgSession> * _Ufill(AgPointer<AgSession> *, unsigned long long, const AgPointer<AgSession> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgPointer<AgSession> *, AgPointer<AgSession> *);
};
class std::vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> > :
	std::_Vector_alloc<std::_Vec_base_types<AgUserAddedEvent,std::allocator<AgUserAddedEvent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgUserAddedEvent pointer;
	typedef const AgUserAddedEvent const_pointer;
	typedef AgUserAddedEvent reference;
	typedef const AgUserAddedEvent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> >(std::initializer_list<AgUserAddedEvent>, const std::allocator<AgUserAddedEvent> &);
	vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> >(std::vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> > &, const std::allocator<AgUserAddedEvent> &);
	vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> >(std::vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> > &);
	vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> >(const std::vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> > &, const std::allocator<AgUserAddedEvent> &);
	vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> >(const std::vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> > &);
	vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> >(unsigned long long, const AgUserAddedEvent &, const std::allocator<AgUserAddedEvent> &);
	vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> >(unsigned long long, const AgUserAddedEvent &);
	vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> >(unsigned long long);
	vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> >(const std::allocator<AgUserAddedEvent> &);
	vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> >();
	void _Construct_n(unsigned long long, const AgUserAddedEvent *);
	std::vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> > & operator=(const std::vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> > &);
	std::vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> > & operator=(std::initializer_list<AgUserAddedEvent>);
	std::vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> > & operator=(std::vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> > &);
	void _Assign_rv(std::vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> > &);
	void _Assign_rv(std::vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> > &, std::integral_constant<bool,1>);
	void push_back(const AgUserAddedEvent &);
	void push_back(AgUserAddedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > >, unsigned long long, const AgUserAddedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > >, const AgUserAddedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > >, std::initializer_list<AgUserAddedEvent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > >, AgUserAddedEvent &);
	void assign(unsigned long long, const AgUserAddedEvent &);
	void assign(std::initializer_list<AgUserAddedEvent>);
	~vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgUserAddedEvent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgUserAddedEvent> get_allocator();
	AgUserAddedEvent & at(unsigned long long);
	const AgUserAddedEvent & at(unsigned long long);
	AgUserAddedEvent & operator[](unsigned long long);
	const AgUserAddedEvent & operator[](unsigned long long);
	const AgUserAddedEvent * data();
	AgUserAddedEvent * data();
	const AgUserAddedEvent & front();
	AgUserAddedEvent & front();
	const AgUserAddedEvent & back();
	AgUserAddedEvent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgUserAddedEvent,std::allocator<AgUserAddedEvent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgUserAddedEvent *, AgUserAddedEvent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgUserAddedEvent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserAddedEvent> > >, unsigned long long, const AgUserAddedEvent &);
	AgUserAddedEvent * _Ufill(AgUserAddedEvent *, unsigned long long, const AgUserAddedEvent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgUserAddedEvent *, AgUserAddedEvent *);
};
class std::vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> > :
	std::_Vector_alloc<std::_Vec_base_types<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgUserUpdatedEvent pointer;
	typedef const AgUserUpdatedEvent const_pointer;
	typedef AgUserUpdatedEvent reference;
	typedef const AgUserUpdatedEvent const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> >(std::initializer_list<AgUserUpdatedEvent>, const std::allocator<AgUserUpdatedEvent> &);
	vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> >(std::vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> > &, const std::allocator<AgUserUpdatedEvent> &);
	vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> >(std::vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> > &);
	vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> >(const std::vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> > &, const std::allocator<AgUserUpdatedEvent> &);
	vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> >(const std::vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> > &);
	vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> >(unsigned long long, const AgUserUpdatedEvent &, const std::allocator<AgUserUpdatedEvent> &);
	vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> >(unsigned long long, const AgUserUpdatedEvent &);
	vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> >(unsigned long long);
	vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> >(const std::allocator<AgUserUpdatedEvent> &);
	vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> >();
	void _Construct_n(unsigned long long, const AgUserUpdatedEvent *);
	std::vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> > & operator=(const std::vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> > &);
	std::vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> > & operator=(std::initializer_list<AgUserUpdatedEvent>);
	std::vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> > & operator=(std::vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> > &);
	void _Assign_rv(std::vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> > &);
	void _Assign_rv(std::vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> > &, std::integral_constant<bool,1>);
	void push_back(const AgUserUpdatedEvent &);
	void push_back(AgUserUpdatedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > >, unsigned long long, const AgUserUpdatedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > >, const AgUserUpdatedEvent &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > >, std::initializer_list<AgUserUpdatedEvent>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > >, AgUserUpdatedEvent &);
	void assign(unsigned long long, const AgUserUpdatedEvent &);
	void assign(std::initializer_list<AgUserUpdatedEvent>);
	~vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgUserUpdatedEvent &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgUserUpdatedEvent> get_allocator();
	AgUserUpdatedEvent & at(unsigned long long);
	const AgUserUpdatedEvent & at(unsigned long long);
	AgUserUpdatedEvent & operator[](unsigned long long);
	const AgUserUpdatedEvent & operator[](unsigned long long);
	const AgUserUpdatedEvent * data();
	AgUserUpdatedEvent * data();
	const AgUserUpdatedEvent & front();
	AgUserUpdatedEvent & front();
	const AgUserUpdatedEvent & back();
	AgUserUpdatedEvent & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgUserUpdatedEvent,std::allocator<AgUserUpdatedEvent> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgUserUpdatedEvent *, AgUserUpdatedEvent *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgUserUpdatedEvent *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgUserUpdatedEvent> > >, unsigned long long, const AgUserUpdatedEvent &);
	AgUserUpdatedEvent * _Ufill(AgUserUpdatedEvent *, unsigned long long, const AgUserUpdatedEvent *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgUserUpdatedEvent *, AgUserUpdatedEvent *);
};
void AgAsyncEventDispatcher<AgMountErrorEvent>::run(); // 0x140664EB0
void AgAsyncEventDispatcher<AgMountEvent>::run(); // 0x140664F80
void AgAsyncEventDispatcher<AgMountWriteBeginEvent>::run(); // 0x1406650A0
void AgAsyncEventDispatcher<AgMountWriteEndEvent>::run(); // 0x1406651C0
void AgAsyncEventDispatcher<AgUnmountEvent>::run(); // 0x1406652E0
void AgAsyncEventDispatcher<AgControllerAddedEvent>::run(); // 0x140655540
void AgAsyncEventDispatcher<AgControllerPairingChangedEvent>::run(); // 0x140655670
void AgAsyncEventDispatcher<AgControllerRemovedEvent>::run(); // 0x140655740
void AgAsyncEventDispatcher<AgEditedInputEvent>::run(); // 0x140655870
void AgAsyncEventDispatcher<AgTypingInputEvent>::run(); // 0x1406559A0
void AgAsyncEventDispatcher<AgPointer<AgSession> >::run(); // 0x140682070
void AgAsyncEventDispatcher<AgActivatedEvent>::run(); // 0x14065BDB0
void AgAsyncEventDispatcher<AgDeactivatedEvent>::run(); // 0x14065BED0
void AgAsyncEventDispatcher<AgDisplayChangedEvent>::run(); // 0x14065BFF0
void AgAsyncEventDispatcher<AgResumingEvent>::run(); // 0x14065C110
void AgAsyncEventDispatcher<AgShutdownEvent>::run(); // 0x14065C230
void AgAsyncEventDispatcher<AgSuspendingEvent>::run(); // 0x14065C350
void AgAsyncEventDispatcher<AgUserAddedEvent>::run(); // 0x14067D9C0
void AgAsyncEventDispatcher<AgUserRemovedEvent>::run(); // 0x14067DAE0
void AgAsyncEventDispatcher<AgUserUpdatedEvent>::run(); // 0x14067DC00
void AgAsyncEventDispatcher<AgMountEvent>::invoke(const AgMountEvent & argument); // 0x1406645F0
void AgAsyncEventDispatcher<AgUnmountEvent>::invoke(const AgUnmountEvent & argument); // 0x140664660
void AgAsyncEventDispatcher<AgEditedInputEvent>::operator()(AgEditedInputEvent & argument); // 0x1406879D0
void AgAsyncEventDispatcher<AgTypingInputEvent>::operator()(AgTypingInputEvent & argument); // 0x140687A40
unsigned long AgAsyncEventDispatcher<AgMountErrorEvent>::remove<RemoveMountEventPredicate>(RemoveMountEventPredicate & pred); // 0x140660F10
class AgEventDispatcherBase<AgPlayerUpdatedEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgPlayerUpdatedEvent const &,void>);
	void unbind(AgDelegate1<AgPlayerUpdatedEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgPlayerUpdatedEvent const &,void>);
	void operator-=(AgDelegate1<AgPlayerUpdatedEvent const &,void>);
protected:
	void call(const AgPlayerUpdatedEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgPlayerUpdatedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerUpdatedEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgPlayerUpdatedEvent>();
	~AgEventDispatcherBase<AgPlayerUpdatedEvent>();
};
class AgEventDispatcherBase<AgPlayerAddedEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgPlayerAddedEvent const &,void>);
	void unbind(AgDelegate1<AgPlayerAddedEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgPlayerAddedEvent const &,void>);
	void operator-=(AgDelegate1<AgPlayerAddedEvent const &,void>);
protected:
	void call(const AgPlayerAddedEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgPlayerAddedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerAddedEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgPlayerAddedEvent>();
	~AgEventDispatcherBase<AgPlayerAddedEvent>();
};
class AgEventDispatcherBase<AgNetworkOfflineEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgNetworkOfflineEvent const &,void>);
	void unbind(AgDelegate1<AgNetworkOfflineEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgNetworkOfflineEvent const &,void>);
	void operator-=(AgDelegate1<AgNetworkOfflineEvent const &,void>);
protected:
	void call(const AgNetworkOfflineEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgNetworkOfflineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOfflineEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgNetworkOfflineEvent>();
	~AgEventDispatcherBase<AgNetworkOfflineEvent>();
};
class AgEventDispatcherBase<AgNetworkOnlineEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgNetworkOnlineEvent const &,void>);
	void unbind(AgDelegate1<AgNetworkOnlineEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgNetworkOnlineEvent const &,void>);
	void operator-=(AgDelegate1<AgNetworkOnlineEvent const &,void>);
protected:
	void call(const AgNetworkOnlineEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgNetworkOnlineEvent const &,void>,std::allocator<AgDelegate1<AgNetworkOnlineEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgNetworkOnlineEvent>();
	~AgEventDispatcherBase<AgNetworkOnlineEvent>();
};
class AgEventDispatcherBase<AgPrepareDumpEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgPrepareDumpEvent const &,void>);
	void unbind(AgDelegate1<AgPrepareDumpEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgPrepareDumpEvent const &,void>);
	void operator-=(AgDelegate1<AgPrepareDumpEvent const &,void>);
protected:
	void call(const AgPrepareDumpEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgPrepareDumpEvent const &,void>,std::allocator<AgDelegate1<AgPrepareDumpEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgPrepareDumpEvent>();
	~AgEventDispatcherBase<AgPrepareDumpEvent>();
};
class AgEventDispatcherBase<AgPlayerRemovedEvent>
{
	class FunctionSignature;
	class BindingArray;
public:
	void bind(AgDelegate1<AgPlayerRemovedEvent const &,void>);
	void unbind(AgDelegate1<AgPlayerRemovedEvent const &,void>);
	void clear();
	void operator+=(AgDelegate1<AgPlayerRemovedEvent const &,void>);
	void operator-=(AgDelegate1<AgPlayerRemovedEvent const &,void>);
protected:
	void call(const AgPlayerRemovedEvent &);
	AgMutex m_bindingsMutex; // 0x0
	std::vector<AgDelegate1<AgPlayerRemovedEvent const &,void>,std::allocator<AgDelegate1<AgPlayerRemovedEvent const &,void> > > m_bindings; // 0x28
public:
	AgEventDispatcherBase<AgPlayerRemovedEvent>();
	~AgEventDispatcherBase<AgPlayerRemovedEvent>();
};