#pragma once

struct AgMicroTransactionProductDetail
{
	AgString identifier; // 0x0
	AgString price; // 0x10
	AgMicroTransactionProductDetail(AgMicroTransactionProductDetail &);
	AgMicroTransactionProductDetail(const AgMicroTransactionProductDetail &);
	AgMicroTransactionProductDetail();
	~AgMicroTransactionProductDetail();
	AgMicroTransactionProductDetail & operator=(AgMicroTransactionProductDetail &);
	AgMicroTransactionProductDetail & operator=(const AgMicroTransactionProductDetail &);
};
class AgSingleton<AgMicroTransaction>
{
protected:
	~AgSingleton<AgMicroTransaction>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgMicroTransaction & getInstance();
	static long hasInstance();
private:
	static AgMicroTransaction * createSingleton();
	static void destroySingleton(AgMicroTransaction *);
	static AgSingleton<AgMicroTransaction> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgMicroTransaction>(const AgSingleton<AgMicroTransaction> &);
	AgSingleton<AgMicroTransaction>();
	AgSingleton<AgMicroTransaction> & operator=(const AgSingleton<AgMicroTransaction> &);
};
class AgMicroTransaction :
	AgSingleton<AgMicroTransaction>
{
public:
	AgMicroTransaction(AgMicroTransaction &);
	AgMicroTransaction(const AgMicroTransaction &);
	AgMicroTransaction();
	long canPurchaseProducts();
	std::vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> > requestProductDetails(const std::vector<AgString,std::allocator<AgString> >);
	long purchaseProduct(AgString);
	long isProductPurchased(AgString);
	long restorePurchases();
protected:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
public:
	virtual ~AgMicroTransaction();
	AgMicroTransaction & operator=(AgMicroTransaction &);
	AgMicroTransaction & operator=(const AgMicroTransaction &);
};
class std::vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> > :
	std::_Vector_alloc<std::_Vec_base_types<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgMicroTransactionProductDetail pointer;
	typedef const AgMicroTransactionProductDetail const_pointer;
	typedef AgMicroTransactionProductDetail reference;
	typedef const AgMicroTransactionProductDetail const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> >(std::initializer_list<AgMicroTransactionProductDetail>, const std::allocator<AgMicroTransactionProductDetail> &);
	vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> >(std::vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> > &, const std::allocator<AgMicroTransactionProductDetail> &);
	vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> >(std::vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> > &);
	vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> >(const std::vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> > &, const std::allocator<AgMicroTransactionProductDetail> &);
	vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> >(const std::vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> > &);
	vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> >(unsigned long long, const AgMicroTransactionProductDetail &, const std::allocator<AgMicroTransactionProductDetail> &);
	vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> >(unsigned long long, const AgMicroTransactionProductDetail &);
	vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> >(unsigned long long);
	vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> >(const std::allocator<AgMicroTransactionProductDetail> &);
	vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> >();
	void _Construct_n(unsigned long long, const AgMicroTransactionProductDetail *);
	std::vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> > & operator=(const std::vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> > &);
	std::vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> > & operator=(std::initializer_list<AgMicroTransactionProductDetail>);
	std::vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> > & operator=(std::vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> > &);
	void _Assign_rv(std::vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> > &);
	void _Assign_rv(std::vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> > &, std::integral_constant<bool,1>);
	void push_back(const AgMicroTransactionProductDetail &);
	void push_back(AgMicroTransactionProductDetail &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > >, unsigned long long, const AgMicroTransactionProductDetail &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > >, const AgMicroTransactionProductDetail &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > >, std::initializer_list<AgMicroTransactionProductDetail>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > >, AgMicroTransactionProductDetail &);
	void assign(unsigned long long, const AgMicroTransactionProductDetail &);
	void assign(std::initializer_list<AgMicroTransactionProductDetail>);
	~vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgMicroTransactionProductDetail &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgMicroTransactionProductDetail> get_allocator();
	AgMicroTransactionProductDetail & at(unsigned long long);
	const AgMicroTransactionProductDetail & at(unsigned long long);
	AgMicroTransactionProductDetail & operator[](unsigned long long);
	const AgMicroTransactionProductDetail & operator[](unsigned long long);
	const AgMicroTransactionProductDetail * data();
	AgMicroTransactionProductDetail * data();
	const AgMicroTransactionProductDetail & front();
	AgMicroTransactionProductDetail & front();
	const AgMicroTransactionProductDetail & back();
	AgMicroTransactionProductDetail & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgMicroTransactionProductDetail *, AgMicroTransactionProductDetail *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgMicroTransactionProductDetail *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgMicroTransactionProductDetail> > >, unsigned long long, const AgMicroTransactionProductDetail &);
	AgMicroTransactionProductDetail * _Ufill(AgMicroTransactionProductDetail *, unsigned long long, const AgMicroTransactionProductDetail *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgMicroTransactionProductDetail *, AgMicroTransactionProductDetail *);
};
class std::vector<AgString,std::allocator<AgString> > :
	std::_Vector_alloc<std::_Vec_base_types<AgString,std::allocator<AgString> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgString pointer;
	typedef const AgString const_pointer;
	typedef AgString reference;
	typedef const AgString const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgString,std::allocator<AgString> >(std::initializer_list<AgString>, const std::allocator<AgString> &);
	vector<AgString,std::allocator<AgString> >(std::vector<AgString,std::allocator<AgString> > &, const std::allocator<AgString> &);
	vector<AgString,std::allocator<AgString> >(std::vector<AgString,std::allocator<AgString> > &);
	vector<AgString,std::allocator<AgString> >(const std::vector<AgString,std::allocator<AgString> > &, const std::allocator<AgString> &);
	vector<AgString,std::allocator<AgString> >(const std::vector<AgString,std::allocator<AgString> > &);
	vector<AgString,std::allocator<AgString> >(unsigned long long, const AgString &, const std::allocator<AgString> &);
	vector<AgString,std::allocator<AgString> >(unsigned long long, const AgString &);
	vector<AgString,std::allocator<AgString> >(unsigned long long);
	vector<AgString,std::allocator<AgString> >(const std::allocator<AgString> &);
	vector<AgString,std::allocator<AgString> >();
	void _Construct_n(unsigned long long, const AgString *);
	std::vector<AgString,std::allocator<AgString> > & operator=(const std::vector<AgString,std::allocator<AgString> > &);
	std::vector<AgString,std::allocator<AgString> > & operator=(std::initializer_list<AgString>);
	std::vector<AgString,std::allocator<AgString> > & operator=(std::vector<AgString,std::allocator<AgString> > &);
	void _Assign_rv(std::vector<AgString,std::allocator<AgString> > &);
	void _Assign_rv(std::vector<AgString,std::allocator<AgString> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgString,std::allocator<AgString> > &, std::integral_constant<bool,1>);
	void push_back(const AgString &);
	void push_back(AgString &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgString> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgString> > >, unsigned long long, const AgString &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgString> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgString> > >, const AgString &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgString> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgString> > >, std::initializer_list<AgString>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgString> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgString> > >, AgString &);
	void assign(unsigned long long, const AgString &);
	void assign(std::initializer_list<AgString>);
	~vector<AgString,std::allocator<AgString> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgString> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgString> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgString> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgString> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgString> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgString> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgString> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgString> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgString> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgString> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgString> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgString> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgString> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgString> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgString &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgString> get_allocator();
	AgString & at(unsigned long long);
	const AgString & at(unsigned long long);
	AgString & operator[](unsigned long long);
	const AgString & operator[](unsigned long long);
	const AgString * data();
	AgString * data();
	const AgString & front();
	AgString & front();
	const AgString & back();
	AgString & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgString> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgString> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgString> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgString> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgString> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgString,std::allocator<AgString> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgString *, AgString *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgString *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgString> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgString> > >, unsigned long long, const AgString &);
	AgString * _Ufill(AgString *, unsigned long long, const AgString *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgString *, AgString *);
};