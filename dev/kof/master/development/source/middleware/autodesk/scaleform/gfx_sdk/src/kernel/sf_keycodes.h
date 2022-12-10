#pragma once

class Scaleform::Key
{
	enum Code
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
};
class Scaleform::KeyModifiers
{
	enum <unnamed-enum-Key_ShiftPressed>
	{
		Key_ShiftPressed = 1,
		Key_CtrlPressed = 2,
		Key_AltPressed = 4,
		Key_CapsToggled = 8,
		Key_NumToggled = 16,
		Key_ScrollToggled = 32,
		Key_ExtendedKey = 64,
		Initialized_Bit = 128,
		Initialized_Mask = 255,
	};
public:
	unsigned char States; // 0x0
	KeyModifiers(unsigned char);
	KeyModifiers();
	void Reset();
	bool IsShiftPressed();
	bool IsCtrlPressed();
	bool IsAltPressed();
	bool IsCapsToggled();
	bool IsNumToggled();
	bool IsScrollToggled();
	bool IsExtendedKey();
	bool IsSpecialKeyPressed();
	void SetShiftPressed(bool);
	void SetCtrlPressed(bool);
	void SetAltPressed(bool);
	void SetCapsToggled(bool);
	void SetNumToggled(bool);
	void SetScrollToggled(bool);
	void SetExtendedKey(bool);
	bool IsInitialized();
};
enum Scaleform::PadKeyCode
{
	Pad_None = 0,
	Pad_Back = 65280,
	Pad_Start = 65281,
	Pad_A = 65282,
	Pad_B = 65283,
	Pad_X = 65284,
	Pad_Y = 65285,
	Pad_R1 = 65286,
	Pad_L1 = 65287,
	Pad_R2 = 65288,
	Pad_L2 = 65289,
	Pad_Up = 65290,
	Pad_Down = 65291,
	Pad_Right = 65292,
	Pad_Left = 65293,
	Pad_Plus = 65294,
	Pad_Minus = 65295,
	Pad_1 = 65296,
	Pad_2 = 65297,
	Pad_H = 65298,
	Pad_C = 65299,
	Pad_Z = 65300,
	Pad_O = 65301,
	Pad_T = 65302,
	Pad_S = 65303,
	Pad_Select = 65304,
	Pad_Home = 65305,
	Pad_RT = 65306,
	Pad_LT = 65307,
};