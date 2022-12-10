#pragma once

class AgLocalizationManager :
	AgSingleton<AgLocalizationManager>
{
public:
	AgLocalizationManager(const AgLocalizationManager &);
	AgLocalizationManager();
	virtual ~AgLocalizationManager();
	void loadLocalizationData(AgPointer<AgStream>);
	AgStringRef getStringByIndex(unsigned long, long);
	AgStringRef getStringById(AgStringRef, long);
	unsigned long getStringIndexById(AgStringRef);
	const AgPointer<AgLanguage> getLanguageByIndex(long);
	void setLanguageIndex(long);
	long getCurrentLanguageIndex();
	const long getLanguageIndexForSystemLanguage(AgLocale::SystemLanguage);
	AgLocale::SystemLanguage getSystemLanguageForLanguageIndex(long);
	unsigned long getNumLanguages();
protected:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
private:
	unsigned long _lookupStringIndexById(AgStringRef);
	long m_currentLanguage; // 0x8
	unsigned long m_systemDefaultLanguage; // 0xC
	std::vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > > m_languages; // 0x10
	std::map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > > m_localizationIdentifiers; // 0x28
	std::map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > > m_systemLanguageLookup; // 0x38
public:
	AgLocalizationManager & operator=(const AgLocalizationManager &);
};
class AgSingleton<AgLocalizationManager>
{
protected:
	~AgSingleton<AgLocalizationManager>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgLocalizationManager & getInstance();
	static long hasInstance();
private:
	static AgLocalizationManager * createSingleton();
	static void destroySingleton(AgLocalizationManager *);
	static AgSingleton<AgLocalizationManager> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgLocalizationManager>(const AgSingleton<AgLocalizationManager> &);
	AgSingleton<AgLocalizationManager>();
	AgSingleton<AgLocalizationManager> & operator=(const AgSingleton<AgLocalizationManager> &);
};
class AgPointer<AgLanguage>
{
public:
	AgPointer<AgLanguage>(const AgReference<AgLanguage> &);
	AgPointer<AgLanguage>(AgPointer<AgLanguage> &);
	AgPointer<AgLanguage>(const AgPointer<AgLanguage> &);
	AgPointer<AgLanguage>(AgLanguage *);
	AgPointer<AgLanguage>();
	~AgPointer<AgLanguage>();
	AgPointer<AgLanguage> & operator=(AgPointer<AgLanguage> &);
	AgPointer<AgLanguage> & operator=(const AgReference<AgLanguage> &);
	AgPointer<AgLanguage> & operator=(const AgPointer<AgLanguage> &);
	AgPointer<AgLanguage> & operator=(AgLanguage *);
	bool operator<(const AgPointer<AgLanguage> &);
	AgLanguage * operator->();
	AgLanguage & operator*();
	bool operator==(const AgPointer<AgLanguage> &);
	bool operator==(AgLanguage *);
	bool operator!=(const AgPointer<AgLanguage> &);
	bool operator!=(AgLanguage *);
	AgLanguage * getObject();
	void swap(AgPointer<AgLanguage> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgLanguage * m_ptr; // 0x8
};
class std::vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgPointer<AgLanguage> pointer;
	typedef const AgPointer<AgLanguage> const_pointer;
	typedef AgPointer<AgLanguage> reference;
	typedef const AgPointer<AgLanguage> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > >(std::initializer_list<AgPointer<AgLanguage> >, const std::allocator<AgPointer<AgLanguage> > &);
	vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > >(std::vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > > &, const std::allocator<AgPointer<AgLanguage> > &);
	vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > >(std::vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > > &);
	vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > >(const std::vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > > &, const std::allocator<AgPointer<AgLanguage> > &);
	vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > >(const std::vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > > &);
	vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > >(unsigned long long, const AgPointer<AgLanguage> &, const std::allocator<AgPointer<AgLanguage> > &);
	vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > >(unsigned long long, const AgPointer<AgLanguage> &);
	vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > >(unsigned long long);
	vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > >(const std::allocator<AgPointer<AgLanguage> > &);
	vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > >();
	void _Construct_n(unsigned long long, const AgPointer<AgLanguage> *);
	std::vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > > & operator=(const std::vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > > &);
	std::vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > > & operator=(std::initializer_list<AgPointer<AgLanguage> >);
	std::vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > > & operator=(std::vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > > &);
	void _Assign_rv(std::vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > > &);
	void _Assign_rv(std::vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > > &, std::integral_constant<bool,1>);
	void push_back(const AgPointer<AgLanguage> &);
	void push_back(AgPointer<AgLanguage> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > >, unsigned long long, const AgPointer<AgLanguage> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > >, const AgPointer<AgLanguage> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > >, std::initializer_list<AgPointer<AgLanguage> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > >, AgPointer<AgLanguage> &);
	void assign(unsigned long long, const AgPointer<AgLanguage> &);
	void assign(std::initializer_list<AgPointer<AgLanguage> >);
	~vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgPointer<AgLanguage> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgPointer<AgLanguage> > get_allocator();
	AgPointer<AgLanguage> & at(unsigned long long);
	const AgPointer<AgLanguage> & at(unsigned long long);
	AgPointer<AgLanguage> & operator[](unsigned long long);
	const AgPointer<AgLanguage> & operator[](unsigned long long);
	const AgPointer<AgLanguage> * data();
	AgPointer<AgLanguage> * data();
	const AgPointer<AgLanguage> & front();
	AgPointer<AgLanguage> & front();
	const AgPointer<AgLanguage> & back();
	AgPointer<AgLanguage> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgPointer<AgLanguage>,std::allocator<AgPointer<AgLanguage> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgPointer<AgLanguage> *, AgPointer<AgLanguage> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgPointer<AgLanguage> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgLanguage> > > >, unsigned long long, const AgPointer<AgLanguage> &);
	AgPointer<AgLanguage> * _Ufill(AgPointer<AgLanguage> *, unsigned long long, const AgPointer<AgLanguage> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgPointer<AgLanguage> *, AgPointer<AgLanguage> *);
};
class std::map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > > :
	std::_Tree<std::_Tmap_traits<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> >,0> >
{
	class _Myt;
	class _Mybase;
	class key_type;
	typedef unsigned long mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<AgString const ,unsigned int> pointer;
	typedef const std::pair<AgString const ,unsigned int> const_pointer;
	typedef std::pair<AgString const ,unsigned int> reference;
	typedef const std::pair<AgString const ,unsigned int> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > >(std::initializer_list<std::pair<AgString const ,unsigned int> >, const std::less<AgString> &, const std::allocator<std::pair<AgString const ,unsigned int> > &);
	map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > >(std::initializer_list<std::pair<AgString const ,unsigned int> >, const std::less<AgString> &);
	map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > >(std::initializer_list<std::pair<AgString const ,unsigned int> >);
	map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > >(std::map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > > &, const std::allocator<std::pair<AgString const ,unsigned int> > &);
	map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > >(std::map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > > &);
	map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > >(const std::less<AgString> &, const std::allocator<std::pair<AgString const ,unsigned int> > &);
	map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > >(const std::less<AgString> &);
	map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > >(const std::map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > > &, const std::allocator<std::pair<AgString const ,unsigned int> > &);
	map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > >(const std::map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > > &);
	map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > >(const std::allocator<std::pair<AgString const ,unsigned int> > &);
	map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > >();
	std::map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > > & operator=(std::initializer_list<std::pair<AgString const ,unsigned int> >);
	std::map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > > & operator=(std::map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > > &);
	std::map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > > & operator=(const std::map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > > &);
	unsigned long & operator[](const AgString &);
	unsigned long & operator[](AgString &);
	void swap(std::map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > > &);
	const unsigned long & at(const AgString &);
	unsigned long & at(const AgString &);
	~map<AgString,unsigned int,std::less<AgString>,std::allocator<std::pair<AgString const ,unsigned int> > >();
};
class std::map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > > :
	std::_Tree<std::_Tmap_traits<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> >,0> >
{
	class _Myt;
	class _Mybase;
	enum key_type
	{
		SystemLanguage_None = 0,
		SystemLanguage_English_GB = 1,
		SystemLanguage_English_US = 2,
		SystemLanguage_French = 3,
		SystemLanguage_Italian = 4,
		SystemLanguage_German = 5,
		SystemLanguage_Spanish = 6,
		SystemLanguage_Spanish_Latin = 7,
		SystemLanguage_Portuguese = 8,
		SystemLanguage_Portuguese_Brazil = 9,
		SystemLanguage_Polish = 10,
		SystemLanguage_Russian = 11,
		SystemLanguage_Japanese = 12,
		SystemLanguage_Korean = 13,
		SystemLanguage_Chinese_Traditional = 14,
		SystemLanguage_Chinese_Simplified = 15,
		SystemLanguage_Finnish = 16,
		SystemLanguage_Swedish = 17,
		SystemLanguage_Danish = 18,
		SystemLanguage_Norwegian = 19,
		SystemLanguage_Turkish = 20,
		SystemLanguage_Dutch = 21,
	};
	typedef unsigned long mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<enum AgLocale::SystemLanguage const ,unsigned int> pointer;
	typedef const std::pair<enum AgLocale::SystemLanguage const ,unsigned int> const_pointer;
	typedef std::pair<enum AgLocale::SystemLanguage const ,unsigned int> reference;
	typedef const std::pair<enum AgLocale::SystemLanguage const ,unsigned int> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > >(std::initializer_list<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> >, const std::less<enum AgLocale::SystemLanguage> &, const std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > &);
	map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > >(std::initializer_list<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> >, const std::less<enum AgLocale::SystemLanguage> &);
	map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > >(std::initializer_list<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> >);
	map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > >(std::map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > > &, const std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > &);
	map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > >(std::map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > > &);
	map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > >(const std::less<enum AgLocale::SystemLanguage> &, const std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > &);
	map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > >(const std::less<enum AgLocale::SystemLanguage> &);
	map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > >(const std::map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > > &, const std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > &);
	map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > >(const std::map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > > &);
	map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > >(const std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > &);
	map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > >();
	std::map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > > & operator=(std::initializer_list<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> >);
	std::map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > > & operator=(std::map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > > &);
	std::map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > > & operator=(const std::map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > > &);
	unsigned long & operator[](const AgLocale::SystemLanguage &);
	unsigned long & operator[](AgLocale::SystemLanguage &);
	void swap(std::map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > > &);
	const unsigned long & at(const AgLocale::SystemLanguage &);
	unsigned long & at(const AgLocale::SystemLanguage &);
	~map<enum AgLocale::SystemLanguage,unsigned int,std::less<enum AgLocale::SystemLanguage>,std::allocator<std::pair<enum AgLocale::SystemLanguage const ,unsigned int> > >();
};