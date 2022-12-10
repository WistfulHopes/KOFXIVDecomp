#pragma once

class AgVirtualMount :
	AgMount
{
	struct FileData;
public:
	AgVirtualMount(const AgString &, AgPointer<AgUser>);
	virtual ~AgVirtualMount();
	virtual AgPointer<AgFile> open(const AgPath &, unsigned long);
	virtual long remove(const AgPath &);
	virtual long exists(const AgPath &);
	virtual AgPointer<AgDirectory> openDirectory(const AgPath &, AgStringRef, unsigned long);
	virtual long createDirectory(const AgPath &, long);
	virtual long removeDirectory(const AgPath &);
	virtual long directoryExists(const AgPath &);
	void serialize(AgPointer<AgStream>);
	void deserialize(AgPointer<AgStream>);
	long hasData();
protected:
	virtual void mount();
	AgVirtualMount::FileData * getFileData(const AgPath &, unsigned long);
	void eraseAllFiles();
	class DirectorySet;
	class FileMap;
private:
	long m_hasData; // 0x128
	std::set<AgPath,std::less<AgPath>,std::allocator<AgPath> > m_directories; // 0x130
	std::map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > > m_files; // 0x140
};
struct AgVirtualMount::FileData
{
	FileData(AgVirtualMount::FileData &);
	FileData(const AgVirtualMount::FileData &);
	FileData();
	AgPointer<AgBuffer<AgAllocator<1> > > m_data; // 0x0
	long m_changed; // 0x10
	~FileData();
	AgVirtualMount::FileData & operator=(AgVirtualMount::FileData &);
	AgVirtualMount::FileData & operator=(const AgVirtualMount::FileData &);
};
class std::set<AgPath,std::less<AgPath>,std::allocator<AgPath> > :
	std::_Tree<std::_Tset_traits<AgPath,std::less<AgPath>,std::allocator<AgPath>,0> >
{
	class _Myt;
	class _Mybase;
	class key_type;
	struct key_compare;
	struct value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgPath pointer;
	typedef const AgPath const_pointer;
	typedef AgPath reference;
	typedef const AgPath const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	class value_type;
	struct _Alty;
public:
	set<AgPath,std::less<AgPath>,std::allocator<AgPath> >(std::initializer_list<AgPath>, const std::less<AgPath> &, const std::allocator<AgPath> &);
	set<AgPath,std::less<AgPath>,std::allocator<AgPath> >(std::initializer_list<AgPath>, const std::less<AgPath> &);
	set<AgPath,std::less<AgPath>,std::allocator<AgPath> >(std::initializer_list<AgPath>);
	set<AgPath,std::less<AgPath>,std::allocator<AgPath> >(std::set<AgPath,std::less<AgPath>,std::allocator<AgPath> > &, const std::allocator<AgPath> &);
	set<AgPath,std::less<AgPath>,std::allocator<AgPath> >(std::set<AgPath,std::less<AgPath>,std::allocator<AgPath> > &);
	set<AgPath,std::less<AgPath>,std::allocator<AgPath> >(const std::less<AgPath> &, const std::allocator<AgPath> &);
	set<AgPath,std::less<AgPath>,std::allocator<AgPath> >(const std::less<AgPath> &);
	set<AgPath,std::less<AgPath>,std::allocator<AgPath> >(const std::set<AgPath,std::less<AgPath>,std::allocator<AgPath> > &, const std::allocator<AgPath> &);
	set<AgPath,std::less<AgPath>,std::allocator<AgPath> >(const std::set<AgPath,std::less<AgPath>,std::allocator<AgPath> > &);
	set<AgPath,std::less<AgPath>,std::allocator<AgPath> >(const std::allocator<AgPath> &);
	set<AgPath,std::less<AgPath>,std::allocator<AgPath> >();
	std::set<AgPath,std::less<AgPath>,std::allocator<AgPath> > & operator=(std::initializer_list<AgPath>);
	std::set<AgPath,std::less<AgPath>,std::allocator<AgPath> > & operator=(std::set<AgPath,std::less<AgPath>,std::allocator<AgPath> > &);
	std::set<AgPath,std::less<AgPath>,std::allocator<AgPath> > & operator=(const std::set<AgPath,std::less<AgPath>,std::allocator<AgPath> > &);
	void swap(std::set<AgPath,std::less<AgPath>,std::allocator<AgPath> > &);
	~set<AgPath,std::less<AgPath>,std::allocator<AgPath> >();
};
class std::map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > > :
	std::_Tree<std::_Tmap_traits<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> >,0> >
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
	typedef std::pair<AgPath const ,AgVirtualMount::FileData> pointer;
	typedef const std::pair<AgPath const ,AgVirtualMount::FileData> const_pointer;
	typedef std::pair<AgPath const ,AgVirtualMount::FileData> reference;
	typedef const std::pair<AgPath const ,AgVirtualMount::FileData> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > >(std::initializer_list<std::pair<AgPath const ,AgVirtualMount::FileData> >, const std::less<AgPath> &, const std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > &);
	map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > >(std::initializer_list<std::pair<AgPath const ,AgVirtualMount::FileData> >, const std::less<AgPath> &);
	map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > >(std::initializer_list<std::pair<AgPath const ,AgVirtualMount::FileData> >);
	map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > >(std::map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > > &, const std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > &);
	map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > >(std::map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > > &);
	map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > >(const std::less<AgPath> &, const std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > &);
	map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > >(const std::less<AgPath> &);
	map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > >(const std::map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > > &, const std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > &);
	map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > >(const std::map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > > &);
	map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > >(const std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > &);
	map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > >();
	std::map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > > & operator=(std::initializer_list<std::pair<AgPath const ,AgVirtualMount::FileData> >);
	std::map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > > & operator=(std::map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > > &);
	std::map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > > & operator=(const std::map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > > &);
	AgVirtualMount::FileData & operator[](const AgPath &);
	AgVirtualMount::FileData & operator[](AgPath &);
	void swap(std::map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > > &);
	const AgVirtualMount::FileData & at(const AgPath &);
	AgVirtualMount::FileData & at(const AgPath &);
	~map<AgPath,AgVirtualMount::FileData,std::less<AgPath>,std::allocator<std::pair<AgPath const ,AgVirtualMount::FileData> > >();
};