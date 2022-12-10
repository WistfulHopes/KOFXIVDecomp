#pragma once

struct DialogData
{
	std::vector<float,std::allocator<float> > allEditNumData; // 0x0
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > allTextData; // 0x18
	std::vector<int,std::allocator<int> > allComboIndexData; // 0x30
	std::vector<int,std::allocator<int> > allButtonIndexData; // 0x48
	DialogData(DialogData &);
	DialogData(const DialogData &);
	DialogData();
	~DialogData();
	DialogData & operator=(DialogData &);
	DialogData & operator=(const DialogData &);
};
class std::vector<float,std::allocator<float> > :
	std::_Vector_alloc<std::_Vec_base_types<float,std::allocator<float> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef float value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef float *pointer;
	typedef const float const_pointer;
	typedef float reference;
	typedef const float const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<float,std::allocator<float> >(std::initializer_list<float>, const std::allocator<float> &);
	vector<float,std::allocator<float> >(std::vector<float,std::allocator<float> > &, const std::allocator<float> &);
	vector<float,std::allocator<float> >(std::vector<float,std::allocator<float> > &);
	vector<float,std::allocator<float> >(const std::vector<float,std::allocator<float> > &, const std::allocator<float> &);
	vector<float,std::allocator<float> >(const std::vector<float,std::allocator<float> > &);
	vector<float,std::allocator<float> >(unsigned long long, const float &, const std::allocator<float> &);
	vector<float,std::allocator<float> >(unsigned long long, const float &);
	vector<float,std::allocator<float> >(unsigned long long);
	vector<float,std::allocator<float> >(const std::allocator<float> &);
	vector<float,std::allocator<float> >();
	void _Construct_n(unsigned long long, const float *);
	std::vector<float,std::allocator<float> > & operator=(const std::vector<float,std::allocator<float> > &);
	std::vector<float,std::allocator<float> > & operator=(std::initializer_list<float>);
	std::vector<float,std::allocator<float> > & operator=(std::vector<float,std::allocator<float> > &);
	void _Assign_rv(std::vector<float,std::allocator<float> > &);
	void _Assign_rv(std::vector<float,std::allocator<float> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<float,std::allocator<float> > &, std::integral_constant<bool,1>);
	void push_back(const float &);
	void push_back(float &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<float> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<float> > >, unsigned long long, const float &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<float> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<float> > >, const float &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<float> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<float> > >, std::initializer_list<float>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<float> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<float> > >, float &);
	void assign(unsigned long long, const float &);
	void assign(std::initializer_list<float>);
	~vector<float,std::allocator<float> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<float> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<float> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<float> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<float> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<float> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<float> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<float> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<float> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<float> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<float> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<float> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<float> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<float> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<float> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const float &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<float> get_allocator();
	float & at(unsigned long long);
	const float & at(unsigned long long);
	float & operator[](unsigned long long);
	const float & operator[](unsigned long long);
	const float * data();
	float * data();
	const float & front();
	float & front();
	const float & back();
	float & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<float> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<float> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<float> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<float> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<float> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<float,std::allocator<float> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(float *, float *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const float *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<float> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<float> > >, unsigned long long, const float &);
	float * _Ufill(float *, unsigned long long, const float *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(float *, float *);
};
class std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > :
	std::_Vector_alloc<std::_Vec_base_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > pointer;
	typedef const std::basic_string<char,std::char_traits<char>,std::allocator<char> > const_pointer;
	typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > reference;
	typedef const std::basic_string<char,std::char_traits<char>,std::allocator<char> > const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(std::initializer_list<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >, const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(unsigned long long, const std::string &, const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(unsigned long long, const std::string &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(unsigned long long);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(const std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >();
	void _Construct_n(unsigned long long, const std::string *);
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & operator=(const std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & operator=(std::initializer_list<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >);
	std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > & operator=(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	void _Assign_rv(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	void _Assign_rv(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &, std::integral_constant<bool,1>);
	void push_back(const std::string &);
	void push_back(std::string &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >, unsigned long long, const std::string &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >, const std::string &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >, std::initializer_list<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >, std::string &);
	void assign(unsigned long long, const std::string &);
	void assign(std::initializer_list<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >);
	~vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const std::string &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > get_allocator();
	std::string & at(unsigned long long);
	const std::string & at(unsigned long long);
	std::string & operator[](unsigned long long);
	const std::string & operator[](unsigned long long);
	const std::string * data();
	std::string * data();
	const std::string & front();
	std::string & front();
	const std::string & back();
	std::string & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(std::string *, std::string *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const std::string *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >, unsigned long long, const std::string &);
	std::string * _Ufill(std::string *, unsigned long long, const std::string *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(std::string *, std::string *);
};
class std::vector<int,std::allocator<int> > :
	std::_Vector_alloc<std::_Vec_base_types<int,std::allocator<int> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef long value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef long *pointer;
	typedef const long const_pointer;
	typedef long reference;
	typedef const long const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<int,std::allocator<int> >(std::initializer_list<int>, const std::allocator<int> &);
	vector<int,std::allocator<int> >(std::vector<int,std::allocator<int> > &, const std::allocator<int> &);
	vector<int,std::allocator<int> >(std::vector<int,std::allocator<int> > &);
	vector<int,std::allocator<int> >(const std::vector<int,std::allocator<int> > &, const std::allocator<int> &);
	vector<int,std::allocator<int> >(const std::vector<int,std::allocator<int> > &);
	vector<int,std::allocator<int> >(unsigned long long, const long &, const std::allocator<int> &);
	vector<int,std::allocator<int> >(unsigned long long, const long &);
	vector<int,std::allocator<int> >(unsigned long long);
	vector<int,std::allocator<int> >(const std::allocator<int> &);
	vector<int,std::allocator<int> >();
	void _Construct_n(unsigned long long, const long *);
	std::vector<int,std::allocator<int> > & operator=(const std::vector<int,std::allocator<int> > &);
	std::vector<int,std::allocator<int> > & operator=(std::initializer_list<int>);
	std::vector<int,std::allocator<int> > & operator=(std::vector<int,std::allocator<int> > &);
	void _Assign_rv(std::vector<int,std::allocator<int> > &);
	void _Assign_rv(std::vector<int,std::allocator<int> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<int,std::allocator<int> > &, std::integral_constant<bool,1>);
	void push_back(const long &);
	void push_back(long &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int> > >, unsigned long long, const long &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int> > >, const long &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int> > >, std::initializer_list<int>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int> > >, long &);
	void assign(unsigned long long, const long &);
	void assign(std::initializer_list<int>);
	~vector<int,std::allocator<int> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const long &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<int> get_allocator();
	long & at(unsigned long long);
	const long & at(unsigned long long);
	long & operator[](unsigned long long);
	const long & operator[](unsigned long long);
	const long * data();
	long * data();
	const long & front();
	long & front();
	const long & back();
	long & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<int,std::allocator<int> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(long *, long *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const long *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int> > >, unsigned long long, const long &);
	long * _Ufill(long *, unsigned long long, const long *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(long *, long *);
};
struct DialogChartData
{
	std::vector<ChartData,std::allocator<ChartData> > dialogChartData; // 0x0
	DialogChartData(DialogChartData &);
	DialogChartData(const DialogChartData &);
	DialogChartData();
	~DialogChartData();
	DialogChartData & operator=(DialogChartData &);
	DialogChartData & operator=(const DialogChartData &);
};
class std::vector<ChartData,std::allocator<ChartData> > :
	std::_Vector_alloc<std::_Vec_base_types<ChartData,std::allocator<ChartData> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef ChartData pointer;
	typedef const ChartData const_pointer;
	typedef ChartData reference;
	typedef const ChartData const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<ChartData,std::allocator<ChartData> >(std::initializer_list<ChartData>, const std::allocator<ChartData> &);
	vector<ChartData,std::allocator<ChartData> >(std::vector<ChartData,std::allocator<ChartData> > &, const std::allocator<ChartData> &);
	vector<ChartData,std::allocator<ChartData> >(std::vector<ChartData,std::allocator<ChartData> > &);
	vector<ChartData,std::allocator<ChartData> >(const std::vector<ChartData,std::allocator<ChartData> > &, const std::allocator<ChartData> &);
	vector<ChartData,std::allocator<ChartData> >(const std::vector<ChartData,std::allocator<ChartData> > &);
	vector<ChartData,std::allocator<ChartData> >(unsigned long long, const ChartData &, const std::allocator<ChartData> &);
	vector<ChartData,std::allocator<ChartData> >(unsigned long long, const ChartData &);
	vector<ChartData,std::allocator<ChartData> >(unsigned long long);
	vector<ChartData,std::allocator<ChartData> >(const std::allocator<ChartData> &);
	vector<ChartData,std::allocator<ChartData> >();
	void _Construct_n(unsigned long long, const ChartData *);
	std::vector<ChartData,std::allocator<ChartData> > & operator=(const std::vector<ChartData,std::allocator<ChartData> > &);
	std::vector<ChartData,std::allocator<ChartData> > & operator=(std::initializer_list<ChartData>);
	std::vector<ChartData,std::allocator<ChartData> > & operator=(std::vector<ChartData,std::allocator<ChartData> > &);
	void _Assign_rv(std::vector<ChartData,std::allocator<ChartData> > &);
	void _Assign_rv(std::vector<ChartData,std::allocator<ChartData> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<ChartData,std::allocator<ChartData> > &, std::integral_constant<bool,1>);
	void push_back(const ChartData &);
	void push_back(ChartData &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ChartData> > >, unsigned long long, const ChartData &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ChartData> > >, const ChartData &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ChartData> > >, std::initializer_list<ChartData>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ChartData> > >, ChartData &);
	void assign(unsigned long long, const ChartData &);
	void assign(std::initializer_list<ChartData>);
	~vector<ChartData,std::allocator<ChartData> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ChartData> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const ChartData &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<ChartData> get_allocator();
	ChartData & at(unsigned long long);
	const ChartData & at(unsigned long long);
	ChartData & operator[](unsigned long long);
	const ChartData & operator[](unsigned long long);
	const ChartData * data();
	ChartData * data();
	const ChartData & front();
	ChartData & front();
	const ChartData & back();
	ChartData & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ChartData> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ChartData> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ChartData> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<ChartData,std::allocator<ChartData> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(ChartData *, ChartData *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const ChartData *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ChartData> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ChartData> > >, unsigned long long, const ChartData &);
	ChartData * _Ufill(ChartData *, unsigned long long, const ChartData *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(ChartData *, ChartData *);
};