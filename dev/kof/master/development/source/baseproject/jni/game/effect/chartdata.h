#pragma once

enum <unnamed-enum-LINEAR>
{
	LINEAR = 0,
	CONSTANT = 1,
	BEZIER = 2,
};
struct KeyData
{
	bool selectFlag; // 0x0
	OGLEffectVec2 Pos; // 0x8
	long interpolationType; // 0x18
	OGLEffectVec2 BezierPosFront; // 0x20
	OGLEffectVec2 BezierPosBack; // 0x30
	KeyData(KeyData &);
	KeyData(const KeyData &);
	KeyData();
	~KeyData();
	KeyData & operator=(KeyData &);
	KeyData & operator=(const KeyData &);
};
struct ChartData
{
	bool RenderFlag; // 0x0
	OGLEffectVec3 RenderColor; // 0x8
	std::vector<KeyData,std::allocator<KeyData> > keyData; // 0x20
	ChartData(ChartData &);
	ChartData(const ChartData &);
	ChartData();
	~ChartData();
	ChartData & operator=(ChartData &);
	ChartData & operator=(const ChartData &);
};
class std::vector<KeyData,std::allocator<KeyData> > :
	std::_Vector_alloc<std::_Vec_base_types<KeyData,std::allocator<KeyData> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef KeyData pointer;
	typedef const KeyData const_pointer;
	typedef KeyData reference;
	typedef const KeyData const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<KeyData,std::allocator<KeyData> >(std::initializer_list<KeyData>, const std::allocator<KeyData> &);
	vector<KeyData,std::allocator<KeyData> >(std::vector<KeyData,std::allocator<KeyData> > &, const std::allocator<KeyData> &);
	vector<KeyData,std::allocator<KeyData> >(std::vector<KeyData,std::allocator<KeyData> > &);
	vector<KeyData,std::allocator<KeyData> >(const std::vector<KeyData,std::allocator<KeyData> > &, const std::allocator<KeyData> &);
	vector<KeyData,std::allocator<KeyData> >(const std::vector<KeyData,std::allocator<KeyData> > &);
	vector<KeyData,std::allocator<KeyData> >(unsigned long long, const KeyData &, const std::allocator<KeyData> &);
	vector<KeyData,std::allocator<KeyData> >(unsigned long long, const KeyData &);
	vector<KeyData,std::allocator<KeyData> >(unsigned long long);
	vector<KeyData,std::allocator<KeyData> >(const std::allocator<KeyData> &);
	vector<KeyData,std::allocator<KeyData> >();
	void _Construct_n(unsigned long long, const KeyData *);
	std::vector<KeyData,std::allocator<KeyData> > & operator=(const std::vector<KeyData,std::allocator<KeyData> > &);
	std::vector<KeyData,std::allocator<KeyData> > & operator=(std::initializer_list<KeyData>);
	std::vector<KeyData,std::allocator<KeyData> > & operator=(std::vector<KeyData,std::allocator<KeyData> > &);
	void _Assign_rv(std::vector<KeyData,std::allocator<KeyData> > &);
	void _Assign_rv(std::vector<KeyData,std::allocator<KeyData> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<KeyData,std::allocator<KeyData> > &, std::integral_constant<bool,1>);
	void push_back(const KeyData &);
	void push_back(KeyData &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<KeyData> > >, unsigned long long, const KeyData &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<KeyData> > >, const KeyData &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<KeyData> > >, std::initializer_list<KeyData>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<KeyData> > >, KeyData &);
	void assign(unsigned long long, const KeyData &);
	void assign(std::initializer_list<KeyData>);
	~vector<KeyData,std::allocator<KeyData> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<KeyData> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const KeyData &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<KeyData> get_allocator();
	KeyData & at(unsigned long long);
	const KeyData & at(unsigned long long);
	KeyData & operator[](unsigned long long);
	const KeyData & operator[](unsigned long long);
	const KeyData * data();
	KeyData * data();
	const KeyData & front();
	KeyData & front();
	const KeyData & back();
	KeyData & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<KeyData> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<KeyData> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<KeyData> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<KeyData,std::allocator<KeyData> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(KeyData *, KeyData *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const KeyData *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<KeyData> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<KeyData> > >, unsigned long long, const KeyData &);
	KeyData * _Ufill(KeyData *, unsigned long long, const KeyData *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(KeyData *, KeyData *);
};