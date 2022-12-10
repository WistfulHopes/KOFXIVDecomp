#pragma once

class SteamNameCache
{
private:
	static SteamNameCache * ms_instance; // 0xFFFFFFFFFFFFFFFF
	std::vector<CSteamID,std::allocator<CSteamID> > m_requests; // 0x0
	std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > > m_reverseLUT; // 0x18
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_myName; // 0x28
public:
	static void createInstance();
	static void destroyInstance();
	static long hasInstance();
	static SteamNameCache & getInstance();
	SteamNameCache(SteamNameCache &);
	SteamNameCache(const SteamNameCache &);
	SteamNameCache();
	void request(CSteamID);
	const char * getName(CSteamID);
	const char * getMyName();
	long isBusy();
	long getID(const char *, CSteamID &);
	struct CCallbackInternal_OnPersonaStateChange;
	SteamNameCache::CCallbackInternal_OnPersonaStateChange m_steamcallback_OnPersonaStateChange; // 0x48
	void OnPersonaStateChange(PersonaStateChange_t *);
private:
	static void escapePersonaName(std::string &);
public:
	~SteamNameCache();
	SteamNameCache & operator=(SteamNameCache &);
	SteamNameCache & operator=(const SteamNameCache &);
};
class std::vector<CSteamID,std::allocator<CSteamID> > :
	std::_Vector_alloc<std::_Vec_base_types<CSteamID,std::allocator<CSteamID> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef CSteamID pointer;
	typedef const CSteamID const_pointer;
	typedef CSteamID reference;
	typedef const CSteamID const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<CSteamID,std::allocator<CSteamID> >(std::initializer_list<CSteamID>, const std::allocator<CSteamID> &);
	vector<CSteamID,std::allocator<CSteamID> >(std::vector<CSteamID,std::allocator<CSteamID> > &, const std::allocator<CSteamID> &);
	vector<CSteamID,std::allocator<CSteamID> >(std::vector<CSteamID,std::allocator<CSteamID> > &);
	vector<CSteamID,std::allocator<CSteamID> >(const std::vector<CSteamID,std::allocator<CSteamID> > &, const std::allocator<CSteamID> &);
	vector<CSteamID,std::allocator<CSteamID> >(const std::vector<CSteamID,std::allocator<CSteamID> > &);
	vector<CSteamID,std::allocator<CSteamID> >(unsigned long long, const CSteamID &, const std::allocator<CSteamID> &);
	vector<CSteamID,std::allocator<CSteamID> >(unsigned long long, const CSteamID &);
	vector<CSteamID,std::allocator<CSteamID> >(unsigned long long);
	vector<CSteamID,std::allocator<CSteamID> >(const std::allocator<CSteamID> &);
	vector<CSteamID,std::allocator<CSteamID> >();
	void _Construct_n(unsigned long long, const CSteamID *);
	std::vector<CSteamID,std::allocator<CSteamID> > & operator=(const std::vector<CSteamID,std::allocator<CSteamID> > &);
	std::vector<CSteamID,std::allocator<CSteamID> > & operator=(std::initializer_list<CSteamID>);
	std::vector<CSteamID,std::allocator<CSteamID> > & operator=(std::vector<CSteamID,std::allocator<CSteamID> > &);
	void _Assign_rv(std::vector<CSteamID,std::allocator<CSteamID> > &);
	void _Assign_rv(std::vector<CSteamID,std::allocator<CSteamID> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<CSteamID,std::allocator<CSteamID> > &, std::integral_constant<bool,1>);
	void push_back(const CSteamID &);
	void push_back(CSteamID &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > >, unsigned long long, const CSteamID &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > >, const CSteamID &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > >, std::initializer_list<CSteamID>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > >, CSteamID &);
	void assign(unsigned long long, const CSteamID &);
	void assign(std::initializer_list<CSteamID>);
	~vector<CSteamID,std::allocator<CSteamID> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const CSteamID &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<CSteamID> get_allocator();
	CSteamID & at(unsigned long long);
	const CSteamID & at(unsigned long long);
	CSteamID & operator[](unsigned long long);
	const CSteamID & operator[](unsigned long long);
	const CSteamID * data();
	CSteamID * data();
	const CSteamID & front();
	CSteamID & front();
	const CSteamID & back();
	CSteamID & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<CSteamID,std::allocator<CSteamID> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(CSteamID *, CSteamID *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const CSteamID *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<CSteamID> > >, unsigned long long, const CSteamID &);
	CSteamID * _Ufill(CSteamID *, unsigned long long, const CSteamID *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(CSteamID *, CSteamID *);
};
class std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > > :
	std::_Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> >,0> >
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
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> pointer;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> const_pointer;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> reference;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > >(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> >, const std::less<void> &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > >(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> >, const std::less<void> &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > >(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> >);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > >(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > >(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > >(const std::less<void> &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > >(const std::less<void> &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > >(const std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > >(const std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > >(const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > >();
	std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > > & operator=(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> >);
	std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > > & operator=(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > > &);
	std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > > & operator=(const std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > > &);
	CSteamID & operator[](const std::string &);
	CSteamID & operator[](std::string &);
	void swap(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > > &);
	const CSteamID & at(const std::string &);
	CSteamID & at(const std::string &);
	~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,CSteamID,std::less<void>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,CSteamID> > >();
};
struct SteamNameCache::CCallbackInternal_OnPersonaStateChange :
	protected CCallbackImpl<16>
{
	CCallbackInternal_OnPersonaStateChange(const SteamNameCache::CCallbackInternal_OnPersonaStateChange &);
	CCallbackInternal_OnPersonaStateChange();
	SteamNameCache::CCallbackInternal_OnPersonaStateChange & operator=(const SteamNameCache::CCallbackInternal_OnPersonaStateChange &);
private:
	virtual void Run(void *);
public:
	~CCallbackInternal_OnPersonaStateChange();
};
class CCallbackImpl<16> :
	public CCallbackBase
{
public:
	~CCallbackImpl<16>();
	void SetGameserverFlag();
protected:
	virtual void Run(void *, bool, unsigned long long);
	void Run(void *) = 0;
	virtual long GetCallbackSizeBytes();
public:
	CCallbackImpl<16>();
};
void SteamNameCache::CCallbackInternal_OnPersonaStateChange::Run(void * pvParam); // 0x14004DB70