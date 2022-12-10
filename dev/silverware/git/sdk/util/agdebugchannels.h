#pragma once

enum AgLogVerbosity
{
	AgLogVerbosity_Ignore = 254,
	AgLogVerbosity_Inherit = 255,
	AgLogVerbosity_Any = 0,
	AgLogVerbosity_Error = 1,
	AgLogVerbosity_Warning = 2,
	AgLogVerbosity_Info = 3,
	AgLogVerbosity_Debug = 4,
	AgLogVerbosity_Count = 5,
};
class AgLogger
{
public:
	~AgLogger();
	void log(AgLogVerbosity, const char *, char *);
	void logFormatted(const char *);
	void flush();
	static AgLogVerbosity getVerbosityIDByName(AgStringRef);
protected:
	static const char * getVerbosityPrefixByID(AgLogVerbosity);
public:
	AgLogger(const AgLogger &);
	AgLogger();
	AgLogger & operator=(const AgLogger &);
};
AgLogger::~AgLogger(); // 0x140679320
void AgLogger::flush(); // 0x14002E7C0
class AgDebuggerLogger :
	AgLogger
{
public:
	virtual ~AgDebuggerLogger();
	virtual void log(AgLogVerbosity, const char *, char *);
	virtual void logFormatted(const char *);
private:
	AgMutex m_logMutex; // 0x8
public:
	AgDebuggerLogger();
};
class AgConsoleLogger :
	AgLogger
{
public:
	virtual ~AgConsoleLogger();
	virtual void log(AgLogVerbosity, const char *, char *);
	virtual void logFormatted(const char *);
private:
	AgMutex m_logMutex; // 0x8
public:
	AgConsoleLogger();
};
class AgFileLogger :
	AgLogger
{
public:
	AgFileLogger(AgStringRef, long);
	virtual ~AgFileLogger();
	virtual void log(AgLogVerbosity, const char *, char *);
	virtual void logFormatted(const char *);
	virtual void flush();
private:
	AgMutex m_logMutex; // 0x8
	long m_instaFlush; // 0x30
	_iobuf * m_logFile; // 0x38
};
class AgForwardLogger :
	AgLogger
{
public:
	AgForwardLogger(const AgForwardLogger &);
	AgForwardLogger();
	AgForwardLogger(const std::vector<AgString,std::allocator<AgString> > &);
	virtual ~AgForwardLogger();
	virtual void log(AgLogVerbosity, const char *, char *);
	virtual void logFormatted(const char *);
	virtual void flush();
	void pushLogTarget(AgLogger *);
private:
	std::vector<AgLogger *,std::allocator<AgLogger *> > m_targets; // 0x8
	std::vector<AgString,std::allocator<AgString> > m_lateBindTargets; // 0x20
public:
	AgForwardLogger & operator=(const AgForwardLogger &);
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
AgForwardLogger::~AgForwardLogger(); // 0x1406792B0
class std::vector<AgLogger *,std::allocator<AgLogger *> > :
	std::_Vector_alloc<std::_Vec_base_types<AgLogger *,std::allocator<AgLogger *> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef AgLogger value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgLogger * pointer;
	typedef AgLogger * const_pointer;
	typedef AgLogger * reference;
	typedef AgLogger * const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgLogger *,std::allocator<AgLogger *> >(std::initializer_list<AgLogger *>, const std::allocator<AgLogger *> &);
	vector<AgLogger *,std::allocator<AgLogger *> >(std::vector<AgLogger *,std::allocator<AgLogger *> > &, const std::allocator<AgLogger *> &);
	vector<AgLogger *,std::allocator<AgLogger *> >(std::vector<AgLogger *,std::allocator<AgLogger *> > &);
	vector<AgLogger *,std::allocator<AgLogger *> >(const std::vector<AgLogger *,std::allocator<AgLogger *> > &, const std::allocator<AgLogger *> &);
	vector<AgLogger *,std::allocator<AgLogger *> >(const std::vector<AgLogger *,std::allocator<AgLogger *> > &);
	vector<AgLogger *,std::allocator<AgLogger *> >(unsigned long long, AgLogger * &, const std::allocator<AgLogger *> &);
	vector<AgLogger *,std::allocator<AgLogger *> >(unsigned long long, AgLogger * &);
	vector<AgLogger *,std::allocator<AgLogger *> >(unsigned long long);
	vector<AgLogger *,std::allocator<AgLogger *> >(const std::allocator<AgLogger *> &);
	vector<AgLogger *,std::allocator<AgLogger *> >();
	void _Construct_n(unsigned long long, AgLogger * *);
	std::vector<AgLogger *,std::allocator<AgLogger *> > & operator=(const std::vector<AgLogger *,std::allocator<AgLogger *> > &);
	std::vector<AgLogger *,std::allocator<AgLogger *> > & operator=(std::initializer_list<AgLogger *>);
	std::vector<AgLogger *,std::allocator<AgLogger *> > & operator=(std::vector<AgLogger *,std::allocator<AgLogger *> > &);
	void _Assign_rv(std::vector<AgLogger *,std::allocator<AgLogger *> > &);
	void _Assign_rv(std::vector<AgLogger *,std::allocator<AgLogger *> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgLogger *,std::allocator<AgLogger *> > &, std::integral_constant<bool,1>);
	void push_back(AgLogger * &);
	void push_back(AgLogger * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > >, unsigned long long, AgLogger * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > >, AgLogger * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > >, std::initializer_list<AgLogger *>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > >, AgLogger * &);
	void assign(unsigned long long, AgLogger * &);
	void assign(std::initializer_list<AgLogger *>);
	~vector<AgLogger *,std::allocator<AgLogger *> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, AgLogger * &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgLogger *> get_allocator();
	AgLogger * & at(unsigned long long);
	AgLogger * & at(unsigned long long);
	AgLogger * & operator[](unsigned long long);
	AgLogger * & operator[](unsigned long long);
	AgLogger * * data();
	AgLogger * * data();
	AgLogger * & front();
	AgLogger * & front();
	AgLogger * & back();
	AgLogger * & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgLogger *,std::allocator<AgLogger *> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgLogger * *, AgLogger * *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(AgLogger * *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLogger *> > >, unsigned long long, AgLogger * &);
	AgLogger * * _Ufill(AgLogger * *, unsigned long long, AgLogger * *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgLogger * *, AgLogger * *);
};
struct AgDebugChannelData
{
	struct InternalConfig;
	class Counter;
	class ScopedCounter;
	AgDebugChannelData(AgDebugChannelData &);
	AgDebugChannelData(const AgDebugChannelData &);
	AgDebugChannelData(AgStringRef);
	void log(AgLogVerbosity, const char *, char *);
	void setConfiguration(char, AgLogVerbosity, AgStringRef);
	void setLogger(AgStringRef);
	long isEnabled();
	AgLogVerbosity getVerbosity();
	AgDebugChannelData * m_parent; // 0x0
	AgString m_name; // 0x8
	AgDebugChannelData::InternalConfig m_config; // 0x18
	AgLogger * m_logger; // 0x20
	~AgDebugChannelData();
	AgDebugChannelData & operator=(AgDebugChannelData &);
	AgDebugChannelData & operator=(const AgDebugChannelData &);
};
struct AgDebugChannelData::InternalConfig
{
	InternalConfig();
	char m_enabled; // 0x0
	AgLogVerbosity m_verbosity; // 0x4
};
class AgDebugChannels
{
public:
	static AgDebugChannels & getInstance();
	AgDebugChannelData * get(AgStringRef);
	class DebugChannelMap;
	class DebugLoggerMap;
	void addLogger(AgStringRef, AgLogger *);
	const std::map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > > & getLoggers();
	void flushAllLoggers();
	static bool _staticInit(AgStringRef, AgStringRef, char, AgLogVerbosity);
private:
	AgMutex m_mutex; // 0x0
	std::map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > > m_channels; // 0x28
	std::map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > > m_loggers; // 0x38
	static AgDebugChannels & getInstanceAndInit();
	void _initDefaultLoggers();
	void _initRootChannel();
	static AgDebugChannelData dummyChannelData; // 0xFFFFFFFFFFFFFFFF
	static AgDebugChannels * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgDebugChannels();
	~AgDebugChannels();
};
class std::map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > > :
	std::_Tree<std::_Tmap_traits<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> >,0> >
{
	class _Myt;
	class _Mybase;
	class key_type;
	typedef AgDebugChannelData mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<AgStringKey const ,AgDebugChannelData *> pointer;
	typedef const std::pair<AgStringKey const ,AgDebugChannelData *> const_pointer;
	typedef std::pair<AgStringKey const ,AgDebugChannelData *> reference;
	typedef const std::pair<AgStringKey const ,AgDebugChannelData *> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > >(std::initializer_list<std::pair<AgStringKey const ,AgDebugChannelData *> >, const std::less<AgStringKey> &, const std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > &);
	map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > >(std::initializer_list<std::pair<AgStringKey const ,AgDebugChannelData *> >, const std::less<AgStringKey> &);
	map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > >(std::initializer_list<std::pair<AgStringKey const ,AgDebugChannelData *> >);
	map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > >(std::map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > > &, const std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > &);
	map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > >(std::map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > > &);
	map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > >(const std::less<AgStringKey> &, const std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > &);
	map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > >(const std::less<AgStringKey> &);
	map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > >(const std::map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > > &, const std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > &);
	map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > >(const std::map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > > &);
	map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > >(const std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > &);
	map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > >();
	std::map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > > & operator=(std::initializer_list<std::pair<AgStringKey const ,AgDebugChannelData *> >);
	std::map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > > & operator=(std::map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > > &);
	std::map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > > & operator=(const std::map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > > &);
	AgDebugChannelData * & operator[](const AgStringKey &);
	AgDebugChannelData * & operator[](AgStringKey &);
	void swap(std::map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > > &);
	AgDebugChannelData * & at(const AgStringKey &);
	AgDebugChannelData * & at(const AgStringKey &);
	~map<AgStringKey,AgDebugChannelData *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgDebugChannelData *> > >();
};
class std::map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > > :
	std::_Tree<std::_Tmap_traits<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> >,0> >
{
	class _Myt;
	class _Mybase;
	class key_type;
	typedef AgLogger mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<AgStringKey const ,AgLogger *> pointer;
	typedef const std::pair<AgStringKey const ,AgLogger *> const_pointer;
	typedef std::pair<AgStringKey const ,AgLogger *> reference;
	typedef const std::pair<AgStringKey const ,AgLogger *> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > >(std::initializer_list<std::pair<AgStringKey const ,AgLogger *> >, const std::less<AgStringKey> &, const std::allocator<std::pair<AgStringKey const ,AgLogger *> > &);
	map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > >(std::initializer_list<std::pair<AgStringKey const ,AgLogger *> >, const std::less<AgStringKey> &);
	map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > >(std::initializer_list<std::pair<AgStringKey const ,AgLogger *> >);
	map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > >(std::map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > > &, const std::allocator<std::pair<AgStringKey const ,AgLogger *> > &);
	map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > >(std::map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > > &);
	map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > >(const std::less<AgStringKey> &, const std::allocator<std::pair<AgStringKey const ,AgLogger *> > &);
	map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > >(const std::less<AgStringKey> &);
	map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > >(const std::map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > > &, const std::allocator<std::pair<AgStringKey const ,AgLogger *> > &);
	map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > >(const std::map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > > &);
	map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > >(const std::allocator<std::pair<AgStringKey const ,AgLogger *> > &);
	map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > >();
	std::map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > > & operator=(std::initializer_list<std::pair<AgStringKey const ,AgLogger *> >);
	std::map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > > & operator=(std::map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > > &);
	std::map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > > & operator=(const std::map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > > &);
	AgLogger * & operator[](const AgStringKey &);
	AgLogger * & operator[](AgStringKey &);
	void swap(std::map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > > &);
	AgLogger * & at(const AgStringKey &);
	AgLogger * & at(const AgStringKey &);
	~map<AgStringKey,AgLogger *,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgLogger *> > >();
};
void AgDebugChannels::addLogger(AgStringRef key, AgLogger * value); // 0x140694A30
AgDebugChannels & AgDebugChannels::getInstanceAndInit(); // 0x14067A990
void AgDebugChannel<1>::log(AgLogVerbosity verbosity, const char * text, ...); // 0x140659BA0
class AgSilverWareDebugChannel :
	AgDebugChannel<1>
{
public:
	AgSilverWareDebugChannel(AgStringRef);
	AgSilverWareDebugChannel();
	~AgSilverWareDebugChannel();
};
class AgDebugChannel<1>
{
	enum <unnamed-enum-AG_CHANNEL_ENABLED>
	{
		AG_CHANNEL_ENABLED = 1,
	};
	class Counter;
	class ScopedCounter;
public:
	AgDebugChannel<1>(AgStringRef);
	long isEnabled();
	AgLogVerbosity getVerbosity();
	void log(AgLogVerbosity, const char *, char *);
	void log(AgLogVerbosity, const char *, ...);
	void setConfiguration(char, AgLogVerbosity, AgStringRef);
	const AgPerformanceCounter & getCounter();
	AgPerformanceCounter & getCounter();
private:
	AgDebugChannelData * m_data; // 0x0
	AgPerformanceCounter m_counter; // 0x8
public:
	~AgDebugChannel<1>();
};
AgSilverWareDebugChannel::AgSilverWareDebugChannel(AgStringRef name); // 0x140658F80