#pragma once

enum AgJsonNodeType
{
	AgJsonNodeType_Value = 0,
	AgJsonNodeType_Array = 1,
	AgJsonNodeType_Object = 2,
	AgJsonNodeType_Null = 3,
	AgJsonNodeType_Count = 4,
};
enum AgJsonValueType
{
	AgJsonValueType_Number = 0,
	AgJsonValueType_String = 1,
	AgJsonValueType_Boolean = 2,
	AgJsonValueType_Count = 3,
};
struct AgJsonNodeData :
	AgReferencedObject
{
	AgJsonNodeData(AgJsonNodeData &);
	AgJsonNodeData(const AgJsonNodeData &);
	AgJsonNodeData(AgJsonNodeType, AgStringRef);
	AgJsonNodeType m_type; // 0x8
	AgString m_name; // 0x10
	~AgJsonNodeData();
	AgJsonNodeData & operator=(AgJsonNodeData &);
	AgJsonNodeData & operator=(const AgJsonNodeData &);
};
class AgJsonNode
{
public:
	static AgJsonNode & Null();
	static AgJsonNode parse(AgStringRef);
	static AgJsonNode parse(AgPointer<AgStream>);
	AgJsonNode(const AgJsonNode &);
	AgJsonNode();
protected:
	AgJsonNode(AgJsonNodeType, const AgJsonNode &);
	AgJsonNode(AgPointer<AgJsonNodeData>);
private:
	AgJsonNodeData & getData();
	const AgJsonNodeData & getData();
public:
	~AgJsonNode();
	AgJsonNodeType getType();
	AgStringRef getName();
	long isNull();
protected:
	AgPointer<AgJsonNodeData> m_data; // 0x8
public:
	AgJsonNode & operator=(const AgJsonNode &);
};
class AgPointer<AgJsonNodeData>
{
public:
	AgPointer<AgJsonNodeData>(const AgReference<AgJsonNodeData> &);
	AgPointer<AgJsonNodeData>(AgPointer<AgJsonNodeData> &);
	AgPointer<AgJsonNodeData>(const AgPointer<AgJsonNodeData> &);
	AgPointer<AgJsonNodeData>(AgJsonNodeData *);
	AgPointer<AgJsonNodeData>();
	~AgPointer<AgJsonNodeData>();
	AgPointer<AgJsonNodeData> & operator=(AgPointer<AgJsonNodeData> &);
	AgPointer<AgJsonNodeData> & operator=(const AgReference<AgJsonNodeData> &);
	AgPointer<AgJsonNodeData> & operator=(const AgPointer<AgJsonNodeData> &);
	AgPointer<AgJsonNodeData> & operator=(AgJsonNodeData *);
	bool operator<(const AgPointer<AgJsonNodeData> &);
	AgJsonNodeData * operator->();
	AgJsonNodeData & operator*();
	bool operator==(const AgPointer<AgJsonNodeData> &);
	bool operator==(AgJsonNodeData *);
	bool operator!=(const AgPointer<AgJsonNodeData> &);
	bool operator!=(AgJsonNodeData *);
	AgJsonNodeData * getObject();
	void swap(AgPointer<AgJsonNodeData> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgJsonNodeData * m_ptr; // 0x8
};
AgJsonNode::AgJsonNode(const AgJsonNode & other); // 0x140692DF0
AgJsonNode::~AgJsonNode(); // 0x14065A910
class AgJsonNullValue :
	AgJsonNode
{
public:
	AgJsonNullValue(AgJsonNullValue &);
	AgJsonNullValue(const AgJsonNullValue &);
	AgJsonNullValue();
	virtual ~AgJsonNullValue();
	AgJsonNullValue & operator=(AgJsonNullValue &);
	AgJsonNullValue & operator=(const AgJsonNullValue &);
};
AgJsonNullValue::AgJsonNullValue(); // 0x140692E30
struct AgJsonValueData :
	AgJsonNodeData
{
	AgJsonValueData(AgJsonValueData &);
	AgJsonValueData(const AgJsonValueData &);
	AgJsonValueData(AgStringRef, bool);
	AgJsonValueData(AgStringRef, AgStringRef);
	AgJsonValueData(AgStringRef, float);
	AgJsonValueData(AgStringRef, long);
	AgJsonValueType m_valueType; // 0x20
	double m_floatValue; // 0x28
	AgString m_stringValue; // 0x30
	~AgJsonValueData();
	AgJsonValueData & operator=(AgJsonValueData &);
	AgJsonValueData & operator=(const AgJsonValueData &);
};
class AgJsonValue :
	AgJsonNode
{
private:
	AgJsonValueData & getData();
	const AgJsonValueData & getData();
public:
	AgJsonValue(AgJsonValue &);
	AgJsonValue(const AgJsonValue &);
	AgJsonValue(AgStringRef, AgStringRef);
	AgJsonValue(bool, AgStringRef);
	AgJsonValue(float, AgStringRef);
	AgJsonValue(long, AgStringRef);
	AgJsonValue(const AgJsonNode &);
	AgJsonValueType getValueType();
	AgStringRef getString();
	float getFloat();
	long getInt();
	bool getBool();
	virtual ~AgJsonValue();
	AgJsonValue & operator=(AgJsonValue &);
	AgJsonValue & operator=(const AgJsonValue &);
};
AgJsonValue::AgJsonValue(const AgJsonNode & other); // 0x1406949A0
AgJsonValue::AgJsonValue(float value, AgStringRef name); // 0x140692FD0
struct AgJsonObjectData :
	AgJsonNodeData
{
	class ChildMap;
	AgJsonObjectData(AgJsonObjectData &);
	AgJsonObjectData(const AgJsonObjectData &);
	AgJsonObjectData(AgStringRef);
	std::map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > > m_children; // 0x20
	~AgJsonObjectData();
	AgJsonObjectData & operator=(AgJsonObjectData &);
	AgJsonObjectData & operator=(const AgJsonObjectData &);
};
class std::map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > > :
	std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> >
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
	typedef std::pair<AgStringRef const ,AgJsonNode> pointer;
	typedef const std::pair<AgStringRef const ,AgJsonNode> const_pointer;
	typedef std::pair<AgStringRef const ,AgJsonNode> reference;
	typedef const std::pair<AgStringRef const ,AgJsonNode> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > >(std::initializer_list<std::pair<AgStringRef const ,AgJsonNode> >, const std::less<AgStringRef> &, const std::allocator<std::pair<AgStringRef const ,AgJsonNode> > &);
	map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > >(std::initializer_list<std::pair<AgStringRef const ,AgJsonNode> >, const std::less<AgStringRef> &);
	map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > >(std::initializer_list<std::pair<AgStringRef const ,AgJsonNode> >);
	map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > >(std::map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > > &, const std::allocator<std::pair<AgStringRef const ,AgJsonNode> > &);
	map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > >(std::map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > > &);
	map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > >(const std::less<AgStringRef> &, const std::allocator<std::pair<AgStringRef const ,AgJsonNode> > &);
	map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > >(const std::less<AgStringRef> &);
	map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > >(const std::map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > > &, const std::allocator<std::pair<AgStringRef const ,AgJsonNode> > &);
	map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > >(const std::map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > > &);
	map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > >(const std::allocator<std::pair<AgStringRef const ,AgJsonNode> > &);
	map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > >();
	std::map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > > & operator=(std::initializer_list<std::pair<AgStringRef const ,AgJsonNode> >);
	std::map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > > & operator=(std::map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > > &);
	std::map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > > & operator=(const std::map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > > &);
	AgJsonNode & operator[](const AgStringRef &);
	AgJsonNode & operator[](AgStringRef &);
	void swap(std::map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > > &);
	const AgJsonNode & at(const AgStringRef &);
	AgJsonNode & at(const AgStringRef &);
	~map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > >();
};
class AgJsonObject :
	AgJsonNode
{
private:
	AgJsonObjectData & getData();
	const AgJsonObjectData & getData();
	const std::map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > > & getChildren();
	std::map<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> > > & getChildren();
public:
	AgJsonObject(AgJsonObject &);
	AgJsonObject(const AgJsonObject &);
	AgJsonObject(AgStringRef);
	AgJsonObject(const AgJsonNode &);
	long addChild(AgJsonNode);
	AgStringRef getChildString(AgStringRef, AgStringRef);
	float getChildFloat(AgStringRef, float);
	long getChildInt(AgStringRef, long);
	long getChildBool(AgStringRef, long);
	AgJsonNode getChild(AgStringRef);
	unsigned long getNumChildren();
	AgJsonNode getChildAtIndex(unsigned long);
	AgJsonNode operator[](long);
	AgJsonNode operator[](AgStringRef);
	virtual ~AgJsonObject();
	AgJsonObject & operator=(AgJsonObject &);
	AgJsonObject & operator=(const AgJsonObject &);
};
AgJsonObject::AgJsonObject(const AgJsonNode & other); // 0x14067B280
AgJsonObject::AgJsonObject(AgStringRef name); // 0x140692EF0
long AgJsonObject::addChild(AgJsonNode value); // 0x140693790
AgJsonNode AgJsonObject::getChild(AgStringRef name); // 0x14067B5F0
AgJsonNode AgJsonObject::getChildAtIndex(unsigned long index); // 0x140695940
struct AgJsonArrayData :
	AgJsonNodeData
{
	class ChildArray;
	AgJsonArrayData(AgJsonArrayData &);
	AgJsonArrayData(const AgJsonArrayData &);
	AgJsonArrayData(AgStringRef);
	std::vector<AgJsonNode,std::allocator<AgJsonNode> > m_children; // 0x20
	~AgJsonArrayData();
	AgJsonArrayData & operator=(AgJsonArrayData &);
	AgJsonArrayData & operator=(const AgJsonArrayData &);
};
class std::vector<AgJsonNode,std::allocator<AgJsonNode> > :
	std::_Vector_alloc<std::_Vec_base_types<AgJsonNode,std::allocator<AgJsonNode> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgJsonNode pointer;
	typedef const AgJsonNode const_pointer;
	typedef AgJsonNode reference;
	typedef const AgJsonNode const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgJsonNode,std::allocator<AgJsonNode> >(std::initializer_list<AgJsonNode>, const std::allocator<AgJsonNode> &);
	vector<AgJsonNode,std::allocator<AgJsonNode> >(std::vector<AgJsonNode,std::allocator<AgJsonNode> > &, const std::allocator<AgJsonNode> &);
	vector<AgJsonNode,std::allocator<AgJsonNode> >(std::vector<AgJsonNode,std::allocator<AgJsonNode> > &);
	vector<AgJsonNode,std::allocator<AgJsonNode> >(const std::vector<AgJsonNode,std::allocator<AgJsonNode> > &, const std::allocator<AgJsonNode> &);
	vector<AgJsonNode,std::allocator<AgJsonNode> >(const std::vector<AgJsonNode,std::allocator<AgJsonNode> > &);
	vector<AgJsonNode,std::allocator<AgJsonNode> >(unsigned long long, const AgJsonNode &, const std::allocator<AgJsonNode> &);
	vector<AgJsonNode,std::allocator<AgJsonNode> >(unsigned long long, const AgJsonNode &);
	vector<AgJsonNode,std::allocator<AgJsonNode> >(unsigned long long);
	vector<AgJsonNode,std::allocator<AgJsonNode> >(const std::allocator<AgJsonNode> &);
	vector<AgJsonNode,std::allocator<AgJsonNode> >();
	void _Construct_n(unsigned long long, const AgJsonNode *);
	std::vector<AgJsonNode,std::allocator<AgJsonNode> > & operator=(const std::vector<AgJsonNode,std::allocator<AgJsonNode> > &);
	std::vector<AgJsonNode,std::allocator<AgJsonNode> > & operator=(std::initializer_list<AgJsonNode>);
	std::vector<AgJsonNode,std::allocator<AgJsonNode> > & operator=(std::vector<AgJsonNode,std::allocator<AgJsonNode> > &);
	void _Assign_rv(std::vector<AgJsonNode,std::allocator<AgJsonNode> > &);
	void _Assign_rv(std::vector<AgJsonNode,std::allocator<AgJsonNode> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgJsonNode,std::allocator<AgJsonNode> > &, std::integral_constant<bool,1>);
	void push_back(const AgJsonNode &);
	void push_back(AgJsonNode &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > >, unsigned long long, const AgJsonNode &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > >, const AgJsonNode &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > >, std::initializer_list<AgJsonNode>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > >, AgJsonNode &);
	void assign(unsigned long long, const AgJsonNode &);
	void assign(std::initializer_list<AgJsonNode>);
	~vector<AgJsonNode,std::allocator<AgJsonNode> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgJsonNode &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgJsonNode> get_allocator();
	AgJsonNode & at(unsigned long long);
	const AgJsonNode & at(unsigned long long);
	AgJsonNode & operator[](unsigned long long);
	const AgJsonNode & operator[](unsigned long long);
	const AgJsonNode * data();
	AgJsonNode * data();
	const AgJsonNode & front();
	AgJsonNode & front();
	const AgJsonNode & back();
	AgJsonNode & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgJsonNode,std::allocator<AgJsonNode> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgJsonNode *, AgJsonNode *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgJsonNode *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgJsonNode> > >, unsigned long long, const AgJsonNode &);
	AgJsonNode * _Ufill(AgJsonNode *, unsigned long long, const AgJsonNode *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgJsonNode *, AgJsonNode *);
};
class AgJsonArray :
	AgJsonNode
{
private:
	AgJsonArrayData & getData();
	const AgJsonArrayData & getData();
public:
	AgJsonArray(AgJsonArray &);
	AgJsonArray(const AgJsonArray &);
	AgJsonArray(AgStringRef);
	AgJsonArray(const AgJsonNode &);
	void addChild(AgJsonNode);
	unsigned long getNumChildren();
	AgJsonNode getChildAtIndex(unsigned long);
	AgJsonNode operator[](long);
	virtual ~AgJsonArray();
	AgJsonArray & operator=(AgJsonArray &);
	AgJsonArray & operator=(const AgJsonArray &);
};
AgJsonArray::AgJsonArray(const AgJsonNode & other); // 0x140694930
AgJsonArray::AgJsonArray(AgStringRef name); // 0x140692D20
AgJsonNode AgJsonArray::getChildAtIndex(unsigned long index); // 0x140695890