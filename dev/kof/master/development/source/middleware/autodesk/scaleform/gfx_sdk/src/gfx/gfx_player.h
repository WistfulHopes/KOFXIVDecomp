#pragma once

class Scaleform::GFx::Viewport :
	Scaleform::Render::Viewport
{
public:
	float Scale; // 0x2C
	float AspectRatio; // 0x30
	Viewport(const Scaleform::GFx::Viewport &);
	Viewport(long, long, long, long, long, long, unsigned long);
	Viewport(long, long, long, long, long, long, long, long, long, long, float, float, unsigned long);
	Viewport();
};
class Scaleform::GFx::MemoryContext :
	Scaleform::RefCountBase<Scaleform::GFx::MemoryContext,2>
{
public:
	virtual ~MemoryContext();
	MemoryContext(const Scaleform::GFx::MemoryContext &);
protected:
	MemoryContext();
public:
	Scaleform::GFx::MemoryContext & operator=(const Scaleform::GFx::MemoryContext &);
};
class Scaleform::RefCountBase<Scaleform::GFx::MemoryContext,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::MemoryContext,2>(Scaleform::RefCountBase<Scaleform::GFx::MemoryContext,2> &);
	RefCountBase<Scaleform::GFx::MemoryContext,2>(const Scaleform::RefCountBase<Scaleform::GFx::MemoryContext,2> &);
	RefCountBase<Scaleform::GFx::MemoryContext,2>();
	virtual ~RefCountBase<Scaleform::GFx::MemoryContext,2>();
	Scaleform::RefCountBase<Scaleform::GFx::MemoryContext,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::MemoryContext,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::MemoryContext,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::MemoryContext,2> &);
};
struct Scaleform::GFx::MemoryParams
{
	Scaleform::MemoryHeap::HeapDesc Desc; // 0x0
	float HeapLimitMultiplier; // 0x40
	unsigned long MaxCollectionRoots; // 0x44
	unsigned long FramesBetweenCollections; // 0x48
	unsigned long InitialDynamicLimit; // 0x4C
	unsigned long RunsToUpgradeGen; // 0x50
	unsigned long RunsToCollectYoung; // 0x54
	unsigned long RunsToCollectOld; // 0x58
	MemoryParams(unsigned long long);
	void __dflt_ctor_closure();
};
class Scaleform::GFx::MovieDef :
	Scaleform::GFx::Resource,
	Scaleform::GFx::StateBag
{
public:
	unsigned long GetVersion();
	unsigned long GetLoadingFrame();
	float GetWidth();
	float GetHeight();
	unsigned long GetFrameCount();
	float GetFrameRate();
	Scaleform::Render::Rect<float> GetFrameRect();
	unsigned long GetSWFFlags();
	const char * GetFileURL();
	void WaitForLoadFinish(bool);
	void WaitForFrame(unsigned long);
	enum FileAttrFlags
	{
		FileAttr_UseNetwork = 1,
		FileAttr_UseActionScript3 = 8,
		FileAttr_HasMetadata = 16,
	};
	unsigned long GetFileAttributes();
	unsigned long GetMetadata(char *, unsigned long);
	Scaleform::MemoryHeap * GetLoadDataHeap();
	Scaleform::MemoryHeap * GetBindDataHeap();
	Scaleform::MemoryHeap * GetImageHeap();
	Scaleform::GFx::Resource * GetMovieDataResource();
	const Scaleform::GFx::ExporterInfo * GetExporterInfo();
	Scaleform::GFx::MemoryContext * CreateMemoryContext(const char *, const Scaleform::GFx::MemoryParams &, bool);
	Scaleform::GFx::Movie * CreateInstance(bool, unsigned long long, Scaleform::GFx::ActionControl *, Scaleform::Render::ThreadCommandQueue *);
	Scaleform::GFx::Movie * CreateInstance(Scaleform::GFx::MemoryContext *, bool, Scaleform::GFx::ActionControl *, Scaleform::Render::ThreadCommandQueue *);
	Scaleform::GFx::Movie * CreateInstance(const Scaleform::GFx::MemoryParams &, bool, Scaleform::GFx::ActionControl *, Scaleform::Render::ThreadCommandQueue *);
	struct ImportVisitor;
	void VisitImportedMovies(Scaleform::GFx::MovieDef::ImportVisitor *);
	struct ResourceVisitor;
	enum VisitResourceMask
	{
		ResVisit_NestedMovies = 32768,
		ResVisit_Fonts = 1,
		ResVisit_Bitmaps = 2,
		ResVisit_GradientImages = 4,
		ResVisit_EditTextFields = 8,
		ResVisit_Sounds = 16,
		ResVisit_Sprite = 32,
		ResVisit_AllLocalImages = 6,
		ResVisit_AllImages = 32774,
	};
	void VisitResources(Scaleform::GFx::MovieDef::ResourceVisitor *, unsigned long);
	Scaleform::GFx::Resource * GetResource(const char *);
	MovieDef(Scaleform::GFx::MovieDef &);
	MovieDef(const Scaleform::GFx::MovieDef &);
	MovieDef();
	virtual ~MovieDef();
	Scaleform::GFx::MovieDef & operator=(Scaleform::GFx::MovieDef &);
	Scaleform::GFx::MovieDef & operator=(const Scaleform::GFx::MovieDef &);
};
class Scaleform::GFx::MovieDef :
	Scaleform::GFx::Resource,
	Scaleform::GFx::StateBag
{
public:
	unsigned long GetVersion();
	unsigned long GetLoadingFrame();
	float GetWidth();
	float GetHeight();
	unsigned long GetFrameCount();
	float GetFrameRate();
	Scaleform::Render::Rect<float> GetFrameRect();
	unsigned long GetSWFFlags();
	const char * GetFileURL();
	void WaitForLoadFinish(bool);
	void WaitForFrame(unsigned long);
	enum FileAttrFlags
	{
		FileAttr_UseNetwork = 1,
		FileAttr_UseActionScript3 = 8,
		FileAttr_HasMetadata = 16,
	};
	unsigned long GetFileAttributesA();
	unsigned long GetMetadata(char *, unsigned long);
	Scaleform::MemoryHeap * GetLoadDataHeap();
	Scaleform::MemoryHeap * GetBindDataHeap();
	Scaleform::MemoryHeap * GetImageHeap();
	Scaleform::GFx::Resource * GetMovieDataResource();
	const Scaleform::GFx::ExporterInfo * GetExporterInfo();
	Scaleform::GFx::MemoryContext * CreateMemoryContext(const char *, const Scaleform::GFx::MemoryParams &, bool);
	Scaleform::GFx::Movie * CreateInstance(bool, unsigned long long, Scaleform::GFx::ActionControl *, Scaleform::Render::ThreadCommandQueue *);
	Scaleform::GFx::Movie * CreateInstance(Scaleform::GFx::MemoryContext *, bool, Scaleform::GFx::ActionControl *, Scaleform::Render::ThreadCommandQueue *);
	Scaleform::GFx::Movie * CreateInstance(const Scaleform::GFx::MemoryParams &, bool, Scaleform::GFx::ActionControl *, Scaleform::Render::ThreadCommandQueue *);
	struct ImportVisitor;
	void VisitImportedMovies(Scaleform::GFx::MovieDef::ImportVisitor *);
	struct ResourceVisitor;
	enum VisitResourceMask
	{
		ResVisit_NestedMovies = 32768,
		ResVisit_Fonts = 1,
		ResVisit_Bitmaps = 2,
		ResVisit_GradientImages = 4,
		ResVisit_EditTextFields = 8,
		ResVisit_Sounds = 16,
		ResVisit_Sprite = 32,
		ResVisit_AllLocalImages = 6,
		ResVisit_AllImages = 32774,
	};
	void VisitResources(Scaleform::GFx::MovieDef::ResourceVisitor *, unsigned long);
	Scaleform::GFx::Resource * GetResource(const char *);
	MovieDef(Scaleform::GFx::MovieDef &);
	MovieDef(const Scaleform::GFx::MovieDef &);
	MovieDef();
	virtual ~MovieDef();
	Scaleform::GFx::MovieDef & operator=(Scaleform::GFx::MovieDef &);
	Scaleform::GFx::MovieDef & operator=(const Scaleform::GFx::MovieDef &);
};
struct Scaleform::GFx::MovieDef::ImportVisitor
{
	~ImportVisitor();
	void Visit(Scaleform::GFx::MovieDef *, Scaleform::GFx::MovieDef *, const char *);
	ImportVisitor(const Scaleform::GFx::MovieDef::ImportVisitor &);
	ImportVisitor();
	Scaleform::GFx::MovieDef::ImportVisitor & operator=(const Scaleform::GFx::MovieDef::ImportVisitor &);
};
struct Scaleform::GFx::MovieDef::ResourceVisitor :
	Scaleform::GFx::FileTypeConstants
{
	~ResourceVisitor();
	void Visit(Scaleform::GFx::MovieDef *, Scaleform::GFx::Resource *, Scaleform::GFx::ResourceId, const char *);
	ResourceVisitor(const Scaleform::GFx::MovieDef::ResourceVisitor &);
	ResourceVisitor();
	Scaleform::GFx::MovieDef::ResourceVisitor & operator=(const Scaleform::GFx::MovieDef::ResourceVisitor &);
};
class Scaleform::GFx::ImportVisitor :
	Scaleform::GFx::State,
	Scaleform::GFx::MovieDef::ImportVisitor,
	Scaleform::GFx::FileTypeConstants
{
public:
	ImportVisitor(const Scaleform::GFx::ImportVisitor &);
	ImportVisitor();
	virtual ~ImportVisitor();
	void Visit(Scaleform::GFx::MovieDef *, Scaleform::GFx::MovieDef *, const char *) = 0;
	Scaleform::GFx::ImportVisitor & operator=(const Scaleform::GFx::ImportVisitor &);
};
class Scaleform::GFx::Value :
	Scaleform::ListNode<Scaleform::GFx::Value>
{
	class DisplayInfo;
	enum ValueTypeControl
	{
		VTC_ConvertBit = 128,
		VTC_ManagedBit = 64,
		VTC_OrphanedBit = 32,
		VTC_TypeMask = 143,
	};
	class ObjectInterface;
	enum ValueType
	{
		VT_Undefined = 0,
		VT_Null = 1,
		VT_Boolean = 2,
		VT_Int = 3,
		VT_UInt = 4,
		VT_Number = 5,
		VT_String = 6,
		VT_StringW = 7,
		VT_Object = 8,
		VT_Array = 9,
		VT_DisplayObject = 10,
		VT_Closure = 11,
		VT_ConvertBoolean = 130,
		VT_ConvertInt = 131,
		VT_ConvertUInt = 132,
		VT_ConvertNumber = 133,
		VT_ConvertString = 134,
		VT_ConvertStringW = 135,
	};
public:
	Value(const Scaleform::GFx::Value &);
	Value(long);
	Value(const wchar_t *);
	Value(const char *);
	Value(bool);
	Value(double);
	Value(unsigned long);
	Value(long);
	Value(Scaleform::GFx::Value::ValueType);
	Value();
	~Value();
	const Scaleform::GFx::Value & operator=(const Scaleform::GFx::Value &);
	bool operator==(const Scaleform::GFx::Value &);
	Scaleform::String ToString();
	const wchar_t * ToStringW(wchar_t *, unsigned long long);
	Scaleform::GFx::Value::ValueType GetType();
	bool IsUndefined();
	bool IsNull();
	bool IsBool();
	bool IsInt();
	bool IsUInt();
	bool IsNumber();
	bool IsNumeric();
	bool IsString();
	bool IsStringW();
	bool IsObject();
	bool IsArray();
	bool IsDisplayObject();
	bool IsClosure();
	bool IsOrphaned();
	bool GetBool();
	long GetInt();
	unsigned long GetUInt();
	double GetNumber();
	const char * GetString();
	const wchar_t * GetStringW();
	void SetUndefined();
	void SetNull();
	void SetBoolean(bool);
	void SetInt(long);
	void SetUInt(unsigned long);
	void SetNumber(double);
	void SetString(const char *);
	void SetStringW(const wchar_t *);
	void SetConvertBoolean();
	void SetConvertNumber();
	void SetConvertString();
	void SetConvertStringW();
	class ObjectVisitor;
	class ArrayVisitor;
	bool HasMember(const char *);
	bool GetMember(const char *, Scaleform::GFx::Value *);
	bool SetMember(const char *, const Scaleform::GFx::Value &);
	bool InvokeSelf(Scaleform::GFx::Value *);
	bool InvokeSelf(Scaleform::GFx::Value *, const Scaleform::GFx::Value *, unsigned long long);
	bool Invoke(const char *, Scaleform::GFx::Value *);
	bool Invoke(const char *, Scaleform::GFx::Value *, const Scaleform::GFx::Value *, unsigned long long);
	void VisitMembers(Scaleform::GFx::Value::ObjectInterface::ObjVisitor *);
	bool DeleteMember(const char *);
	void SetUserData(Scaleform::GFx::ASUserData *);
	Scaleform::GFx::ASUserData * GetUserData();
	unsigned long GetArraySize();
	bool SetArraySize(unsigned long);
	bool GetElement(unsigned long, Scaleform::GFx::Value *);
	bool SetElement(unsigned long, const Scaleform::GFx::Value &);
	void VisitElements(Scaleform::GFx::Value::ObjectInterface::ArrVisitor *);
	void VisitElements(Scaleform::GFx::Value::ObjectInterface::ArrVisitor *, unsigned long, long);
	bool PushBack(const Scaleform::GFx::Value &);
	bool PopBack(Scaleform::GFx::Value *);
	bool RemoveElements(unsigned long, long);
	bool RemoveElement(unsigned long);
	bool ClearElements();
	bool IsInstanceOf(const char *);
	bool IsByteArray();
	unsigned long GetByteArraySize();
	void SetByteArraySize(unsigned long long);
	bool ReadFromByteArray(unsigned char *, unsigned long long);
	bool WriteToByteArray(const unsigned char *, unsigned long long);
	void * GetRawDataPtr();
	bool IsDisplayObjectActive();
	bool GetParent(Scaleform::GFx::Value *);
	bool GetDisplayInfo(Scaleform::GFx::Value::DisplayInfo *);
	bool SetDisplayInfo(const Scaleform::GFx::Value::DisplayInfo &);
	bool GetWorldMatrix(Scaleform::Render::Matrix2x4<float> *);
	bool GetDisplayMatrix(Scaleform::Render::Matrix2x4<float> *);
	bool SetDisplayMatrix(const Scaleform::Render::Matrix2x4<float> &);
	bool GetMatrix3D(Scaleform::Render::Matrix3x4<float> *);
	bool SetMatrix3D(const Scaleform::Render::Matrix3x4<float> &);
	bool GetColorTransform(Scaleform::Render::Cxform *);
	bool SetColorTransform(Scaleform::Render::Cxform &);
	bool SetText(const wchar_t *);
	bool SetText(const char *);
	bool SetTextHTML(const wchar_t *);
	bool SetTextHTML(const char *);
	bool GetText(Scaleform::GFx::Value *);
	bool GetTextHTML(Scaleform::GFx::Value *);
	bool CreateEmptyMovieClip(Scaleform::GFx::Value *, const char *, long);
	bool AttachMovie(Scaleform::GFx::Value *, const char *, const char *, long, const Scaleform::GFx::MemberValueSet *);
	bool GotoAndPlay(unsigned long);
	bool GotoAndPlay(const char *);
	bool GotoAndStop(unsigned long);
	bool GotoAndStop(const char *);
	Scaleform::GFx::Movie * GetMovie();
protected:
	Scaleform::GFx::Value::ObjectInterface * pObjectInterface; // 0x10
	union ValueUnion;
	Scaleform::GFx::Value::ValueType Type; // 0x18
	Scaleform::GFx::Value::ValueUnion mValue; // 0x20
	unsigned long long DataAux; // 0x28
	bool IsManagedValue();
	void ChangeType(Scaleform::GFx::Value::ValueType);
	void AcquireManagedValue(const Scaleform::GFx::Value &);
	void ReleaseManagedValue();
};
struct Scaleform::ListNode<Scaleform::GFx::Value>
{
	Scaleform::GFx::Value * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::GFx::Value * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::GFx::Value>();
	Scaleform::GFx::Value * GetPrev();
	Scaleform::GFx::Value * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::GFx::Value *);
	void InsertNodeAfter(Scaleform::GFx::Value *);
	void InsertNodeBefore(Scaleform::GFx::Value *);
};
class Scaleform::GFx::Value::DisplayInfo
{
	enum Flags
	{
		V_x = 1,
		V_y = 2,
		V_rotation = 4,
		V_xscale = 8,
		V_yscale = 16,
		V_alpha = 32,
		V_visible = 64,
		V_z = 128,
		V_xrotation = 256,
		V_yrotation = 512,
		V_zscale = 1024,
		V_FOV = 2048,
		V_projMatrix3D = 4096,
		V_viewMatrix3D = 8192,
		V_edgeaaMode = 16384,
	};
public:
	DisplayInfo(Scaleform::GFx::Value::DisplayInfo &);
	DisplayInfo(const Scaleform::GFx::Value::DisplayInfo &);
	DisplayInfo(bool);
	DisplayInfo(double);
	DisplayInfo(double, double);
	DisplayInfo();
	void Clear();
	void Initialize(unsigned short, double, double, double, double, double, double, bool, double, double, double, double, double, const Scaleform::Render::Matrix3x4<float> *, const Scaleform::Render::Matrix4x4<float> *, Scaleform::Render::EdgeAAMode);
	void SetX(double);
	void SetY(double);
	void SetRotation(double);
	void SetXScale(double);
	void SetYScale(double);
	void SetAlpha(double);
	void SetVisible(bool);
	void SetZ(double);
	void SetXRotation(double);
	void SetYRotation(double);
	void SetZScale(double);
	void SetFOV(double);
	void SetProjectionMatrix3D(const Scaleform::Render::Matrix4x4<float> *);
	void SetViewMatrix3D(const Scaleform::Render::Matrix3x4<float> *);
	void SetEdgeAAMode(Scaleform::Render::EdgeAAMode);
	void SetPosition(double, double);
	void SetScale(double, double);
	void Set(double, double, double, double, double, double, bool, double, double, double, double);
	void Set(double, double, double, double, double, double, bool);
	double GetX();
	double GetY();
	double GetRotation();
	double GetXScale();
	double GetYScale();
	double GetAlpha();
	bool GetVisible();
	double GetZ();
	double GetXRotation();
	double GetYRotation();
	double GetZScale();
	double GetFOV();
	const Scaleform::Render::Matrix4x4<float> * GetProjectionMatrix3D();
	const Scaleform::Render::Matrix3x4<float> * GetViewMatrix3D();
	Scaleform::Render::EdgeAAMode GetEdgeAAMode();
	bool IsFlagSet(unsigned long);
private:
	double X; // 0x0
	double Y; // 0x8
	double Rotation; // 0x10
	double XScale; // 0x18
	double YScale; // 0x20
	double Alpha; // 0x28
	double Z; // 0x30
	double XRotation; // 0x38
	double YRotation; // 0x40
	double ZScale; // 0x48
	double FOV; // 0x50
	Scaleform::Render::Matrix3x4<float> ViewMatrix3D; // 0x60
	Scaleform::Render::Matrix4x4<float> ProjectionMatrix3D; // 0x90
	Scaleform::Render::EdgeAAMode EdgeAAMode; // 0xD0
	unsigned short VarsSet; // 0xD4
	bool Visible; // 0xD6
	void SetFlags(unsigned long);
	void ClearFlags(unsigned long);
public:
	Scaleform::GFx::Value::DisplayInfo & operator=(Scaleform::GFx::Value::DisplayInfo &);
	Scaleform::GFx::Value::DisplayInfo & operator=(const Scaleform::GFx::Value::DisplayInfo &);
};
class Scaleform::GFx::Value::ObjectInterface :
	Scaleform::NewOverrideBase<327>
{
	class ObjVisitor;
	class ArrVisitor;
public:
	ObjectInterface(Scaleform::GFx::MovieImpl *);
	~ObjectInterface();
	void ObjectAddRef(Scaleform::GFx::Value *, void *);
	void ObjectRelease(Scaleform::GFx::Value *, void *);
	bool HasMember(void *, const char *, bool);
	bool GetMember(void *, const char *, Scaleform::GFx::Value *, bool);
	bool SetMember(void *, const char *, const Scaleform::GFx::Value &, bool);
	bool Invoke(void *, Scaleform::GFx::Value *, const char *, const Scaleform::GFx::Value *, unsigned long long, bool);
	bool InvokeClosure(void *, unsigned long long, Scaleform::GFx::Value *, const Scaleform::GFx::Value *, unsigned long long);
	bool DeleteMember(void *, const char *, bool);
	void VisitMembers(void *, Scaleform::GFx::Value::ObjectInterface::ObjVisitor *, bool);
	unsigned long GetArraySize(void *);
	bool SetArraySize(void *, unsigned long);
	bool GetElement(void *, unsigned long, Scaleform::GFx::Value *);
	bool SetElement(void *, unsigned long, const Scaleform::GFx::Value &);
	void VisitElements(void *, Scaleform::GFx::Value::ObjectInterface::ArrVisitor *, unsigned long, long);
	bool PushBack(void *, const Scaleform::GFx::Value &);
	bool PopBack(void *, Scaleform::GFx::Value *);
	bool RemoveElements(void *, unsigned long, long);
	bool IsInstanceOf(void *, const char *);
	bool IsByteArray(void *);
	unsigned long GetByteArraySize(void *);
	void SetByteArraySize(void *, unsigned long long);
	bool ReadFromByteArray(void *, unsigned char *, unsigned long long);
	bool WriteToByteArray(void *, const unsigned char *, unsigned long long);
	void * GetRawDataPtr(void *);
	bool IsDisplayObjectActive(void *);
	bool GetParent(void *, Scaleform::GFx::Value *);
	bool GetDisplayInfo(void *, Scaleform::GFx::Value::DisplayInfo *);
	bool SetDisplayInfo(void *, const Scaleform::GFx::Value::DisplayInfo &);
	bool GetWorldMatrix(void *, Scaleform::Render::Matrix2x4<float> *);
	bool GetDisplayMatrix(void *, Scaleform::Render::Matrix2x4<float> *);
	bool SetDisplayMatrix(void *, const Scaleform::Render::Matrix2x4<float> &);
	bool GetMatrix3D(void *, Scaleform::Render::Matrix3x4<float> *);
	bool SetMatrix3D(void *, const Scaleform::Render::Matrix3x4<float> &);
	bool GetCxform(void *, Scaleform::Render::Cxform *);
	bool SetCxform(void *, const Scaleform::Render::Cxform &);
	bool GetText(void *, Scaleform::GFx::Value *, bool);
	bool SetText(void *, const wchar_t *, bool);
	bool SetText(void *, const char *, bool);
	bool CreateEmptyMovieClip(void *, Scaleform::GFx::Value *, const char *, long);
	bool AttachMovie(void *, Scaleform::GFx::Value *, const char *, const char *, long, const Scaleform::GFx::MemberValueSet *);
	bool GotoAndPlay(void *, unsigned long, bool);
	bool GotoAndPlay(void *, const char *, bool);
	void ToString(Scaleform::String *, const Scaleform::GFx::Value &);
	void SetUserData(void *, Scaleform::GFx::ASUserData *, bool);
	Scaleform::GFx::ASUserData * GetUserData(void *, bool);
	bool CreateObjectValue(Scaleform::GFx::Value *, void *, bool);
	Scaleform::AmpStats * GetAdvanceStats();
	bool IsSameContext(Scaleform::GFx::Value::ObjectInterface *);
	Scaleform::GFx::MovieImpl * GetMovieImpl();
protected:
	Scaleform::GFx::MovieImpl * pMovieRoot; // 0x8
	Scaleform::List<Scaleform::GFx::Value,Scaleform::GFx::Value,Scaleform::ListNode<Scaleform::GFx::Value> > ExternalObjRefs; // 0x10
};
class Scaleform::NewOverrideBase<327>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 327,
	};
