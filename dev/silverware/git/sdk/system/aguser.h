#pragma once

class AgUser :
	AgReferencedObject
{
public:
	AgUser(const AgUser &);
	AgUser(long long);
	~AgUser();
	long long getId();
	const AgString & getUserName();
	long isGuest();
	long isSignedIn();
	long isOnline();
	long isAgeRestricted();
	long isSignInBusy();
	void signIn(long);
protected:
	long m_signInBusy; // 0x10
	void setUserName(const AgString &);
private:
	long long m_id; // 0x18
	AgString m_userName; // 0x20
public:
	AgUser & operator=(const AgUser &);
};
AgUser::~AgUser(); // 0x140695BC0
long AgUser::isSignedIn(); // 0x1400482A0
long AgUser::isSignInBusy(); // 0x14017D8E0
class AgPointer<AgUser>
{
public:
	AgPointer<AgUser>(const AgReference<AgUser> &);
	AgPointer<AgUser>(AgPointer<AgUser> &);
	AgPointer<AgUser>(const AgPointer<AgUser> &);
	AgPointer<AgUser>(AgUser *);
	AgPointer<AgUser>();
	~AgPointer<AgUser>();
	AgPointer<AgUser> & operator=(AgPointer<AgUser> &);
	AgPointer<AgUser> & operator=(const AgReference<AgUser> &);
	AgPointer<AgUser> & operator=(const AgPointer<AgUser> &);
	AgPointer<AgUser> & operator=(AgUser *);
	bool operator<(const AgPointer<AgUser> &);
	AgUser * operator->();
	AgUser & operator*();
	bool operator==(const AgPointer<AgUser> &);
	bool operator==(AgUser *);
	bool operator!=(const AgPointer<AgUser> &);
	bool operator!=(AgUser *);
	AgUser * getObject();
	void swap(AgPointer<AgUser> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgUser * m_ptr; // 0x8
};
class std::vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgPointer<AgUser> pointer;
	typedef const AgPointer<AgUser> const_pointer;
	typedef AgPointer<AgUser> reference;
	typedef const AgPointer<AgUser> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > >(std::initializer_list<AgPointer<AgUser> >, const std::allocator<AgPointer<AgUser> > &);
	vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > >(std::vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > > &, const std::allocator<AgPointer<AgUser> > &);
	vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > >(std::vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > > &);
	vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > >(const std::vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > > &, const std::allocator<AgPointer<AgUser> > &);
	vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > >(const std::vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > > &);
	vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > >(unsigned long long, const AgPointer<AgUser> &, const std::allocator<AgPointer<AgUser> > &);
	vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > >(unsigned long long, const AgPointer<AgUser> &);
	vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > >(unsigned long long);
	vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > >(const std::allocator<AgPointer<AgUser> > &);
	vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > >();
	void _Construct_n(unsigned long long, const AgPointer<AgUser> *);
	std::vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > > & operator=(const std::vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > > &);
	std::vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > > & operator=(std::initializer_list<AgPointer<AgUser> >);
	std::vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > > & operator=(std::vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > > &);
	void _Assign_rv(std::vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > > &);
	void _Assign_rv(std::vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > > &, std::integral_constant<bool,1>);
	void push_back(const AgPointer<AgUser> &);
	void push_back(AgPointer<AgUser> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > >, unsigned long long, const AgPointer<AgUser> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > >, const AgPointer<AgUser> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > >, std::initializer_list<AgPointer<AgUser> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > >, AgPointer<AgUser> &);
	void assign(unsigned long long, const AgPointer<AgUser> &);
	void assign(std::initializer_list<AgPointer<AgUser> >);
	~vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgPointer<AgUser> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgPointer<AgUser> > get_allocator();
	AgPointer<AgUser> & at(unsigned long long);
	const AgPointer<AgUser> & at(unsigned long long);
	AgPointer<AgUser> & operator[](unsigned long long);
	const AgPointer<AgUser> & operator[](unsigned long long);
	const AgPointer<AgUser> * data();
	AgPointer<AgUser> * data();
	const AgPointer<AgUser> & front();
	AgPointer<AgUser> & front();
	const AgPointer<AgUser> & back();
	AgPointer<AgUser> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgPointer<AgUser>,std::allocator<AgPointer<AgUser> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgPointer<AgUser> *, AgPointer<AgUser> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgPointer<AgUser> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgUser> > > >, unsigned long long, const AgPointer<AgUser> &);
	AgPointer<AgUser> * _Ufill(AgPointer<AgUser> *, unsigned long long, const AgPointer<AgUser> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgPointer<AgUser> *, AgPointer<AgUser> *);
};