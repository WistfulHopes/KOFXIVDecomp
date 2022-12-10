#pragma once

class AgLeaderboardRanking
{
public:
	AgLeaderboardRanking(AgLeaderboardRanking &);
	AgLeaderboardRanking(const AgLeaderboardRanking &);
	AgLeaderboardRanking(unsigned long long, long long, long long, AgStringRef, AgPointer<AgBuffer<AgAllocator<1> > >);
	AgLeaderboardRanking(long long, AgStringRef, AgPointer<AgBuffer<AgAllocator<1> > >);
	unsigned long long getProfileId();
	unsigned long getRank();
	long long getScore();
	AgStringRef getComment();
	AgPointer<AgBuffer<AgAllocator<1> > > getData();
private:
	unsigned long long m_profileId; // 0x0
	unsigned long m_rank; // 0x8
	long long m_score; // 0x10
	AgString m_comment; // 0x18
	AgPointer<AgBuffer<AgAllocator<1> > > m_data; // 0x28
public:
	~AgLeaderboardRanking();
	AgLeaderboardRanking & operator=(AgLeaderboardRanking &);
	AgLeaderboardRanking & operator=(const AgLeaderboardRanking &);
	void __dflt_ctor_closure();
};
class AgPointer<AgBuffer<AgAllocator<1> > >
{
public:
	AgPointer<AgBuffer<AgAllocator<1> > >(const AgReference<AgBuffer<AgAllocator<1> > > &);
	AgPointer<AgBuffer<AgAllocator<1> > >(AgPointer<AgBuffer<AgAllocator<1> > > &);
	AgPointer<AgBuffer<AgAllocator<1> > >(const AgPointer<AgBuffer<AgAllocator<1> > > &);
	AgPointer<AgBuffer<AgAllocator<1> > >(AgBuffer<AgAllocator<1> > *);
	AgPointer<AgBuffer<AgAllocator<1> > >();
	~AgPointer<AgBuffer<AgAllocator<1> > >();
	AgPointer<AgBuffer<AgAllocator<1> > > & operator=(AgPointer<AgBuffer<AgAllocator<1> > > &);
	AgPointer<AgBuffer<AgAllocator<1> > > & operator=(const AgReference<AgBuffer<AgAllocator<1> > > &);
	AgPointer<AgBuffer<AgAllocator<1> > > & operator=(const AgPointer<AgBuffer<AgAllocator<1> > > &);
	AgPointer<AgBuffer<AgAllocator<1> > > & operator=(AgBuffer<AgAllocator<1> > *);
	bool operator<(const AgPointer<AgBuffer<AgAllocator<1> > > &);
	AgBuffer<AgAllocator<1> > * operator->();
	AgBuffer<AgAllocator<1> > & operator*();
	bool operator==(const AgPointer<AgBuffer<AgAllocator<1> > > &);
	bool operator==(AgBuffer<AgAllocator<1> > *);
	bool operator!=(const AgPointer<AgBuffer<AgAllocator<1> > > &);
	bool operator!=(AgBuffer<AgAllocator<1> > *);
	AgBuffer<AgAllocator<1> > * getObject();
	void swap(AgPointer<AgBuffer<AgAllocator<1> > > &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgBuffer<AgAllocator<1> > * m_ptr; // 0x8
};
AgPointer<AgBuffer<AgAllocator<1> > > AgLeaderboardRanking::getData(); // 0x1406861E0
class AgLeaderboardRankingList :
	AgReferencedObject
{
public:
	AgLeaderboardRankingList(AgLeaderboardRankingList &);
	AgLeaderboardRankingList(const AgLeaderboardRankingList &);
	AgLeaderboardRankingList();
	long getOffset();
	unsigned long getSize();
	void setSize(unsigned long);
	const AgLeaderboardRanking * getScore(unsigned long);
	void setScore(unsigned long, AgLeaderboardRanking *);
	unsigned long m_offset; // 0x8
	std::vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> > m_scores; // 0x10
	~AgLeaderboardRankingList();
	AgLeaderboardRankingList & operator=(AgLeaderboardRankingList &);
	AgLeaderboardRankingList & operator=(const AgLeaderboardRankingList &);
};
class std::vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> > :
	std::_Vector_alloc<std::_Vec_base_types<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef AgLeaderboardRanking value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgLeaderboardRanking * pointer;
	typedef AgLeaderboardRanking * const_pointer;
	typedef AgLeaderboardRanking * reference;
	typedef AgLeaderboardRanking * const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> >(std::initializer_list<AgLeaderboardRanking *>, const std::allocator<AgLeaderboardRanking *> &);
	vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> >(std::vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> > &, const std::allocator<AgLeaderboardRanking *> &);
	vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> >(std::vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> > &);
	vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> >(const std::vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> > &, const std::allocator<AgLeaderboardRanking *> &);
	vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> >(const std::vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> > &);
	vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> >(unsigned long long, AgLeaderboardRanking * &, const std::allocator<AgLeaderboardRanking *> &);
	vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> >(unsigned long long, AgLeaderboardRanking * &);
	vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> >(unsigned long long);
	vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> >(const std::allocator<AgLeaderboardRanking *> &);
	vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> >();
	void _Construct_n(unsigned long long, AgLeaderboardRanking * *);
	std::vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> > & operator=(const std::vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> > &);
	std::vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> > & operator=(std::initializer_list<AgLeaderboardRanking *>);
	std::vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> > & operator=(std::vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> > &);
	void _Assign_rv(std::vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> > &);
	void _Assign_rv(std::vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> > &, std::integral_constant<bool,1>);
	void push_back(AgLeaderboardRanking * &);
	void push_back(AgLeaderboardRanking * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > >, unsigned long long, AgLeaderboardRanking * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > >, AgLeaderboardRanking * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > >, std::initializer_list<AgLeaderboardRanking *>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > >, AgLeaderboardRanking * &);
	void assign(unsigned long long, AgLeaderboardRanking * &);
	void assign(std::initializer_list<AgLeaderboardRanking *>);
	~vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, AgLeaderboardRanking * &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgLeaderboardRanking *> get_allocator();
	AgLeaderboardRanking * & at(unsigned long long);
	AgLeaderboardRanking * & at(unsigned long long);
	AgLeaderboardRanking * & operator[](unsigned long long);
	AgLeaderboardRanking * & operator[](unsigned long long);
	AgLeaderboardRanking * * data();
	AgLeaderboardRanking * * data();
	AgLeaderboardRanking * & front();
	AgLeaderboardRanking * & front();
	AgLeaderboardRanking * & back();
	AgLeaderboardRanking * & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgLeaderboardRanking *,std::allocator<AgLeaderboardRanking *> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgLeaderboardRanking * *, AgLeaderboardRanking * *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(AgLeaderboardRanking * *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgLeaderboardRanking *> > >, unsigned long long, AgLeaderboardRanking * &);
	AgLeaderboardRanking * * _Ufill(AgLeaderboardRanking * *, unsigned long long, AgLeaderboardRanking * *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgLeaderboardRanking * *, AgLeaderboardRanking * *);
};
class AgPointer<AgLeaderboardRankingList>
{
public:
	AgPointer<AgLeaderboardRankingList>(const AgReference<AgLeaderboardRankingList> &);
	AgPointer<AgLeaderboardRankingList>(AgPointer<AgLeaderboardRankingList> &);
	AgPointer<AgLeaderboardRankingList>(const AgPointer<AgLeaderboardRankingList> &);
	AgPointer<AgLeaderboardRankingList>(AgLeaderboardRankingList *);
	AgPointer<AgLeaderboardRankingList>();
	~AgPointer<AgLeaderboardRankingList>();
	AgPointer<AgLeaderboardRankingList> & operator=(AgPointer<AgLeaderboardRankingList> &);
	AgPointer<AgLeaderboardRankingList> & operator=(const AgReference<AgLeaderboardRankingList> &);
	AgPointer<AgLeaderboardRankingList> & operator=(const AgPointer<AgLeaderboardRankingList> &);
	AgPointer<AgLeaderboardRankingList> & operator=(AgLeaderboardRankingList *);
	bool operator<(const AgPointer<AgLeaderboardRankingList> &);
	AgLeaderboardRankingList * operator->();
	AgLeaderboardRankingList & operator*();
	bool operator==(const AgPointer<AgLeaderboardRankingList> &);
	bool operator==(AgLeaderboardRankingList *);
	bool operator!=(const AgPointer<AgLeaderboardRankingList> &);
	bool operator!=(AgLeaderboardRankingList *);
	AgLeaderboardRankingList * getObject();
	void swap(AgPointer<AgLeaderboardRankingList> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgLeaderboardRankingList * m_ptr; // 0x8
};