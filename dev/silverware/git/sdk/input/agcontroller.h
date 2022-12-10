#pragma once

enum AgControllerType
{
	AgControllerType_Unknown = 0,
	AgControllerType_Gamepad = 1,
	AgControllerType_Mouse = 2,
	AgControllerType_Keyboard = 3,
	AgControllerType_Touch = 4,
};
enum AgControllerHardwareType
{
	AgControllerHardwareType_Default = 0,
	AgControllerHardwareType_Xbox360 = 1,
	AgControllerHardwareType_XboxOne = 2,
	AgControllerHardwareType_DualShock3 = 3,
	AgControllerHardwareType_DualShock4 = 4,
	AgControllerHardwareType_Generic = 5,
	AgControllerHardwareType_Count = 6,
};
struct AgControllerUID
{
	unsigned char m_uid[8]; // 0x0
};
bool operator<(const AgControllerUID & left, const AgControllerUID & right); // 0x140101FB0
class std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > :
	std::_List_buy<AgControllerComponent *,std::allocator<AgControllerComponent *> >
{
	class _Myt;
	class _Mybase;
	struct _Node;
	typedef std::_List_node<AgControllerComponent *,void *> _Nodeptr;
	struct _Alty;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgControllerComponent * pointer;
	typedef AgControllerComponent * const_pointer;
	typedef AgControllerComponent * reference;
	typedef AgControllerComponent * const_reference;
	typedef AgControllerComponent value_type;
	class const_iterator;
	class iterator;
	class _Unchecked_const_iterator;
	class _Unchecked_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	list<AgControllerComponent *,std::allocator<AgControllerComponent *> >(std::initializer_list<AgControllerComponent *>, const std::allocator<AgControllerComponent *> &);
	list<AgControllerComponent *,std::allocator<AgControllerComponent *> >(std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > &, const std::allocator<AgControllerComponent *> &);
	list<AgControllerComponent *,std::allocator<AgControllerComponent *> >(std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > &);
	list<AgControllerComponent *,std::allocator<AgControllerComponent *> >(const std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > &, const std::allocator<AgControllerComponent *> &);
	list<AgControllerComponent *,std::allocator<AgControllerComponent *> >(const std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > &);
	list<AgControllerComponent *,std::allocator<AgControllerComponent *> >(unsigned long long, AgControllerComponent * &, const std::allocator<AgControllerComponent *> &);
	list<AgControllerComponent *,std::allocator<AgControllerComponent *> >(unsigned long long, AgControllerComponent * &);
	list<AgControllerComponent *,std::allocator<AgControllerComponent *> >(unsigned long long);
	list<AgControllerComponent *,std::allocator<AgControllerComponent *> >(const std::allocator<AgControllerComponent *> &);
	list<AgControllerComponent *,std::allocator<AgControllerComponent *> >();
	void _Construct_n(unsigned long long, AgControllerComponent * &);
	std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > & operator=(const std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > &);
	std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > & operator=(std::initializer_list<AgControllerComponent *>);
	std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > & operator=(std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > &);
	void _Assign_rv(std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > &);
	void push_front(AgControllerComponent * &);
	void push_front(AgControllerComponent * &);
	void push_back(AgControllerComponent * &);
	void push_back(AgControllerComponent * &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >, unsigned long long, AgControllerComponent * &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >, AgControllerComponent * &);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >, std::initializer_list<AgControllerComponent *>);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > insert(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >, AgControllerComponent * &);
	void assign(unsigned long long, AgControllerComponent * &);
	void assign(std::initializer_list<AgControllerComponent *>);
	~list<AgControllerComponent *,std::allocator<AgControllerComponent *> >();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > begin();
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > begin();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > end();
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > end();
	std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> >,std::_Iterator_base0> _Unchecked_begin();
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > _Unchecked_begin();
	std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> >,std::_Iterator_base0> _Unchecked_end();
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > _Unchecked_end();
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > _Make_iter(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> >,std::_Iterator_base0>);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > _Make_iter(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >);
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > > rbegin();
	std::reverse_iterator<std::_List_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > > rbegin();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > > rend();
	std::reverse_iterator<std::_List_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > > rend();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > cbegin();
	std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > cend();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > > crbegin();
	std::reverse_iterator<std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > > crend();
	void resize(unsigned long long, AgControllerComponent * &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgControllerComponent *> get_allocator();
	AgControllerComponent * & front();
	AgControllerComponent * & front();
	AgControllerComponent * & back();
	AgControllerComponent * & back();
	void pop_front();
	void pop_back();
	std::_List_node<AgControllerComponent *,void *> * _Unlinknode(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > erase(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >);
	std::_List_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > > erase(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >);
	void _Unchecked_erase(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> >,std::_Iterator_base0>);
	void clear();
	void swap(std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > &);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >, std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >, std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >, std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >, std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >, std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > &);
	void splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >, std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > &);
	void remove(AgControllerComponent * &);
	void unique();
	void merge(std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > &);
	void merge(std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > &);
	void sort();
	void reverse();
	void _Splice(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >, std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >, unsigned long long);
	void _Splice_same(std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >, std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > &, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >, std::_List_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> > >, unsigned long long);
	void _Unchecked_splice(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> >,std::_Iterator_base0>, std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> >,std::_Iterator_base0>, std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> >,std::_Iterator_base0>);
	void _Tidy();
	void _Insert_n(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<AgControllerComponent *> >,std::_Iterator_base0>, unsigned long long, AgControllerComponent * &);
	void _Incsize(unsigned long long);
};
class std::map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > > > :
	std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > >,0> >
{
	class _Myt;
	class _Mybase;
	enum key_type
	{
		AgControllerComponentType_Unknown = 0,
		AgControllerComponentType_Buttons = 1,
		AgControllerComponentType_Axis = 2,
		AgControllerComponentType_Position = 3,
		AgControllerComponentType_Rumble = 4,
		AgControllerComponentType_Motion = 5,
		AgControllerComponentType_Body = 6,
		AgControllerComponentType_Touch = 7,
		AgControllerComponentType_LightBar = 8,
		AgControllerComponentType_Acceleration = 9,
		AgControllerComponentType_AngularVelocity = 10,
		AgControllerComponentType_Orientation = 11,
		AgControllerComponentType_Speaker = 12,
		AgControllerComponentType_Count = 13,
	};
	class mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > pointer;
	typedef const std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > const_pointer;
	typedef std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > reference;
	typedef const std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::a(std::initializer_list<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > >, const std::less<enum AgControllerComponentType> &, const std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > > &);
	map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::a(std::initializer_list<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > >, const std::less<enum AgControllerComponentType> &);
	map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::a(std::initializer_list<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > >);
	map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::a(std::map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > > > &, const std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > > &);
	map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::a(std::map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > > > &);
	map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::a(const std::less<enum AgControllerComponentType> &, const std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > > &);
	map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::a(const std::less<enum AgControllerComponentType> &);
	map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::a(const std::map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > > > &, const std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > > &);
	map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::a(const std::map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > > > &);
	map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::a(const std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > > &);
	map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::a();
	std::map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > > > & operator=(std::initializer_list<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > >);
	std::map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > > > & operator=(std::map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > > > &);
	std::map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > > > & operator=(const std::map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > > > &);
	std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > & operator[](const AgControllerComponentType &);
	std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > & operator[](AgControllerComponentType &);
	void swap(std::map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > > > &);
	const std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > & at(const AgControllerComponentType &);
	std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > & at(const AgControllerComponentType &);
	~map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::();
};
class AgController :
	AgReferencedObject
{
public:
	AgController(const AgController &);
	AgController(AgControllerType, unsigned long);
	~AgController();
	AgControllerHardwareType getHardwareType();
	AgControllerType getType();
	unsigned long getId();
	AgStringRef getName();
	const std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > & getComponents(AgControllerComponentType);
	AgControllerComponent & getComponent(AgControllerComponentType, unsigned long);
	void update();
	void postUpdate();
	void clear();
	AgString getMappingString();
	AgControllerUID getUID();
	long isConnected();
	unsigned long long getLastUsed();
protected:
	void addComponent(AgControllerComponent *);
	void removeComponent(AgControllerComponent *);
	void setHardwareType(AgControllerHardwareType);
	void setName(AgStringRef);
	unsigned long long m_lastUsed; // 0x10
private:
	AgControllerType m_type; // 0x18
	unsigned long m_id; // 0x1C
	std::map<enum AgControllerComponentType,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> >,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > > > > m_components; // 0x20
	AgControllerHardwareType m_hardwareType; // 0x30
	AgString m_name; // 0x38
	long m_connected; // 0x48
	static AgControllerComponent ms_emptyControllerComponent; // 0xFFFFFFFFFFFFFFFF
	static std::list<AgControllerComponent *,std::allocator<AgControllerComponent *> > ms_emptyControllerComponentList; // 0xFFFFFFFFFFFFFFFF
public:
	AgController & operator=(const AgController &);
};
AgController::AgController(AgControllerType type, unsigned long id); // 0x14064DB90
AgController::~AgController(); // 0x14064EDB0
AgString AgController::getMappingString(); // 0x140653A10
AgControllerUID AgController::getUID(); // 0x140653DF0
void AgController::addComponent(AgControllerComponent * component); // 0x1406511B0
class AgPointer<AgController>
{
public:
	AgPointer<AgController>(const AgReference<AgController> &);
	AgPointer<AgController>(AgPointer<AgController> &);
	AgPointer<AgController>(const AgPointer<AgController> &);
	AgPointer<AgController>(AgController *);
	AgPointer<AgController>();
	~AgPointer<AgController>();
	AgPointer<AgController> & operator=(AgPointer<AgController> &);
	AgPointer<AgController> & operator=(const AgReference<AgController> &);
	AgPointer<AgController> & operator=(const AgPointer<AgController> &);
	AgPointer<AgController> & operator=(AgController *);
	bool operator<(const AgPointer<AgController> &);
	AgController * operator->();
	AgController & operator*();
	bool operator==(const AgPointer<AgController> &);
	bool operator==(AgController *);
	bool operator!=(const AgPointer<AgController> &);
	bool operator!=(AgController *);
	AgController * getObject();
	void swap(AgPointer<AgController> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgController * m_ptr; // 0x8
};
class std::vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgPointer<AgController> pointer;
	typedef const AgPointer<AgController> const_pointer;
	typedef AgPointer<AgController> reference;
	typedef const AgPointer<AgController> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > >(std::initializer_list<AgPointer<AgController> >, const std::allocator<AgPointer<AgController> > &);
	vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > >(std::vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > &, const std::allocator<AgPointer<AgController> > &);
	vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > >(std::vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > &);
	vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > >(const std::vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > &, const std::allocator<AgPointer<AgController> > &);
	vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > >(const std::vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > &);
	vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > >(unsigned long long, const AgPointer<AgController> &, const std::allocator<AgPointer<AgController> > &);
	vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > >(unsigned long long, const AgPointer<AgController> &);
	vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > >(unsigned long long);
	vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > >(const std::allocator<AgPointer<AgController> > &);
	vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > >();
	void _Construct_n(unsigned long long, const AgPointer<AgController> *);
	std::vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > & operator=(const std::vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > &);
	std::vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > & operator=(std::initializer_list<AgPointer<AgController> >);
	std::vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > & operator=(std::vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > &);
	void _Assign_rv(std::vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > &);
	void _Assign_rv(std::vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > &, std::integral_constant<bool,1>);
	void push_back(const AgPointer<AgController> &);
	void push_back(AgPointer<AgController> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > >, unsigned long long, const AgPointer<AgController> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > >, const AgPointer<AgController> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > >, std::initializer_list<AgPointer<AgController> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > >, AgPointer<AgController> &);
	void assign(unsigned long long, const AgPointer<AgController> &);
	void assign(std::initializer_list<AgPointer<AgController> >);
	~vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgPointer<AgController> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgPointer<AgController> > get_allocator();
	AgPointer<AgController> & at(unsigned long long);
	const AgPointer<AgController> & at(unsigned long long);
	AgPointer<AgController> & operator[](unsigned long long);
	const AgPointer<AgController> & operator[](unsigned long long);
	const AgPointer<AgController> * data();
	AgPointer<AgController> * data();
	const AgPointer<AgController> & front();
	AgPointer<AgController> & front();
	const AgPointer<AgController> & back();
	AgPointer<AgController> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgPointer<AgController> *, AgPointer<AgController> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgPointer<AgController> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgController> > > >, unsigned long long, const AgPointer<AgController> &);
	AgPointer<AgController> * _Ufill(AgPointer<AgController> *, unsigned long long, const AgPointer<AgController> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgPointer<AgController> *, AgPointer<AgController> *);
};