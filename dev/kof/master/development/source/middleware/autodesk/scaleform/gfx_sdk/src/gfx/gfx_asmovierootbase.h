#pragma once

class Scaleform::GFx::ASMovieRootBase :
	Scaleform::RefCountBase<Scaleform::GFx::ASMovieRootBase,327>
{
protected:
	Scaleform::GFx::MovieImpl * pMovieImpl; // 0x10
	Scaleform::Ptr<Scaleform::GFx::ASSupport> pASSupport; // 0x18
	unsigned char AVMVersion; // 0x20
public:
	ASMovieRootBase(const Scaleform::GFx::ASMovieRootBase &);
	ASMovieRootBase(Scaleform::GFx::ASSupport *);
	virtual ~ASMovieRootBase();
	long GetAVMVersion();
	Scaleform::GFx::ASSupport * GetASSupport();
	Scaleform::GFx::MovieImpl * GetMovieImpl();
	void SetMovie(Scaleform::GFx::MovieImpl *);
	void AdvanceFrame(bool);
	void ChangeMouseCursorType(unsigned long, unsigned long);
	bool CheckAvm();
	void ClearDisplayList();
	Scaleform::GFx::MovieDefRootNode * CreateMovieDefRootNode(Scaleform::MemoryHeap *, Scaleform::GFx::MovieDefImpl *, bool);
	void DoActions();
	Scaleform::GFx::InteractiveObject * FindTarget(const Scaleform::GFx::ASString &);
	void ForceCollect(unsigned long);
	void ForceEmergencyCollect();
	void SuspendGC(bool);
	void ScheduleGC(unsigned long);
	void GenerateMouseEvents(unsigned long);
	void GenerateTouchEvents(unsigned long);
	void GenerateGestureEvents(Scaleform::GFx::InteractiveObject *, unsigned long, const Scaleform::Render::Point<float> &, const Scaleform::Render::Point<float> &, const Scaleform::Render::Point<float> &, float, unsigned long);
	Scaleform::GFx::DisplayObjContainer * GetRootMovie(Scaleform::GFx::DisplayObject *);
	bool Init(Scaleform::GFx::MovieDefImpl *);
	void NotifyMouseEvent(const Scaleform::GFx::InputEventsQueueEntry *, const Scaleform::GFx::MouseState &, long);
	void NotifyOnResize();
	void NotifyQueueSetFocus(Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType);
	void NotifyTransferFocus(Scaleform::GFx::InteractiveObject *, Scaleform::GFx::InteractiveObject *, unsigned long);
	bool NotifyOnFocusChange(Scaleform::GFx::InteractiveObject *, Scaleform::GFx::InteractiveObject *, unsigned long, Scaleform::GFx::FocusMovedType, Scaleform::GFx::ProcessFocusKeyInfo *);
	void NotifyGamePadAnalogEvent(const Scaleform::GFx::EventId *);
	void NotifyStatusEvent(const Scaleform::GFx::EventId *);
	void NotifyAccelerometerEvent(const Scaleform::GFx::EventId *, long);
	void NotifyGeolocationEvent(const Scaleform::GFx::EventId *, long);
	void OnMovieFocus(bool);
	void OnNextFrame();
	void OnDeviceOrientationChanged(const Scaleform::GFx::OrientationEvent &);
	void OnAppLifecycleEvent(const Scaleform::GFx::AppLifecycleEvent &);
	void OnAccelerometerEvent(const Scaleform::GFx::AccelerometerEvent &);
	void OnGeolocationEvent(const Scaleform::GFx::GeolocationEvent &);
	void PrintObjectsReport(unsigned long, Scaleform::Log *, const char *);
	void GetObjectsTree(Scaleform::Array<Scaleform::Ptr<Scaleform::AmpMovieObjectDesc>,2,Scaleform::ArrayDefaultPolicy> *, Scaleform::MemoryHeap *);
	Scaleform::AmpMovieObjectDesc * GetDisplayObjectsTree(Scaleform::MemoryHeap *);
	void ProcessLoadQueueEntry(Scaleform::GFx::LoadQueueEntry *, Scaleform::GFx::LoadStates *);
	void ProcessLoadVarsMT(Scaleform::GFx::LoadQueueEntry *, Scaleform::GFx::LoadStates *, const Scaleform::String &, unsigned long long, bool);
	void ProcessLoadBinaryMT(Scaleform::GFx::LoadQueueEntry *, Scaleform::GFx::LoadStates *, const Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> &, unsigned long long, bool);
	void RegisterAuxASClasses();
	void ResolveStickyVariables(Scaleform::GFx::InteractiveObject *);
	void SetExternalInterfaceRetVal(const Scaleform::GFx::Value &);
	void SetMemoryParams(unsigned long, unsigned long);
	void Shutdown();
	void CreateString(Scaleform::GFx::Value *, const char *);
	void CreateStringW(Scaleform::GFx::Value *, const wchar_t *);
	void CreateObject(Scaleform::GFx::Value *, const char *, const Scaleform::GFx::Value *, unsigned long);
	void CreateArray(Scaleform::GFx::Value *);
	void CreateFunction(Scaleform::GFx::Value *, Scaleform::GFx::FunctionHandler *, void *);
	bool SetVariable(const char *, const Scaleform::GFx::Value &, Scaleform::GFx::Movie::SetVarType);
	bool GetVariable(Scaleform::GFx::Value *, const char *);
	bool SetVariableArray(Scaleform::GFx::Movie::SetArrayType, const char *, unsigned long, const void *, unsigned long, Scaleform::GFx::Movie::SetVarType);
	bool SetVariableArraySize(const char *, unsigned long, Scaleform::GFx::Movie::SetVarType);
	unsigned long GetVariableArraySize(const char *);
	bool GetVariableArray(Scaleform::GFx::Movie::SetArrayType, const char *, unsigned long, void *, unsigned long);
	bool IsAvailable(const char *);
	bool Invoke(const char *, Scaleform::GFx::Value *, const char *, ...);
	bool Invoke(const char *, Scaleform::GFx::Value *, const Scaleform::GFx::Value *, unsigned long);
	bool InvokeArgs(const char *, Scaleform::GFx::Value *, const char *, char *);
	Scaleform::GFx::MemoryContext * GetMemoryContext();
	Scaleform::GFx::ASStringManager * GetStringManager();
	Scaleform::Render::Text::Allocator * GetTextAllocator();
	Scaleform::GFx::ASMovieRootBase & operator=(const Scaleform::GFx::ASMovieRootBase &);
};
class Scaleform::RefCountBase<Scaleform::GFx::ASMovieRootBase,327> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 327,
	};
public:
	RefCountBase<Scaleform::GFx::ASMovieRootBase,327>(Scaleform::RefCountBase<Scaleform::GFx::ASMovieRootBase,327> &);
	RefCountBase<Scaleform::GFx::ASMovieRootBase,327>(const Scaleform::RefCountBase<Scaleform::GFx::ASMovieRootBase,327> &);
	RefCountBase<Scaleform::GFx::ASMovieRootBase,327>();
	virtual ~RefCountBase<Scaleform::GFx::ASMovieRootBase,327>();
	Scaleform::RefCountBase<Scaleform::GFx::ASMovieRootBase,327> & operator=(Scaleform::RefCountBase<Scaleform::GFx::ASMovieRootBase,327> &);
	Scaleform::RefCountBase<Scaleform::GFx::ASMovieRootBase,327> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::ASMovieRootBase,327> &);
};
void Scaleform::GFx::ASMovieRootBase::SetMovie(Scaleform::GFx::MovieImpl * pmovie); // 0x1404A8C00
class Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef unsigned char ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy>();
};