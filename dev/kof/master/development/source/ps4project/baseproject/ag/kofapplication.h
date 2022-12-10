#pragma once

class KOFApplication :
	AgProgram
{
public:
	KOFApplication(const KOFApplication &);
	KOFApplication(long(*)());
	virtual ~KOFApplication();
	void kofUpdate();
	AgClock & getClock();
	double getProcessStartTime();
	unsigned long getSystemTimeMicrosecondsLow();
	unsigned long getProcessTimeMicrosecondsLow();
	unsigned long long getSystemTimeMicroseconds();
	unsigned long long getProcessTimeMicroseconds();
	long getQuitFlag();
	static KOFApplication * get();
	static const AgString & getDirectory();
	long areKeyboardButtonsPatched();
	void patchKeyboardButtons();
	void unpatchKeyboardButtons();
	long isOverlayOpen();
protected:
	virtual void onExecuteImpl();
	virtual void onJoinThread();
private:
	void kofInit();
	void kofExit();
	void LoadWAD();
	void attachExceptionHandler();
	long(*m_mainFunc)(); // 0x30
	AgClock m_clock; // 0x38
	double m_processStartTime; // 0x60
	long m_quitFlag; // 0x68
	long m_loadedKeyboardButtons; // 0x6C
	AgPointer<AgArchive> m_keyboardButtonPatch; // 0x70
	struct CCallbackInternal_OnGameOverlayActivated;
	KOFApplication::CCallbackInternal_OnGameOverlayActivated m_steamcallback_OnGameOverlayActivated; // 0x80
	void OnGameOverlayActivated(GameOverlayActivated_t *);
	long m_overlayPause; // 0x90
public:
	KOFApplication & operator=(const KOFApplication &);
};
class AgPointer<AgArchive>
{
public:
	AgPointer<AgArchive>(const AgReference<AgArchive> &);
	AgPointer<AgArchive>(AgPointer<AgArchive> &);
	AgPointer<AgArchive>(const AgPointer<AgArchive> &);
	AgPointer<AgArchive>(AgArchive *);
	AgPointer<AgArchive>();
	~AgPointer<AgArchive>();
	AgPointer<AgArchive> & operator=(AgPointer<AgArchive> &);
	AgPointer<AgArchive> & operator=(const AgReference<AgArchive> &);
	AgPointer<AgArchive> & operator=(const AgPointer<AgArchive> &);
	AgPointer<AgArchive> & operator=(AgArchive *);
	bool operator<(const AgPointer<AgArchive> &);
	AgArchive * operator->();
	AgArchive & operator*();
	bool operator==(const AgPointer<AgArchive> &);
	bool operator==(AgArchive *);
	bool operator!=(const AgPointer<AgArchive> &);
	bool operator!=(AgArchive *);
	AgArchive * getObject();
	void swap(AgPointer<AgArchive> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgArchive * m_ptr; // 0x8
};
class CCallbackImpl<1> :
	public CCallbackBase
{
public:
	~CCallbackImpl<1>();
	void SetGameserverFlag();
protected:
	virtual void Run(void *, bool, unsigned long long);
	void Run(void *) = 0;
	virtual long GetCallbackSizeBytes();
public:
	CCallbackImpl<1>();
};
struct KOFApplication::CCallbackInternal_OnGameOverlayActivated :
	protected CCallbackImpl<1>
{
	CCallbackInternal_OnGameOverlayActivated(const KOFApplication::CCallbackInternal_OnGameOverlayActivated &);
	CCallbackInternal_OnGameOverlayActivated();
	KOFApplication::CCallbackInternal_OnGameOverlayActivated & operator=(const KOFApplication::CCallbackInternal_OnGameOverlayActivated &);
private:
	virtual void Run(void *);
public:
	~CCallbackInternal_OnGameOverlayActivated();
};
void KOFApplication::CCallbackInternal_OnGameOverlayActivated::Run(void * pvParam); // 0x140243740