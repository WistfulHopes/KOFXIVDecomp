#pragma once

class AgArchiveDirectory :
	AgDirectory
{
public:
	virtual ~AgArchiveDirectory();
	virtual AgDirectory::DirectoryEntry nextEntry();
	virtual AgDirectory::DirectoryEntry firstEntry();
protected:
	void addEntry(const AgStringRef, long);
public:
	AgArchiveDirectory(const AgArchiveDirectory &);
protected:
	AgArchiveDirectory(AgPointer<AgMount>, const AgPath &, AgStringRef, unsigned long);
	std::vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> > m_entries; // 0x88
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > m_currentPos; // 0xA0
public:
	AgArchiveDirectory & operator=(const AgArchiveDirectory &);
};
class std::vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> > :
	std::_Vector_alloc<std::_Vec_base_types<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgDirectory::DirectoryEntry pointer;
	typedef const AgDirectory::DirectoryEntry const_pointer;
	typedef AgDirectory::DirectoryEntry reference;
	typedef const AgDirectory::DirectoryEntry const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> >(std::initializer_list<AgDirectory::DirectoryEntry>, const std::allocator<AgDirectory::DirectoryEntry> &);
	vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> >(std::vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> > &, const std::allocator<AgDirectory::DirectoryEntry> &);
	vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> >(std::vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> > &);
	vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> >(const std::vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> > &, const std::allocator<AgDirectory::DirectoryEntry> &);
	vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> >(const std::vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> > &);
	vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> >(unsigned long long, const AgDirectory::DirectoryEntry &, const std::allocator<AgDirectory::DirectoryEntry> &);
	vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> >(unsigned long long, const AgDirectory::DirectoryEntry &);
	vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> >(unsigned long long);
	vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> >(const std::allocator<AgDirectory::DirectoryEntry> &);
	vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> >();
	void _Construct_n(unsigned long long, const AgDirectory::DirectoryEntry *);
	std::vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> > & operator=(const std::vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> > &);
	std::vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> > & operator=(std::initializer_list<AgDirectory::DirectoryEntry>);
	std::vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> > & operator=(std::vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> > &);
	void _Assign_rv(std::vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> > &);
	void _Assign_rv(std::vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> > &, std::integral_constant<bool,1>);
	void push_back(const AgDirectory::DirectoryEntry &);
	void push_back(AgDirectory::DirectoryEntry &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > >, unsigned long long, const AgDirectory::DirectoryEntry &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > >, const AgDirectory::DirectoryEntry &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > >, std::initializer_list<AgDirectory::DirectoryEntry>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > >, AgDirectory::DirectoryEntry &);
	void assign(unsigned long long, const AgDirectory::DirectoryEntry &);
	void assign(std::initializer_list<AgDirectory::DirectoryEntry>);
	~vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgDirectory::DirectoryEntry &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgDirectory::DirectoryEntry> get_allocator();
	AgDirectory::DirectoryEntry & at(unsigned long long);
	const AgDirectory::DirectoryEntry & at(unsigned long long);
	AgDirectory::DirectoryEntry & operator[](unsigned long long);
	const AgDirectory::DirectoryEntry & operator[](unsigned long long);
	const AgDirectory::DirectoryEntry * data();
	AgDirectory::DirectoryEntry * data();
	const AgDirectory::DirectoryEntry & front();
	AgDirectory::DirectoryEntry & front();
	const AgDirectory::DirectoryEntry & back();
	AgDirectory::DirectoryEntry & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgDirectory::DirectoryEntry,std::allocator<AgDirectory::DirectoryEntry> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgDirectory::DirectoryEntry *, AgDirectory::DirectoryEntry *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgDirectory::DirectoryEntry *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgDirectory::DirectoryEntry> > >, unsigned long long, const AgDirectory::DirectoryEntry &);
	AgDirectory::DirectoryEntry * _Ufill(AgDirectory::DirectoryEntry *, unsigned long long, const AgDirectory::DirectoryEntry *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgDirectory::DirectoryEntry *, AgDirectory::DirectoryEntry *);
};