public:
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
};
class Scaleform::GFx::Value::ObjectInterface::ObjVisitor
{
public:
	~ObjVisitor();
	bool IncludeAS3PublicMembers();
	void Visit(const char *, const Scaleform::GFx::Value &);
	ObjVisitor(const Scaleform::GFx::Value::ObjectInterface::ObjVisitor &);
	ObjVisitor();
	Scaleform::GFx::Value::ObjectInterface::ObjVisitor & operator=(const Scaleform::GFx::Value::ObjectInterface::ObjVisitor &);
};
class Scaleform::GFx::Value::ObjectInterface::ArrVisitor
{
public:
	~ArrVisitor();
	void Visit(unsigned long, const Scaleform::GFx::Value &);
	ArrVisitor(const Scaleform::GFx::Value::ObjectInterface::ArrVisitor &);
	ArrVisitor();
	Scaleform::GFx::Value::ObjectInterface::ArrVisitor & operator=(const Scaleform::GFx::Value::ObjectInterface::ArrVisitor &);
};
class Scaleform::List<Scaleform::GFx::Value,Scaleform::GFx::Value,Scaleform::ListNode<Scaleform::GFx::Value> >
{
	class ValueType;
private:
	List<Scaleform::GFx::Value,Scaleform::GFx::Value,Scaleform::ListNode<Scaleform::GFx::Value> >(const Scaleform::List<Scaleform::GFx::Value,Scaleform::GFx::Value,Scaleform::ListNode<Scaleform::GFx::Value> > &);
public:
	List<Scaleform::GFx::Value,Scaleform::GFx::Value,Scaleform::ListNode<Scaleform::GFx::Value> >();
	void Clear();
	Scaleform::GFx::Value * GetFirst();
	Scaleform::GFx::Value * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::GFx::Value *);
	bool IsLast(const Scaleform::GFx::Value *);
	bool IsNull(const Scaleform::GFx::Value *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::GFx::Value * GetPrev(const Scaleform::GFx::Value *);
	static Scaleform::GFx::Value * GetNext(const Scaleform::GFx::Value *);
	void PushFront(Scaleform::GFx::Value *);
	void PushBack(Scaleform::GFx::Value *);
	static void Remove(Scaleform::GFx::Value *);
	void BringToFront(Scaleform::GFx::Value *);
	void SendToBack(Scaleform::GFx::Value *);
	void PushListToFront(Scaleform::List<Scaleform::GFx::Value,Scaleform::GFx::Value,Scaleform::ListNode<Scaleform::GFx::Value> > &);
	void PushListToBack(Scaleform::List<Scaleform::GFx::Value,Scaleform::GFx::Value,Scaleform::ListNode<Scaleform::GFx::Value> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::GFx::Value,Scaleform::GFx::Value,Scaleform::ListNode<Scaleform::GFx::Value> > &, Scaleform::GFx::Value *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::GFx::Value,Scaleform::GFx::Value,Scaleform::ListNode<Scaleform::GFx::Value> > &, Scaleform::GFx::Value *);
	void PushListItemsToFront(Scaleform::GFx::Value *, Scaleform::GFx::Value *);
private:
	const Scaleform::List<Scaleform::GFx::Value,Scaleform::GFx::Value,Scaleform::ListNode<Scaleform::GFx::Value> > & operator=(const Scaleform::List<Scaleform::GFx::Value,Scaleform::GFx::Value,Scaleform::ListNode<Scaleform::GFx::Value> > &);
	Scaleform::ListNode<Scaleform::GFx::Value> Root; // 0x0
};
Scaleform::GFx::Value::Value(); // 0x140098290
Scaleform::GFx::Value::~Value(); // 0x1400982B0
const Scaleform::GFx::Value & Scaleform::GFx::Value::operator=(const Scaleform::GFx::Value & src); // 0x1401572B0
union Scaleform::GFx::Value::ValueUnion
{
public:
	long IValue; // 0x0
	unsigned long UIValue; // 0x0
	double NValue; // 0x0
	bool BValue; // 0x0
	const char * pString; // 0x0
	const char * * pStringManaged; // 0x0
	const wchar_t * pStringW; // 0x0
	void * pData; // 0x0
};
struct Scaleform::GFx::MemberValue
{
	Scaleform::String Key; // 0x0
	Scaleform::GFx::Value mValue; // 0x8
	MemberValue(Scaleform::GFx::MemberValue &);
	MemberValue(const Scaleform::GFx::MemberValue &);
	MemberValue(const Scaleform::String &, const Scaleform::GFx::Value &);
	~MemberValue();
	Scaleform::GFx::MemberValue & operator=(Scaleform::GFx::MemberValue &);
	Scaleform::GFx::MemberValue & operator=(const Scaleform::GFx::MemberValue &);
};
class Scaleform::ArrayCPP<Scaleform::GFx::MemberValue,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::MemberValue,Scaleform::AllocatorGH_CPP<Scaleform::GFx::MemberValue,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayCPP<Scaleform::GFx::MemberValue,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayCPP<Scaleform::GFx::MemberValue,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayCPP<Scaleform::GFx::MemberValue,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayCPP<Scaleform::GFx::MemberValue,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayCPP<Scaleform::GFx::MemberValue,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayCPP<Scaleform::GFx::MemberValue,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayCPP<Scaleform::GFx::MemberValue,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayCPP<Scaleform::GFx::MemberValue,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::GFx::MemberValueSet :
	Scaleform::ArrayCPP<Scaleform::GFx::MemberValue,2,Scaleform::ArrayDefaultPolicy>
{
public:
	MemberValueSet(Scaleform::GFx::MemberValueSet &);
	MemberValueSet(const Scaleform::GFx::MemberValueSet &);
	MemberValueSet();
	~MemberValueSet();
	Scaleform::GFx::MemberValueSet & operator=(Scaleform::GFx::MemberValueSet &);
	Scaleform::GFx::MemberValueSet & operator=(const Scaleform::GFx::MemberValueSet &);
};
class Scaleform::GFx::ASUserData :
	Scaleform::RefCountBase<Scaleform::GFx::ASUserData,2>
{
private:
	Scaleform::GFx::Value::ObjectInterface * pLastObjectInterface; // 0x10
	void * pLastData; // 0x18
	bool IsLastDispObj; // 0x20
public:
	ASUserData(const Scaleform::GFx::ASUserData &);
	ASUserData();
	virtual ~ASUserData();
	void SetLastObjectValue(Scaleform::GFx::Value::ObjectInterface *, void *, bool);
	bool GetLastObjectValue(Scaleform::GFx::Value *);
	void OnDestroy(Scaleform::GFx::Movie *, void *);
	Scaleform::GFx::ASUserData & operator=(const Scaleform::GFx::ASUserData &);
};
class Scaleform::RefCountBase<Scaleform::GFx::ASUserData,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::ASUserData,2>(Scaleform::RefCountBase<Scaleform::GFx::ASUserData,2> &);
	RefCountBase<Scaleform::GFx::ASUserData,2>(const Scaleform::RefCountBase<Scaleform::GFx::ASUserData,2> &);
	RefCountBase<Scaleform::GFx::ASUserData,2>();
	virtual ~RefCountBase<Scaleform::GFx::ASUserData,2>();
	Scaleform::RefCountBase<Scaleform::GFx::ASUserData,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::ASUserData,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::ASUserData,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::ASUserData,2> &);
};
class Scaleform::GFx::FunctionHandler :
	Scaleform::RefCountBase<Scaleform::GFx::FunctionHandler,2>
{
	struct Params;
public:
	virtual ~FunctionHandler();
	void Call(const Scaleform::GFx::FunctionHandler::Params &);
	FunctionHandler(const Scaleform::GFx::FunctionHandler &);
	FunctionHandler();
	Scaleform::GFx::FunctionHandler & operator=(const Scaleform::GFx::FunctionHandler &);
};
class Scaleform::RefCountBase<Scaleform::GFx::FunctionHandler,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::GFx::FunctionHandler,2>(Scaleform::RefCountBase<Scaleform::GFx::FunctionHandler,2> &);
	RefCountBase<Scaleform::GFx::FunctionHandler,2>(const Scaleform::RefCountBase<Scaleform::GFx::FunctionHandler,2> &);
	RefCountBase<Scaleform::GFx::FunctionHandler,2>();
	virtual ~RefCountBase<Scaleform::GFx::FunctionHandler,2>();
	Scaleform::RefCountBase<Scaleform::GFx::FunctionHandler,2> & operator=(Scaleform::RefCountBase<Scaleform::GFx::FunctionHandler,2> &);
	Scaleform::RefCountBase<Scaleform::GFx::FunctionHandler,2> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::FunctionHandler,2> &);
};
struct Scaleform::GFx::FunctionHandler::Params
{
	Scaleform::GFx::Value * pRetVal; // 0x0
	Scaleform::GFx::Movie * pMovie; // 0x8
	Scaleform::GFx::Value * pThis; // 0x10
	Scaleform::GFx::Value * pArgsWithThisRef; // 0x18
	Scaleform::GFx::Value * pArgs; // 0x20
	unsigned long ArgCount; // 0x28
	void * pUserData; // 0x30
};
class Scaleform::GFx::VirtualKeyboardInterface :
	Scaleform::GFx::State
{
public:
	VirtualKeyboardInterface(Scaleform::GFx::VirtualKeyboardInterface &);
	VirtualKeyboardInterface(const Scaleform::GFx::VirtualKeyboardInterface &);
	VirtualKeyboardInterface();
	void OnInputTextfieldFocusIn(bool, const Scaleform::Render::Rect<float> &);
	void OnInputTextfieldFocusOut();
	virtual ~VirtualKeyboardInterface();
	Scaleform::GFx::VirtualKeyboardInterface & operator=(Scaleform::GFx::VirtualKeyboardInterface &);
	Scaleform::GFx::VirtualKeyboardInterface & operator=(const Scaleform::GFx::VirtualKeyboardInterface &);
};
class Scaleform::GFx::ExternalInterface :
	Scaleform::GFx::State
{
public:
	ExternalInterface(const Scaleform::GFx::ExternalInterface &);
	ExternalInterface();
	virtual ~ExternalInterface();
	void Callback(Scaleform::GFx::Movie *, const char *, const Scaleform::GFx::Value *, unsigned long);
	Scaleform::GFx::ExternalInterface & operator=(const Scaleform::GFx::ExternalInterface &);
};
class Scaleform::GFx::ExtensionContextInterface :
	Scaleform::GFx::State
{
public:
	ExtensionContextInterface(Scaleform::GFx::ExtensionContextInterface &);
	ExtensionContextInterface(const Scaleform::GFx::ExtensionContextInterface &);
	ExtensionContextInterface();
	bool Call(const char *, const char *, const char *, unsigned long, const Scaleform::GFx::Value *, Scaleform::GFx::Value *);
	const char * GetExtensionDirectory(const char *);
	void FinalizeExtensionContext(const char *, const char *);
	void InitializeExtensionContext(const char *, const char *);
	Scaleform::GFx::Value * GetActionScriptData(const char *, const char *);
	void SetActionScriptData(const char *, const char *, Scaleform::GFx::Value *);
	void SetMovie(Scaleform::GFx::Movie *);
	virtual ~ExtensionContextInterface();
	Scaleform::GFx::ExtensionContextInterface & operator=(Scaleform::GFx::ExtensionContextInterface &);
	Scaleform::GFx::ExtensionContextInterface & operator=(const Scaleform::GFx::ExtensionContextInterface &);
};
class Scaleform::GFx::MultitouchInterface :
	Scaleform::GFx::State
{
	enum MultitouchInputMode
	{
		MTI_None = 0,
		MTI_TouchPoint = 1,
		MTI_Gesture = 2,
		MTI_Mixed = 3,
	};
	enum GestureMask
	{
		MTG_None = 0,
		MTG_Pan = 1,
		MTG_Zoom = 2,
		MTG_Rotate = 4,
		MTG_Swipe = 8,
	};
public:
	MultitouchInterface(Scaleform::GFx::MultitouchInterface &);
	MultitouchInterface(const Scaleform::GFx::MultitouchInterface &);
	MultitouchInterface();
	unsigned long GetMaxTouchPoints();
	unsigned long GetSupportedGesturesMask();
	bool SetMultitouchInputMode(Scaleform::GFx::MultitouchInterface::MultitouchInputMode);
	virtual ~MultitouchInterface();
	Scaleform::GFx::MultitouchInterface & operator=(Scaleform::GFx::MultitouchInterface &);
	Scaleform::GFx::MultitouchInterface & operator=(const Scaleform::GFx::MultitouchInterface &);
};
class Scaleform::GFx::AccelerometerInterface :
	Scaleform::GFx::State
{
public:
	AccelerometerInterface(Scaleform::GFx::AccelerometerInterface &);
	AccelerometerInterface(const Scaleform::GFx::AccelerometerInterface &);
	AccelerometerInterface();
	bool RegisterAccelerometer(long);
	bool UnregisterAccelerometer(long);
	bool IsAccelerometerMuted();
	bool IsAccelerometerSupported();
	void SetAccelerometerInterval(long, long);
	virtual ~AccelerometerInterface();
	Scaleform::GFx::AccelerometerInterface & operator=(Scaleform::GFx::AccelerometerInterface &);
	Scaleform::GFx::AccelerometerInterface & operator=(const Scaleform::GFx::AccelerometerInterface &);
};
class Scaleform::GFx::GeolocationInterface :
	Scaleform::GFx::State
{
public:
	GeolocationInterface(Scaleform::GFx::GeolocationInterface &);
	GeolocationInterface(const Scaleform::GFx::GeolocationInterface &);
	GeolocationInterface();
	bool RegisterGeolocation(long);
	bool UnregisterGeolocation(long);
	bool IsGeolocationMuted();
	bool IsGeolocationSupported();
	void SetGeolocationInterval(long, long);
	virtual ~GeolocationInterface();
	Scaleform::GFx::GeolocationInterface & operator=(Scaleform::GFx::GeolocationInterface &);
	Scaleform::GFx::GeolocationInterface & operator=(const Scaleform::GFx::GeolocationInterface &);
};
class Scaleform::RefCountBase<Scaleform::GFx::Movie,327> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,327>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 327,
	};
