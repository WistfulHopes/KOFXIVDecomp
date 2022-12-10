#pragma once

struct AgServiceCommandBase
{
	~AgServiceCommandBase();
	bool operator()();
	void destroy();
	static void operator delete(void *);
	static void operator delete(void *, void *);
	AgServiceCommandBase(const AgServiceCommandBase &);
	AgServiceCommandBase();
	AgServiceCommandBase & operator=(const AgServiceCommandBase &);
};
AgServiceCommandBase::~AgServiceCommandBase(); // 0x1406582F0
void AgServiceCommandBase::operator delete(void * memory, void * __formal); // 0x140658320
class AgDelegate<void __cdecl(void)> :
	AgDelegate0<void>
{
	class BaseType;
	class SelfType;
public:
	AgDelegate<void __cdecl(void)>(AgDelegate<void __cdecl(void)> &);
	AgDelegate<void __cdecl(void)>(const AgDelegate<void __cdecl(void)> &);
	AgDelegate<void __cdecl(void)>(void(*)());
	AgDelegate<void __cdecl(void)>();
	AgDelegate<void __cdecl(void)> & operator=(AgDelegate<void __cdecl(void)> &);
	AgDelegate<void __cdecl(void)> & operator=(const AgDelegate<void __cdecl(void)> &);
	void operator=(const AgDelegate0<void> &);
};
bool AgServiceCommand<AgAllocator<1>,AgPointer<AgFile>,void __cdecl(void),void __cdecl(void)>::operator()(); // 0x14065F600
bool AgServiceCommand<AgAllocator<1>,AgPlayerManager * __ptr64,void __cdecl(void),void __cdecl(void)>::operator()(); // 0x140671F80
void AgServiceCommand<AgAllocator<1>,AgPointer<AgFile>,void __cdecl(void),void __cdecl(void)>::destroy(); // 0x14065F760
void AgServiceCommand<AgAllocator<1>,AgPlayerManager * __ptr64,void __cdecl(void),void __cdecl(void)>::destroy(); // 0x140672600
struct AgServiceCommand<AgAllocator<1>,AgPointer<AgFile>,void __cdecl(void),void __cdecl(void)>::TemplateType<void>
{
};
struct AgServiceCommand<AgAllocator<1>,AgPointer<AgDialog>,void __cdecl(void),void __cdecl(void)>::TemplateType<void>
{
};
struct AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(void),void __cdecl(void)>::TemplateType<void>
{
};
struct AgServiceCommand<AgAllocator<1>,AgPlayerManager *,void __cdecl(void),void __cdecl(void)>::TemplateType<void>
{
};
AgServiceCommandBase * AgBindServiceCommand<AgAllocator<1>,AgFile,AgPointer<AgFile>,void>(AgAllocator<1> allocator, AgPointer<AgFile> y, void(*func)()); // 0x14065F3F0
struct AgServiceCommand<AgAllocator<1>,AgPointer<AgFile>,void __cdecl(void),void __cdecl(void)> :
	AgServiceCommandBase
{
	class Delegate;
	AgServiceCommand<AgAllocator<1>,AgPointer<AgFile>,void __cdecl(void),void __cdecl(void)>(AgServiceCommand<AgAllocator<1>,AgPointer<AgFile>,void __cdecl(void),void __cdecl(void)> &);
	AgServiceCommand<AgAllocator<1>,AgPointer<AgFile>,void __cdecl(void),void __cdecl(void)>(const AgServiceCommand<AgAllocator<1>,AgPointer<AgFile>,void __cdecl(void),void __cdecl(void)> &);
	virtual bool operator()();
	virtual void destroy();
	struct ?$TemplateType@X;
private:
	bool call(AgServiceCommand<AgAllocator<1>,AgPointer<AgFile>,void __cdecl(void),void __cdecl(void)>::TemplateType<void>);
	AgPointer<AgFile> m_context; // 0x8
	AgDelegate<void __cdecl(void)> m_delegate; // 0x18
	AgAllocator<1> m_allocator; // 0x28
public:
	virtual ~AgServiceCommand<AgAllocator<1>,AgPointer<AgFile>,void __cdecl(void),void __cdecl(void)>();
	AgServiceCommand<AgAllocator<1>,AgPointer<AgFile>,void __cdecl(void),void __cdecl(void)> & operator=(AgServiceCommand<AgAllocator<1>,AgPointer<AgFile>,void __cdecl(void),void __cdecl(void)> &);
	AgServiceCommand<AgAllocator<1>,AgPointer<AgFile>,void __cdecl(void),void __cdecl(void)> & operator=(const AgServiceCommand<AgAllocator<1>,AgPointer<AgFile>,void __cdecl(void),void __cdecl(void)> &);
};
struct AgServiceCommand<AgAllocator<1>,AgPointer<AgDialog>,void __cdecl(void),void __cdecl(void)> :
	AgServiceCommandBase
{
	class Delegate;
	AgServiceCommand<AgAllocator<1>,AgPointer<AgDialog>,void __cdecl(void),void __cdecl(void)>(AgServiceCommand<AgAllocator<1>,AgPointer<AgDialog>,void __cdecl(void),void __cdecl(void)> &);
	AgServiceCommand<AgAllocator<1>,AgPointer<AgDialog>,void __cdecl(void),void __cdecl(void)>(const AgServiceCommand<AgAllocator<1>,AgPointer<AgDialog>,void __cdecl(void),void __cdecl(void)> &);
	virtual bool operator()();
	virtual void destroy();
	struct ?$TemplateType@X;
private:
	bool call(AgServiceCommand<AgAllocator<1>,AgPointer<AgDialog>,void __cdecl(void),void __cdecl(void)>::TemplateType<void>);
	AgPointer<AgDialog> m_context; // 0x8
	AgDelegate<void __cdecl(void)> m_delegate; // 0x18
	AgAllocator<1> m_allocator; // 0x28
public:
	virtual ~AgServiceCommand<AgAllocator<1>,AgPointer<AgDialog>,void __cdecl(void),void __cdecl(void)>();
	AgServiceCommand<AgAllocator<1>,AgPointer<AgDialog>,void __cdecl(void),void __cdecl(void)> & operator=(AgServiceCommand<AgAllocator<1>,AgPointer<AgDialog>,void __cdecl(void),void __cdecl(void)> &);
	AgServiceCommand<AgAllocator<1>,AgPointer<AgDialog>,void __cdecl(void),void __cdecl(void)> & operator=(const AgServiceCommand<AgAllocator<1>,AgPointer<AgDialog>,void __cdecl(void),void __cdecl(void)> &);
};
struct AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(void),void __cdecl(void)> :
	AgServiceCommandBase
{
	class Delegate;
	AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(void),void __cdecl(void)>(AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(void),void __cdecl(void)> &);
	AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(void),void __cdecl(void)>(const AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(void),void __cdecl(void)> &);
	virtual bool operator()();
	virtual void destroy();
	struct ?$TemplateType@X;
private:
	bool call(AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(void),void __cdecl(void)>::TemplateType<void>);
	AgDialogManager * m_context; // 0x8
	AgDelegate<void __cdecl(void)> m_delegate; // 0x10
	AgAllocator<1> m_allocator; // 0x20
public:
	virtual ~AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(void),void __cdecl(void)>();
	AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(void),void __cdecl(void)> & operator=(AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(void),void __cdecl(void)> &);
	AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(void),void __cdecl(void)> & operator=(const AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(void),void __cdecl(void)> &);
};
struct AgServiceCommand<AgAllocator<1>,AgPlayerManager *,void __cdecl(void),void __cdecl(void)> :
	AgServiceCommandBase
{
	class Delegate;
	AgServiceCommand<AgAllocator<1>,AgPlayerManager *,void __cdecl(void),void __cdecl(void)>(AgServiceCommand<AgAllocator<1>,AgPlayerManager *,void __cdecl(void),void __cdecl(void)> &);
	AgServiceCommand<AgAllocator<1>,AgPlayerManager *,void __cdecl(void),void __cdecl(void)>(const AgServiceCommand<AgAllocator<1>,AgPlayerManager *,void __cdecl(void),void __cdecl(void)> &);
	virtual bool operator()();
	virtual void destroy();
	struct ?$TemplateType@X;
private:
	bool call(AgServiceCommand<AgAllocator<1>,AgPlayerManager *,void __cdecl(void),void __cdecl(void)>::TemplateType<void>);
	AgPlayerManager * m_context; // 0x8
	AgDelegate<void __cdecl(void)> m_delegate; // 0x10
	AgAllocator<1> m_allocator; // 0x20
public:
	virtual ~AgServiceCommand<AgAllocator<1>,AgPlayerManager *,void __cdecl(void),void __cdecl(void)>();
	AgServiceCommand<AgAllocator<1>,AgPlayerManager *,void __cdecl(void),void __cdecl(void)> & operator=(AgServiceCommand<AgAllocator<1>,AgPlayerManager *,void __cdecl(void),void __cdecl(void)> &);
	AgServiceCommand<AgAllocator<1>,AgPlayerManager *,void __cdecl(void),void __cdecl(void)> & operator=(const AgServiceCommand<AgAllocator<1>,AgPlayerManager *,void __cdecl(void),void __cdecl(void)> &);
};