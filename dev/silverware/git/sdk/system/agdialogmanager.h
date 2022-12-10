#pragma once

enum AgDialogStatus
{
	AgDialogStatus_Initial = 0,
	AgDialogStatus_Completed = 1,
	AgDialogStatus_Canceled = 2,
	AgDialogStatus_Error = 3,
	AgDialogStatus_InitError = 4,
};
class AgDelegate1<AgPointer<AgDialog>,void>
{
	typedef void DesiredRetType;
	typedef void(*StaticFunctionPtr)(AgPointer<AgDialog>);
	typedef void(*UnvoidStaticFunctionPtr)(AgPointer<AgDialog>);
	typedef void(*GenericMemFn)(AgPointer<AgDialog>);
	class ClosureType;
private:
	detail::ClosurePtr<void (__cdecl detail::GenericClass::*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>),void (__cdecl*)(AgPointer<AgDialog>)> m_Closure; // 0x0
	class type;
public:
	AgDelegate1<AgPointer<AgDialog>,void>(void(*)(AgPointer<AgDialog>));
	AgDelegate1<AgPointer<AgDialog>,void>(const AgDelegate1<AgPointer<AgDialog>,void> &);
	AgDelegate1<AgPointer<AgDialog>,void>();
	void operator=(void(*)(AgPointer<AgDialog>));
	void operator=(const AgDelegate1<AgPointer<AgDialog>,void> &);
	bool operator==(void(*)(AgPointer<AgDialog>));
	bool operator==(const AgDelegate1<AgPointer<AgDialog>,void> &);
	bool operator!=(void(*)(AgPointer<AgDialog>));
	bool operator!=(const AgDelegate1<AgPointer<AgDialog>,void> &);
	bool operator<(const AgDelegate1<AgPointer<AgDialog>,void> &);
	bool operator>(const AgDelegate1<AgPointer<AgDialog>,void> &);
	void bind(void(*)(AgPointer<AgDialog>));
	void operator()(AgPointer<AgDialog>);
	struct SafeBoolStruct;
	struct UselessTypedef;
	typedef void(*unspecified_bool_type)(AgPointer<AgDialog>);
	void(*)(AgPointer<AgDialog>) * operator void (__cdecl *AgDelegate1<class AgPointer<class AgDialog>,void>::SafeBoolStruct::* )(class AgPointer<class AgDialog>)();
	bool operator!();
	bool empty();
	void clear();
	const AgDelegateMemento & GetMemento();
	void SetMemento(const AgDelegateMemento &);
private:
	void InvokeStaticFunction(AgPointer<AgDialog>);
};
class AgDialog :
	AgReferencedObject
{
public:
	AgDialog(const AgDialog &);
	AgDialog(AgDelegate1<AgPointer<AgDialog>,void>);
	~AgDialog();
	AgDialogStatus getStatus();
	unsigned long long getResult();
	void open();
	void close();
protected:
	void finish(AgDialogStatus, unsigned long long);
	void callHandler();
	static AgStringRef getErrorString(AgSilverwareError);
private:
	AgDialogStatus m_status; // 0x10
	unsigned long long m_result; // 0x18
	AgDelegate1<AgPointer<AgDialog>,void> m_handler; // 0x20
public:
	AgDialog & operator=(const AgDialog &);
};
class AgDialogManager :
	AgSingleton<AgDialogManager>
{
public:
	AgDialogManager();
	virtual ~AgDialogManager();
	long hasActiveDialog();
	AgPointer<AgDialog> getActiveDialog();
	void closeActiveDialog();
	AgPointer<AgDialog> showUserSelectDialog(AgPointer<AgController>, unsigned long, AgDelegate1<AgPointer<AgDialog>,void>);
	AgPointer<AgDialog> showHelpDialog(AgPointer<AgUser>, AgDelegate1<AgPointer<AgDialog>,void>);
	AgPointer<AgDialog> showErrorDialog(AgPointer<AgUser>, AgSilverwareError, unsigned long long, AgDelegate1<AgPointer<AgDialog>,void>);
	AgPointer<AgDialog> showSaveErrorDialog(AgPointer<AgUser>, const AgMountErrorEvent &, AgDelegate1<AgPointer<AgDialog>,void>);
private:
	void showNextDialog(AgPointer<AgDialog>);
	AgPointer<AgDialog> queueDialog(AgPointer<AgDialog>);
	void onShutdown(const AgShutdownEvent &);
	AgMutex m_mutex; // 0x8
	std::vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > > m_activeDialog; // 0x30
public:
	static AgDialogManager * createSingleton();
protected:
	void _nextDialog();
	AgPointer<AgDialog> _showSignInDialog(AgPointer<AgUser>, AgDelegate1<AgPointer<AgDialog>,void>);
	AgPointer<AgDialog> createSignInDialog(AgPointer<AgUser>, AgDelegate1<AgPointer<AgDialog>,void>);
	AgPointer<AgDialog> createUserSelectDialog(AgPointer<AgController>, unsigned long, AgDelegate1<AgPointer<AgDialog>,void>);
	AgPointer<AgDialog> createHelpDialog(AgPointer<AgUser>, AgDelegate1<AgPointer<AgDialog>,void>);
	AgPointer<AgDialog> createErrorDialog(AgPointer<AgUser>, AgSilverwareError, unsigned long long, AgDelegate1<AgPointer<AgDialog>,void>);
	AgPointer<AgDialog> createSaveErrorDialog(AgPointer<AgUser>, const AgMountErrorEvent &, AgDelegate1<AgPointer<AgDialog>,void>);
	virtual long onSingletonInit();
	virtual long onSingletonExit();
	void onDialogClose(AgPointer<AgDialog>);
};
class AgSingleton<AgDialogManager>
{
protected:
	~AgSingleton<AgDialogManager>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgDialogManager & getInstance();
	static long hasInstance();
private:
	static AgDialogManager * createSingleton();
	static void destroySingleton(AgDialogManager *);
	static AgSingleton<AgDialogManager> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgDialogManager>(const AgSingleton<AgDialogManager> &);
	AgSingleton<AgDialogManager>();
	AgSingleton<AgDialogManager> & operator=(const AgSingleton<AgDialogManager> &);
};
class std::vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgPointer<AgDialog> pointer;
	typedef const AgPointer<AgDialog> const_pointer;
	typedef AgPointer<AgDialog> reference;
	typedef const AgPointer<AgDialog> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > >(std::initializer_list<AgPointer<AgDialog> >, const std::allocator<AgPointer<AgDialog> > &);
	vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > >(std::vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > > &, const std::allocator<AgPointer<AgDialog> > &);
	vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > >(std::vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > > &);
	vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > >(const std::vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > > &, const std::allocator<AgPointer<AgDialog> > &);
	vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > >(const std::vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > > &);
	vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > >(unsigned long long, const AgPointer<AgDialog> &, const std::allocator<AgPointer<AgDialog> > &);
	vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > >(unsigned long long, const AgPointer<AgDialog> &);
	vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > >(unsigned long long);
	vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > >(const std::allocator<AgPointer<AgDialog> > &);
	vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > >();
	void _Construct_n(unsigned long long, const AgPointer<AgDialog> *);
	std::vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > > & operator=(const std::vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > > &);
	std::vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > > & operator=(std::initializer_list<AgPointer<AgDialog> >);
	std::vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > > & operator=(std::vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > > &);
	void _Assign_rv(std::vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > > &);
	void _Assign_rv(std::vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > > &, std::integral_constant<bool,1>);
	void push_back(const AgPointer<AgDialog> &);
	void push_back(AgPointer<AgDialog> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > >, unsigned long long, const AgPointer<AgDialog> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > >, const AgPointer<AgDialog> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > >, std::initializer_list<AgPointer<AgDialog> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > >, AgPointer<AgDialog> &);
	void assign(unsigned long long, const AgPointer<AgDialog> &);
	void assign(std::initializer_list<AgPointer<AgDialog> >);
	~vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgPointer<AgDialog> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgPointer<AgDialog> > get_allocator();
	AgPointer<AgDialog> & at(unsigned long long);
	const AgPointer<AgDialog> & at(unsigned long long);
	AgPointer<AgDialog> & operator[](unsigned long long);
	const AgPointer<AgDialog> & operator[](unsigned long long);
	const AgPointer<AgDialog> * data();
	AgPointer<AgDialog> * data();
	const AgPointer<AgDialog> & front();
	AgPointer<AgDialog> & front();
	const AgPointer<AgDialog> & back();
	AgPointer<AgDialog> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgPointer<AgDialog>,std::allocator<AgPointer<AgDialog> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgPointer<AgDialog> *, AgPointer<AgDialog> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgPointer<AgDialog> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgDialog> > > >, unsigned long long, const AgPointer<AgDialog> &);
	AgPointer<AgDialog> * _Ufill(AgPointer<AgDialog> *, unsigned long long, const AgPointer<AgDialog> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgPointer<AgDialog> *, AgPointer<AgDialog> *);
};
AgPointer<AgDialog> AgDialogManager::createSignInDialog(AgPointer<AgUser> user, AgDelegate1<AgPointer<AgDialog>,void> handler); // 0x1406800D0
AgPointer<AgDialog> AgDialogManager::createUserSelectDialog(AgPointer<AgController> controller, unsigned long flags, AgDelegate1<AgPointer<AgDialog>,void> handler); // 0x140680160
AgPointer<AgDialog> AgDialogManager::createHelpDialog(AgPointer<AgUser> user, AgDelegate1<AgPointer<AgDialog>,void> handler); // 0x140680030
AgPointer<AgDialog> AgDialogManager::createErrorDialog(AgPointer<AgUser> user, AgSilverwareError error, unsigned long long internalError, AgDelegate1<AgPointer<AgDialog>,void> handler); // 0x14067FFE0
AgPointer<AgDialog> AgDialogManager::createSaveErrorDialog(AgPointer<AgUser> user, const AgMountErrorEvent & error, AgDelegate1<AgPointer<AgDialog>,void> handler); // 0x140680080
class AgSaveErrorDialog :
	AgDialog
{
public:
	AgSaveErrorDialog(AgSaveErrorDialog &);
	AgSaveErrorDialog(const AgSaveErrorDialog &);
	AgSaveErrorDialog(const AgMountErrorEvent &, AgDelegate1<AgPointer<AgDialog>,void>);
	const AgMountErrorEvent & getError();
protected:
	AgMountErrorEvent m_error; // 0x30
public:
	virtual ~AgSaveErrorDialog();
	AgSaveErrorDialog & operator=(AgSaveErrorDialog &);
	AgSaveErrorDialog & operator=(const AgSaveErrorDialog &);
};
class AgPointer<AgSaveErrorDialog>
{
public:
	AgPointer<AgSaveErrorDialog>(const AgReference<AgSaveErrorDialog> &);
	AgPointer<AgSaveErrorDialog>(AgPointer<AgSaveErrorDialog> &);
	AgPointer<AgSaveErrorDialog>(const AgPointer<AgSaveErrorDialog> &);
	AgPointer<AgSaveErrorDialog>(AgSaveErrorDialog *);
	AgPointer<AgSaveErrorDialog>();
	~AgPointer<AgSaveErrorDialog>();
	AgPointer<AgSaveErrorDialog> & operator=(AgPointer<AgSaveErrorDialog> &);
	AgPointer<AgSaveErrorDialog> & operator=(const AgReference<AgSaveErrorDialog> &);
	AgPointer<AgSaveErrorDialog> & operator=(const AgPointer<AgSaveErrorDialog> &);
	AgPointer<AgSaveErrorDialog> & operator=(AgSaveErrorDialog *);
	bool operator<(const AgPointer<AgSaveErrorDialog> &);
	AgSaveErrorDialog * operator->();
	AgSaveErrorDialog & operator*();
	bool operator==(const AgPointer<AgSaveErrorDialog> &);
	bool operator==(AgSaveErrorDialog *);
	bool operator!=(const AgPointer<AgSaveErrorDialog> &);
	bool operator!=(AgSaveErrorDialog *);
	AgSaveErrorDialog * getObject();
	void swap(AgPointer<AgSaveErrorDialog> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgSaveErrorDialog * m_ptr; // 0x8
};