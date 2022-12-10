#pragma once

class Scaleform::GFx::ASIMEManager :
	Scaleform::RefCountBase<Scaleform::GFx::ASIMEManager,513>
{
public:
	Scaleform::String CandidateSwfPath; // 0x10
	Scaleform::String CandidateSwfErrorMsg; // 0x18
	Scaleform::GFx::Movie * pMovie; // 0x20
	Scaleform::GFx::Value pLangContext; // 0x28
	Scaleform::GFx::DisplayObject * pLangContext2; // 0x58
	Scaleform::GFx::DisplayObject * pStatusContext2; // 0x60
	Scaleform::GFx::Value pStatusContext; // 0x68
	Scaleform::GFx::Movie * pMovieContext; // 0x98
	Scaleform::GFx::TextField * pTextField; // 0xA0
	ASIMEManager(const Scaleform::GFx::ASIMEManager &);
	ASIMEManager();
	virtual ~ASIMEManager();
	void ShutDown();
	class IMEFuncHandler;
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> CustomFuncCandList; // 0xA8
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> CustomFuncLanguageBar; // 0xB0
	void ASRootMovieCreated(Scaleform::Ptr<Scaleform::GFx::Sprite>);
	void IMECommand(Scaleform::GFx::Movie *, const char *, const char *);
	void BroadcastIMEConversion(const wchar_t *);
	void BroadcastSwitchLanguage(const char *);
	void BroadcastSetSupportedLanguages(const char *);
	void BroadcastSetSupportedIMEs(const char *);
	void BroadcastSetCurrentInputLanguage(const char *);
	void BroadcastSetIMEName(const char *);
	void BroadcastSetConversionStatus(const char *);
	void BroadcastRemoveStatusWindow(const char *);
	void BroadcastDisplayStatusWindow(const char *);
	bool IsCandidateListLoaded();
	bool IsTextFieldFocused(Scaleform::GFx::InteractiveObject *);
	bool IsTextFieldFocused();
	bool Invoke(const char *, Scaleform::GFx::Value *, const Scaleform::GFx::Value *, unsigned long);
	Scaleform::GFx::InteractiveObject * HandleFocus(Scaleform::GFx::Movie *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::InteractiveObject *);
	void OnOpenCandidateList();
	bool AcquireCandidateList();
	void SetIMEMoviePath(const char *);
	void SetActiveMovie(Scaleform::GFx::Movie *);
	void SetTextFieldPtr(Scaleform::GFx::TextField *);
	void SetIMEManager(Scaleform::GFx::IMEManagerBase *);
	Scaleform::GFx::IMEManagerBase * GetIMEManager();
	Scaleform::GFx::IMEManagerBase * pimeManager; // 0xB8
	Scaleform::GFx::ASIMEManager & operator=(const Scaleform::GFx::ASIMEManager &);
};
class Scaleform::RefCountBase<Scaleform::GFx::ASIMEManager,513> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,513>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 513,
	};
