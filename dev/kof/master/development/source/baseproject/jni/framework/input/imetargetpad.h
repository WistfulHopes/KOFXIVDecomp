#pragma once

class Fw::IMETargetPad
{
public:
	bool Startup();
	void Update();
	void Shutdown();
	bool Show(Fw::cImeOption &);
	void Abort();
	long GetStatus();
	bool GetResult(Fw::cImeResult *);
	struct CCallbackInternal_OnTextInputDismiss;
private:
	Fw::IMETargetPad::CCallbackInternal_OnTextInputDismiss m_steamcallback_OnTextInputDismiss; // 0x0
	void OnTextInputDismiss(GamepadTextInputDismissed_t *);
	static const unsigned long long BUFFER_SIZE; // 0xFFFFFFFFFFFFFFFF
	char m_textBuffer[256]; // 0x10
	unsigned long long m_textLength; // 0x110
	long m_Status; // 0x118
public:
	IMETargetPad(Fw::IMETargetPad &);
	IMETargetPad(const Fw::IMETargetPad &);
	IMETargetPad();
	~IMETargetPad();
	Fw::IMETargetPad & operator=(Fw::IMETargetPad &);
	Fw::IMETargetPad & operator=(const Fw::IMETargetPad &);
};
class CCallbackImpl<8> :
	public CCallbackBase
{
public:
	~CCallbackImpl<8>();
	void SetGameserverFlag();
protected:
	virtual void Run(void *, bool, unsigned long long);
	void Run(void *) = 0;
	virtual long GetCallbackSizeBytes();
public:
	CCallbackImpl<8>();
};
struct Fw::IMETargetPad::CCallbackInternal_OnTextInputDismiss :
	protected CCallbackImpl<8>
{
	CCallbackInternal_OnTextInputDismiss(const Fw::IMETargetPad::CCallbackInternal_OnTextInputDismiss &);
	CCallbackInternal_OnTextInputDismiss();
	Fw::IMETargetPad::CCallbackInternal_OnTextInputDismiss & operator=(const Fw::IMETargetPad::CCallbackInternal_OnTextInputDismiss &);
private:
	virtual void Run(void *);
public:
	~CCallbackInternal_OnTextInputDismiss();
};
void Fw::IMETargetPad::CCallbackInternal_OnTextInputDismiss::Run(void * pvParam); // 0x14002F5D0