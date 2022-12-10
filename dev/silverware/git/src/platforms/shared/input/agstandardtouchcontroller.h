#pragma once

struct AgStandardTouchData
{
	long m_touchId; // 0x0
	AgVector2 m_position; // 0x4
	AgStandardTouchData();
};
class std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > > :
	std::_Tree<std::_Tmap_traits<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> >,0> >
{
	class _Myt;
	class _Mybase;
	typedef long key_type;
	struct mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<int const ,AgStandardTouchData> pointer;
	typedef const std::pair<int const ,AgStandardTouchData> const_pointer;
	typedef std::pair<int const ,AgStandardTouchData> reference;
	typedef const std::pair<int const ,AgStandardTouchData> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > >(std::initializer_list<std::pair<int const ,AgStandardTouchData> >, const std::less<int> &, const std::allocator<std::pair<int const ,AgStandardTouchData> > &);
	map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > >(std::initializer_list<std::pair<int const ,AgStandardTouchData> >, const std::less<int> &);
	map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > >(std::initializer_list<std::pair<int const ,AgStandardTouchData> >);
	map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > >(std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > > &, const std::allocator<std::pair<int const ,AgStandardTouchData> > &);
	map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > >(std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > > &);
	map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > >(const std::less<int> &, const std::allocator<std::pair<int const ,AgStandardTouchData> > &);
	map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > >(const std::less<int> &);
	map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > >(const std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > > &, const std::allocator<std::pair<int const ,AgStandardTouchData> > &);
	map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > >(const std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > > &);
	map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > >(const std::allocator<std::pair<int const ,AgStandardTouchData> > &);
	map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > >();
	std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > > & operator=(std::initializer_list<std::pair<int const ,AgStandardTouchData> >);
	std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > > & operator=(std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > > &);
	std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > > & operator=(const std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > > &);
	AgStandardTouchData & operator[](const long &);
	AgStandardTouchData & operator[](long &);
	void swap(std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > > &);
	const AgStandardTouchData & at(const long &);
	AgStandardTouchData & at(const long &);
	~map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > >();
};
class AgStandardTouchController :
	AgController
{
public:
	AgStandardTouchController(unsigned long, unsigned long);
	virtual void update();
	void handleTouchesBegan(std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > >);
	void handleTouchesMoved(std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > >);
	void handleTouchesEnded(std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > >);
private:
	AgControllerTouchComponent m_touchScreen; // 0x50
	std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > > m_startedTouches; // 0x90
	std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > > m_movedTouches; // 0xA0
	std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > > m_endedTouches; // 0xB0
	AgMutex m_lock; // 0xC0
public:
	virtual ~AgStandardTouchController();
};
AgStandardTouchController::AgStandardTouchController(unsigned long id, unsigned long maxTouches); // 0x140674EF0
void AgStandardTouchController::update(); // 0x140677B50
void AgStandardTouchController::handleTouchesBegan(std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > > events); // 0x140677100
void AgStandardTouchController::handleTouchesMoved(std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > > events); // 0x140677240
void AgStandardTouchController::handleTouchesEnded(std::map<int,AgStandardTouchData,std::less<int>,std::allocator<std::pair<int const ,AgStandardTouchData> > > events); // 0x1406771A0