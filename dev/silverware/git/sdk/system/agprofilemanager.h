#pragma once

class std::map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > :
	std::_Tree<std::_Tmap_traits<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > >,0> >
{
	class _Myt;
	class _Mybase;
	typedef unsigned long long key_type;
	class mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<unsigned __int64 const ,AgPointer<AgProfile> > pointer;
	typedef const std::pair<unsigned __int64 const ,AgPointer<AgProfile> > const_pointer;
	typedef std::pair<unsigned __int64 const ,AgPointer<AgProfile> > reference;
	typedef const std::pair<unsigned __int64 const ,AgPointer<AgProfile> > const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > >(std::initializer_list<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > >, const std::less<unsigned __int64> &, const std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > &);
	map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > >(std::initializer_list<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > >, const std::less<unsigned __int64> &);
	map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > >(std::initializer_list<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > >);
	map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > >(std::map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > &, const std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > &);
	map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > >(std::map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > &);
	map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > >(const std::less<unsigned __int64> &, const std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > &);
	map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > >(const std::less<unsigned __int64> &);
	map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > >(const std::map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > &, const std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > &);
	map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > >(const std::map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > &);
	map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > >(const std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > &);
	map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > >();
	std::map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > & operator=(std::initializer_list<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > >);
	std::map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > & operator=(std::map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > &);
	std::map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > & operator=(const std::map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > &);
	AgPointer<AgProfile> & operator[](const unsigned long long &);
	AgPointer<AgProfile> & operator[](unsigned long long &);
	void swap(std::map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > &);
	const AgPointer<AgProfile> & at(const unsigned long long &);
	AgPointer<AgProfile> & at(const unsigned long long &);
	~map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > >();
};
class std::map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > > :
	std::_Tree<std::_Tmap_traits<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > >,0> >
{
	class _Myt;
	class _Mybase;
	typedef long long key_type;
	class mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<__int64 const ,AgPointer<AgProfile> > pointer;
	typedef const std::pair<__int64 const ,AgPointer<AgProfile> > const_pointer;
	typedef std::pair<__int64 const ,AgPointer<AgProfile> > reference;
	typedef const std::pair<__int64 const ,AgPointer<AgProfile> > const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > >(std::initializer_list<std::pair<__int64 const ,AgPointer<AgProfile> > >, const std::less<__int64> &, const std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > &);
	map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > >(std::initializer_list<std::pair<__int64 const ,AgPointer<AgProfile> > >, const std::less<__int64> &);
	map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > >(std::initializer_list<std::pair<__int64 const ,AgPointer<AgProfile> > >);
	map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > >(std::map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > > &, const std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > &);
	map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > >(std::map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > > &);
	map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > >(const std::less<__int64> &, const std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > &);
	map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > >(const std::less<__int64> &);
	map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > >(const std::map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > > &, const std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > &);
	map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > >(const std::map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > > &);
	map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > >(const std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > &);
	map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > >();
	std::map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > > & operator=(std::initializer_list<std::pair<__int64 const ,AgPointer<AgProfile> > >);
	std::map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > > & operator=(std::map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > > &);
	std::map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > > & operator=(const std::map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > > &);
	AgPointer<AgProfile> & operator[](const long long &);
	AgPointer<AgProfile> & operator[](long long &);
	void swap(std::map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > > &);
	const AgPointer<AgProfile> & at(const long long &);
	AgPointer<AgProfile> & at(const long long &);
	~map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > >();
};
class AgProfileManager :
	AgSingleton<AgProfileManager>
{
public:
	AgProfileManager(AgProfileManager &);
	AgProfileManager(const AgProfileManager &);
	AgProfileManager();
	AgPointer<AgProfile> getProfile(long long);
	AgPointer<AgProfile> getProfile(unsigned long long);
protected:
	unsigned long long getUniqueProfileId();
	unsigned long long m_nextProfileId; // 0x8
	std::map<unsigned __int64,AgPointer<AgProfile>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,AgPointer<AgProfile> > > > m_profiles; // 0x10
	std::map<__int64,AgPointer<AgProfile>,std::less<__int64>,std::allocator<std::pair<__int64 const ,AgPointer<AgProfile> > > > m_userProfiles; // 0x20
public:
	static AgProfileManager * createSingleton();
protected:
	void update();
	virtual long onSingletonInit();
	virtual long onSingletonExit();
	void addProfile(AgPointer<AgProfile>);
	void removeProfile(AgPointer<AgProfile>);
public:
	virtual ~AgProfileManager();
	AgProfileManager & operator=(AgProfileManager &);
	AgProfileManager & operator=(const AgProfileManager &);
};
class AgSingleton<AgProfileManager>
{
protected:
	~AgSingleton<AgProfileManager>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgProfileManager & getInstance();
	static long hasInstance();
private:
	static AgProfileManager * createSingleton();
	static void destroySingleton(AgProfileManager *);
	static AgSingleton<AgProfileManager> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgProfileManager>(const AgSingleton<AgProfileManager> &);
	AgSingleton<AgProfileManager>();
	AgSingleton<AgProfileManager> & operator=(const AgSingleton<AgProfileManager> &);
};