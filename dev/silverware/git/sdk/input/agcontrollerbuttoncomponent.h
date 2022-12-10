#pragma once

enum AgKeyboardButton
{
	AgKeyboardButton_Termination = 0,
	AgKeyboardButton_Backspace = 8,
	AgKeyboardButton_Tab = 9,
	AgKeyboardButton_Newline = 13,
	AgKeyboardButton_Capital = 20,
	AgKeyboardButton_Escape = 27,
	AgKeyboardButton_Space = 32,
	AgKeyboardButton_PageUp = 33,
	AgKeyboardButton_PageDown = 34,
	AgKeyboardButton_End = 35,
	AgKeyboardButton_Home = 36,
	AgKeyboardButton_ArrowLeft = 37,
	AgKeyboardButton_ArrowUp = 38,
	AgKeyboardButton_ArrowRight = 39,
	AgKeyboardButton_ArrowDown = 40,
	AgKeyboardButton_Insert = 45,
	AgKeyboardButton_Delete = 46,
	AgKeyboardButton_0 = 48,
	AgKeyboardButton_1 = 49,
	AgKeyboardButton_2 = 50,
	AgKeyboardButton_3 = 51,
	AgKeyboardButton_4 = 52,
	AgKeyboardButton_5 = 53,
	AgKeyboardButton_6 = 54,
	AgKeyboardButton_7 = 55,
	AgKeyboardButton_8 = 56,
	AgKeyboardButton_9 = 57,
	AgKeyboardButton_A = 65,
	AgKeyboardButton_B = 66,
	AgKeyboardButton_C = 67,
	AgKeyboardButton_D = 68,
	AgKeyboardButton_E = 69,
	AgKeyboardButton_F = 70,
	AgKeyboardButton_G = 71,
	AgKeyboardButton_H = 72,
	AgKeyboardButton_I = 73,
	AgKeyboardButton_J = 74,
	AgKeyboardButton_K = 75,
	AgKeyboardButton_L = 76,
	AgKeyboardButton_M = 77,
	AgKeyboardButton_N = 78,
	AgKeyboardButton_O = 79,
	AgKeyboardButton_P = 80,
	AgKeyboardButton_Q = 81,
	AgKeyboardButton_R = 82,
	AgKeyboardButton_S = 83,
	AgKeyboardButton_T = 84,
	AgKeyboardButton_U = 85,
	AgKeyboardButton_V = 86,
	AgKeyboardButton_W = 87,
	AgKeyboardButton_X = 88,
	AgKeyboardButton_Y = 89,
	AgKeyboardButton_Z = 90,
	AgKeyboardButton_Numpad_0 = 96,
	AgKeyboardButton_Numpad_1 = 97,
	AgKeyboardButton_Numpad_2 = 98,
	AgKeyboardButton_Numpad_3 = 99,
	AgKeyboardButton_Numpad_4 = 100,
	AgKeyboardButton_Numpad_5 = 101,
	AgKeyboardButton_Numpad_6 = 102,
	AgKeyboardButton_Numpad_7 = 103,
	AgKeyboardButton_Numpad_8 = 104,
	AgKeyboardButton_Numpad_9 = 105,
	AgKeyboardButton_Numpad_Multiply = 106,
	AgKeyboardButton_Numpad_Add = 107,
	AgKeyboardButton_Numpad_Decimal = 108,
	AgKeyboardButton_Numpad_Subtract = 109,
	AgKeyboardButton_Numpad_Divide = 111,
	AgKeyboardButton_F1 = 112,
	AgKeyboardButton_F2 = 113,
	AgKeyboardButton_F3 = 114,
	AgKeyboardButton_F4 = 115,
	AgKeyboardButton_F5 = 116,
	AgKeyboardButton_F6 = 117,
	AgKeyboardButton_F7 = 118,
	AgKeyboardButton_F8 = 119,
	AgKeyboardButton_F9 = 120,
	AgKeyboardButton_F10 = 121,
	AgKeyboardButton_F11 = 122,
	AgKeyboardButton_F12 = 123,
	AgKeyboardButton_F13 = 124,
	AgKeyboardButton_F14 = 125,
	AgKeyboardButton_F15 = 126,
	AgKeyboardButton_F16 = 127,
	AgKeyboardButton_F17 = 128,
	AgKeyboardButton_F18 = 129,
	AgKeyboardButton_F19 = 130,
	AgKeyboardButton_F20 = 131,
	AgKeyboardButton_F21 = 132,
	AgKeyboardButton_F22 = 133,
	AgKeyboardButton_F23 = 134,
	AgKeyboardButton_F24 = 135,
	AgKeyboardButton_Equal = 136,
	AgKeyboardButton_Subtract = 137,
	AgKeyboardButton_Numpad_Enter = 138,
	AgKeyboardButton_NumLock = 144,
	AgKeyboardButton_Scroll = 145,
	AgKeyboardButton_ShiftLeft = 160,
	AgKeyboardButton_ShiftRight = 161,
	AgKeyboardButton_ControlLeft = 162,
	AgKeyboardButton_ControlRight = 163,
	AgKeyboardButton_AltLeft = 164,
	AgKeyboardButton_AltRight = 165,
	AgKeyboardButton_SuperLeft = 166,
	AgKeyboardButton_SuperRight = 167,
	AgKeyboardButton_Menu = 168,
	AgKeyboardButton_Semicolon = 186,
	AgKeyboardButton_Comma = 188,
	AgKeyboardButton_Period = 190,
	AgKeyboardButton_Slash = 191,
	AgKeyboardButton_AccentGrave = 192,
	AgKeyboardButton_BracketLeft = 219,
	AgKeyboardButton_Backslash = 220,
	AgKeyboardButton_BracketRight = 221,
	AgKeyboardButton_Apostrophe = 222,
	AgKeyboardButton_Count = 256,
};
enum AgGamepadButton
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
enum AgMouseButton
{
	AgMouseButton_Left = 0,
	AgMouseButton_Middle = 1,
	AgMouseButton_Right = 2,
	AgMouseButton_4 = 3,
	AgMouseButton_5 = 4,
	AgMouseButton_Count = 5,
};
class AgControllerButtonComponent :
	AgControllerComponent
{
public:
	static const AgControllerComponentType ComponentType; // 0xFFFFFFFFFFFFFFFF
	AgControllerButtonComponent(AgControllerButtonComponent &);
	AgControllerButtonComponent(const AgControllerButtonComponent &);
	AgControllerButtonComponent(unsigned long);
	AgControllerButtonComponent();
	void reserve(long);
	long getSize();
	void setState(unsigned short, bool);
	bool getState(unsigned short);
	bool getLastState(unsigned short);
	void update();
	void clear();
	bool isPressed(unsigned short);
	bool isReleased(unsigned short);
	bool isJustPressed(unsigned short);
	bool isJustReleased(unsigned short);
	bool operator==(const AgControllerButtonComponent &);
	void applyState(const AgControllerButtonComponent &);
	void serialize(AgPointer<AgStream>);
	void deserialize(AgPointer<AgStream>);
private:
	std::vector<bool,std::allocator<bool> > m_buttons; // 0x8
	std::vector<bool,std::allocator<bool> > m_lastButtons; // 0x28
public:
	~AgControllerButtonComponent();
	AgControllerButtonComponent & operator=(AgControllerButtonComponent &);
	AgControllerButtonComponent & operator=(const AgControllerButtonComponent &);
};
AgControllerButtonComponent::AgControllerButtonComponent(); // 0x14064DC10
class std::vector<bool,std::allocator<bool> > :
	std::_Vb_val<std::allocator<bool> >
{
	class _Myt;
	class _Mybase;
	struct _Alty;
	class _Vectype;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef bool _Ty;
	class allocator_type;
	class reference;
	typedef bool const_reference;
	typedef bool value_type;
	class _Reft;
	class const_iterator;
	class iterator;
	class pointer;
	class const_pointer;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	static const long _VBITS; // 0xFFFFFFFFFFFFFFFF
	enum <unnamed-enum-_EEN_VBITS>
	{
		_EEN_VBITS = 32,
	};
	vector<bool,std::allocator<bool> >(std::initializer_list<bool>, const std::allocator<bool> &);
	vector<bool,std::allocator<bool> >(std::vector<bool,std::allocator<bool> > &, const std::allocator<bool> &);
	vector<bool,std::allocator<bool> >(std::vector<bool,std::allocator<bool> > &);
	vector<bool,std::allocator<bool> >(const std::vector<bool,std::allocator<bool> > &, const std::allocator<bool> &);
	vector<bool,std::allocator<bool> >(const std::vector<bool,std::allocator<bool> > &);
	vector<bool,std::allocator<bool> >(unsigned long long, const bool &, const std::allocator<bool> &);
	vector<bool,std::allocator<bool> >(unsigned long long, const std::allocator<bool> &);
	vector<bool,std::allocator<bool> >(const std::allocator<bool> &);
	vector<bool,std::allocator<bool> >();
	std::vector<bool,std::allocator<bool> > & operator=(const std::vector<bool,std::allocator<bool> > &);
	std::vector<bool,std::allocator<bool> > & operator=(std::initializer_list<bool>);
	std::vector<bool,std::allocator<bool> > & operator=(std::vector<bool,std::allocator<bool> > &);
	void assign(unsigned long long, const bool &);
	void assign(std::initializer_list<bool>);
	std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > insert(std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > >, unsigned long long, const bool &);
	std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > insert(std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > >, const bool &);
	std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > insert(std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > >, std::initializer_list<bool>);
	~vector<bool,std::allocator<bool> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > begin();
	std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > begin();
	std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > end();
	std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > end();
	std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > cbegin();
	std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > cend();
	std::reverse_iterator<std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > > crbegin();
	std::reverse_iterator<std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > > crend();
	void shrink_to_fit();
	std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > _Make_iter(std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > >);
	std::reverse_iterator<std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > > rbegin();
	std::reverse_iterator<std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > > rbegin();
	std::reverse_iterator<std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > > rend();
	std::reverse_iterator<std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > > rend();
	void resize(unsigned long long, bool);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<bool> get_allocator();
	std::_Vb_reference<std::_Wrap_alloc<std::allocator<unsigned int> > > at(unsigned long long);
	bool at(unsigned long long);
	std::_Vb_reference<std::_Wrap_alloc<std::allocator<unsigned int> > > operator[](unsigned long long);
	bool operator[](unsigned long long);
	bool front();
	std::_Vb_reference<std::_Wrap_alloc<std::allocator<unsigned int> > > front();
	bool back();
	std::_Vb_reference<std::_Wrap_alloc<std::allocator<unsigned int> > > back();
	void push_back(const bool &);
	void pop_back();
	std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > erase(std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > >, std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > >);
	std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > erase(std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > >);
	void clear();
	void flip();
	static void swap(std::_Vb_reference<std::_Wrap_alloc<std::allocator<unsigned int> > >, std::_Vb_reference<std::_Wrap_alloc<std::allocator<unsigned int> > >);
	void swap(std::vector<bool,std::allocator<bool> > &);
	unsigned long long hash();
	std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > _Insert_n(std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > >, unsigned long long, const bool &);
	unsigned long long _Insert_x(std::_Vb_const_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > >, unsigned long long);
	void _Orphan_range(unsigned long long, unsigned long long);
	void _Trim(unsigned long long);
	void _Xlen();
	void _Xran();
};
void AgControllerButtonComponent::clear(); // 0x1402A6C10
void AgControllerButtonComponent::serialize(AgPointer<AgStream> stream); // 0x140655B70
void AgControllerButtonComponent::deserialize(AgPointer<AgStream> stream); // 0x140651DF0