public:
	RefCountBase<Scaleform::GFx::Movie,327>(Scaleform::RefCountBase<Scaleform::GFx::Movie,327> &);
	RefCountBase<Scaleform::GFx::Movie,327>(const Scaleform::RefCountBase<Scaleform::GFx::Movie,327> &);
	RefCountBase<Scaleform::GFx::Movie,327>();
	virtual ~RefCountBase<Scaleform::GFx::Movie,327>();
	Scaleform::RefCountBase<Scaleform::GFx::Movie,327> & operator=(Scaleform::RefCountBase<Scaleform::GFx::Movie,327> &);
	Scaleform::RefCountBase<Scaleform::GFx::Movie,327> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::Movie,327> &);
};
class Scaleform::GFx::Movie :
	Scaleform::RefCountBase<Scaleform::GFx::Movie,327>,
	Scaleform::GFx::StateBag
{
public:
	Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> pASMovieRoot; // 0x18
	Movie(const Scaleform::GFx::Movie &);
	Movie();
	virtual ~Movie();
	Scaleform::GFx::MovieDef * GetMovieDef();
	unsigned long GetFrameCount();
	float GetFrameRate();
	long GetAVMVersion();
	unsigned long GetCurrentFrame();
	bool HasLooped();
	void GotoFrame(unsigned long);
	bool GotoLabeledFrame(const char *, long);
	void SetPlayState(Scaleform::GFx::PlayState);
	Scaleform::GFx::PlayState GetPlayState();
	bool IsValid();
	void SetVisible(bool);
	bool GetVisible();
	unsigned long long GetASTimerMs();
	bool IsAvailable(const char *);
	void CreateString(Scaleform::GFx::Value *, const char *);
	void CreateStringW(Scaleform::GFx::Value *, const wchar_t *);
	void CreateObject(Scaleform::GFx::Value *, const char *, const Scaleform::GFx::Value *, unsigned long);
	void CreateArray(Scaleform::GFx::Value *);
	void CreateFunction(Scaleform::GFx::Value *, Scaleform::GFx::FunctionHandler *, void *);
	enum SetVarType
	{
		SV_Normal = 0,
		SV_Sticky = 1,
		SV_Permanent = 2,
	};
	bool SetVariable(const char *, const wchar_t *, Scaleform::GFx::Movie::SetVarType);
	bool SetVariable(const char *, const char *, Scaleform::GFx::Movie::SetVarType);
	bool SetVariable(const char *, const Scaleform::GFx::Value &, Scaleform::GFx::Movie::SetVarType);
	bool GetVariable(Scaleform::GFx::Value *, const char *);
	bool SetVariableDouble(const char *, double, Scaleform::GFx::Movie::SetVarType);
	double GetVariableDouble(const char *);
	enum SetArrayType
	{
		SA_Int = 0,
		SA_Double = 1,
		SA_Float = 2,
		SA_String = 3,
		SA_StringW = 4,
		SA_Value = 5,
	};
	bool SetVariableArray(const char *, unsigned long, const Scaleform::GFx::Value *, unsigned long, Scaleform::GFx::Movie::SetVarType);
	bool SetVariableArray(Scaleform::GFx::Movie::SetArrayType, const char *, unsigned long, const void *, unsigned long, Scaleform::GFx::Movie::SetVarType);
	bool SetVariableArraySize(const char *, unsigned long, Scaleform::GFx::Movie::SetVarType);
	unsigned long GetVariableArraySize(const char *);
	bool GetVariableArray(const char *, unsigned long, Scaleform::GFx::Value *, unsigned long);
	bool GetVariableArray(Scaleform::GFx::Movie::SetArrayType, const char *, unsigned long, void *, unsigned long);
	bool Invoke(const char *, const char *, ...);
	bool Invoke(const char *, Scaleform::GFx::Value *, const char *, ...);
	bool Invoke(const char *, Scaleform::GFx::Value *, const Scaleform::GFx::Value *, unsigned long);
	bool InvokeArgs(const char *, Scaleform::GFx::Value *, const char *, char *);
	void SetViewport(long, long, long, long, long, long, unsigned long);
	void SetViewport(const Scaleform::GFx::Viewport &);
	void GetViewport(Scaleform::GFx::Viewport *);
	enum ScaleModeType
	{
		SM_NoScale = 0,
		SM_ShowAll = 1,
		SM_ExactFit = 2,
		SM_NoBorder = 3,
	};
	void SetViewScaleMode(Scaleform::GFx::Movie::ScaleModeType);
	Scaleform::GFx::Movie::ScaleModeType GetViewScaleMode();
	enum AlignType
	{
		Align_Center = 0,
		Align_TopCenter = 1,
		Align_BottomCenter = 2,
		Align_CenterLeft = 3,
		Align_CenterRight = 4,
		Align_TopLeft = 5,
		Align_TopRight = 6,
		Align_BottomLeft = 7,
		Align_BottomRight = 8,
	};
	void SetViewAlignment(Scaleform::GFx::Movie::AlignType);
	Scaleform::GFx::Movie::AlignType GetViewAlignment();
	Scaleform::Render::Rect<float> GetVisibleFrameRect();
	Scaleform::Render::Rect<float> GetSafeRect();
	void SetSafeRect(const Scaleform::Render::Rect<float> &);
	void SetEdgeAAMode(Scaleform::Render::EdgeAAMode);
	Scaleform::Render::EdgeAAMode GetEdgeAAMode();
	void Restart(bool);
	float Advance(float, unsigned long, bool);
	void Capture(bool);
	const Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> & GetDisplayHandle();
	void SetCaptureThread(unsigned long);
	void ShutdownRendering(bool);
	bool IsShutdownRenderingComplete();
	void SetPause(bool);
	bool IsPaused();
	void SetBackgroundColor(const Scaleform::Render::Color);
	void SetBackgroundAlpha(float);
	float GetBackgroundAlpha();
	enum HE_ReturnValueType
	{
		HE_NotHandled = 0,
		HE_Handled = 1,
		HE_NoDefaultAction = 2,
		HE_Completed = 3,
	};
	unsigned long HandleEvent(const Scaleform::GFx::Event &);
	void GetMouseState(unsigned long, float *, float *, unsigned long *);
	void NotifyMouseState(float, float, unsigned long, unsigned long);
	enum HitTestType
	{
		HitTest_Bounds = 0,
		HitTest_Shapes = 1,
		HitTest_ButtonEvents = 2,
		HitTest_ShapesNoInvisible = 3,
	};
	bool HitTest(float, float, Scaleform::GFx::Movie::HitTestType, unsigned long);
	void SetExternalInterfaceRetVal(const Scaleform::GFx::Value &);
	void * GetUserData();
	void SetUserData(void *);
	bool IsMovieFocused();
	bool GetDirtyFlag(bool);
	void SetMouseCursorCount(unsigned long);
	unsigned long GetMouseCursorCount();
	void SetControllerCount(unsigned long);
	unsigned long GetControllerCount();
	void GetStats(Scaleform::StatBag *, bool);
	Scaleform::MemoryHeap * GetHeap();
	enum GCFlags
	{
		GCF_Quick = 0,
		GCF_Medium = 1,
		GCF_Full = 2,
	};
	void ForceCollectGarbage(unsigned long);
	void SuspendGC(bool);
	void ScheduleGC(unsigned long);
	enum ReportFlags
	{
		Report_ShortFileNames = 1,
		Report_NoCircularReferences = 2,
		Report_SuppressOverallStats = 4,
		Report_AddressesForAnonymObjsOnly = 8,
		Report_SuppressMovieDefsStats = 16,
		Report_NoEllipsis = 32,
	};
	void PrintObjectsReport(unsigned long, Scaleform::Log *, const char *, Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> *, Scaleform::MemoryHeap *);
	static float GetRenderPixelScale();
	Scaleform::Render::Rect<float> TranslateToScreen(const Scaleform::Render::Rect<float> &, Scaleform::Render::Matrix2x4<float> *);
	Scaleform::Render::Point<float> TranslateToScreen(const Scaleform::Render::Point<float> &, Scaleform::Render::Matrix2x4<float> *);
	bool TranslateLocalToScreen(const char *, const Scaleform::Render::Point<float> &, Scaleform::Render::Point<float> *, Scaleform::Render::Matrix2x4<float> *);
	bool SetControllerFocusGroup(unsigned long, unsigned long);
	unsigned long GetControllerFocusGroup(unsigned long);
	void ResetInputFocus(unsigned long);
	void Release();
	bool IsExitRequested();
	void GetViewMatrix3D(Scaleform::Render::Matrix3x4<float> *);
	void SetViewMatrix3D(const Scaleform::Render::Matrix3x4<float> &);
	void GetProjectionMatrix3D(Scaleform::Render::Matrix4x4<float> *);
	void SetProjectionMatrix3D(const Scaleform::Render::Matrix4x4<float> &);
	void SetStageAutoOrients(bool);
	void ForceUpdateImages();
	enum <unnamed-enum-MAVF_DontScaleDown>
	{
		MAVF_DontScaleDown = 1,
		MAVF_ScaleUp50 = 2,
		MAVF_LeftTopToZero = 4,
	};
	void MakeAreaVisible(const Scaleform::Render::Rect<float> &, const Scaleform::Render::Rect<float> &, unsigned long);
	void RestoreViewport();
	Scaleform::GFx::Movie & operator=(const Scaleform::GFx::Movie &);
};
class Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase>
{
protected:
	Scaleform::GFx::ASMovieRootBase * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ASMovieRootBase>(const Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> &);
	Ptr<Scaleform::GFx::ASMovieRootBase>(Scaleform::GFx::ASMovieRootBase *);
	Ptr<Scaleform::GFx::ASMovieRootBase>(Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ASMovieRootBase>(Scaleform::Pickable<Scaleform::GFx::ASMovieRootBase>);
	Ptr<Scaleform::GFx::ASMovieRootBase>(Scaleform::GFx::ASMovieRootBase &);
	Ptr<Scaleform::GFx::ASMovieRootBase>();
	~Ptr<Scaleform::GFx::ASMovieRootBase>();
	bool operator==(Scaleform::GFx::ASMovieRootBase *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> &);
	bool operator!=(Scaleform::GFx::ASMovieRootBase *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> &);
	Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> & operator=(Scaleform::Pickable<Scaleform::GFx::ASMovieRootBase>);
	const Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> & operator=(Scaleform::GFx::ASMovieRootBase &);
	const Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> & operator=(Scaleform::GFx::ASMovieRootBase *);
	const Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> & operator=(const Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> &);
	Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ASMovieRootBase>);
	Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> & SetPtr(Scaleform::GFx::ASMovieRootBase &);
	Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> & SetPtr(Scaleform::GFx::ASMovieRootBase *);
	Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ASMovieRootBase * & GetRawRef();
	Scaleform::GFx::ASMovieRootBase * GetPtr();
	Scaleform::GFx::ASMovieRootBase & operator*();
	Scaleform::GFx::ASMovieRootBase * operator->();
	Scaleform::GFx::ASMovieRootBase * operator class Scaleform::GFx::ASMovieRootBase *();
	Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> & Pick(Scaleform::GFx::ASMovieRootBase *);
	Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> & Pick(Scaleform::Pickable<Scaleform::GFx::ASMovieRootBase>);
	Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> & Pick(Scaleform::Ptr<Scaleform::GFx::ASMovieRootBase> &);
};
class Scaleform::GFx::ExternalLibPtr
{
protected:
	Scaleform::GFx::MovieImpl * pOwner; // 0x8
public:
	ExternalLibPtr(const Scaleform::GFx::ExternalLibPtr &);
	ExternalLibPtr(Scaleform::GFx::MovieImpl *);
	~ExternalLibPtr();
	Scaleform::GFx::ExternalLibPtr & operator=(const Scaleform::GFx::ExternalLibPtr &);
};