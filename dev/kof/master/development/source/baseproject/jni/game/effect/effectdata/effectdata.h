#pragma once

class EffectData
{
public:
	EffectData(const EffectData &);
	EffectData();
	~EffectData();
	void initialize();
	void terminate();
	EffectData * getParent();
	EffectData * getChild();
	EffectData * getSiblingFront();
	EffectData * getSiblingBack();
	void setParent(EffectData *);
	void setChild(EffectData *);
	void setSiblingFront(EffectData *);
	void setSiblingBack(EffectData *);
	long getEffectType();
	void setEffectType(long);
	long getDeleteTime(long, long);
	long getDeleteTime();
	std::vector<DialogData,std::allocator<DialogData> > AllDialogData; // 0x8
	std::vector<DialogChartData,std::allocator<DialogChartData> > AllDialogChartData; // 0x20
	OGLEffectVec2 blurUV1; // 0x38
	OGLEffectVec2 blurUV2; // 0x48
	long figureIndex; // 0x58
protected:
	EffectData * parent; // 0x60
	EffectData * siblingFront; // 0x68
	EffectData * siblingBack; // 0x70
	EffectData * child; // 0x78
	bool dataChangeFlag; // 0x80
	bool renderFlag; // 0x81
	long EffectType; // 0x84
public:
	EffectData & operator=(const EffectData &);
};
EffectData * EffectData::getParent(); // 0x14012A870
EffectData * EffectData::getChild(); // 0x14012A880
EffectData * EffectData::getSiblingFront(); // 0x14012A890
EffectData * EffectData::getSiblingBack(); // 0x14012A8A0
void EffectData::setParent(EffectData * effectData); // 0x14012A8B0
void EffectData::setChild(EffectData * effectData); // 0x14012A8C0
void EffectData::setSiblingFront(EffectData * effectData); // 0x14012A8D0
void EffectData::setSiblingBack(EffectData * effectData); // 0x14012A8E0
long EffectData::getEffectType(); // 0x14012A8F0
void EffectData::setEffectType(long effectType); // 0x14012A900
class std::vector<DialogData,std::allocator<DialogData> > :
	std::_Vector_alloc<std::_Vec_base_types<DialogData,std::allocator<DialogData> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef DialogData pointer;
	typedef const DialogData const_pointer;
	typedef DialogData reference;
	typedef const DialogData const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<DialogData,std::allocator<DialogData> >(std::initializer_list<DialogData>, const std::allocator<DialogData> &);
	vector<DialogData,std::allocator<DialogData> >(std::vector<DialogData,std::allocator<DialogData> > &, const std::allocator<DialogData> &);
	vector<DialogData,std::allocator<DialogData> >(std::vector<DialogData,std::allocator<DialogData> > &);
	vector<DialogData,std::allocator<DialogData> >(const std::vector<DialogData,std::allocator<DialogData> > &, const std::allocator<DialogData> &);
	vector<DialogData,std::allocator<DialogData> >(const std::vector<DialogData,std::allocator<DialogData> > &);
	vector<DialogData,std::allocator<DialogData> >(unsigned long long, const DialogData &, const std::allocator<DialogData> &);
	vector<DialogData,std::allocator<DialogData> >(unsigned long long, const DialogData &);
	vector<DialogData,std::allocator<DialogData> >(unsigned long long);
	vector<DialogData,std::allocator<DialogData> >(const std::allocator<DialogData> &);
	vector<DialogData,std::allocator<DialogData> >();
	void _Construct_n(unsigned long long, const DialogData *);
	std::vector<DialogData,std::allocator<DialogData> > & operator=(const std::vector<DialogData,std::allocator<DialogData> > &);
	std::vector<DialogData,std::allocator<DialogData> > & operator=(std::initializer_list<DialogData>);
	std::vector<DialogData,std::allocator<DialogData> > & operator=(std::vector<DialogData,std::allocator<DialogData> > &);
	void _Assign_rv(std::vector<DialogData,std::allocator<DialogData> > &);
	void _Assign_rv(std::vector<DialogData,std::allocator<DialogData> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<DialogData,std::allocator<DialogData> > &, std::integral_constant<bool,1>);
	void push_back(const DialogData &);
	void push_back(DialogData &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogData> > >, unsigned long long, const DialogData &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogData> > >, const DialogData &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogData> > >, std::initializer_list<DialogData>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogData> > >, DialogData &);
	void assign(unsigned long long, const DialogData &);
	void assign(std::initializer_list<DialogData>);
	~vector<DialogData,std::allocator<DialogData> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogData> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const DialogData &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<DialogData> get_allocator();
	DialogData & at(unsigned long long);
	const DialogData & at(unsigned long long);
	DialogData & operator[](unsigned long long);
	const DialogData & operator[](unsigned long long);
	const DialogData * data();
	DialogData * data();
	const DialogData & front();
	DialogData & front();
	const DialogData & back();
	DialogData & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogData> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogData> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogData> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<DialogData,std::allocator<DialogData> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(DialogData *, DialogData *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const DialogData *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogData> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogData> > >, unsigned long long, const DialogData &);
	DialogData * _Ufill(DialogData *, unsigned long long, const DialogData *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(DialogData *, DialogData *);
};
class std::vector<DialogChartData,std::allocator<DialogChartData> > :
	std::_Vector_alloc<std::_Vec_base_types<DialogChartData,std::allocator<DialogChartData> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef DialogChartData pointer;
	typedef const DialogChartData const_pointer;
	typedef DialogChartData reference;
	typedef const DialogChartData const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<DialogChartData,std::allocator<DialogChartData> >(std::initializer_list<DialogChartData>, const std::allocator<DialogChartData> &);
	vector<DialogChartData,std::allocator<DialogChartData> >(std::vector<DialogChartData,std::allocator<DialogChartData> > &, const std::allocator<DialogChartData> &);
	vector<DialogChartData,std::allocator<DialogChartData> >(std::vector<DialogChartData,std::allocator<DialogChartData> > &);
	vector<DialogChartData,std::allocator<DialogChartData> >(const std::vector<DialogChartData,std::allocator<DialogChartData> > &, const std::allocator<DialogChartData> &);
	vector<DialogChartData,std::allocator<DialogChartData> >(const std::vector<DialogChartData,std::allocator<DialogChartData> > &);
	vector<DialogChartData,std::allocator<DialogChartData> >(unsigned long long, const DialogChartData &, const std::allocator<DialogChartData> &);
	vector<DialogChartData,std::allocator<DialogChartData> >(unsigned long long, const DialogChartData &);
	vector<DialogChartData,std::allocator<DialogChartData> >(unsigned long long);
	vector<DialogChartData,std::allocator<DialogChartData> >(const std::allocator<DialogChartData> &);
	vector<DialogChartData,std::allocator<DialogChartData> >();
	void _Construct_n(unsigned long long, const DialogChartData *);
	std::vector<DialogChartData,std::allocator<DialogChartData> > & operator=(const std::vector<DialogChartData,std::allocator<DialogChartData> > &);
	std::vector<DialogChartData,std::allocator<DialogChartData> > & operator=(std::initializer_list<DialogChartData>);
	std::vector<DialogChartData,std::allocator<DialogChartData> > & operator=(std::vector<DialogChartData,std::allocator<DialogChartData> > &);
	void _Assign_rv(std::vector<DialogChartData,std::allocator<DialogChartData> > &);
	void _Assign_rv(std::vector<DialogChartData,std::allocator<DialogChartData> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<DialogChartData,std::allocator<DialogChartData> > &, std::integral_constant<bool,1>);
	void push_back(const DialogChartData &);
	void push_back(DialogChartData &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > >, unsigned long long, const DialogChartData &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > >, const DialogChartData &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > >, std::initializer_list<DialogChartData>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > >, DialogChartData &);
	void assign(unsigned long long, const DialogChartData &);
	void assign(std::initializer_list<DialogChartData>);
	~vector<DialogChartData,std::allocator<DialogChartData> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const DialogChartData &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<DialogChartData> get_allocator();
	DialogChartData & at(unsigned long long);
	const DialogChartData & at(unsigned long long);
	DialogChartData & operator[](unsigned long long);
	const DialogChartData & operator[](unsigned long long);
	const DialogChartData * data();
	DialogChartData * data();
	const DialogChartData & front();
	DialogChartData & front();
	const DialogChartData & back();
	DialogChartData & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<DialogChartData,std::allocator<DialogChartData> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(DialogChartData *, DialogChartData *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const DialogChartData *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<DialogChartData> > >, unsigned long long, const DialogChartData &);
	DialogChartData * _Ufill(DialogChartData *, unsigned long long, const DialogChartData *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(DialogChartData *, DialogChartData *);
};