public:
	RefCountBase<Scaleform::GFx::ASIMEManager,513>(Scaleform::RefCountBase<Scaleform::GFx::ASIMEManager,513> &);
	RefCountBase<Scaleform::GFx::ASIMEManager,513>(const Scaleform::RefCountBase<Scaleform::GFx::ASIMEManager,513> &);
	RefCountBase<Scaleform::GFx::ASIMEManager,513>();
	virtual ~RefCountBase<Scaleform::GFx::ASIMEManager,513>();
	Scaleform::RefCountBase<Scaleform::GFx::ASIMEManager,513> & operator=(Scaleform::RefCountBase<Scaleform::GFx::ASIMEManager,513> &);
	Scaleform::RefCountBase<Scaleform::GFx::ASIMEManager,513> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::ASIMEManager,513> &);
};
Scaleform::GFx::ASIMEManager::ASIMEManager(); // 0x1405A3E70
Scaleform::GFx::ASIMEManager::~ASIMEManager(); // 0x1405A4030
void Scaleform::GFx::ASIMEManager::ShutDown(); // 0x1405A6140
class Scaleform::GFx::ASIMEManager::IMEFuncHandler :
	Scaleform::GFx::FunctionHandler
{
public:
	IMEFuncHandler(Scaleform::GFx::ASIMEManager::IMEFuncHandler &);
	IMEFuncHandler(const Scaleform::GFx::ASIMEManager::IMEFuncHandler &);
	IMEFuncHandler(Scaleform::GFx::IMEManagerBase *);
	virtual void Call(const Scaleform::GFx::FunctionHandler::Params &);
	Scaleform::GFx::IMEManagerBase * pimeManager; // 0x10
	virtual ~IMEFuncHandler();
	Scaleform::GFx::ASIMEManager::IMEFuncHandler & operator=(Scaleform::GFx::ASIMEManager::IMEFuncHandler &);
	Scaleform::GFx::ASIMEManager::IMEFuncHandler & operator=(const Scaleform::GFx::ASIMEManager::IMEFuncHandler &);
};
class Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler>
{
protected:
	Scaleform::GFx::ASIMEManager::IMEFuncHandler * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler>(const Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> &);
	Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler>(Scaleform::GFx::ASIMEManager::IMEFuncHandler *);
	Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler>(Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler>(Scaleform::Pickable<Scaleform::GFx::ASIMEManager::IMEFuncHandler>);
	Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler>(Scaleform::GFx::ASIMEManager::IMEFuncHandler &);
	Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler>();
	~Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler>();
	bool operator==(Scaleform::GFx::ASIMEManager::IMEFuncHandler *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> &);
	bool operator!=(Scaleform::GFx::ASIMEManager::IMEFuncHandler *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> &);
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> & operator=(Scaleform::Pickable<Scaleform::GFx::ASIMEManager::IMEFuncHandler>);
	const Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> & operator=(Scaleform::GFx::ASIMEManager::IMEFuncHandler &);
	const Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> & operator=(Scaleform::GFx::ASIMEManager::IMEFuncHandler *);
	const Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> & operator=(const Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> &);
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ASIMEManager::IMEFuncHandler>);
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> & SetPtr(Scaleform::GFx::ASIMEManager::IMEFuncHandler &);
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> & SetPtr(Scaleform::GFx::ASIMEManager::IMEFuncHandler *);
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ASIMEManager::IMEFuncHandler * & GetRawRef();
	Scaleform::GFx::ASIMEManager::IMEFuncHandler * GetPtr();
	Scaleform::GFx::ASIMEManager::IMEFuncHandler & operator*();
	Scaleform::GFx::ASIMEManager::IMEFuncHandler * operator->();
	Scaleform::GFx::ASIMEManager::IMEFuncHandler * operator class Scaleform::GFx::ASIMEManager::IMEFuncHandler *();
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> & Pick(Scaleform::GFx::ASIMEManager::IMEFuncHandler *);
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> & Pick(Scaleform::Pickable<Scaleform::GFx::ASIMEManager::IMEFuncHandler>);
	Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> & Pick(Scaleform::Ptr<Scaleform::GFx::ASIMEManager::IMEFuncHandler> &);
};
class Scaleform::Ptr<Scaleform::GFx::Sprite>
{
protected:
	Scaleform::GFx::Sprite * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::Sprite>(const Scaleform::Ptr<Scaleform::GFx::Sprite> &);
	Ptr<Scaleform::GFx::Sprite>(Scaleform::GFx::Sprite *);
	Ptr<Scaleform::GFx::Sprite>(Scaleform::Ptr<Scaleform::GFx::Sprite> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::Sprite>(Scaleform::Pickable<Scaleform::GFx::Sprite>);
	Ptr<Scaleform::GFx::Sprite>(Scaleform::GFx::Sprite &);
	Ptr<Scaleform::GFx::Sprite>();
	~Ptr<Scaleform::GFx::Sprite>();
	bool operator==(Scaleform::GFx::Sprite *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::Sprite> &);
	bool operator!=(Scaleform::GFx::Sprite *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::Sprite> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::Sprite> &);
	Scaleform::Ptr<Scaleform::GFx::Sprite> & operator=(Scaleform::Pickable<Scaleform::GFx::Sprite>);
	const Scaleform::Ptr<Scaleform::GFx::Sprite> & operator=(Scaleform::GFx::Sprite &);
	const Scaleform::Ptr<Scaleform::GFx::Sprite> & operator=(Scaleform::GFx::Sprite *);
	const Scaleform::Ptr<Scaleform::GFx::Sprite> & operator=(const Scaleform::Ptr<Scaleform::GFx::Sprite> &);
	Scaleform::Ptr<Scaleform::GFx::Sprite> & SetPtr(Scaleform::Pickable<Scaleform::GFx::Sprite>);
	Scaleform::Ptr<Scaleform::GFx::Sprite> & SetPtr(Scaleform::GFx::Sprite &);
	Scaleform::Ptr<Scaleform::GFx::Sprite> & SetPtr(Scaleform::GFx::Sprite *);
	Scaleform::Ptr<Scaleform::GFx::Sprite> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::Sprite> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::Sprite * & GetRawRef();
	Scaleform::GFx::Sprite * GetPtr();
	Scaleform::GFx::Sprite & operator*();
	Scaleform::GFx::Sprite * operator->();
	Scaleform::GFx::Sprite * operator class Scaleform::GFx::Sprite *();
	Scaleform::Ptr<Scaleform::GFx::Sprite> & Pick(Scaleform::GFx::Sprite *);
	Scaleform::Ptr<Scaleform::GFx::Sprite> & Pick(Scaleform::Pickable<Scaleform::GFx::Sprite>);
	Scaleform::Ptr<Scaleform::GFx::Sprite> & Pick(Scaleform::Ptr<Scaleform::GFx::Sprite> &);
};
void Scaleform::GFx::ASIMEManager::ASRootMovieCreated(Scaleform::Ptr<Scaleform::GFx::Sprite> spr); // 0x1405A4300
Scaleform::GFx::InteractiveObject * Scaleform::GFx::ASIMEManager::HandleFocus(Scaleform::GFx::Movie * pmovie, Scaleform::GFx::InteractiveObject * poldFocusedItem, Scaleform::GFx::InteractiveObject * pnewFocusingItem, Scaleform::GFx::InteractiveObject * ptopMostItem); // 0x1400470F0
void Scaleform::GFx::ASIMEManager::SetIMEManager(Scaleform::GFx::IMEManagerBase * pimeMgr); // 0x1405A60D0