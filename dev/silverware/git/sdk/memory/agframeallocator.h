#pragma once

class std::vector<unsigned char *,std::allocator<unsigned char *> > :
	std::_Vector_alloc<std::_Vec_base_types<unsigned char *,std::allocator<unsigned char *> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef unsigned char *value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef unsigned char * pointer;
	typedef unsigned char * const_pointer;
	typedef unsigned char * reference;
	typedef unsigned char * const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<unsigned char *,std::allocator<unsigned char *> >(std::initializer_list<unsigned char *>, const std::allocator<unsigned char *> &);
	vector<unsigned char *,std::allocator<unsigned char *> >(std::vector<unsigned char *,std::allocator<unsigned char *> > &, const std::allocator<unsigned char *> &);
	vector<unsigned char *,std::allocator<unsigned char *> >(std::vector<unsigned char *,std::allocator<unsigned char *> > &);
	vector<unsigned char *,std::allocator<unsigned char *> >(const std::vector<unsigned char *,std::allocator<unsigned char *> > &, const std::allocator<unsigned char *> &);
	vector<unsigned char *,std::allocator<unsigned char *> >(const std::vector<unsigned char *,std::allocator<unsigned char *> > &);
	vector<unsigned char *,std::allocator<unsigned char *> >(unsigned long long, unsigned char * &, const std::allocator<unsigned char *> &);
	vector<unsigned char *,std::allocator<unsigned char *> >(unsigned long long, unsigned char * &);
	vector<unsigned char *,std::allocator<unsigned char *> >(unsigned long long);
	vector<unsigned char *,std::allocator<unsigned char *> >(const std::allocator<unsigned char *> &);
	vector<unsigned char *,std::allocator<unsigned char *> >();
	void _Construct_n(unsigned long long, unsigned char * *);
	std::vector<unsigned char *,std::allocator<unsigned char *> > & operator=(const std::vector<unsigned char *,std::allocator<unsigned char *> > &);
	std::vector<unsigned char *,std::allocator<unsigned char *> > & operator=(std::initializer_list<unsigned char *>);
	std::vector<unsigned char *,std::allocator<unsigned char *> > & operator=(std::vector<unsigned char *,std::allocator<unsigned char *> > &);
	void _Assign_rv(std::vector<unsigned char *,std::allocator<unsigned char *> > &);
	void _Assign_rv(std::vector<unsigned char *,std::allocator<unsigned char *> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<unsigned char *,std::allocator<unsigned char *> > &, std::integral_constant<bool,1>);
	void push_back(unsigned char * &);
	void push_back(unsigned char * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > >, unsigned long long, unsigned char * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > >, unsigned char * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > >, std::initializer_list<unsigned char *>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > >, unsigned char * &);
	void assign(unsigned long long, unsigned char * &);
	void assign(std::initializer_list<unsigned char *>);
	~vector<unsigned char *,std::allocator<unsigned char *> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, unsigned char * &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<unsigned char *> get_allocator();
	unsigned char * & at(unsigned long long);
	unsigned char * & at(unsigned long long);
	unsigned char * & operator[](unsigned long long);
	unsigned char * & operator[](unsigned long long);
	unsigned char * * data();
	unsigned char * * data();
	unsigned char * & front();
	unsigned char * & front();
	unsigned char * & back();
	unsigned char * & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<unsigned char *,std::allocator<unsigned char *> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(unsigned char * *, unsigned char * *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(unsigned char * *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char *> > >, unsigned long long, unsigned char * &);
	unsigned char * * _Ufill(unsigned char * *, unsigned long long, unsigned char * *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(unsigned char * *, unsigned char * *);
};