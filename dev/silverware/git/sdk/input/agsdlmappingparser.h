#pragma once

class AgSDLMappingParser
{
public:
	AgSDLMappingParser(AgSDLMappingParser &);
	AgSDLMappingParser(const AgSDLMappingParser &);
	AgSDLMappingParser(const AgPointer<AgController> &);
	AgSDLMappingParser();
	long getButtonIndex(AgGamepadButton);
private:
	std::map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > > m_buttonIdLUT; // 0x0
public:
	~AgSDLMappingParser();
	AgSDLMappingParser & operator=(AgSDLMappingParser &);
	AgSDLMappingParser & operator=(const AgSDLMappingParser &);
};
AgSDLMappingParser::AgSDLMappingParser(const AgPointer<AgController> & controller); // 0x1402C79A0
class std::map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > > :
	std::_Tree<std::_Tmap_traits<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> >,0> >
{
	class _Myt;
	class _Mybase;
	class key_type;
	enum mapped_type
	{
		AgGamepadButton_Up = 0,
		AgGamepadButton_Down = 1,
		AgGamepadButton_Left = 2,
		AgGamepadButton_Right = 3,
		AgGamepadButton_A = 4,
		AgGamepadButton_B = 5,
		AgGamepadButton_X = 6,
		AgGamepadButton_Y = 7,
		AgGamepadButton_LB = 8,
		AgGamepadButton_RB = 9,
		AgGamepadButton_L3 = 10,
		AgGamepadButton_R3 = 11,
		AgGamepadButton_Start = 12,
		AgGamepadButton_Select = 13,
		AgGamepadButton_TouchPad = 14,
		AgGamepadButton_Count = 15,
		AgGamepadButton_Menu = 12,
		AgGamepadButton_Options = 13,
		AgGamepadButton_View = 13,
		AgGamepadButton_Back = 13,
		AgGamepadButton_Cross = 4,
		AgGamepadButton_Circle = 5,
		AgGamepadButton_Square = 6,
		AgGamepadButton_Triangle = 7,
	};
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<AgStringRef const ,enum AgGamepadButton> pointer;
	typedef const std::pair<AgStringRef const ,enum AgGamepadButton> const_pointer;
	typedef std::pair<AgStringRef const ,enum AgGamepadButton> reference;
	typedef const std::pair<AgStringRef const ,enum AgGamepadButton> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > >(std::initializer_list<std::pair<AgStringRef const ,enum AgGamepadButton> >, const std::less<AgStringRef> &, const std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > &);
	map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > >(std::initializer_list<std::pair<AgStringRef const ,enum AgGamepadButton> >, const std::less<AgStringRef> &);
	map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > >(std::initializer_list<std::pair<AgStringRef const ,enum AgGamepadButton> >);
	map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > >(std::map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > > &, const std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > &);
	map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > >(std::map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > > &);
	map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > >(const std::less<AgStringRef> &, const std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > &);
	map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > >(const std::less<AgStringRef> &);
	map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > >(const std::map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > > &, const std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > &);
	map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > >(const std::map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > > &);
	map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > >(const std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > &);
	map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > >();
	std::map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > > & operator=(std::initializer_list<std::pair<AgStringRef const ,enum AgGamepadButton> >);
	std::map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > > & operator=(std::map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > > &);
	std::map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > > & operator=(const std::map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > > &);
	AgGamepadButton & operator[](const AgStringRef &);
	AgGamepadButton & operator[](AgStringRef &);
	void swap(std::map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > > &);
	const AgGamepadButton & at(const AgStringRef &);
	AgGamepadButton & at(const AgStringRef &);
	~map<AgStringRef,enum AgGamepadButton,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,enum AgGamepadButton> > >();
};
class std::map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > > :
	std::_Tree<std::_Tmap_traits<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> >,0> >
{
	class _Myt;
	class _Mybase;
	enum key_type
	{
		AgGamepadButton_Up = 0,
		AgGamepadButton_Down = 1,
		AgGamepadButton_Left = 2,
		AgGamepadButton_Right = 3,
		AgGamepadButton_A = 4,
		AgGamepadButton_B = 5,
		AgGamepadButton_X = 6,
		AgGamepadButton_Y = 7,
		AgGamepadButton_LB = 8,
		AgGamepadButton_RB = 9,
		AgGamepadButton_L3 = 10,
		AgGamepadButton_R3 = 11,
		AgGamepadButton_Start = 12,
		AgGamepadButton_Select = 13,
		AgGamepadButton_TouchPad = 14,
		AgGamepadButton_Count = 15,
		AgGamepadButton_Menu = 12,
		AgGamepadButton_Options = 13,
		AgGamepadButton_View = 13,
		AgGamepadButton_Back = 13,
		AgGamepadButton_Cross = 4,
		AgGamepadButton_Circle = 5,
		AgGamepadButton_Square = 6,
		AgGamepadButton_Triangle = 7,
	};
	typedef long mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<enum AgGamepadButton const ,int> pointer;
	typedef const std::pair<enum AgGamepadButton const ,int> const_pointer;
	typedef std::pair<enum AgGamepadButton const ,int> reference;
	typedef const std::pair<enum AgGamepadButton const ,int> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > >(std::initializer_list<std::pair<enum AgGamepadButton const ,int> >, const std::less<enum AgGamepadButton> &, const std::allocator<std::pair<enum AgGamepadButton const ,int> > &);
	map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > >(std::initializer_list<std::pair<enum AgGamepadButton const ,int> >, const std::less<enum AgGamepadButton> &);
	map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > >(std::initializer_list<std::pair<enum AgGamepadButton const ,int> >);
	map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > >(std::map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > > &, const std::allocator<std::pair<enum AgGamepadButton const ,int> > &);
	map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > >(std::map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > > &);
	map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > >(const std::less<enum AgGamepadButton> &, const std::allocator<std::pair<enum AgGamepadButton const ,int> > &);
	map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > >(const std::less<enum AgGamepadButton> &);
	map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > >(const std::map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > > &, const std::allocator<std::pair<enum AgGamepadButton const ,int> > &);
	map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > >(const std::map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > > &);
	map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > >(const std::allocator<std::pair<enum AgGamepadButton const ,int> > &);
	map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > >();
	std::map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > > & operator=(std::initializer_list<std::pair<enum AgGamepadButton const ,int> >);
	std::map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > > & operator=(std::map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > > &);
	std::map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > > & operator=(const std::map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > > &);
	long & operator[](const AgGamepadButton &);
	long & operator[](AgGamepadButton &);
	void swap(std::map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > > &);
	const long & at(const AgGamepadButton &);
	long & at(const AgGamepadButton &);
	~map<enum AgGamepadButton,int,std::less<enum AgGamepadButton>,std::allocator<std::pair<enum AgGamepadButton const ,int> > >();
};