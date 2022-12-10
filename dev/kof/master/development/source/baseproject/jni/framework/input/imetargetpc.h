#pragma once

class Fw::ImeTarget :
	Fw::ImeTargetBase
{
public:
	static bool Startup();
	static void Update();
	static void Shutdown();
	static bool Show(Fw::cImeOption &);
	static void Abort();
	static long GetStatus();
	static bool GetResult(Fw::cImeResult *);
	enum CurrentTarget
	{
		IME_KEYBOARD = 0,
		IME_GAMEPAD = 1,
	};
private:
	static Fw::ImeTargetKB m_IMEKeyboard; // 0xFFFFFFFFFFFFFFFF
	static Fw::IMETargetPad m_IMEPad; // 0xFFFFFFFFFFFFFFFF
	static Fw::ImeTarget::CurrentTarget m_currentIME; // 0xFFFFFFFFFFFFFFFF
};
enum Fw::ImeTarget::CurrentTarget
{
	IME_KEYBOARD = 0,
	IME_GAMEPAD = 1,
};