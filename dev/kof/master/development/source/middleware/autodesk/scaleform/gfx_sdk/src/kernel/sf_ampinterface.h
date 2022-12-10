#pragma once

enum Scaleform::AmpNativeFunctionId
{
	Amp_Native_Function_Id_Invalid = 255,
	Amp_Native_Function_Id_Advance = 0,
	Amp_Native_Function_Id_AdvanceFrame = 1,
	Amp_Native_Function_Id_DoActions = 2,
	Amp_Native_Function_Id_ProcessInput = 3,
	Amp_Native_Function_Id_ProcessMouse = 4,
	Amp_Native_Function_Id_GcCollect = 5,
	Amp_Native_Function_Id_GcMarkInCycle = 6,
	Amp_Native_Function_Id_GcScanInUse = 7,
	Amp_Native_Function_Id_GcFreeGarbage = 8,
	Amp_Native_Function_Id_GcFinalize = 9,
	Amp_Native_Function_Id_GcDelayedCleanup = 10,
	Amp_Native_Function_Id_Display = 11,
	Amp_Native_Function_Id_NextCapture = 12,
	Amp_Native_Function_Id_Draw = 13,
	Amp_Native_Function_Id_Present = 14,
	Amp_Native_Function_Id_Tessellate = 15,
	Amp_Native_Function_Id_GlyphTextureMapper_Create = 16,
	Amp_Native_Function_Id_GradientFill = 17,
	Amp_Native_Function_Id_GlyphCache_RasterizeGlyph = 18,
	Amp_Native_Function_Id_GlyphCache_RasterizeShadow = 19,
	Amp_Native_Function_Id_GlyphCache_EvictText = 20,
	Amp_Native_Function_Id_Begin_ObjectInterface = 21,
	Amp_Native_Function_Id_GetVariable = 22,
	Amp_Native_Function_Id_GetVariableArray = 23,
	Amp_Native_Function_Id_GetVariableArraySize = 24,
	Amp_Native_Function_Id_SetVariable = 25,
	Amp_Native_Function_Id_SetVariableArray = 26,
	Amp_Native_Function_Id_SetVariableArraySize = 27,
	Amp_Native_Function_Id_Invoke = 28,
	Amp_Native_Function_Id_InvokeAlias = 29,
	Amp_Native_Function_Id_InvokeArgs = 30,
	Amp_Native_Function_Id_InvokeAliasArgs = 31,
	Amp_Native_Function_Id_ObjectInterface_HasMember = 32,
	Amp_Native_Function_Id_ObjectInterface_GetMember = 33,
	Amp_Native_Function_Id_ObjectInterface_SetMember = 34,
	Amp_Native_Function_Id_ObjectInterface_Invoke = 35,
	Amp_Native_Function_Id_ObjectInterface_DeleteMember = 36,
	Amp_Native_Function_Id_ObjectInterface_VisitMembers = 37,
	Amp_Native_Function_Id_ObjectInterface_GetArraySize = 38,
	Amp_Native_Function_Id_ObjectInterface_SetArraySize = 39,
	Amp_Native_Function_Id_ObjectInterface_GetElement = 40,
	Amp_Native_Function_Id_ObjectInterface_SetElement = 41,
	Amp_Native_Function_Id_ObjectInterface_VisitElements = 42,
	Amp_Native_Function_Id_ObjectInterface_PushBack = 43,
	Amp_Native_Function_Id_ObjectInterface_PopBack = 44,
	Amp_Native_Function_Id_ObjectInterface_RemoveElements = 45,
	Amp_Native_Function_Id_ObjectInterface_GetDisplayMatrix = 46,
	Amp_Native_Function_Id_ObjectInterface_SetDisplayMatrix = 47,
	Amp_Native_Function_Id_ObjectInterface_GetMatrix3D = 48,
	Amp_Native_Function_Id_ObjectInterface_SetMatrix3D = 49,
	Amp_Native_Function_Id_ObjectInterface_IsDisplayObjectActive = 50,
	Amp_Native_Function_Id_ObjectInterface_GetParent = 51,
	Amp_Native_Function_Id_ObjectInterface_GetDisplayInfo = 52,
	Amp_Native_Function_Id_ObjectInterface_SetDisplayInfo = 53,
	Amp_Native_Function_Id_ObjectInterface_SetText = 54,
	Amp_Native_Function_Id_ObjectInterface_GetText = 55,
	Amp_Native_Function_Id_ObjectInterface_GotoAndPlay = 56,
	Amp_Native_Function_Id_ObjectInterface_GetCxform = 57,
	Amp_Native_Function_Id_ObjectInterface_SetCxform = 58,
	Amp_Native_Function_Id_ObjectInterface_CreateEmptyMovieClip = 59,
	Amp_Native_Function_Id_ObjectInterface_AttachMovie = 60,
	Amp_Native_Function_Id_ObjectInterface_ToString = 61,
	Amp_Native_Function_Id_ObjectInterface_GetWorldMatrix = 62,
	Amp_Native_Function_Id_ObjectInterface_InvokeClosure = 63,
	Amp_Native_Function_Id_ObjectInterface_IsInstanceOf = 64,
	Amp_Native_Function_Id_ObjectInterface_IsByteArray = 65,
	Amp_Native_Function_Id_ObjectInterface_GetByteArraySize = 66,
	Amp_Native_Function_Id_ObjectInterface_SetByteArraySize = 67,
	Amp_Native_Function_Id_ObjectInterface_ReadFromByteArray = 68,
	Amp_Native_Function_Id_ObjectInterface_WriteToByteArray = 69,
	Amp_Native_Function_Id_ObjectInterface_GetRawDataPtr = 70,
	Amp_Native_Function_Id_End_ObjectInterface = 71,
	Amp_Num_Native_Function_Ids = 72,
};
enum Scaleform::AmpProfileLevel
{
	Amp_Profile_Level_Null = 255,
	Amp_Profile_Level_Low = 0,
	Amp_Profile_Level_Medium = 1,
	Amp_Profile_Level_ActionScript = 1,
	Amp_Profile_Level_High = 2,
};
class Scaleform::AmpServer
{
public:
	~AmpServer();
	void AdvanceFrame();
	void MovieAdvance(Scaleform::GFx::MovieImpl *);
	static Scaleform::AmpServer & GetInstance();
	static void Init();
	static void Uninit();
	void SetAppControlCallback(Scaleform::GFx::AMP::AppControlInterface *);
	bool OpenConnection();
	void CloseConnection();
	bool IsValidConnection();
	unsigned long GetCurrentState();
	void SetConnectedApp(const char *);
	void SetAaMode(const char *);
	void SetStrokeType(const char *);
	void SetCurrentLocale(const char *);
	void SetCurveTolerance(float);
	void UpdateState(const Scaleform::GFx::AMP::ServerState *);
	bool IsEnabled();
	bool IsPaused();
	bool IsProfiling();
	bool IsInstructionProfiling();
	bool IsInstructionSampling();
	bool IsFunctionAggregation();
	Scaleform::AmpProfileLevel GetProfileLevel();
	void SetProfileLevel(Scaleform::AmpProfileLevel, bool);
	void SetMemReports(bool, bool);
	void SetAppControlCaps(const Scaleform::GFx::AMP::MessageAppControl *);
	void ToggleInternalStatRecording();
	void SetListeningPort(unsigned long);
	void SetBroadcastPort(unsigned long);
	void SetNoBroadcast();
	void SetConnectionWaitTime(unsigned long);
	void SetHeapLimit(unsigned long long);
	void SetInitSocketLib(bool);
	void SetSocketImplFactory(Scaleform::GFx::SocketImplFactory *);
	bool HandleNextMessage();
	void SendLog(const char *, long, Scaleform::LogMessageId);
	void SendCurrentState();
	void SendAppControlCaps();
	void AddMovie(Scaleform::GFx::MovieImpl *);
	void RemoveMovie(Scaleform::GFx::MovieImpl *);
	bool FindMovieByHeap(Scaleform::MemoryHeap *, Scaleform::GFx::MovieImpl * *);
	void AddImage(Scaleform::GFx::ImageResource *);
	void RemoveImage(Scaleform::GFx::ImageResource *);
	void AddLoader(Scaleform::GFx::Loader *);
	void RemoveLoader(Scaleform::GFx::Loader *);
	void AddLoadProcess(Scaleform::GFx::LoadProcess *);
	void RemoveLoadProcess(Scaleform::GFx::LoadProcess *);
	void AddSound(unsigned long long);
	void RemoveSound(unsigned long long);
	void AddStrokes(unsigned long);
	void RemoveStrokes(unsigned long);
	void IncrementFontFailures();
	void IncrementFontOptRead();
	void DecrementFontOptRead();
	void SetRenderer(Scaleform::Render::HAL *);
	unsigned long GetNextSwdHandle();
	void AddSwf(unsigned long, const char *, const char *);
	Scaleform::String GetSwdId(unsigned long);
	Scaleform::String GetSwdFilename(unsigned long);
	void AddSourceFile(unsigned long long, const char *);
	Scaleform::AmpStats * GetDisplayStats();
	unsigned long GetGpaGroupId();
	void * GetGpaDomain();
protected:
	static Scaleform::AmpServer * AmpServerSingleton; // 0xFFFFFFFFFFFFFFFF
public:
	AmpServer(const Scaleform::AmpServer &);
	AmpServer();
	Scaleform::AmpServer & operator=(const Scaleform::AmpServer &);
};
class Scaleform::RefCountBase<Scaleform::AmpStats,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::AmpStats,2>(Scaleform::RefCountBase<Scaleform::AmpStats,2> &);
	RefCountBase<Scaleform::AmpStats,2>(const Scaleform::RefCountBase<Scaleform::AmpStats,2> &);
	RefCountBase<Scaleform::AmpStats,2>();
	virtual ~RefCountBase<Scaleform::AmpStats,2>();
	Scaleform::RefCountBase<Scaleform::AmpStats,2> & operator=(Scaleform::RefCountBase<Scaleform::AmpStats,2> &);
	Scaleform::RefCountBase<Scaleform::AmpStats,2> & operator=(const Scaleform::RefCountBase<Scaleform::AmpStats,2> &);
};
class Scaleform::AmpStats :
	Scaleform::RefCountBase<Scaleform::AmpStats,2>
{
public:
	virtual ~AmpStats();
	void NativePushCallstack(const char *, Scaleform::AmpNativeFunctionId, unsigned long long);
	void NativePopCallstack(unsigned long long);
	void AddGcRoots(unsigned long);
	void AddGcFreedRoots(unsigned long);
	void GetStats(Scaleform::StatBag *, bool);
	void SetMovieDef(Scaleform::GFx::MovieDef *);
	void SetName(const char *);
	AmpStats(const Scaleform::AmpStats &);
	AmpStats();
	Scaleform::AmpStats & operator=(const Scaleform::AmpStats &);
};
class Scaleform::GPAScopedTask
{
public:
	GPAScopedTask(const char *);
};
class Scaleform::AmpFunctionTimer
{
public:
	AmpFunctionTimer(Scaleform::AmpStats *, const char *, Scaleform::AmpProfileLevel, Scaleform::AmpNativeFunctionId);
	~AmpFunctionTimer();
private:
	unsigned long long StartTicks; // 0x0
	Scaleform::AmpStats * Stats; // 0x8
	Scaleform::GPAScopedTask GpaTask; // 0x10
};
class Scaleform::RefCountBase<Scaleform::AmpMovieObjectDesc,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::AmpMovieObjectDesc,2>(Scaleform::RefCountBase<Scaleform::AmpMovieObjectDesc,2> &);
	RefCountBase<Scaleform::AmpMovieObjectDesc,2>(const Scaleform::RefCountBase<Scaleform::AmpMovieObjectDesc,2> &);
	RefCountBase<Scaleform::AmpMovieObjectDesc,2>();
	virtual ~RefCountBase<Scaleform::AmpMovieObjectDesc,2>();
	Scaleform::RefCountBase<Scaleform::AmpMovieObjectDesc,2> & operator=(Scaleform::RefCountBase<Scaleform::AmpMovieObjectDesc,2> &);
	Scaleform::RefCountBase<Scaleform::AmpMovieObjectDesc,2> & operator=(const Scaleform::RefCountBase<Scaleform::AmpMovieObjectDesc,2> &);
};
class Scaleform::AmpMovieObjectDesc :
	Scaleform::RefCountBase<Scaleform::AmpMovieObjectDesc,2>
{
public:
	Scaleform::StringLH Description; // 0x10
	Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::AmpMovieObjectDesc>,2,Scaleform::ArrayDefaultPolicy> Children; // 0x18
	void Read(Scaleform::File &);
	void Write(Scaleform::File &);
	AmpMovieObjectDesc(Scaleform::AmpMovieObjectDesc &);
	AmpMovieObjectDesc(const Scaleform::AmpMovieObjectDesc &);
	AmpMovieObjectDesc();
	virtual ~AmpMovieObjectDesc();
	Scaleform::AmpMovieObjectDesc & operator=(Scaleform::AmpMovieObjectDesc &);
	Scaleform::AmpMovieObjectDesc & operator=(const Scaleform::AmpMovieObjectDesc &);
};
class Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::AmpMovieObjectDesc>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::AmpMovieObjectDesc>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::AmpMovieObjectDesc>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Ptr<Scaleform::AmpMovieObjectDesc>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::AmpMovieObjectDesc>,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Ptr<Scaleform::AmpMovieObjectDesc>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Ptr<Scaleform::AmpMovieObjectDesc>,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Ptr<Scaleform::AmpMovieObjectDesc>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::AmpMovieObjectDesc>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::AmpMovieObjectDesc>,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Ptr<Scaleform::AmpMovieObjectDesc>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Ptr<Scaleform::AmpMovieObjectDesc>
{
protected:
	Scaleform::AmpMovieObjectDesc * pObject; // 0x0
public:
	Ptr<Scaleform::AmpMovieObjectDesc>(const Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> &);
	Ptr<Scaleform::AmpMovieObjectDesc>(Scaleform::AmpMovieObjectDesc *);
	Ptr<Scaleform::AmpMovieObjectDesc>(Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> &, Scaleform::PickType);
	Ptr<Scaleform::AmpMovieObjectDesc>(Scaleform::Pickable<Scaleform::AmpMovieObjectDesc>);
	Ptr<Scaleform::AmpMovieObjectDesc>(Scaleform::AmpMovieObjectDesc &);
	Ptr<Scaleform::AmpMovieObjectDesc>();
	~Ptr<Scaleform::AmpMovieObjectDesc>();
	bool operator==(Scaleform::AmpMovieObjectDesc *);
	bool operator==(const Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> &);
	bool operator!=(Scaleform::AmpMovieObjectDesc *);
	bool operator!=(const Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> &);
	bool operator<(const Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> &);
	Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> & operator=(Scaleform::Pickable<Scaleform::AmpMovieObjectDesc>);
	const Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> & operator=(Scaleform::AmpMovieObjectDesc &);
	const Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> & operator=(Scaleform::AmpMovieObjectDesc *);
	const Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> & operator=(const Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> &);
	Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> & SetPtr(Scaleform::Pickable<Scaleform::AmpMovieObjectDesc>);
	Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> & SetPtr(Scaleform::AmpMovieObjectDesc &);
	Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> & SetPtr(Scaleform::AmpMovieObjectDesc *);
	Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> & SetPtr(const Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::AmpMovieObjectDesc * & GetRawRef();
	Scaleform::AmpMovieObjectDesc * GetPtr();
	Scaleform::AmpMovieObjectDesc & operator*();
	Scaleform::AmpMovieObjectDesc * operator->();
	Scaleform::AmpMovieObjectDesc * operator class Scaleform::AmpMovieObjectDesc *();
	Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> & Pick(Scaleform::AmpMovieObjectDesc *);
	Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> & Pick(Scaleform::Pickable<Scaleform::AmpMovieObjectDesc>);
	Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> & Pick(Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> &);
};