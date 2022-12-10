#pragma once

struct extension::GFXIMultiControllerMode
{
	enum Spec
	{
		Default = 0,
		ByUser = 1,
		ByFighter = 2,
		ByController = 3,
	};
};
enum extension::GFXIMultiControllerMode::Spec
{
	Default = 0,
	ByUser = 1,
	ByFighter = 2,
	ByController = 3,
};
class extension::GFXIKeyMapping
{
	enum KeyCode
	{
		None = 0,
		A = 65,
		B = 66,
		C = 67,
		D = 68,
		E = 69,
		F = 70,
		G = 71,
		H = 72,
		I = 73,
		J = 74,
		K = 75,
		L = 76,
		M = 77,
		N = 78,
		O = 79,
		P = 80,
		Q = 81,
		R = 82,
		S = 83,
		T = 84,
		U = 85,
		V = 86,
		W = 87,
		X = 88,
		Y = 89,
		Z = 90,
		Num0 = 48,
		Num1 = 49,
		Num2 = 50,
		Num3 = 51,
		Num4 = 52,
		Num5 = 53,
		Num6 = 54,
		Num7 = 55,
		Num8 = 56,
		Num9 = 57,
		KP_0 = 96,
		KP_1 = 97,
		KP_2 = 98,
		KP_3 = 99,
		KP_4 = 100,
		KP_5 = 101,
		KP_6 = 102,
		KP_7 = 103,
		KP_8 = 104,
		KP_9 = 105,
		KP_Multiply = 106,
		KP_Add = 107,
		KP_Enter = 108,
		KP_Subtract = 109,
		KP_Decimal = 110,
		KP_Divide = 111,
		F1 = 112,
		F2 = 113,
		F3 = 114,
		F4 = 115,
		F5 = 116,
		F6 = 117,
		F7 = 118,
		F8 = 119,
		F9 = 120,
		F10 = 121,
		F11 = 122,
		F12 = 123,
		F13 = 124,
		F14 = 125,
		F15 = 126,
		Backspace = 8,
		Tab = 9,
		Clear = 12,
		Return = 13,
		Shift = 16,
		Control = 17,
		Alt = 18,
		Pause = 19,
		CapsLock = 20,
		Escape = 27,
		Space = 32,
		PageUp = 33,
		PageDown = 34,
		End = 35,
		Home = 36,
		Left = 37,
		Up = 38,
		Right = 39,
		Down = 40,
		PrintScreen = 44,
		Insert = 45,
		Delete = 46,
		Help = 47,
		NumLock = 144,
		ScrollLock = 145,
		LeftShift = 160,
		RightShift = 161,
		LeftControl = 162,
		RightControl = 163,
		LeftAlt = 164,
		RightAlt = 165,
		Semicolon = 186,
		Equal = 187,
		Comma = 188,
		Minus = 189,
		Period = 190,
		Slash = 191,
		Bar = 192,
		BracketLeft = 219,
		Backslash = 220,
		BracketRight = 221,
		Quote = 222,
		OEM_AX = 225,
		OEM_102 = 226,
		ICO_HELP = 227,
		ICO_00 = 228,
		KeyCount = 229,
	};
	class KeyModifiers;
	enum GameOpSpec
	{
		GameOp_Dir_L = 0,
		GameOp_Dir_D = 1,
		GameOp_Dir_R = 2,
		GameOp_Dir_U = 3,
		GameOp_UI_OK = 4,
		GameOp_UI_Cancel = 5,
		GameOp_UI_FuncX = 6,
		GameOp_UI_FuncY = 7,
		GameOp_UI_PageBack = 8,
		GameOp_UI_PageNext = 9,
		GameOp_UI_LShift = 10,
		GameOp_UI_RShift = 11,
		GameOp_GameStart = 12,
		GameOp_TouchPad = 13,
		GameOp_Cheat = 14,
		GameOp_LStick = 15,
		GameOp_MenuStart = 16,
		GameOp_MessageInput = 17,
		GameOp_SetPhrases = 18,
		GameOp_Leaderboard_Up = 19,
		GameOp_Leaderboard_Down = 20,
		GameOp_SetDialog1 = 21,
		GameOp_SetDialog2 = 22,
		GameOp_SetDialog3 = 23,
		GameOp_SetDialog4 = 24,
		GameOp_Continue = 25,
		GameOp_ReplayDataDisplay = 26,
		GameOpSpec_Internal_Upper_Limit = 27,
		GameOp_RStick = 14,
		GameOp_Squar = 6,
		GameOp_Triangle = 7,
		GameOp_Cross = 4,
		GameOp_Circle = 5,
		GameOp_L1 = 8,
		GameOp_R1 = 9,
		GameOp_L2 = 10,
		GameOp_R2 = 11,
		GameOp_Option = 12,
	};
	struct MapConfig;
public:
	GFXIKeyMapping(const extension::GFXIKeyMapping &);
	GFXIKeyMapping();
	~GFXIKeyMapping();
	extension::GFXIKeyMapping & operator=(const extension::GFXIKeyMapping &);
	void addMap(const extension::GFXIKeyMapping::MapConfig &);
	void clear();
	static extension::GFXIKeyMapping GetDefault();
private:
	void initialize(const extension::GFXIKeyMapping::MapConfig *, const extension::GFXIKeyMapping::MapConfig *);
	class MapImpl;
	class MapImplSharedPtr_t;
	extension::RefCountablePtr<extension::GFXIKeyMapping::MapImpl> m_mapImpl; // 0x0
};
struct extension::GFXIKeyMapping::MapConfig
{
	Scaleform::Key::Code keyCode; // 0x0
	GameOperations::GameOpSpec op; // 0x4
	bool isRepeat; // 0x8
};
class extension::RefCountablePtr<extension::GFXIKeyMapping::MapImpl>
{
private:
	extension::GFXIKeyMapping::MapImpl * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::GFXIKeyMapping::MapImpl>(const extension::RefCountablePtr<extension::GFXIKeyMapping::MapImpl> &);
	RefCountablePtr<extension::GFXIKeyMapping::MapImpl>(extension::GFXIKeyMapping::MapImpl *, bool);
	RefCountablePtr<extension::GFXIKeyMapping::MapImpl>(extension::GFXIKeyMapping::MapImpl *);
	RefCountablePtr<extension::GFXIKeyMapping::MapImpl>();
	~RefCountablePtr<extension::GFXIKeyMapping::MapImpl>();
	void swap(extension::RefCountablePtr<extension::GFXIKeyMapping::MapImpl> &);
	extension::RefCountablePtr<extension::GFXIKeyMapping::MapImpl> & operator=(const extension::RefCountablePtr<extension::GFXIKeyMapping::MapImpl> &);
	void reset(extension::GFXIKeyMapping::MapImpl *);
	void resetWithAddRef(extension::GFXIKeyMapping::MapImpl *);
	extension::GFXIKeyMapping::MapImpl * get();
	extension::GFXIKeyMapping::MapImpl & operator*();
	extension::GFXIKeyMapping::MapImpl * operator->();
	bool isNull();
};
class extension::gfxi_detail::MovieKeyState
{
public:
	MovieKeyState();
private:
	MovieKeyState(const extension::gfxi_detail::MovieKeyState &);
	extension::gfxi_detail::MovieKeyState & operator=(const extension::gfxi_detail::MovieKeyState &);
public:
	bool setKeyDown(Scaleform::Key::Code);
	bool setKeyUp(Scaleform::Key::Code);
	bool setKey(Scaleform::Key::Code, bool);
	bool isKeyDown(Scaleform::Key::Code);
	Scaleform::KeyModifiers getKeyModifiers();
	void clear();
private:
	std::bitset<229> m_keybits; // 0x0
};
class std::bitset<229>
{
	typedef unsigned long long _Ty;
	class reference;
public:
	static void _Validate(unsigned long long);
	bool _Subscript(unsigned long long);
	std::bitset<229>::reference operator[](unsigned long long);
	bool operator[](unsigned long long);
	bitset<229>(unsigned long long);
	bitset<229>();
	static const bool _Need_mask; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long long _Mask; // 0xFFFFFFFFFFFFFFFF
	std::bitset<229> & operator&=(const std::bitset<229> &);
	std::bitset<229> & operator|=(const std::bitset<229> &);
	std::bitset<229> & operator^=(const std::bitset<229> &);
	std::bitset<229> & operator<<=(unsigned long long);
	std::bitset<229> & operator>>=(unsigned long long);
	std::bitset<229> & set(unsigned long long, bool);
	std::bitset<229> & set();
	std::bitset<229> & reset(unsigned long long);
	std::bitset<229> & reset();
	operator~();
	std::bitset<229> & flip(unsigned long long);
	std::bitset<229> & flip();
	unsigned long to_ulong();
	unsigned long long to_ullong();
	unsigned long long count();
	unsigned long long size();
	unsigned long long hash();
	bool operator==(const std::bitset<229> &);
	bool operator!=(const std::bitset<229> &);
	bool test(unsigned long long);
	bool any();
	bool none();
	bool all();
	std::bitset<229> operator<<(unsigned long long);
	std::bitset<229> operator>>(unsigned long long);
	unsigned long long _Getword(unsigned long long);
	enum <unnamed-enum-_Bitsperword> : long long
	{
		_Bitsperword = 64,
		_Words = 3,
	};
private:
	void _Tidy(unsigned long long);
	void _Trim();
	void _Trim_if(std::integral_constant<bool,0>);
	void _Trim_if(std::integral_constant<bool,1>);
	void _Xinv();
	void _Xoflo();
	void _Xran();
	unsigned long long _Array[4]; // 0x0
};
class extension::gfxi_detail::MovieKeyEventGenerator
{
private:
	extension::gfxi_detail::MovieKeyState m_keyState; // 0x0
	extension::GFXIKeyMapping m_mapping; // 0x20
public:
	MovieKeyEventGenerator();
private:
	MovieKeyEventGenerator(const extension::gfxi_detail::MovieKeyEventGenerator &);
	extension::gfxi_detail::MovieKeyEventGenerator & operator=(const extension::gfxi_detail::MovieKeyEventGenerator &);
public:
	~MovieKeyEventGenerator();
	void bindMapping(const extension::GFXIKeyMapping &);
	extension::GFXIKeyMapping getMapping();
	void postKeyEvent(Scaleform::GFx::Movie &, long, extension::GFXIMultiControllerMode::Spec, bool);
};
class extension::gfxi_detail::MovieOperationGenerator
{
public:
	MovieOperationGenerator();
private:
	MovieOperationGenerator(const extension::gfxi_detail::MovieOperationGenerator &);
	extension::gfxi_detail::MovieOperationGenerator & operator=(const extension::gfxi_detail::MovieOperationGenerator &);
public:
	~MovieOperationGenerator();
	struct MultiControllerMode;
	enum MultiControllerModeSpec
	{
		Default = 0,
		ByUser = 1,
		ByFighter = 2,
		ByController = 3,
	};
	extension::GFXIMultiControllerMode::Spec setMultiControllerMode(extension::GFXIMultiControllerMode::Spec);
	extension::GFXIMultiControllerMode::Spec multiControllerMode();
	void bindKeyMapping(const extension::GFXIKeyMapping &, long);
	void postInputEvent(Scaleform::GFx::Movie &);
	static unsigned long ignoreInputFrames; // 0xFFFFFFFFFFFFFFFF
private:
	void postKeyboardEvent(Scaleform::GFx::Movie &);
	extension::GFXIMultiControllerMode::Spec m_multiControllerMode; // 0x0
	extension::gfxi_detail::MovieKeyEventGenerator m_keyEventGenerator[4]; // 0x8
};