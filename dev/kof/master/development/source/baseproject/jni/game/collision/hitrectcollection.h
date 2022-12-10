#pragma once

struct Collision::BIND_INDEX
{
	enum ID
	{
		NONE = 0,
		C_HEAD = 1,
		C_NECK = 2,
		C_CHEST = 3,
		C_HIPS = 4,
		L_ARM1 = 5,
		L_ARM2 = 6,
		L_HAND = 7,
		R_ARM1 = 8,
		R_ARM2 = 9,
		R_HAND = 10,
		L_LEG2 = 11,
		L_FOOT = 12,
		L_TOE = 13,
		R_LEG2 = 14,
		R_FOOT = 15,
		R_TOE = 16,
		MAX = 17,
	};
};
class Collision::HitRectWork
{
	enum RECT_TYPE
	{
		NONE = 0,
		ATTACK = 1,
		HIT = 2,
		CENTER = 3,
	};
	union Data;
public:
	HitRectWork(ActorChara *, ActorObject *);
	HitRectWork(const Collision::HitRect &, ActorChara *, ActorObject *, const short, const CharaAttackData::AttackData &, const short, const long);
	HitRectWork(const Collision::HitRect &, ActorChara *, ActorObject *, const CharaActionData::Collision &, const short);
	HitRectWork();
	bool IsIntersect(const Collision::HitRect &, const ActorObject *, Collision::HitRect &, const long, const bool);
	bool IsIntersect(const Collision::HitRectWork &, Collision::HitRect &);
	bool IsIntersect(const Collision::HitRect &, const ActorObject *, const long, const bool);
	bool IsIntersect(const Collision::HitRectWork &);
	Collision::HitRect GetIntersectRect(const Collision::HitRect &, const ActorObject *, const long, const bool);
	Collision::HitRect GetIntersectRect(const Collision::HitRectWork &);
	static Collision::HitRect GetRealHitRect(const ActorObject *, const Collision::HitRect &, const long, const bool);
	Collision::HitRect GetRealHitRect();
	bool IsIgnoreMotionScale();
	Collision::HitRectWork::RECT_TYPE type; // 0x0
	Collision::HitRect rect; // 0x4
	ActorChara * pParent; // 0x18
	ActorObject * pOwner; // 0x20
	short iGroupID; // 0x28
	short iDataID; // 0x2A
	long iFlag; // 0x2C
	Collision::HitRectWork::Data data; // 0x30
};
union Collision::HitRectWork::Data
{
public:
	CharaAttackData::AttackData atk; // 0x0
	CharaActionData::Collision hit; // 0x0
};
class Collision::HitRectList
{
	class HitRectListData;
public:
	HitRectList(Collision::HitRectList &);
	HitRectList(const Collision::HitRectList &);
	HitRectList(long);
	void Clear();
	bool Entry(const Collision::HitRectWork &);
	bool EntryHit(const Collision::HitRect &, ActorChara *, ActorObject *, const CharaActionData::Collision &, const short);
	bool EntryAttack(const Collision::HitRect &, ActorChara *, ActorObject *, const short, const CharaAttackData::AttackData &, const short, const long);
	bool EntryCenter(ActorChara *, ActorObject *);
	std::vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> > & GetList();
private:
	long iWorkSize; // 0x0
	std::vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> > rectList; // 0x8
public:
	~HitRectList();
	Collision::HitRectList & operator=(Collision::HitRectList &);
	Collision::HitRectList & operator=(const Collision::HitRectList &);
};
class std::vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> > :
	std::_Vector_alloc<std::_Vec_base_types<Collision::HitRectWork,std::allocator<Collision::HitRectWork> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef Collision::HitRectWork pointer;
	typedef const Collision::HitRectWork const_pointer;
	typedef Collision::HitRectWork reference;
	typedef const Collision::HitRectWork const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> >(std::initializer_list<Collision::HitRectWork>, const std::allocator<Collision::HitRectWork> &);
	vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> >(std::vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> > &, const std::allocator<Collision::HitRectWork> &);
	vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> >(std::vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> > &);
	vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> >(const std::vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> > &, const std::allocator<Collision::HitRectWork> &);
	vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> >(const std::vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> > &);
	vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> >(unsigned long long, const Collision::HitRectWork &, const std::allocator<Collision::HitRectWork> &);
	vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> >(unsigned long long, const Collision::HitRectWork &);
	vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> >(unsigned long long);
	vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> >(const std::allocator<Collision::HitRectWork> &);
	vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> >();
	void _Construct_n(unsigned long long, const Collision::HitRectWork *);
	std::vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> > & operator=(const std::vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> > &);
	std::vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> > & operator=(std::initializer_list<Collision::HitRectWork>);
	std::vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> > & operator=(std::vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> > &);
	void _Assign_rv(std::vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> > &);
	void _Assign_rv(std::vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> > &, std::integral_constant<bool,1>);
	void push_back(const Collision::HitRectWork &);
	void push_back(Collision::HitRectWork &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > >, unsigned long long, const Collision::HitRectWork &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > >, const Collision::HitRectWork &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > >, std::initializer_list<Collision::HitRectWork>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > >, Collision::HitRectWork &);
	void assign(unsigned long long, const Collision::HitRectWork &);
	void assign(std::initializer_list<Collision::HitRectWork>);
	~vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const Collision::HitRectWork &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<Collision::HitRectWork> get_allocator();
	Collision::HitRectWork & at(unsigned long long);
	const Collision::HitRectWork & at(unsigned long long);
	Collision::HitRectWork & operator[](unsigned long long);
	const Collision::HitRectWork & operator[](unsigned long long);
	const Collision::HitRectWork * data();
	Collision::HitRectWork * data();
	const Collision::HitRectWork & front();
	Collision::HitRectWork & front();
	const Collision::HitRectWork & back();
	Collision::HitRectWork & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(Collision::HitRectWork *, Collision::HitRectWork *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const Collision::HitRectWork *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Collision::HitRectWork> > >, unsigned long long, const Collision::HitRectWork &);
	Collision::HitRectWork * _Ufill(Collision::HitRectWork *, unsigned long long, const Collision::HitRectWork *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(Collision::HitRectWork *, Collision::HitRectWork *);
};
class Collision::HitRectCollection
{
private:
	static const long ciRectListWorkMax[0]; // 0xFFFFFFFFFFFFFFFF
	struct RECT_GROUP;
public:
	~HitRectCollection();
	static Collision::HitRectCollection & GetInstance(long);
	static long GetInstanceCount();
	void Clear();
	void EntryPlayer(ActorChara *);
	void EntryShot(ActorShot *);
	void EntryOption(ActorOption *);
	bool EntryHit(Collision::HitRectCollection::RECT_GROUP::ID, const Collision::HitRect &, ActorChara *, ActorObject *, const CharaActionData::Collision &, const short);
	bool EntryAttack(Collision::HitRectCollection::RECT_GROUP::ID, const Collision::HitRect &, ActorChara *, ActorObject *, const short, const CharaAttackData::AttackData &, const short, const long);
	bool EntryCenter(Collision::HitRectCollection::RECT_GROUP::ID, ActorChara *, ActorObject *);
	std::vector<Collision::HitRectWork,std::allocator<Collision::HitRectWork> > & GetGroupList(Collision::HitRectCollection::RECT_GROUP::ID);
private:
	static Collision::HitRectCollection * instance; // 0xFFFFFFFFFFFFFFFF
	std::unique_ptr<Collision::HitRectList,std::default_delete<Collision::HitRectList> > pRectList[15]; // 0x0
	HitRectCollection(const Collision::HitRectCollection &);
	HitRectCollection();
	Collision::HitRectCollection & operator=(const Collision::HitRectCollection &);
};
struct Collision::HitRectCollection::RECT_GROUP
{
	enum ID
	{
		ACTOR_HIT_PUSH = 0,
		ACTOR_HIT_BODY = 1,
		ACTOR_HIT_THROW = 2,
		ACTOR_HIT_GUARD = 3,
		ACTOR_HIT_GUARD_POINT = 4,
		ACTOR_HIT_ATEMI = 5,
		ACTOR_HIT_SHOT_ERASE = 6,
		ACTOR_HIT_SHOT_REFLECT = 7,
		ACTOR_HIT_SHOT_BODY = 8,
		ACTOR_ATK_NORMAL = 9,
		ACTOR_ATK_SHOT = 10,
		ACTOR_ATK_CATCH = 11,
		ACTOR_ATK_DAMAGE = 12,
		ACTOR_ATK_GUARD = 13,
		ACTOR_ATK_BRANCH = 14,
		MAX = 15,
	};
};
Collision::HitRectCollection::~HitRectCollection(); // 0x14002DF80
Collision::HitRectCollection & Collision::HitRectCollection::GetInstance(long i); // 0x1400DDCC0
class std::unique_ptr<Collision::HitRectList,std::default_delete<Collision::HitRectList> > :
	std::_Unique_ptr_base<Collision::HitRectList,std::default_delete<Collision::HitRectList> >
{
	class _Myt;
	class _Mybase;
	typedef Collision::HitRectList pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<Collision::HitRectList,std::default_delete<Collision::HitRectList> >(const std::unique_ptr<Collision::HitRectList,std::default_delete<Collision::HitRectList> > &);
	unique_ptr<Collision::HitRectList,std::default_delete<Collision::HitRectList> >(std::unique_ptr<Collision::HitRectList,std::default_delete<Collision::HitRectList> > &);
	unique_ptr<Collision::HitRectList,std::default_delete<Collision::HitRectList> >(Collision::HitRectList *, std::default_delete<Collision::HitRectList> &);
	unique_ptr<Collision::HitRectList,std::default_delete<Collision::HitRectList> >(Collision::HitRectList *, const std::default_delete<Collision::HitRectList> &);
	unique_ptr<Collision::HitRectList,std::default_delete<Collision::HitRectList> >(Collision::HitRectList *);
	unique_ptr<Collision::HitRectList,std::default_delete<Collision::HitRectList> >(void *);
	unique_ptr<Collision::HitRectList,std::default_delete<Collision::HitRectList> >();
	std::unique_ptr<Collision::HitRectList,std::default_delete<Collision::HitRectList> > & operator=(const std::unique_ptr<Collision::HitRectList,std::default_delete<Collision::HitRectList> > &);
	std::unique_ptr<Collision::HitRectList,std::default_delete<Collision::HitRectList> > & operator=(std::unique_ptr<Collision::HitRectList,std::default_delete<Collision::HitRectList> > &);
	std::unique_ptr<Collision::HitRectList,std::default_delete<Collision::HitRectList> > & operator=(void *);
	void swap(std::unique_ptr<Collision::HitRectList,std::default_delete<Collision::HitRectList> > &);
	~unique_ptr<Collision::HitRectList,std::default_delete<Collision::HitRectList> >();
	Collision::HitRectList & operator*();
	Collision::HitRectList * operator->();
	Collision::HitRectList * get();
	bool operator bool();
	Collision::HitRectList * release();
	void reset(Collision::HitRectList *);
};
Collision::HitRectCollection::HitRectCollection(); // 0x1400DDD50