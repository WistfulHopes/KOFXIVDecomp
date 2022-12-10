#pragma once

class Fw::ContentCommon
{
	struct CCallbackInternal_OnDlcInstalled;
private:
	Fw::ContentCommon::CCallbackInternal_OnDlcInstalled m_steamcallback_OnDlcInstalled; // 0x0
	void OnDlcInstalled(DlcInstalled_t *);
public:
	static Fw::ContentCommon * GetInstance();
	bool Startup();
	void Shutdown();
	long GetParam(long);
	void CheckAddContent(bool);
	Fw::ADDCONTENT_STATUS GetStatus(Fw::ADDCONTENT_ID);
	bool IsUseable(Fw::ADDCONTENT_ID);
	const char * GetMountPoint(long);
	void SetUseDummyFlag(bool);
	void SetDummyExistFlag(Fw::ADDCONTENT_ID, bool);
	void CheckFrame();
	void SetDummyExistFlagDefault(bool);
private:
	static Fw::ContentCommon * instance_; // 0xFFFFFFFFFFFFFFFF
	Fw::ADDCONTENT_STATUS m_KeyStatus[23]; // 0x10
public:
	ContentCommon(Fw::ContentCommon &);
	ContentCommon(const Fw::ContentCommon &);
	ContentCommon();
	~ContentCommon();
	Fw::ContentCommon & operator=(Fw::ContentCommon &);
	Fw::ContentCommon & operator=(const Fw::ContentCommon &);
};
struct Fw::ContentCommon::CCallbackInternal_OnDlcInstalled :
	protected CCallbackImpl<4>
{
	CCallbackInternal_OnDlcInstalled(const Fw::ContentCommon::CCallbackInternal_OnDlcInstalled &);
	CCallbackInternal_OnDlcInstalled();
	Fw::ContentCommon::CCallbackInternal_OnDlcInstalled & operator=(const Fw::ContentCommon::CCallbackInternal_OnDlcInstalled &);
private:
	virtual void Run(void *);
public:
	~CCallbackInternal_OnDlcInstalled();
};
void Fw::ContentCommon::CCallbackInternal_OnDlcInstalled::Run(void * pvParam); // 0x14002DE50
Fw::ContentCommon * Fw::ContentCommon::GetInstance(); // 0x14002DE80