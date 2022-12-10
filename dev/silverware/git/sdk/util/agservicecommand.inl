#pragma once

struct AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgAchievementPlatformData),void __cdecl(AgAchievementPlatformData)> :
	AgServiceCommandBase
{
	typedef void(*Delegate)(AgAchievementPlatformData);
	AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgAchievementPlatformData),void __cdecl(AgAchievementPlatformData)>(AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgAchievementPlatformData),void __cdecl(AgAchievementPlatformData)> &);
	AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgAchievementPlatformData),void __cdecl(AgAchievementPlatformData)>(const AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgAchievementPlatformData),void __cdecl(AgAchievementPlatformData)> &);
	virtual bool operator()();
	virtual void destroy();
	struct ?$TemplateType@X;
private:
	bool call(AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgAchievementPlatformData),void __cdecl(AgAchievementPlatformData)>::TemplateType<void>);
	void(*m_delegate)(AgAchievementPlatformData); // 0x8
	AgAllocator<1> m_allocator; // 0x10
	AgAchievementPlatformData m_p1; // 0x18
public:
	virtual ~AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgAchievementPlatformData),void __cdecl(AgAchievementPlatformData)>();
	AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgAchievementPlatformData),void __cdecl(AgAchievementPlatformData)> & operator=(AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgAchievementPlatformData),void __cdecl(AgAchievementPlatformData)> &);
	AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgAchievementPlatformData),void __cdecl(AgAchievementPlatformData)> & operator=(const AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgAchievementPlatformData),void __cdecl(AgAchievementPlatformData)> &);
};
struct AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgAchievementPlatformData),void __cdecl(AgAchievementPlatformData)>::TemplateType<void>
{
};
struct AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgHttpRequest *),void __cdecl(AgHttpRequest *)> :
	AgServiceCommandBase
{
	typedef void(*Delegate)(AgHttpRequest *);
	AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgHttpRequest *),void __cdecl(AgHttpRequest *)>(AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgHttpRequest *),void __cdecl(AgHttpRequest *)> &);
	AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgHttpRequest *),void __cdecl(AgHttpRequest *)>(const AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgHttpRequest *),void __cdecl(AgHttpRequest *)> &);
	virtual bool operator()();
	virtual void destroy();
	struct ?$TemplateType@X;
private:
	bool call(AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgHttpRequest *),void __cdecl(AgHttpRequest *)>::TemplateType<void>);
	void(*m_delegate)(AgHttpRequest *); // 0x8
	AgAllocator<1> m_allocator; // 0x10
	AgHttpRequest * m_p1; // 0x18
public:
	virtual ~AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgHttpRequest *),void __cdecl(AgHttpRequest *)>();
	AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgHttpRequest *),void __cdecl(AgHttpRequest *)> & operator=(AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgHttpRequest *),void __cdecl(AgHttpRequest *)> &);
	AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgHttpRequest *),void __cdecl(AgHttpRequest *)> & operator=(const AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgHttpRequest *),void __cdecl(AgHttpRequest *)> &);
};
struct AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgHttpRequest *),void __cdecl(AgHttpRequest *)>::TemplateType<void>
{
};
class AgDelegate<void __cdecl(AgPointer<AgDialog>)> :
	AgDelegate1<AgPointer<AgDialog>,void>
{
	class BaseType;
	class SelfType;
public:
	AgDelegate<void __cdecl(AgPointer<AgDialog>)>(AgDelegate<void __cdecl(AgPointer<AgDialog>)> &);
	AgDelegate<void __cdecl(AgPointer<AgDialog>)>(const AgDelegate<void __cdecl(AgPointer<AgDialog>)> &);
	AgDelegate<void __cdecl(AgPointer<AgDialog>)>(void(*)(AgPointer<AgDialog>));
	AgDelegate<void __cdecl(AgPointer<AgDialog>)>();
	AgDelegate<void __cdecl(AgPointer<AgDialog>)> & operator=(AgDelegate<void __cdecl(AgPointer<AgDialog>)> &);
	AgDelegate<void __cdecl(AgPointer<AgDialog>)> & operator=(const AgDelegate<void __cdecl(AgPointer<AgDialog>)> &);
	void operator=(const AgDelegate1<AgPointer<AgDialog>,void> &);
};
struct AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(AgPointer<AgDialog>),void __cdecl(AgPointer<AgDialog>)> :
	AgServiceCommandBase
{
	class Delegate;
	AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(AgPointer<AgDialog>),void __cdecl(AgPointer<AgDialog>)>(AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(AgPointer<AgDialog>),void __cdecl(AgPointer<AgDialog>)> &);
	AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(AgPointer<AgDialog>),void __cdecl(AgPointer<AgDialog>)>(const AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(AgPointer<AgDialog>),void __cdecl(AgPointer<AgDialog>)> &);
	virtual bool operator()();
	virtual void destroy();
	struct ?$TemplateType@X;
private:
	bool call(AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(AgPointer<AgDialog>),void __cdecl(AgPointer<AgDialog>)>::TemplateType<void>);
	AgDialogManager * m_context; // 0x8
	AgDelegate<void __cdecl(AgPointer<AgDialog>)> m_delegate; // 0x10
	AgAllocator<1> m_allocator; // 0x20
	AgPointer<AgDialog> m_p1; // 0x28
public:
	virtual ~AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(AgPointer<AgDialog>),void __cdecl(AgPointer<AgDialog>)>();
	AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(AgPointer<AgDialog>),void __cdecl(AgPointer<AgDialog>)> & operator=(AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(AgPointer<AgDialog>),void __cdecl(AgPointer<AgDialog>)> &);
	AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(AgPointer<AgDialog>),void __cdecl(AgPointer<AgDialog>)> & operator=(const AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(AgPointer<AgDialog>),void __cdecl(AgPointer<AgDialog>)> &);
};
struct AgServiceCommand<AgAllocator<1>,AgDialogManager *,void __cdecl(AgPointer<AgDialog>),void __cdecl(AgPointer<AgDialog>)>::TemplateType<void>
{
};
AgServiceCommandBase * AgBindServiceCommand<AgAllocator<1>,void,AgAchievementPlatformData,AgAchievementPlatformData>(AgAllocator<1> allocator, void(*func)(AgAchievementPlatformData), AgAchievementPlatformData p1); // 0x140657E60
bool AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgAchievementPlatformData),void __cdecl(AgAchievementPlatformData)>::operator()(); // 0x140658340
void AgServiceCommand<AgAllocator<1>,void,void __cdecl(AgAchievementPlatformData),void __cdecl(AgAchievementPlatformData)>::destroy(); // 0x140658660