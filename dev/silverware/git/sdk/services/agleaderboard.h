#pragma once

class AgLeaderboard :
	AgReferencedObject
{
	struct RankingData;
	class RankingMap;
	enum Type
	{
		Type_Invalid = 255,
		Type_Global = 0,
		Type_AroundUser = 1,
		Type_Friends = 2,
	};
public:
	AgLeaderboard(AgStringRef);
	~AgLeaderboard();
	long isInitialized();
	AgStringRef getName();
	void storeRanking(const AgLeaderboardRanking &, AgPointer<AgUser>);
	long requestRankings(AgPointer<AgLeaderboardRankingList>, AgLeaderboard::Type, long, unsigned long, long, long);
	AgJobCompletion requestRankingsAsync(AgPointer<AgLeaderboardRankingList>, AgLeaderboard::Type, long, unsigned long, long, long);
protected:
	AgJobCompletion _storeRankingAsync(long, const AgLeaderboardRanking &, AgPointer<AgUser>);
	AgMutex m_mutex; // 0x10
	AgString m_name; // 0x38
	long m_initialized; // 0x48
	std::map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > > m_rankings; // 0x50
};
struct AgLeaderboard::RankingData
{
	RankingData(AgLeaderboard::RankingData &);
	RankingData(const AgLeaderboard::RankingData &);
	RankingData();
	AgLeaderboardRanking score; // 0x0
	unsigned long long lastUpdated; // 0x38
	~RankingData();
	AgLeaderboard::RankingData & operator=(AgLeaderboard::RankingData &);
	AgLeaderboard::RankingData & operator=(const AgLeaderboard::RankingData &);
};
class std::map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > > :
	std::_Tree<std::_Tmap_traits<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> >,0> >
{
	class _Myt;
	class _Mybase;
	typedef unsigned long key_type;
	struct mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<unsigned int const ,AgLeaderboard::RankingData> pointer;
	typedef const std::pair<unsigned int const ,AgLeaderboard::RankingData> const_pointer;
	typedef std::pair<unsigned int const ,AgLeaderboard::RankingData> reference;
	typedef const std::pair<unsigned int const ,AgLeaderboard::RankingData> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > >(std::initializer_list<std::pair<unsigned int const ,AgLeaderboard::RankingData> >, const std::less<unsigned int> &, const std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > &);
	map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > >(std::initializer_list<std::pair<unsigned int const ,AgLeaderboard::RankingData> >, const std::less<unsigned int> &);
	map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > >(std::initializer_list<std::pair<unsigned int const ,AgLeaderboard::RankingData> >);
	map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > >(std::map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > > &, const std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > &);
	map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > >(std::map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > > &);
	map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > >(const std::less<unsigned int> &, const std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > &);
	map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > >(const std::less<unsigned int> &);
	map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > >(const std::map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > > &, const std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > &);
	map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > >(const std::map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > > &);
	map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > >(const std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > &);
	map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > >();
	std::map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > > & operator=(std::initializer_list<std::pair<unsigned int const ,AgLeaderboard::RankingData> >);
	std::map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > > & operator=(std::map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > > &);
	std::map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > > & operator=(const std::map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > > &);
	AgLeaderboard::RankingData & operator[](const unsigned long &);
	AgLeaderboard::RankingData & operator[](unsigned long &);
	void swap(std::map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > > &);
	const AgLeaderboard::RankingData & at(const unsigned long &);
	AgLeaderboard::RankingData & at(const unsigned long &);
	~map<unsigned int,AgLeaderboard::RankingData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgLeaderboard::RankingData> > >();
};
AgLeaderboard::~AgLeaderboard(); // 0x140683BA0