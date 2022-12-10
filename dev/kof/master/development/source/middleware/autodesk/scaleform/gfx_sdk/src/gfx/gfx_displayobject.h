#pragma once

class Scaleform::GFx::AvmDisplayObjBase
{
public:
	~AvmDisplayObjBase();
	const Scaleform::GFx::AvmInteractiveObjBase * ToAvmInteractiveObjBase();
	Scaleform::GFx::AvmInteractiveObjBase * ToAvmInteractiveObjBase();
	const Scaleform::GFx::AvmSpriteBase * ToAvmSpriteBase();
	Scaleform::GFx::AvmSpriteBase * ToAvmSpriteBase();
	const Scaleform::GFx::AvmButtonBase * ToAvmButttonBase();
	Scaleform::GFx::AvmButtonBase * ToAvmButttonBase();
	const Scaleform::GFx::AvmTextFieldBase * ToAvmTextFieldBase();
	Scaleform::GFx::AvmTextFieldBase * ToAvmTextFieldBase();
	Scaleform::GFx::AvmDisplayObjContainerBase * ToAvmDispContainerBase();
	const char * GetAbsolutePath(Scaleform::String *);
	bool HasEventHandler(const Scaleform::GFx::EventId &);
	bool OnEvent(const Scaleform::GFx::EventId &);
	void OnEventLoad();
	void OnEventUnload();
	bool OnUnloading(bool);
	AvmDisplayObjBase(const Scaleform::GFx::AvmDisplayObjBase &);
	AvmDisplayObjBase();
	Scaleform::GFx::AvmDisplayObjBase & operator=(const Scaleform::GFx::AvmDisplayObjBase &);
};
class Scaleform::GFx::DisplayObjectBase :
	Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>,
	Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>
{
	enum <unnamed-enum-INVALID_DEPTH>
	{
		INVALID_DEPTH = 255,
	};
	class Matrix;
	class Cxform;
	enum BlendType
	{
		Blend_None = 0,
		Blend_Normal = 1,
		Blend_Layer = 2,
		Blend_Multiply = 3,
		Blend_Screen = 4,
		Blend_Lighten = 5,
		Blend_Darken = 6,
		Blend_Difference = 7,
		Blend_Add = 8,
		Blend_Subtract = 9,
		Blend_Invert = 10,
		Blend_Alpha = 11,
		Blend_Erase = 12,
		Blend_Overlay = 13,
		Blend_HardLight = 14,
		Blend_Overwrite = 15,
		Blend_OverwriteAll = 16,
		Blend_FullAdditive = 17,
		Blend_FilterBlend = 18,
		Blend_Ignore = 19,
		Blend_Count = 20,
		Blend_Invalid = 21,
	};
	struct GeomDataType;
	struct IndirectTransformDataType;
	struct PerspectiveDataType;
	enum FlagMasks
	{
		Mask_Scale9GridExists = 1,
		Mask_TopmostLevel = 2,
		Mask_HitTestNegative = 4,
		Mask_HitTestPositive = 8,
		Mask_HitTest = 12,
		Mask_Unloaded = 16,
		Mask_JustLoaded = 32,
		Mask_MarkedForRemove = 64,
		Mask_InteractiveObject = 128,
		Mask_ScriptableObject = 256,
		Mask_DisplayObjContainer = 512,
		Mask_Sprite = 1024,
		Mask_MovieClip = 2048,
		Mask_Unloading = 4096,
		Mask_Loaded = 8192,
		Mask_Visible = 16384,
		Mask_IndirectTransform = 32768,
	};
protected:
	void SetInteractiveObjectFlag();
	void SetScriptableObjectFlag();
	void SetDisplayObjContainerFlag();
	void SetSpriteFlag();
	void SetVisibleFlag(bool);
	void ClearVisibleFlag();
	bool IsVisibleFlagSet();
	Scaleform::Ptr<Scaleform::Render::TreeNode> CreateRenderNode(Scaleform::Render::ContextImpl::Context &);
	Scaleform::Render::TreeContainer * ConvertToTreeContainer();
	Scaleform::Ptr<Scaleform::Render::TreeNode> SetIndirectTransform(Scaleform::Render::TreeNode *);
	void RemoveIndirectTransform(bool);
public:
	DisplayObjectBase(const Scaleform::GFx::DisplayObjectBase &);
	DisplayObjectBase(Scaleform::GFx::ASMovieRootBase *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::ResourceId);
	virtual ~DisplayObjectBase();
	void BindAvmObj(Scaleform::GFx::AvmDisplayObjBase *);
	bool HasAvmObject();
	const Scaleform::GFx::AvmDisplayObjBase * GetAvmObjImpl();
	Scaleform::GFx::AvmDisplayObjBase * GetAvmObjImpl();
	void SetTopmostLevelFlag(bool);
	void ClearTopmostLevelFlag();
	Scaleform::GFx::ResourceId GetId();
	Scaleform::GFx::InteractiveObject * GetParent();
	void SetParent(Scaleform::GFx::InteractiveObject *);
	long GetDepth();
	void SetDepth(long);
	unsigned long GetCreateFrame();
	void SetCreateFrame(unsigned long);
	const Scaleform::Render::Matrix2x4<float> & GetMatrix();
	void SetMatrix(const Scaleform::Render::Matrix2x4<float> &);
	const Scaleform::Render::Matrix3x4<float> & GetMatrix3D();
	void SetMatrix3D(const Scaleform::Render::Matrix3x4<float> &);
	bool GetProjectionMatrix3D(Scaleform::Render::Matrix4x4<float> *, bool);
	void SetProjectionMatrix3D(const Scaleform::Render::Matrix4x4<float> &);
	void ClearProjectionMatrix3D();
	bool GetViewMatrix3D(Scaleform::Render::Matrix3x4<float> *, bool);
	void SetViewMatrix3D(const Scaleform::Render::Matrix3x4<float> &);
	void ClearViewMatrix3D();
	void UpdateViewAndPerspective();
	void UpdateTransform3D();
	bool Has3D();
	bool Is3D();
	bool Is3D(bool);
	void Clear3D(bool);
	const Scaleform::Render::Cxform & GetCxform();
	void SetCxform(const Scaleform::Render::Cxform &);
	void ConcatenateCxform(const Scaleform::Render::Cxform &);
	void ConcatenateMatrix(const Scaleform::Render::Matrix2x4<float> &);
	Scaleform::Render::BlendMode GetBlendMode();
	void SetBlendMode(Scaleform::Render::BlendMode);
	float GetRatio();
	void SetRatio(float);
	unsigned short GetClipDepth();
	void SetClipDepth(unsigned short);
	bool IsAncestor(Scaleform::GFx::DisplayObjectBase *);
	void SetScale9GridExists(bool);
	bool DoesScale9GridExist();
	void SetScale9Grid(const Scaleform::Render::Rect<float> &);
	Scaleform::Render::Rect<float> GetScale9Grid();
	bool HasScale9Grid();
	void PropagateScale9GridExists();
	Scaleform::Render::Scale9GridInfo * CreateScale9Grid();
	bool IsTopmostLevelFlagSet();
	void SetX(double);
	double GetX();
	void SetY(double);
	double GetY();
	void SetZ(double);
	double GetZ();
	void SetXScale(double);
	double GetXScale();
	void SetYScale(double);
	double GetYScale();
	void SetZScale(double);
	double GetZScale();
	void SetRotation(double);
	double GetRotation();
	void SetXRotation(double);
	double GetXRotation();
	void SetYRotation(double);
	double GetYRotation();
	void SetFOV(double);
	double GetFOV();
	void SetFocalLength(double);
	double GetFocalLength();
	void SetProjectionCenter(Scaleform::Render::Point<float>);
	Scaleform::Render::Point<float> GetProjectionCenter();
	void SetWidth(double);
	double GetWidth();
	void SetHeight(double);
	double GetHeight();
	void SetAlpha(double);
	double GetAlpha();
	double GetMouseX();
	double GetMouseY();
	bool GetAcceptAnimMoves();
	bool GetContinueAnimationFlag();
	void SetAcceptAnimMoves(bool);
	bool GetCacheAsBitmap();
	void SetCacheAsBitmap(bool);
	void SetFilters(const Scaleform::Render::FilterSet *);
	const Scaleform::Render::FilterSet * GetFilters();
	void SetVisible(bool);
	bool GetVisible();
	void ForceShutdown();
	bool CheckLastHitResult(float, float);
	bool WasLastHitPositive();
	void SetLastHitResult(float, float, bool);
	void InvalidateHitResult();
	void SetLoaded(bool);
	void SetUnloaded(bool);
	void SetJustLoaded(bool);
	bool IsLoaded();
	bool IsUnloaded();
	bool IsJustLoaded();
	void SetUnloading(bool);
	bool IsUnloading();
	bool IsUnloadQueuedUp();
	Scaleform::Render::Matrix2x4<float> GetWorldMatrix();
	void GetWorldMatrix(Scaleform::Render::Matrix2x4<float> *);
	Scaleform::Render::Matrix3x4<float> GetWorldMatrix3D();
	void GetWorldMatrix3D(Scaleform::Render::Matrix3x4<float> *);
	Scaleform::Render::Cxform GetWorldCxform();
	void GetWorldCxform(Scaleform::Render::Cxform *);
	Scaleform::Render::Matrix2x4<float> GetLevelMatrix();
	void GetLevelMatrix(Scaleform::Render::Matrix2x4<float> *);
	Scaleform::Render::Matrix3x4<float> GetLocalMatrix3D();
	void GetLocalMatrix3D(Scaleform::Render::Matrix3x4<float> *);
	Scaleform::Render::Point<float> Local3DToGlobal(const Scaleform::Render::Point3<float> &);
	Scaleform::Render::Point<float> LocalToGlobal(const Scaleform::Render::Point<float> &);
	Scaleform::Render::Point<float> GlobalToLocal(const Scaleform::Render::Point<float> &);
	Scaleform::Render::Point3<float> GlobalToLocal3D(const Scaleform::Render::Point<float> &);
	Scaleform::Render::BlendMode GetActiveBlendMode();
	Scaleform::Render::Rect<float> GetBounds(const Scaleform::Render::Matrix2x4<float> &);
	Scaleform::Render::Rect<float> GetBoundsIn3D();
	Scaleform::Render::Rect<float> GetRectBounds(const Scaleform::Render::Matrix2x4<float> &);
	Scaleform::Render::Rect<float> GetWorldBounds();
	Scaleform::Render::Rect<float> GetLevelBounds();
	enum HitTestMask
	{
		HitTest_TestShape = 1,
		HitTest_IgnoreInvisible = 2,
	};
	bool PointTestLocal(const Scaleform::Render::Point<float> &, unsigned char);
	struct TopMostDescr;
	enum TopMostResult
	{
		TopMost_Found = 1,
		TopMost_FoundNothing = 2,
		TopMost_Continue = 3,
	};
	Scaleform::GFx::DisplayObjectBase::TopMostResult GetTopMostMouseEntity(const Scaleform::Render::Point<float> &, Scaleform::GFx::DisplayObjectBase::TopMostDescr *);
	void TransformPointToLocal(Scaleform::Render::Point<float> *, const Scaleform::Render::Point<float> &, bool, const Scaleform::Render::Matrix2x4<float> *);
	Scaleform::GFx::MovieImpl * FindMovieImpl();
	Scaleform::GFx::CharacterDef * GetCharacterDef();
	Scaleform::GFx::MovieDefImpl * GetResourceMovieDef();
	Scaleform::GFx::FontManager * GetFontManager();
	Scaleform::GFx::InteractiveObject * GetTopParent(bool);
	unsigned long GetVersion();
	bool IsCaseSensitive();
	Scaleform::Render::TreeNode * GetRenderNode();
	Scaleform::Render::TreeContainer * GetRenderContainer();
	Scaleform::Render::ContextImpl::Context & GetRenderContext();
	void Restart();
	void AdvanceFrame(bool, float);
	bool OnEvent(const Scaleform::GFx::EventId &);
	void OnEventLoad();
	bool OnUnloading();
protected:
	void OnEventUnload();
public:
	void EnsureGeomDataCreated();
	void OnUnload();
	Scaleform::Log * GetLog();
	bool IsVerboseAction();
	virtual bool IsVerboseActionErrors();
	bool IsInteractiveObject();
	const Scaleform::GFx::InteractiveObject * CharToInteractiveObject();
	Scaleform::GFx::InteractiveObject * CharToInteractiveObject();
	const Scaleform::GFx::InteractiveObject * CharToInteractiveObject_Unsafe();
	Scaleform::GFx::InteractiveObject * CharToInteractiveObject_Unsafe();
	bool IsScriptableObject();
	const Scaleform::GFx::DisplayObject * CharToScriptableObject();
	Scaleform::GFx::DisplayObject * CharToScriptableObject();
	const Scaleform::GFx::DisplayObject * CharToScriptableObject_Unsafe();
	Scaleform::GFx::DisplayObject * CharToScriptableObject_Unsafe();
	bool IsDisplayObjContainer();
	const Scaleform::GFx::DisplayObjContainer * CharToDisplayObjContainer();
	Scaleform::GFx::DisplayObjContainer * CharToDisplayObjContainer();
	const Scaleform::GFx::DisplayObjContainer * CharToDisplayObjContainer_Unsafe();
	Scaleform::GFx::DisplayObjContainer * CharToDisplayObjContainer_Unsafe();
	bool IsSprite();
	const Scaleform::GFx::Sprite * CharToSprite();
	Scaleform::GFx::Sprite * CharToSprite();
	const Scaleform::GFx::Sprite * CharToSprite_Unsafe();
	Scaleform::GFx::Sprite * CharToSprite_Unsafe();
	void SetMovieClipFlag();
	bool IsMovieClip();
	bool IsUsedAsMask();
	enum StateChangedFlags
	{
		StateChanged_FontLib = 1,
		StateChanged_FontMap = 2,
		StateChanged_FontProvider = 4,
		StateChanged_Translator = 8,
	};
	void SetStateChangeFlags(unsigned char);
	unsigned char GetStateChangeFlags();
	const Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType * GetIndirectTransformData();
	bool HasIndirectTransform();
	bool IsMarkedForRemove();
	bool CanAdvanceChar();
	void MarkForRemove(bool);
	void ClearMarkForRemove();
	Scaleform::GFx::DisplayObjectBase::GeomDataType & GetGeomData(Scaleform::GFx::DisplayObjectBase::GeomDataType &);
	void SetGeomData(const Scaleform::GFx::DisplayObjectBase::GeomDataType &);
	Scaleform::GFx::DisplayObjectBase::GeomDataType * GetGeomDataPtr();
	const Scaleform::GFx::DisplayObjectBase::PerspectiveDataType * GetPerspectiveDataPtr();
	Scaleform::GFx::CharacterDef::CharacterDefType GetType();
	Scaleform::GFx::InteractiveObject * GetTopMostMouseEntityDef(Scaleform::GFx::CharacterDef *, const Scaleform::Render::Point<float> &, bool, const Scaleform::GFx::InteractiveObject *);
	Scaleform::GFx::MovieImpl * GetMovieImpl();
	Scaleform::GFx::ASMovieRootBase * GetASMovieRoot();
	long GetAVMVersion();
	bool IsAVM1();
	bool IsAVM2();
	void SetDirtyFlag();
	void SetRendererString(const char *);
	const char * GetRendererString();
	void SetRendererFloat(float);
	float GetRendererFloat();
	void DisableBatching(bool);
	bool IsBatchingDisabled();
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
	static void * operator new(unsigned long long, void *);
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
	static void operator delete(void *, void *);
protected:
	Scaleform::GFx::ASMovieRootBase * pASRoot; // 0x20
	Scaleform::GFx::ResourceId Id; // 0x28
	long Depth; // 0x2C
	unsigned long CreateFrame; // 0x30
	Scaleform::GFx::InteractiveObject * pParent; // 0x38
	Scaleform::GFx::DisplayObjectBase * pParentChar; // 0x38
	float LastHitTestX; // 0x40
	float LastHitTestY; // 0x44
	Scaleform::Ptr<Scaleform::Render::TreeNode> pRenNode; // 0x48
	Scaleform::GFx::DisplayObjectBase::GeomDataType * pGeomData; // 0x50
	Scaleform::GFx::DisplayObjectBase::PerspectiveDataType * pPerspectiveData; // 0x58
	Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType * pIndXFormData; // 0x60
	unsigned short ClipDepth; // 0x68
	unsigned short Flags; // 0x6A
	unsigned char BlendMode; // 0x6C
	unsigned char AvmObjOffset; // 0x6D
public:
	Scaleform::GFx::DisplayObjectBase & operator=(const Scaleform::GFx::DisplayObjectBase &);
};
class Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 322,
	};
