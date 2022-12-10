#pragma once

struct std::binary_function<AgString,AgString,bool>
{
	class first_argument_type;
	class second_argument_type;
	typedef bool result_type;
};
struct AgArchiveMapCompare :
	std::binary_function<AgString,AgString,bool>
{
	bool operator()(const AgString &, const AgString &);
};
class AgArchive :
	AgMount
{
public:
	AgArchive(const AgString &, const AgString &);
	long containsFile(const AgString &);
	virtual AgPointer<AgDirectory> openDirectory(const AgPath &, AgStringRef, unsigned long);
	virtual AgPointer<AgFile> open(const AgPath &, unsigned long);
	virtual long exists(const AgPath &);
	void addOverlay(AgPointer<AgArchive>);
	void removeOverlay(AgPointer<AgArchive>);
protected:
	AgPointer<AgStream> createSourceStreamPtr();
	long isEncrypted();
	struct ArchiveEntry;
	struct DirectoryEntry;
private:
	virtual void mount();
	void _create(AgPointer<AgStream>);
	AgString m_sourceFileName; // 0x128
	std::map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > > m_archiveEntries; // 0x138
	std::map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > > m_directories; // 0x148
	class DirectoryMap;
	long m_isEncrypted; // 0x158
	unsigned long long m_archiveSize; // 0x160
	unsigned long long m_dataOffset; // 0x168
	class OverlayList;
	std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > m_overlays; // 0x170
public:
	virtual ~AgArchive();
};
long AgArchive::exists(const AgPath & path); // 0x14066EE10
class AgPointer<AgArchive>
{
public:
	AgPointer<AgArchive>(const AgReference<AgArchive> &);
	AgPointer<AgArchive>(AgPointer<AgArchive> &);
	AgPointer<AgArchive>(const AgPointer<AgArchive> &);
	AgPointer<AgArchive>(AgArchive *);
	AgPointer<AgArchive>();
	~AgPointer<AgArchive>();
	AgPointer<AgArchive> & operator=(AgPointer<AgArchive> &);
	AgPointer<AgArchive> & operator=(const AgReference<AgArchive> &);
	AgPointer<AgArchive> & operator=(const AgPointer<AgArchive> &);
	AgPointer<AgArchive> & operator=(AgArchive *);
	bool operator<(const AgPointer<AgArchive> &);
	AgArchive * operator->();
	AgArchive & operator*();
	bool operator==(const AgPointer<AgArchive> &);
	bool operator==(AgArchive *);
	bool operator!=(const AgPointer<AgArchive> &);
	bool operator!=(AgArchive *);
	AgArchive * getObject();
	void swap(AgPointer<AgArchive> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgArchive * m_ptr; // 0x8
};
class AgPointer<AgArchive>
{
public:
	AgPointer<AgArchive>(const AgReference<AgArchive> &);
	AgPointer<AgArchive>(AgPointer<AgArchive> &);
	AgPointer<AgArchive>(const AgPointer<AgArchive> &);
	AgPointer<AgArchive>(AgArchive *);
	AgPointer<AgArchive>();
	~AgPointer<AgArchive>();
	AgPointer<AgArchive> & operator=(AgPointer<AgArchive> &);
	AgPointer<AgArchive> & operator=(const AgReference<AgArchive> &);
	AgPointer<AgArchive> & operator=(const AgPointer<AgArchive> &);
	AgPointer<AgArchive> & operator=(AgArchive *);
	bool operator<(const AgPointer<AgArchive> &);
	AgArchive * operator->();
	AgArchive & operator*();
	bool operator==(const AgPointer<AgArchive> &);
	bool operator==(AgArchive *);
	bool operator!=(const AgPointer<AgArchive> &);
	bool operator!=(AgArchive *);
	AgArchive * getObject();
	void swap(AgPointer<AgArchive> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgArchive * m_ptr; // 0x8
public:
	AgPointer<AgMount> operator class AgPointer<class AgMount>();
};
struct AgArchive::ArchiveEntry
{
	AgString m_fileName; // 0x0
	unsigned long long m_offset; // 0x10
	unsigned long long m_size; // 0x18
	ArchiveEntry(AgArchive::ArchiveEntry &);
	ArchiveEntry(const AgArchive::ArchiveEntry &);
	ArchiveEntry();
	~ArchiveEntry();
	AgArchive::ArchiveEntry & operator=(AgArchive::ArchiveEntry &);
	AgArchive::ArchiveEntry & operator=(const AgArchive::ArchiveEntry &);
};
struct AgArchive::DirectoryEntry
{
	DirectoryEntry(AgArchive::DirectoryEntry &);
	DirectoryEntry(const AgArchive::DirectoryEntry &);
	DirectoryEntry(AgStringRef, long);
	AgString m_name; // 0x0
	long m_isDirectory; // 0x10
	~DirectoryEntry();
	AgArchive::DirectoryEntry & operator=(AgArchive::DirectoryEntry &);
	AgArchive::DirectoryEntry & operator=(const AgArchive::DirectoryEntry &);
};
class std::map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > > :
	std::_Tree<std::_Tmap_traits<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> >,0> >
{
	class _Myt;
	class _Mybase;
	class key_type;
	struct mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<AgString const ,AgArchive::ArchiveEntry> pointer;
	typedef const std::pair<AgString const ,AgArchive::ArchiveEntry> const_pointer;
	typedef std::pair<AgString const ,AgArchive::ArchiveEntry> reference;
	typedef const std::pair<AgString const ,AgArchive::ArchiveEntry> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > >(std::initializer_list<std::pair<AgString const ,AgArchive::ArchiveEntry> >, const AgArchiveMapCompare &, const std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > &);
	map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > >(std::initializer_list<std::pair<AgString const ,AgArchive::ArchiveEntry> >, const AgArchiveMapCompare &);
	map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > >(std::initializer_list<std::pair<AgString const ,AgArchive::ArchiveEntry> >);
	map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > >(std::map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > > &, const std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > &);
	map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > >(std::map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > > &);
	map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > >(const AgArchiveMapCompare &, const std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > &);
	map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > >(const AgArchiveMapCompare &);
	map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > >(const std::map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > > &, const std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > &);
	map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > >(const std::map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > > &);
	map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > >(const std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > &);
	map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > >();
	std::map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > > & operator=(std::initializer_list<std::pair<AgString const ,AgArchive::ArchiveEntry> >);
	std::map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > > & operator=(std::map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > > &);
	std::map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > > & operator=(const std::map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > > &);
	AgArchive::ArchiveEntry & operator[](const AgString &);
	AgArchive::ArchiveEntry & operator[](AgString &);
	void swap(std::map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > > &);
	const AgArchive::ArchiveEntry & at(const AgString &);
	AgArchive::ArchiveEntry & at(const AgString &);
	~map<AgString,AgArchive::ArchiveEntry,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,AgArchive::ArchiveEntry> > >();
};
class std::map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > > :
	std::_Tree<std::_Tmap_traits<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > >,0> >
{
	class _Myt;
	class _Mybase;
	class key_type;
	class mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > pointer;
	typedef const std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > const_pointer;
	typedef std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > reference;
	typedef const std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > >(std::initializer_list<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > >, const AgArchiveMapCompare &, const std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > &);
	map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > >(std::initializer_list<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > >, const AgArchiveMapCompare &);
	map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > >(std::initializer_list<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > >);
	map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > >(std::map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > > &, const std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > &);
	map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > >(std::map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > > &);
	map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > >(const AgArchiveMapCompare &, const std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > &);
	map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > >(const AgArchiveMapCompare &);
	map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > >(const std::map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > > &, const std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > &);
	map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > >(const std::map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > > &);
	map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > >(const std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > &);
	map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > >();
	std::map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > > & operator=(std::initializer_list<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > >);
	std::map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > > & operator=(std::map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > > &);
	std::map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > > & operator=(const std::map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > > &);
	std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > & operator[](const AgString &);
	std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > & operator[](AgString &);
	void swap(std::map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > > &);
	const std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > & at(const AgString &);
	std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > & at(const AgString &);
	~map<AgString,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >,AgArchiveMapCompare,std::allocator<std::pair<AgString const ,std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > > > >();
};
class std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > :
	std::_Vector_alloc<std::_Vec_base_types<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgArchive::DirectoryEntry pointer;
	typedef const AgArchive::DirectoryEntry const_pointer;
	typedef AgArchive::DirectoryEntry reference;
	typedef const AgArchive::DirectoryEntry const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >(std::initializer_list<AgArchive::DirectoryEntry>, const std::allocator<AgArchive::DirectoryEntry> &);
	vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >(std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > &, const std::allocator<AgArchive::DirectoryEntry> &);
	vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >(std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > &);
	vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >(const std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > &, const std::allocator<AgArchive::DirectoryEntry> &);
	vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >(const std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > &);
	vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >(unsigned long long, const AgArchive::DirectoryEntry &, const std::allocator<AgArchive::DirectoryEntry> &);
	vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >(unsigned long long, const AgArchive::DirectoryEntry &);
	vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >(unsigned long long);
	vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >(const std::allocator<AgArchive::DirectoryEntry> &);
	vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >();
	void _Construct_n(unsigned long long, const AgArchive::DirectoryEntry *);
	std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > & operator=(const std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > &);
	std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > & operator=(std::initializer_list<AgArchive::DirectoryEntry>);
	std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > & operator=(std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > &);
	void _Assign_rv(std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > &);
	void _Assign_rv(std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > &, std::integral_constant<bool,1>);
	void push_back(const AgArchive::DirectoryEntry &);
	void push_back(AgArchive::DirectoryEntry &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > >, unsigned long long, const AgArchive::DirectoryEntry &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > >, const AgArchive::DirectoryEntry &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > >, std::initializer_list<AgArchive::DirectoryEntry>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > >, AgArchive::DirectoryEntry &);
	void assign(unsigned long long, const AgArchive::DirectoryEntry &);
	void assign(std::initializer_list<AgArchive::DirectoryEntry>);
	~vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgArchive::DirectoryEntry &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgArchive::DirectoryEntry> get_allocator();
	AgArchive::DirectoryEntry & at(unsigned long long);
	const AgArchive::DirectoryEntry & at(unsigned long long);
	AgArchive::DirectoryEntry & operator[](unsigned long long);
	const AgArchive::DirectoryEntry & operator[](unsigned long long);
	const AgArchive::DirectoryEntry * data();
	AgArchive::DirectoryEntry * data();
	const AgArchive::DirectoryEntry & front();
	AgArchive::DirectoryEntry & front();
	const AgArchive::DirectoryEntry & back();
	AgArchive::DirectoryEntry & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgArchive::DirectoryEntry,std::allocator<AgArchive::DirectoryEntry> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgArchive::DirectoryEntry *, AgArchive::DirectoryEntry *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgArchive::DirectoryEntry *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgArchive::DirectoryEntry> > >, unsigned long long, const AgArchive::DirectoryEntry &);
	AgArchive::DirectoryEntry * _Ufill(AgArchive::DirectoryEntry *, unsigned long long, const AgArchive::DirectoryEntry *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgArchive::DirectoryEntry *, AgArchive::DirectoryEntry *);
};
class std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > :
	std::_List_buy<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > >
{
	class _Myt;
	class _Mybase;
	struct _Node;
	typedef std::_List_node<AgPointer<AgArchive>,void *> _Nodeptr;
	struct _Alty;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgPointer<AgArchive> pointer;
	typedef const AgPointer<AgArchive> const_pointer;
	typedef AgPointer<AgArchive> reference;
	typedef const AgPointer<AgArchive> const_reference;
	class value_type;
	class const_iterator;
	class iterator;
	class _Unchecked_const_iterator;
	class _Unchecked_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > >(std::initializer_list<AgPointer<AgArchive> >, const std::allocator<AgPointer<AgArchive> > &);
	list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > >(std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > &, const std::allocator<AgPointer<AgArchive> > &);
	list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > >(std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > &);
	list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > >(const std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > &, const std::allocator<AgPointer<AgArchive> > &);
	list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > >(const std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > &);
	list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > >(unsigned long long, const AgPointer<AgArchive> &, const std::allocator<AgPointer<AgArchive> > &);
	list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > >(unsigned long long, const AgPointer<AgArchive> &);
	list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > >(unsigned long long);
	list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > >(const std::allocator<AgPointer<AgArchive> > &);
	list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > >();
	void _Construct_n(unsigned long long, const AgPointer<AgArchive> &);
	std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > & operator=(const std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > &);
	std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > & operator=(std::initializer_list<AgPointer<AgArchive> >);
	std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > & operator=(std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > &);
	void _Assign_rv(std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > &);
	void push_front(const AgPointer<AgArchive> &);
	void push_front(AgPointer<AgArchive> &);
	void push_back(const AgPointer<AgArchive> &);
	void push_back(AgPointer<AgArchive> &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >, unsigned long long, const AgPointer<AgArchive> &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >, const AgPointer<AgArchive> &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >, std::initializer_list<AgPointer<AgArchive> >);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >, AgPointer<AgArchive> &);
	void assign(unsigned long long, const AgPointer<AgArchive> &);
	void assign(std::initializer_list<AgPointer<AgArchive> >);
	~list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > >();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > begin();
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > begin();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > end();
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > end();
	std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > >,std::_Iterator_base0> _Unchecked_begin();
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > _Unchecked_begin();
	std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > >,std::_Iterator_base0> _Unchecked_end();
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > _Unchecked_end();
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > _Make_iter(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > >,std::_Iterator_base0>);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > _Make_iter(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >);
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > > rbegin();
	std::reverse_iterator<std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > > rbegin();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > > rend();
	std::reverse_iterator<std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > > rend();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > cbegin();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > cend();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > > crbegin();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > > crend();
	void resize(unsigned long long, const AgPointer<AgArchive> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgPointer<AgArchive> > get_allocator();
	const AgPointer<AgArchive> & front();
	AgPointer<AgArchive> & front();
	const AgPointer<AgArchive> & back();
	AgPointer<AgArchive> & back();
	void pop_front();
	void pop_back();
	std::_List_node<AgPointer<AgArchive>,void *> * _Unlinknode(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > erase(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > > erase(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >);
	void _Unchecked_erase(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > >,std::_Iterator_base0>);
	void clear();
	void swap(std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > &);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >, std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >, std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >, std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >, std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >, std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > &);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >, std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > &);
	void remove(const AgPointer<AgArchive> &);
	void unique();
	void merge(std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > &);
	void merge(std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > &);
	void sort();
	void reverse();
	void _Splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >, std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >, unsigned long long);
	void _Splice_same(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >, std::list<AgPointer<AgArchive>,std::allocator<AgPointer<AgArchive> > > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > > >, unsigned long long);
	void _Unchecked_splice(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > >,std::_Iterator_base0>, std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > >,std::_Iterator_base0>, std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > >,std::_Iterator_base0>);
	void _Tidy();
	void _Insert_n(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgPointer<AgArchive> > >,std::_Iterator_base0>, unsigned long long, const AgPointer<AgArchive> &);
	void _Incsize(unsigned long long);
};