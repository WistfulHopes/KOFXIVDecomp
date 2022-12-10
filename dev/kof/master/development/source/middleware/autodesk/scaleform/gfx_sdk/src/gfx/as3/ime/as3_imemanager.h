#pragma once

class Scaleform::GFx::AS3::IMEManager :
	Scaleform::GFx::ASIMEManager
{
public:
	unsigned long UnsupportedIMEWindowsFlag; // 0xC0
	virtual Scaleform::GFx::InteractiveObject * HandleFocus(Scaleform::GFx::Movie *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::InteractiveObject *);
	void OnMouseDown(Scaleform::GFx::Movie *, long, Scaleform::GFx::InteractiveObject *);
	void OnMouseUp(Scaleform::GFx::Movie *, long, Scaleform::GFx::InteractiveObject *);
	enum <unnamed-enum-GFxIME_AlwaysHideUnsupportedIMEWindows>
	{
		GFxIME_AlwaysHideUnsupportedIMEWindows = 1,
		GFxIME_HideUnsupportedIMEWindowsInFullScreen = 2,
		GFxIME_ShowUnsupportedIMEWindows = 3,
	};
	Scaleform::Log * pLog; // 0xC8
	long CandidateListState; // 0xD0
	Scaleform::GFx::Value CandListVal; // 0xD8
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> pCustomFunc; // 0x108
	IMEManager(const Scaleform::GFx::AS3::IMEManager &);
	IMEManager();
	virtual ~IMEManager();
	virtual void ShutDown();
	unsigned long Init(Scaleform::Log *);
	void Reset();
	virtual bool Invoke(const char *, Scaleform::GFx::Value *, const Scaleform::GFx::Value *, unsigned long);
	bool IsTextFieldFocused(Scaleform::GFx::InteractiveObject *);
	virtual bool IsTextFieldFocused();
	virtual bool IsCandidateListLoaded();
	bool SetCandidateListStyle(const Scaleform::GFx::IMECandidateListStyle &);
	Scaleform::GFx::Sprite * GetCandidateListSprite();
	virtual void SetIMEMoviePath(const char *);
	bool GetIMEMoviePath(Scaleform::String &);
	virtual void ASRootMovieCreated(Scaleform::Ptr<Scaleform::GFx::Sprite>);
	virtual void SetActiveMovie(Scaleform::GFx::Movie *);
	void ShowUnsupportedIMEWindows(unsigned long);
	unsigned long GetUnsupportedIMEWindowsFlag();
	virtual void BroadcastIMEConversion(const wchar_t *);
	virtual void BroadcastSwitchLanguage(const char *);
	virtual void BroadcastSetSupportedLanguages(const char *);
	virtual void BroadcastSetSupportedIMEs(const char *);
	virtual void BroadcastSetCurrentInputLanguage(const char *);
	virtual void BroadcastSetIMEName(const char *);
	virtual void BroadcastSetConversionStatus(const char *);
	virtual void BroadcastRemoveStatusWindow(const char *);
	virtual void BroadcastDisplayStatusWindow(const char *);
	bool SetCompositionString(const char *);
	virtual bool AcquireCandidateList();
	bool AcquireStatusWindowMovie();
	bool AcquireLanguageBarMovie();
	bool GetCandidateListErrorMsg(Scaleform::String *);
	bool GetCandidateListStyle(Scaleform::GFx::IMECandidateListStyle *);
	virtual void OnOpenCandidateList();
	bool IsCandidateList(const char *);
	bool IsStatusWindow(const char *);
	bool IsLangBar(const char *);
	virtual void IMECommand(Scaleform::GFx::Movie *, const char *, const char *);
	void OnShutdown();
private:
	void DispatchEvent(const char *, const char *, const char *);
public:
	Scaleform::GFx::AS3::IMEManager & operator=(const Scaleform::GFx::AS3::IMEManager &);
};
Scaleform::GFx::AS3::IMEManager::~IMEManager(); // 0x1405A4130
void Scaleform::GFx::AS3::IMEManager::ShutDown(); // 0x1405A6150
unsigned long Scaleform::GFx::AS3::IMEManager::Init(Scaleform::Log * plog); // 0x1400482A0
bool Scaleform::GFx::AS3::IMEManager::Invoke(const char * pmethodName, Scaleform::GFx::Value * presult, const Scaleform::GFx::Value * pargFmt, unsigned long numArgs); // 0x1405A5AD0
void Scaleform::GFx::ASIMEManager::SetActiveMovie(Scaleform::GFx::Movie * pmovie); // 0x14065CA00
bool Scaleform::GFx::ASIMEManager::AcquireCandidateList(); // 0x14004BBE0
void Scaleform::GFx::ASIMEManager::BroadcastDisplayStatusWindow(const char * pString); // 0x14002E7C0