public:
	RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>(Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322> &);
	RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>(const Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322> &);
	RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>();
	virtual ~RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>();
	Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322> & operator=(Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322> &);
	Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322> & operator=(const Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322> &);
};
class Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>
{
public:
	~LogBase<Scaleform::GFx::DisplayObjectBase>();
protected:
	bool P_IsVerboseParse();
	bool P_IsVerboseParseShape();
	bool P_IsVerboseParseMorphShape();
	bool P_IsVerboseParseAction();
	bool P_IsVerboseAction();
	bool P_IsVerboseActionErrors();
	bool IsVerboseActionErrors();
public:
	bool IsLogNotNull();
	void LogError(const char *, ...);
	void LogWarning(const char *, ...);
	void LogMessage(const char *, ...);
	void LogParse(const char *, ...);
	void LogParseShape(const char *, ...);
	void LogParseMorphShape(const char *, ...);
	void LogParseAction(const char *, ...);
	void LogAction(const char *, ...);
	void LogScriptError(const char *, ...);
	void LogScriptWarning(const char *, ...);
	void LogScriptMessage(const char *, ...);
	LogBase<Scaleform::GFx::DisplayObjectBase>(const Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase> &);
	LogBase<Scaleform::GFx::DisplayObjectBase>();
	Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase> & operator=(const Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase> &);
};
struct Scaleform::GFx::DisplayObjectBase::GeomDataType :
	Scaleform::NewOverrideBase<322>
{
	long X; // 0x0
	long Y; // 0x4
	double XScale; // 0x8
	double YScale; // 0x10
	double Rotation; // 0x18
	Scaleform::Render::Matrix2x4<float> OrigMatrix; // 0x20
	double Z; // 0x40
	double ZScale; // 0x48
	double XRotation; // 0x50
	double YRotation; // 0x58
	GeomDataType(Scaleform::GFx::DisplayObjectBase::GeomDataType &);
	GeomDataType(const Scaleform::GFx::DisplayObjectBase::GeomDataType &);
	GeomDataType();
	Scaleform::GFx::DisplayObjectBase::GeomDataType & operator=(Scaleform::GFx::DisplayObjectBase::GeomDataType &);
	Scaleform::GFx::DisplayObjectBase::GeomDataType & operator=(const Scaleform::GFx::DisplayObjectBase::GeomDataType &);
};
class Scaleform::NewOverrideBase<322>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 322,
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
struct Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType :
	Scaleform::NewOverrideBase<322>
{
	Scaleform::Render::Matrix3x4<float> OrigTransformMatrix; // 0x0
	bool IsOrig3D; // 0x30
	IndirectTransformDataType(Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType &);
	IndirectTransformDataType(const Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType &);
	IndirectTransformDataType();
	Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType & operator=(Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType &);
	Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType & operator=(const Scaleform::GFx::DisplayObjectBase::IndirectTransformDataType &);
};
struct Scaleform::GFx::DisplayObjectBase::PerspectiveDataType :
	Scaleform::NewOverrideBase<322>
{
	double FieldOfView; // 0x0
	double FocalLength; // 0x8
	Scaleform::Render::Point<float> ProjectionCenter; // 0x10
	Scaleform::Render::Matrix3x4<float> ViewMatrix3D; // 0x20
	PerspectiveDataType(Scaleform::GFx::DisplayObjectBase::PerspectiveDataType &);
	PerspectiveDataType(const Scaleform::GFx::DisplayObjectBase::PerspectiveDataType &);
	PerspectiveDataType();
	bool UpdateViewAndPerspectiveFromData();
	Scaleform::GFx::DisplayObjectBase::PerspectiveDataType & operator=(Scaleform::GFx::DisplayObjectBase::PerspectiveDataType &);
	Scaleform::GFx::DisplayObjectBase::PerspectiveDataType & operator=(const Scaleform::GFx::DisplayObjectBase::PerspectiveDataType &);
};
Scaleform::GFx::DisplayObjectBase::PerspectiveDataType::PerspectiveDataType(); // 0x1403323A0
class Scaleform::Ptr<Scaleform::Render::TreeNode>
{
protected:
	Scaleform::Render::TreeNode * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TreeNode>(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	Ptr<Scaleform::Render::TreeNode>(Scaleform::Render::TreeNode *);
	Ptr<Scaleform::Render::TreeNode>(Scaleform::Ptr<Scaleform::Render::TreeNode> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TreeNode>(Scaleform::Pickable<Scaleform::Render::TreeNode>);
	Ptr<Scaleform::Render::TreeNode>(Scaleform::Render::TreeNode &);
	Ptr<Scaleform::Render::TreeNode>();
	~Ptr<Scaleform::Render::TreeNode>();
	bool operator==(Scaleform::Render::TreeNode *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	bool operator!=(Scaleform::Render::TreeNode *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & operator=(Scaleform::Pickable<Scaleform::Render::TreeNode>);
	const Scaleform::Ptr<Scaleform::Render::TreeNode> & operator=(Scaleform::Render::TreeNode &);
	const Scaleform::Ptr<Scaleform::Render::TreeNode> & operator=(Scaleform::Render::TreeNode *);
	const Scaleform::Ptr<Scaleform::Render::TreeNode> & operator=(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & SetPtr(Scaleform::Pickable<Scaleform::Render::TreeNode>);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & SetPtr(Scaleform::Render::TreeNode &);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & SetPtr(Scaleform::Render::TreeNode *);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TreeNode> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TreeNode * & GetRawRef();
	Scaleform::Render::TreeNode * GetPtr();
	Scaleform::Render::TreeNode & operator*();
	Scaleform::Render::TreeNode * operator->();
	Scaleform::Render::TreeNode * operator class Scaleform::Render::TreeNode *();
	Scaleform::Ptr<Scaleform::Render::TreeNode> & Pick(Scaleform::Render::TreeNode *);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & Pick(Scaleform::Pickable<Scaleform::Render::TreeNode>);
	Scaleform::Ptr<Scaleform::Render::TreeNode> & Pick(Scaleform::Ptr<Scaleform::Render::TreeNode> &);
};
bool Scaleform::GFx::DisplayObjectBase::Has3D(); // 0x140335090
float Scaleform::GFx::DisplayObjectBase::GetRatio(); // 0x140271040
double Scaleform::GFx::DisplayObjectBase::GetMouseX(); // 0x140334160
bool Scaleform::GFx::DisplayObjectBase::GetAcceptAnimMoves(); // 0x1400B8180
void Scaleform::GFx::DisplayObjectBase::SetVisible(bool visible); // 0x140337FD0
bool Scaleform::GFx::DisplayObjectBase::GetVisible(); // 0x1403348B0
Scaleform::Render::Rect<float> Scaleform::GFx::DisplayObjectBase::GetBounds(const Scaleform::Render::Matrix2x4<float> & t); // 0x140047540
struct Scaleform::GFx::DisplayObjectBase::TopMostDescr
{
	Scaleform::GFx::InteractiveObject * pResult; // 0x0
	Scaleform::Render::Point<float> LocalPt; // 0x8
	const Scaleform::GFx::InteractiveObject * pIgnoreMC; // 0x10
	const Scaleform::GFx::DisplayObject * pHitArea; // 0x18
	unsigned long ControllerIdx; // 0x20
	bool TestAll; // 0x24
	TopMostDescr(Scaleform::GFx::DisplayObjectBase::TopMostDescr &);
	TopMostDescr(const Scaleform::GFx::DisplayObjectBase::TopMostDescr &);
	TopMostDescr();
	Scaleform::GFx::DisplayObjectBase::TopMostDescr & operator=(Scaleform::GFx::DisplayObjectBase::TopMostDescr &);
	Scaleform::GFx::DisplayObjectBase::TopMostDescr & operator=(const Scaleform::GFx::DisplayObjectBase::TopMostDescr &);
};
Scaleform::GFx::DisplayObjectBase::TopMostResult Scaleform::GFx::DisplayObjectBase::GetTopMostMouseEntity(const Scaleform::Render::Point<float> & pt, Scaleform::GFx::DisplayObjectBase::TopMostDescr * pdescr); // 0x140334640
Scaleform::GFx::MovieDefImpl * Scaleform::GFx::DisplayObjectBase::GetResourceMovieDef(); // 0x140334530
Scaleform::GFx::FontManager * Scaleform::GFx::DisplayObjectBase::GetFontManager(); // 0x140333A90
Scaleform::GFx::InteractiveObject * Scaleform::GFx::DisplayObjectBase::GetTopParent(bool ignoreLockRoot); // 0x140334790
Scaleform::GFx::DrawingContext * Scaleform::GFx::DisplayObject::GetDrawingContext(); // 0x1400470F0
bool Scaleform::GFx::DisplayObjectBase::GetContinueAnimationFlag(); // 0x14004BBE0
void Scaleform::GFx::DisplayObjectBase::OnEventLoad(); // 0x140335A00
void Scaleform::GFx::DisplayObjectBase::AdvanceFrame(bool nextFrame, float framePos); // 0x14002E7C0
Scaleform::GFx::CharacterDef::CharacterDefType Scaleform::GFx::DisplayObjectBase::GetType(); // 0x1400482A0
class Scaleform::GFx::CharacterHandle :
	Scaleform::NewOverrideBase<322>
{
private:
	long RefCount; // 0x0
	Scaleform::GFx::DisplayObject * pCharacter; // 0x8
	Scaleform::GFx::ASString Name; // 0x10
	Scaleform::GFx::ASString NamePath; // 0x18
	Scaleform::GFx::ASString OriginalName; // 0x20
	void ReleaseCharacter();
public:
	CharacterHandle(const Scaleform::GFx::CharacterHandle &);
	CharacterHandle(const Scaleform::GFx::ASString &, Scaleform::GFx::DisplayObject *, Scaleform::GFx::DisplayObject *);
	~CharacterHandle();
	const Scaleform::GFx::ASString & GetName();
	const Scaleform::GFx::ASString & GetNamePath();
	Scaleform::GFx::DisplayObject * GetCharacter();
	const Scaleform::GFx::ASString & GetOriginalName();
	void SetOriginalName(const Scaleform::GFx::ASString &);
	Scaleform::GFx::DisplayObject * ResolveCharacter(Scaleform::GFx::MovieImpl *);
	Scaleform::GFx::DisplayObject * ForceResolveCharacter(Scaleform::GFx::MovieImpl *);
	void AddRef();
	void Release(unsigned long);
	void ChangeName(const Scaleform::GFx::ASString &, Scaleform::GFx::DisplayObject *);
	void ResetName(Scaleform::GFx::ASStringManager *);
	Scaleform::GFx::CharacterHandle & operator=(const Scaleform::GFx::CharacterHandle &);
};
class Scaleform::GFx::DisplayObject :
	Scaleform::GFx::DisplayObjectBase
{
	struct DisplayContextStates;
protected:
	Scaleform::Ptr<Scaleform::GFx::CharacterHandle> pNameHandle; // 0x70
	Scaleform::GFx::DisplayObject * pMaskCharacter; // 0x78
	Scaleform::GFx::DisplayObject * pMaskOwner; // 0x78
	struct ScrollRectInfo;
	Scaleform::GFx::DisplayObject::ScrollRectInfo * pScrollRect; // 0x80
	enum FlagMasks
	{
		Mask_TimelineObject = 1,
		Mask_InstanceBasedName = 2,
		Mask_UsedAsMask = 4,
		Mask_AcceptAnimMoves = 8,
		Mask_ContinueAnimation = 16,
		Mask_ExecutionAborted = 32,
	};
private:
	unsigned short DOFlags; // 0x88
protected:
	Scaleform::GFx::ASString CreateNewInstanceName();
	Scaleform::GFx::CharacterHandle * CreateCharacterHandle();
	void ResetClipDepth();
public:
	DisplayObject(const Scaleform::GFx::DisplayObject &);
	DisplayObject(Scaleform::GFx::ASMovieRootBase *, Scaleform::GFx::InteractiveObject *, Scaleform::GFx::ResourceId);
	virtual ~DisplayObject();
	Scaleform::GFx::DrawingContext * GetDrawingContext();
	virtual const Scaleform::Render::Matrix2x4<float> & GetMatrix();
	virtual void SetMatrix(const Scaleform::Render::Matrix2x4<float> &);
	virtual const Scaleform::Render::Matrix3x4<float> & GetMatrix3D();
	virtual void SetMatrix3D(const Scaleform::Render::Matrix3x4<float> &);
	void GetWorldMatrixWithScroll(Scaleform::Render::Matrix2x4<float> *);
	const char * GetAbsolutePath(Scaleform::String *);
	void SetAcceptAnimMovesFlag(bool);
	void ClearAcceptAnimMovesFlag();
	bool IsAcceptAnimMovesFlagSet();
	void SetContinueAnimationFlag(bool);
	void ClearContinueAnimationFlag();
	bool IsContinueAnimationFlagSet();
	virtual bool GetContinueAnimationFlag();
	void SetInstanceBasedNameFlag(bool);
	void ClearInstanceBasedNameFlag();
	bool IsInstanceBasedNameFlagSet();
	void SetUsedAsMask(bool);
	void ClearUsedAsMask();
	virtual bool IsUsedAsMask();
	void SetExecutionAborted();
	bool IsExecutionAborted();
	Scaleform::GFx::MovieImpl * GetMovieImpl();
	Scaleform::GFx::ASMovieRootBase * GetASMovieRoot();
	long GetAVMVersion();
	bool IsAVM1();
	bool IsAVM2();
	Scaleform::GFx::CharacterHandle * GetCharacterHandle();
	bool HasEventHandler(const Scaleform::GFx::EventId &);
	virtual void OnEventLoad();
	virtual void OnEventUnload();
	virtual bool OnEvent(const Scaleform::GFx::EventId &);
	Scaleform::GFx::DisplayObject * GetMask();
	Scaleform::GFx::DisplayObject * GetMaskOwner();
	void SetMask(Scaleform::GFx::DisplayObject *, bool);
	void SetMaskOwner(Scaleform::GFx::DisplayObject *);
	void SetScrollRect(const Scaleform::Render::Rect<double> *);
	const Scaleform::Render::Rect<double> * GetScrollRect();
	const Scaleform::GFx::DisplayObject::ScrollRectInfo * GetScrollRectInfo();
	bool HasScrollRect();
	virtual double GetMouseX();
	virtual double GetMouseY();
	void SetName(const Scaleform::GFx::ASString &);
	void SetOriginalName(const Scaleform::GFx::ASString &);
	Scaleform::GFx::ASString GetName();
	Scaleform::GFx::ASString GetOriginalName();
	bool HasInstanceBasedName();
	virtual bool GetAcceptAnimMoves();
	virtual void SetAcceptAnimMoves(bool);
	void SetTimelineObjectFlag(bool);
	bool IsTimelineObjectFlagSet();
	void DoDisplayCallback();
	bool TransformPointToLocalAndCheckBounds(Scaleform::Render::Point<float> *, const Scaleform::Render::Point<float> &, bool, const Scaleform::Render::Matrix2x4<float> *);
	Scaleform::GFx::DisplayObject & operator=(const Scaleform::GFx::DisplayObject &);
};
struct Scaleform::GFx::DisplayObject::DisplayContextStates
{
	Scaleform::Render::Matrix2x4<float> * pParentMatrix; // 0x0
	Scaleform::Render::Cxform * pParentCxform; // 0x8
	Scaleform::GFx::ResourceBinding * pResourceBinding; // 0x10
	Scaleform::Render::Matrix2x4<float> CurMatrix; // 0x20
	Scaleform::Render::Cxform CurCxform; // 0x40
	bool Masked; // 0x60
	DisplayContextStates(Scaleform::GFx::DisplayObject::DisplayContextStates &);
	DisplayContextStates(const Scaleform::GFx::DisplayObject::DisplayContextStates &);
	DisplayContextStates();
	Scaleform::GFx::DisplayObject::DisplayContextStates & operator=(Scaleform::GFx::DisplayObject::DisplayContextStates &);
	Scaleform::GFx::DisplayObject::DisplayContextStates & operator=(const Scaleform::GFx::DisplayObject::DisplayContextStates &);
};
class Scaleform::Ptr<Scaleform::GFx::CharacterHandle>
{
protected:
	Scaleform::GFx::CharacterHandle * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::CharacterHandle>(const Scaleform::Ptr<Scaleform::GFx::CharacterHandle> &);
	Ptr<Scaleform::GFx::CharacterHandle>(Scaleform::GFx::CharacterHandle *);
	Ptr<Scaleform::GFx::CharacterHandle>(Scaleform::Ptr<Scaleform::GFx::CharacterHandle> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::CharacterHandle>(Scaleform::Pickable<Scaleform::GFx::CharacterHandle>);
	Ptr<Scaleform::GFx::CharacterHandle>(Scaleform::GFx::CharacterHandle &);
	Ptr<Scaleform::GFx::CharacterHandle>();
	~Ptr<Scaleform::GFx::CharacterHandle>();
	bool operator==(Scaleform::GFx::CharacterHandle *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::CharacterHandle> &);
	bool operator!=(Scaleform::GFx::CharacterHandle *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::CharacterHandle> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::CharacterHandle> &);
	Scaleform::Ptr<Scaleform::GFx::CharacterHandle> & operator=(Scaleform::Pickable<Scaleform::GFx::CharacterHandle>);
	const Scaleform::Ptr<Scaleform::GFx::CharacterHandle> & operator=(Scaleform::GFx::CharacterHandle &);
	const Scaleform::Ptr<Scaleform::GFx::CharacterHandle> & operator=(Scaleform::GFx::CharacterHandle *);
	const Scaleform::Ptr<Scaleform::GFx::CharacterHandle> & operator=(const Scaleform::Ptr<Scaleform::GFx::CharacterHandle> &);
	Scaleform::Ptr<Scaleform::GFx::CharacterHandle> & SetPtr(Scaleform::Pickable<Scaleform::GFx::CharacterHandle>);
	Scaleform::Ptr<Scaleform::GFx::CharacterHandle> & SetPtr(Scaleform::GFx::CharacterHandle &);
	Scaleform::Ptr<Scaleform::GFx::CharacterHandle> & SetPtr(Scaleform::GFx::CharacterHandle *);
	Scaleform::Ptr<Scaleform::GFx::CharacterHandle> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::CharacterHandle> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::CharacterHandle * & GetRawRef();
	Scaleform::GFx::CharacterHandle * GetPtr();
	Scaleform::GFx::CharacterHandle & operator*();
	Scaleform::GFx::CharacterHandle * operator->();
	Scaleform::GFx::CharacterHandle * operator class Scaleform::GFx::CharacterHandle *();
	Scaleform::Ptr<Scaleform::GFx::CharacterHandle> & Pick(Scaleform::GFx::CharacterHandle *);
	Scaleform::Ptr<Scaleform::GFx::CharacterHandle> & Pick(Scaleform::Pickable<Scaleform::GFx::CharacterHandle>);
	Scaleform::Ptr<Scaleform::GFx::CharacterHandle> & Pick(Scaleform::Ptr<Scaleform::GFx::CharacterHandle> &);
};
struct Scaleform::GFx::DisplayObject::ScrollRectInfo :
	Scaleform::NewOverrideBase<322>
{
	Scaleform::Render::Rect<double> Rectangle; // 0x0
	Scaleform::Ptr<Scaleform::GFx::DrawingContext> Mask; // 0x20
	Scaleform::Render::Matrix3x4<float> OrigTransformMatrix; // 0x30
	bool IsOrig3D; // 0x60
	ScrollRectInfo(Scaleform::GFx::DisplayObject::ScrollRectInfo &);
	ScrollRectInfo(const Scaleform::GFx::DisplayObject::ScrollRectInfo &);
	ScrollRectInfo();
	~ScrollRectInfo();
	Scaleform::GFx::DisplayObject::ScrollRectInfo & operator=(Scaleform::GFx::DisplayObject::ScrollRectInfo &);
	Scaleform::GFx::DisplayObject::ScrollRectInfo & operator=(const Scaleform::GFx::DisplayObject::ScrollRectInfo &);
};
class Scaleform::Ptr<Scaleform::GFx::DrawingContext>
{
protected:
	Scaleform::GFx::DrawingContext * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::DrawingContext>(const Scaleform::Ptr<Scaleform::GFx::DrawingContext> &);
	Ptr<Scaleform::GFx::DrawingContext>(Scaleform::GFx::DrawingContext *);
	Ptr<Scaleform::GFx::DrawingContext>(Scaleform::Ptr<Scaleform::GFx::DrawingContext> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::DrawingContext>(Scaleform::Pickable<Scaleform::GFx::DrawingContext>);
	Ptr<Scaleform::GFx::DrawingContext>(Scaleform::GFx::DrawingContext &);
	Ptr<Scaleform::GFx::DrawingContext>();
	~Ptr<Scaleform::GFx::DrawingContext>();
	bool operator==(Scaleform::GFx::DrawingContext *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::DrawingContext> &);
	bool operator!=(Scaleform::GFx::DrawingContext *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::DrawingContext> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::DrawingContext> &);
	Scaleform::Ptr<Scaleform::GFx::DrawingContext> & operator=(Scaleform::Pickable<Scaleform::GFx::DrawingContext>);
	const Scaleform::Ptr<Scaleform::GFx::DrawingContext> & operator=(Scaleform::GFx::DrawingContext &);
	const Scaleform::Ptr<Scaleform::GFx::DrawingContext> & operator=(Scaleform::GFx::DrawingContext *);
	const Scaleform::Ptr<Scaleform::GFx::DrawingContext> & operator=(const Scaleform::Ptr<Scaleform::GFx::DrawingContext> &);
	Scaleform::Ptr<Scaleform::GFx::DrawingContext> & SetPtr(Scaleform::Pickable<Scaleform::GFx::DrawingContext>);
	Scaleform::Ptr<Scaleform::GFx::DrawingContext> & SetPtr(Scaleform::GFx::DrawingContext &);
	Scaleform::Ptr<Scaleform::GFx::DrawingContext> & SetPtr(Scaleform::GFx::DrawingContext *);
	Scaleform::Ptr<Scaleform::GFx::DrawingContext> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::DrawingContext> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::DrawingContext * & GetRawRef();
	Scaleform::GFx::DrawingContext * GetPtr();
	Scaleform::GFx::DrawingContext & operator*();
	Scaleform::GFx::DrawingContext * operator->();
	Scaleform::GFx::DrawingContext * operator class Scaleform::GFx::DrawingContext *();
	Scaleform::Ptr<Scaleform::GFx::DrawingContext> & Pick(Scaleform::GFx::DrawingContext *);
	Scaleform::Ptr<Scaleform::GFx::DrawingContext> & Pick(Scaleform::Pickable<Scaleform::GFx::DrawingContext>);
	Scaleform::Ptr<Scaleform::GFx::DrawingContext> & Pick(Scaleform::Ptr<Scaleform::GFx::DrawingContext> &);
};
bool Scaleform::GFx::DisplayObject::GetContinueAnimationFlag(); // 0x1403339A0
bool Scaleform::GFx::DisplayObject::IsUsedAsMask(); // 0x140335230
bool Scaleform::GFx::DisplayObject::GetAcceptAnimMoves(); // 0x140333540