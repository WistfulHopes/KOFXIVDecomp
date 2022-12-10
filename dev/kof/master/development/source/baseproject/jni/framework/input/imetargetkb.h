#pragma once

struct AgTypingInputEvent
{
	AgString string; // 0x0
	AgTypingInputEvent(AgTypingInputEvent &);
	AgTypingInputEvent(const AgTypingInputEvent &);
	AgTypingInputEvent();
	~AgTypingInputEvent();
	AgTypingInputEvent & operator=(AgTypingInputEvent &);
	AgTypingInputEvent & operator=(const AgTypingInputEvent &);
};
class Fw::ImeTargetKB
{
public:
	bool Startup();
	void Update();
	void Shutdown();
	bool Show(Fw::cImeOption &);
	void Abort();
	long GetStatus();
	bool GetResult(Fw::cImeResult *);
private:
	void onTypedText(const AgTypingInputEvent &);
	void onEditedText(const AgEditedInputEvent &);
	static const unsigned long long BUFFER_SIZE; // 0xFFFFFFFFFFFFFFFF
	char m_prevText[256]; // 0x0
	char m_textBuffer[256]; // 0x100
	unsigned long long m_textLength; // 0x200
	unsigned long long m_maxTextLength; // 0x208
	long m_Status; // 0x210
	bool m_EnterStatus; // 0x214
	bool m_EnteringInput; // 0x215
	long m_inputLength; // 0x218
	long m_currentInputLength; // 0x21C
	bool m_overflowed; // 0x220
};