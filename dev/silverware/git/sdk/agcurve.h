#pragma once

class AgCurve
{
public:
	AgCurve(const AgCurve &);
	AgCurve();
	~AgCurve();
	void operator=(const AgCurve &);
	float operator()(float);
	void addPoint(const AgVector2 &);
	void addPoint(float, float);
	float getValueX(float);
	class PointVector;
private:
	std::vector<AgVector2,std::allocator<AgVector2> > m_points; // 0x0
};
class std::vector<AgVector2,std::allocator<AgVector2> > :
	std::_Vector_alloc<std::_Vec_base_types<AgVector2,std::allocator<AgVector2> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgVector2 pointer;
	typedef const AgVector2 const_pointer;
	typedef AgVector2 reference;
	typedef const AgVector2 const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgVector2,std::allocator<AgVector2> >(std::initializer_list<AgVector2>, const std::allocator<AgVector2> &);
	vector<AgVector2,std::allocator<AgVector2> >(std::vector<AgVector2,std::allocator<AgVector2> > &, const std::allocator<AgVector2> &);
	vector<AgVector2,std::allocator<AgVector2> >(std::vector<AgVector2,std::allocator<AgVector2> > &);
	vector<AgVector2,std::allocator<AgVector2> >(const std::vector<AgVector2,std::allocator<AgVector2> > &, const std::allocator<AgVector2> &);
	vector<AgVector2,std::allocator<AgVector2> >(const std::vector<AgVector2,std::allocator<AgVector2> > &);
	vector<AgVector2,std::allocator<AgVector2> >(unsigned long long, const AgVector2 &, const std::allocator<AgVector2> &);
	vector<AgVector2,std::allocator<AgVector2> >(unsigned long long, const AgVector2 &);
	vector<AgVector2,std::allocator<AgVector2> >(unsigned long long);
	vector<AgVector2,std::allocator<AgVector2> >(const std::allocator<AgVector2> &);
	vector<AgVector2,std::allocator<AgVector2> >();
	void _Construct_n(unsigned long long, const AgVector2 *);
	std::vector<AgVector2,std::allocator<AgVector2> > & operator=(const std::vector<AgVector2,std::allocator<AgVector2> > &);
	std::vector<AgVector2,std::allocator<AgVector2> > & operator=(std::initializer_list<AgVector2>);
	std::vector<AgVector2,std::allocator<AgVector2> > & operator=(std::vector<AgVector2,std::allocator<AgVector2> > &);
	void _Assign_rv(std::vector<AgVector2,std::allocator<AgVector2> > &);
	void _Assign_rv(std::vector<AgVector2,std::allocator<AgVector2> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgVector2,std::allocator<AgVector2> > &, std::integral_constant<bool,1>);
	void push_back(const AgVector2 &);
	void push_back(AgVector2 &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > >, unsigned long long, const AgVector2 &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > >, const AgVector2 &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > >, std::initializer_list<AgVector2>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > >, AgVector2 &);
	void assign(unsigned long long, const AgVector2 &);
	void assign(std::initializer_list<AgVector2>);
	~vector<AgVector2,std::allocator<AgVector2> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgVector2 &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgVector2> get_allocator();
	AgVector2 & at(unsigned long long);
	const AgVector2 & at(unsigned long long);
	AgVector2 & operator[](unsigned long long);
	const AgVector2 & operator[](unsigned long long);
	const AgVector2 * data();
	AgVector2 * data();
	const AgVector2 & front();
	AgVector2 & front();
	const AgVector2 & back();
	AgVector2 & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgVector2,std::allocator<AgVector2> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgVector2 *, AgVector2 *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgVector2 *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgVector2> > >, unsigned long long, const AgVector2 &);
	AgVector2 * _Ufill(AgVector2 *, unsigned long long, const AgVector2 *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgVector2 *, AgVector2 *);
};