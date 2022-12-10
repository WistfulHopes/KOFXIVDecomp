#pragma once

class AgSingleton<AgLeaderboardManager>
{
protected:
	~AgSingleton<AgLeaderboardManager>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgLeaderboardManager & getInstance();
	static long hasInstance();
private:
	static AgLeaderboardManager * createSingleton();
	static void destroySingleton(AgLeaderboardManager *);
	static AgSingleton<AgLeaderboardManager> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgLeaderboardManager>(const AgSingleton<AgLeaderboardManager> &);
	AgSingleton<AgLeaderboardManager>();
	AgSingleton<AgLeaderboardManager> & operator=(const AgSingleton<AgLeaderboardManager> &);
};
class AgLeaderboardManager :
	AgSingleton<AgLeaderboardManager>
{
public:
	AgLeaderboardManager();
	virtual ~AgLeaderboardManager();
	void addName(AgStringRef, unsigned long);
	AgPointer<AgLeaderboard> open(AgStringRef);
	static AgLeaderboardManager * createSingleton();
	void update();
	void _queueStoreRanking(AgStringRef, const AgLeaderboardRanking &, AgPointer<AgUser>, long);
	void _completeStoreRanking(long, long);
protected:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
	AgPointer<AgLeaderboard> _create(AgStringRef);
	long serialize(AgPointer<AgStream>);
	long deserialize(AgPointer<AgStream>);
	struct StoreRankingEntry;
	class LeaderboardNameMap;
	class LeaderboardMap;
	class StoreRankingQueue;
	AgMutex m_mutex; // 0x8
	std::map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > > m_leaderboardNames; // 0x30
	std::map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > > m_leaderboards; // 0x40
	long m_requestId; // 0x50
	AgRingBuffer<AgLeaderboardManager::StoreRankingEntry> m_storeQueue; // 0x80
	AgJobCompletion m_storeCompletion; // 0x100
	long m_loadedStoreQueue; // 0x110
	long m_cacheStoreQueue; // 0x114
	AgClock m_clock; // 0x118
	long m_batchCount; // 0x140
};
AgLeaderboardManager::AgLeaderboardManager(); // 0x1406834C0
AgLeaderboardManager::~AgLeaderboardManager(); // 0x140683C10
class AgPointer<AgLeaderboard>
{
public:
	AgPointer<AgLeaderboard>(const AgReference<AgLeaderboard> &);
	AgPointer<AgLeaderboard>(AgPointer<AgLeaderboard> &);
	AgPointer<AgLeaderboard>(const AgPointer<AgLeaderboard> &);
	AgPointer<AgLeaderboard>(AgLeaderboard *);
	AgPointer<AgLeaderboard>();
	~AgPointer<AgLeaderboard>();
	AgPointer<AgLeaderboard> & operator=(AgPointer<AgLeaderboard> &);
	AgPointer<AgLeaderboard> & operator=(const AgReference<AgLeaderboard> &);
	AgPointer<AgLeaderboard> & operator=(const AgPointer<AgLeaderboard> &);
	AgPointer<AgLeaderboard> & operator=(AgLeaderboard *);
	bool operator<(const AgPointer<AgLeaderboard> &);
	AgLeaderboard * operator->();
	AgLeaderboard & operator*();
	bool operator==(const AgPointer<AgLeaderboard> &);
	bool operator==(AgLeaderboard *);
	bool operator!=(const AgPointer<AgLeaderboard> &);
	bool operator!=(AgLeaderboard *);
	AgLeaderboard * getObject();
	void swap(AgPointer<AgLeaderboard> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgLeaderboard * m_ptr; // 0x8
};
struct AgLeaderboardManager::StoreRankingEntry
{
	long requestId; // 0x0
	long retryCount; // 0x4
	AgString leaderboardName; // 0x8
	AgPointer<AgLeaderboard> leaderboard; // 0x18
	AgLeaderboardRanking score; // 0x28
	AgPointer<AgUser> user; // 0x60
	StoreRankingEntry(AgLeaderboardManager::StoreRankingEntry &);
	StoreRankingEntry(const AgLeaderboardManager::StoreRankingEntry &);
	StoreRankingEntry();
	~StoreRankingEntry();
	AgLeaderboardManager::StoreRankingEntry & operator=(AgLeaderboardManager::StoreRankingEntry &);
	AgLeaderboardManager::StoreRankingEntry & operator=(const AgLeaderboardManager::StoreRankingEntry &);
};
class std::map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > > :
	std::_Tree<std::_Tmap_traits<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> >,0> >
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
	typedef std::pair<AgStringKey const ,unsigned int> pointer;
	typedef const std::pair<AgStringKey const ,unsigned int> const_pointer;
	typedef std::pair<AgStringKey const ,unsigned int> reference;
	typedef const std::pair<AgStringKey const ,unsigned int> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > >(std::initializer_list<std::pair<AgStringKey const ,unsigned int> >, const std::less<AgStringKey> &, const std::allocator<std::pair<AgStringKey const ,unsigned int> > &);
	map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > >(std::initializer_list<std::pair<AgStringKey const ,unsigned int> >, const std::less<AgStringKey> &);
	map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > >(std::initializer_list<std::pair<AgStringKey const ,unsigned int> >);
	map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > >(std::map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > > &, const std::allocator<std::pair<AgStringKey const ,unsigned int> > &);
	map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > >(std::map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > > &);
	map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > >(const std::less<AgStringKey> &, const std::allocator<std::pair<AgStringKey const ,unsigned int> > &);
	map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > >(const std::less<AgStringKey> &);
	map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > >(const std::map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > > &, const std::allocator<std::pair<AgStringKey const ,unsigned int> > &);
	map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > >(const std::map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > > &);
	map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > >(const std::allocator<std::pair<AgStringKey const ,unsigned int> > &);
	map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > >();
	std::map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > > & operator=(std::initializer_list<std::pair<AgStringKey const ,unsigned int> >);
	std::map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > > & operator=(std::map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > > &);
	std::map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > > & operator=(const std::map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > > &);
	unsigned long & operator[](const AgStringKey &);
	unsigned long & operator[](AgStringKey &);
	void swap(std::map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > > &);
	const unsigned long & at(const AgStringKey &);
	unsigned long & at(const AgStringKey &);
	~map<AgStringKey,unsigned int,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,unsigned int> > >();
};
class std::map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > > :
	std::_Tree<std::_Tmap_traits<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > >,0> >
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
	typedef std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > pointer;
	typedef const std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > const_pointer;
	typedef std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > reference;
	typedef const std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > >(std::initializer_list<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > >, const std::less<AgStringKey> &, const std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > &);
	map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > >(std::initializer_list<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > >, const std::less<AgStringKey> &);
	map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > >(std::initializer_list<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > >);
	map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > >(std::map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > > &, const std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > &);
	map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > >(std::map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > > &);
	map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > >(const std::less<AgStringKey> &, const std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > &);
	map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > >(const std::less<AgStringKey> &);
	map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > >(const std::map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > > &, const std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > &);
	map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > >(const std::map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > > &);
	map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > >(const std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > &);
	map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > >();
	std::map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > > & operator=(std::initializer_list<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > >);
	std::map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > > & operator=(std::map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > > &);
	std::map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > > & operator=(const std::map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > > &);
	AgPointer<AgLeaderboard> & operator[](const AgStringKey &);
	AgPointer<AgLeaderboard> & operator[](AgStringKey &);
	void swap(std::map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > > &);
	const AgPointer<AgLeaderboard> & at(const AgStringKey &);
	AgPointer<AgLeaderboard> & at(const AgStringKey &);
	~map<AgStringKey,AgPointer<AgLeaderboard>,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgPointer<AgLeaderboard> > > >();
};
class AgRingBuffer<AgLeaderboardManager::StoreRankingEntry> :
	AgRingBufferImpl<AgLeaderboardManager::StoreRankingEntry,void,int>
{
public:
	AgRingBuffer<AgLeaderboardManager::StoreRankingEntry>();
	~AgRingBuffer<AgLeaderboardManager::StoreRankingEntry>();
};