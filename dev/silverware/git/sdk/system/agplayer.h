#pragma once

class AgPlayer :
	AgReferencedObject
{
	class ControllerArray;
public:
	AgPlayer(long);
	long isValid();
	long getId();
	long hasUser();
	AgPointer<AgUser> getUser();
	long long getUserId();
	long hasController();
	AgPointer<AgController> getController(unsigned long);
	AgPointer<AgController> getController();
	long containsController(AgPointer<AgController>);
	void setPrimaryController(AgPointer<AgController>);
	long getControllerCount();
	long isLocked();
	void lock();
	void unlock();
	long isDirty();
	void flagDirty();
	void resetDirty();
	void setUser(AgPointer<AgUser>);
	void removeController(unsigned long);
protected:
	void setId(long);
	void addController(AgPointer<AgController>);
	void clear();
	void clearUser();
	void clearControllers();
private:
	AgMutex m_mutex; // 0x8
	long m_id; // 0x30
	long m_locked; // 0x34
	long m_dirty; // 0x38
	AgPointer<AgUser> m_user; // 0x40
	std::vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > m_controllers; // 0x50
public:
	~AgPlayer();
};
AgPointer<AgUser> AgPlayer::getUser(); // 0x140664410
AgPointer<AgController> AgPlayer::getController(unsigned long index); // 0x140653530
void AgPlayer::lock(); // 0x1406A1E30
void AgPlayer::unlock(); // 0x1406A2600
void AgPlayer::setUser(AgPointer<AgUser> user); // 0x1406735A0
void AgPlayer::removeController(unsigned long controllerId); // 0x1406734B0
void AgPlayer::clearControllers(); // 0x140672490
class AgPointer<AgPlayer>
{
public:
	AgPointer<AgPlayer>(const AgReference<AgPlayer> &);
	AgPointer<AgPlayer>(AgPointer<AgPlayer> &);
	AgPointer<AgPlayer>(const AgPointer<AgPlayer> &);
	AgPointer<AgPlayer>(AgPlayer *);
	AgPointer<AgPlayer>();
	~AgPointer<AgPlayer>();
	AgPointer<AgPlayer> & operator=(AgPointer<AgPlayer> &);
	AgPointer<AgPlayer> & operator=(const AgReference<AgPlayer> &);
	AgPointer<AgPlayer> & operator=(const AgPointer<AgPlayer> &);
	AgPointer<AgPlayer> & operator=(AgPlayer *);
	bool operator<(const AgPointer<AgPlayer> &);
	AgPlayer * operator->();
	AgPlayer & operator*();
	bool operator==(const AgPointer<AgPlayer> &);
	bool operator==(AgPlayer *);
	bool operator!=(const AgPointer<AgPlayer> &);
	bool operator!=(AgPlayer *);
	AgPlayer * getObject();
	void swap(AgPointer<AgPlayer> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgPlayer * m_ptr; // 0x8
};
class AgReference<AgPlayer>
{
public:
	AgReference<AgPlayer>(const AgPointer<AgPlayer> &);
	AgReference<AgPlayer>(const AgReference<AgPlayer> &);
	AgReference<AgPlayer>();
	~AgReference<AgPlayer>();
	AgReference<AgPlayer> operator=(const AgPointer<AgPlayer> &);
	AgReference<AgPlayer> operator=(const AgReference<AgPlayer> &);
	bool operator!=(const AgReference<AgPlayer> &);
	bool operator!=(AgPlayer *);
	bool operator==(const AgReference<AgPlayer> &);
	bool operator==(AgPlayer *);
	AgPointer<AgPlayer> getPtr();
	void swap(AgReference<AgPlayer> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgPlayer * m_ptr; // 0x10
};
class std::vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgPointer<AgPlayer> pointer;
	typedef const AgPointer<AgPlayer> const_pointer;
	typedef AgPointer<AgPlayer> reference;
	typedef const AgPointer<AgPlayer> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > >(std::initializer_list<AgPointer<AgPlayer> >, const std::allocator<AgPointer<AgPlayer> > &);
	vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > >(std::vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > > &, const std::allocator<AgPointer<AgPlayer> > &);
	vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > >(std::vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > > &);
	vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > >(const std::vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > > &, const std::allocator<AgPointer<AgPlayer> > &);
	vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > >(const std::vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > > &);
	vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > >(unsigned long long, const AgPointer<AgPlayer> &, const std::allocator<AgPointer<AgPlayer> > &);
	vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > >(unsigned long long, const AgPointer<AgPlayer> &);
	vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > >(unsigned long long);
	vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > >(const std::allocator<AgPointer<AgPlayer> > &);
	vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > >();
	void _Construct_n(unsigned long long, const AgPointer<AgPlayer> *);
	std::vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > > & operator=(const std::vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > > &);
	std::vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > > & operator=(std::initializer_list<AgPointer<AgPlayer> >);
	std::vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > > & operator=(std::vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > > &);
	void _Assign_rv(std::vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > > &);
	void _Assign_rv(std::vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > > &, std::integral_constant<bool,1>);
	void push_back(const AgPointer<AgPlayer> &);
	void push_back(AgPointer<AgPlayer> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > >, unsigned long long, const AgPointer<AgPlayer> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > >, const AgPointer<AgPlayer> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > >, std::initializer_list<AgPointer<AgPlayer> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > >, AgPointer<AgPlayer> &);
	void assign(unsigned long long, const AgPointer<AgPlayer> &);
	void assign(std::initializer_list<AgPointer<AgPlayer> >);
	~vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgPointer<AgPlayer> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgPointer<AgPlayer> > get_allocator();
	AgPointer<AgPlayer> & at(unsigned long long);
	const AgPointer<AgPlayer> & at(unsigned long long);
	AgPointer<AgPlayer> & operator[](unsigned long long);
	const AgPointer<AgPlayer> & operator[](unsigned long long);
	const AgPointer<AgPlayer> * data();
	AgPointer<AgPlayer> * data();
	const AgPointer<AgPlayer> & front();
	AgPointer<AgPlayer> & front();
	const AgPointer<AgPlayer> & back();
	AgPointer<AgPlayer> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgPointer<AgPlayer> *, AgPointer<AgPlayer> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgPointer<AgPlayer> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgPlayer> > > >, unsigned long long, const AgPointer<AgPlayer> &);
	AgPointer<AgPlayer> * _Ufill(AgPointer<AgPlayer> *, unsigned long long, const AgPointer<AgPlayer> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgPointer<AgPlayer> *, AgPointer<AgPlayer> *);
};