#pragma once

enum Scaleform::Render::StereoDisplay
{
	StereoCenter = 0,
	StereoLeft = 1,
	StereoRight = 2,
};
struct Scaleform::Render::StereoParams
{
	float DisplayWidthCm; // 0x0
	float Distortion; // 0x4
	float DisplayDiagInches; // 0x8
	float DisplayAspectRatio; // 0xC
	float EyeSeparationCm; // 0x10
	StereoParams();
};
class Scaleform::Render::StereoImplBase :
	Scaleform::RefCountBase<Scaleform::Render::StereoImplBase,2>
{
protected:
	Scaleform::Render::StereoParams S3DParams; // 0x10
public:
	void SetParams(const Scaleform::Render::StereoParams &);
	const Scaleform::Render::StereoParams & GetParams();
	void GetStereoProj(const Scaleform::Render::Matrix4x4<float> &, float, Scaleform::Render::Matrix4x4<float> *, Scaleform::Render::Matrix4x4<float> *, float);
	StereoImplBase(Scaleform::Render::StereoImplBase &);
	StereoImplBase(const Scaleform::Render::StereoImplBase &);
	StereoImplBase();
	virtual ~StereoImplBase();
	Scaleform::Render::StereoImplBase & operator=(Scaleform::Render::StereoImplBase &);
	Scaleform::Render::StereoImplBase & operator=(const Scaleform::Render::StereoImplBase &);
};
class Scaleform::RefCountBase<Scaleform::Render::StereoImplBase,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Render::StereoImplBase,2>(Scaleform::RefCountBase<Scaleform::Render::StereoImplBase,2> &);
	RefCountBase<Scaleform::Render::StereoImplBase,2>(const Scaleform::RefCountBase<Scaleform::Render::StereoImplBase,2> &);
	RefCountBase<Scaleform::Render::StereoImplBase,2>();
	virtual ~RefCountBase<Scaleform::Render::StereoImplBase,2>();
	Scaleform::RefCountBase<Scaleform::Render::StereoImplBase,2> & operator=(Scaleform::RefCountBase<Scaleform::Render::StereoImplBase,2> &);
	Scaleform::RefCountBase<Scaleform::Render::StereoImplBase,2> & operator=(const Scaleform::RefCountBase<Scaleform::Render::StereoImplBase,2> &);
};
class Scaleform::RefCountBase<Scaleform::Render::MatrixState,65> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 65,
	};
public:
	RefCountBase<Scaleform::Render::MatrixState,65>(Scaleform::RefCountBase<Scaleform::Render::MatrixState,65> &);
	RefCountBase<Scaleform::Render::MatrixState,65>(const Scaleform::RefCountBase<Scaleform::Render::MatrixState,65> &);
	RefCountBase<Scaleform::Render::MatrixState,65>();
	virtual ~RefCountBase<Scaleform::Render::MatrixState,65>();
	Scaleform::RefCountBase<Scaleform::Render::MatrixState,65> & operator=(Scaleform::RefCountBase<Scaleform::Render::MatrixState,65> &);
	Scaleform::RefCountBase<Scaleform::Render::MatrixState,65> & operator=(const Scaleform::RefCountBase<Scaleform::Render::MatrixState,65> &);
};
class Scaleform::Render::MatrixState :
	Scaleform::RefCountBase<Scaleform::Render::MatrixState,65>
{
public:
	Scaleform::Render::Matrix2x4<float> View2D; // 0x10
	Scaleform::Render::Matrix3x4<float> View3D; // 0x30
	Scaleform::Render::Matrix4x4<float> Proj3D; // 0x60
	Scaleform::Render::Matrix4x4<float> Proj3DLeft; // 0xA0
	Scaleform::Render::Matrix4x4<float> Proj3DRight; // 0xE0
	Scaleform::Render::Matrix2x4<float> User; // 0x120
	Scaleform::Render::Matrix2x4<float> User3D; // 0x140
	Scaleform::Render::Matrix2x4<float> Orient2D; // 0x160
	Scaleform::Render::Matrix4x4<float> Orient3D; // 0x180
	Scaleform::Render::Rect<int> ViewRectOriginal; // 0x1C0
	Scaleform::Render::Rect<int> ViewRect; // 0x1D0
	Scaleform::Render::Matrix2x4<float> UserView; // 0x1E0
	Scaleform::Render::Matrix4x4<float> UVPO; // 0x200
	Scaleform::Render::Matrix4x4<float> ViewRectCompensated3D; // 0x240
	bool UVPOChanged; // 0x280
	bool OrientationSet; // 0x281
	Scaleform::Render::StereoDisplay S3DDisplay; // 0x284
	Scaleform::Ptr<Scaleform::Render::StereoImplBase> S3DImpl; // 0x288
	Scaleform::Render::HAL * pHAL; // 0x290
	MatrixState(Scaleform::Render::MatrixState &);
	MatrixState(const Scaleform::Render::MatrixState &);
	MatrixState();
	MatrixState(Scaleform::Render::HAL *);
	const Scaleform::Render::Matrix4x4<float> & GetUVP(const Scaleform::Render::Rect<int> &);
	const Scaleform::Render::Matrix4x4<float> & GetUVP();
	Scaleform::Render::Matrix2x4<float> & GetFullViewportMatrix(const Scaleform::Render::Size<int> &);
	void SetUserMatrix(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	void SetUserMatrix(const Scaleform::Render::Matrix2x4<float> &);
	void SetViewportMatrix(const Scaleform::Render::Matrix2x4<float> &);
	Scaleform::Render::Viewport SetOrientation(const Scaleform::Render::Viewport &);
	void CopyFrom(Scaleform::Render::MatrixState *);
	void CopyTo(Scaleform::Render::MatrixState *);
	void Copy(Scaleform::Render::MatrixState *, Scaleform::Render::MatrixState *);
protected:
	void recalculateUVPOC();
	const Scaleform::Render::Matrix4x4<float> & updateStereoProjection(float);
	Scaleform::Render::Matrix2x4<float> FullViewportMVP; // 0x2A0
public:
	virtual ~MatrixState();
	Scaleform::Render::MatrixState & operator=(Scaleform::Render::MatrixState &);
	Scaleform::Render::MatrixState & operator=(const Scaleform::Render::MatrixState &);
};
class Scaleform::Ptr<Scaleform::Render::StereoImplBase>
{
protected:
	Scaleform::Render::StereoImplBase * pObject; // 0x0
public:
	Ptr<Scaleform::Render::StereoImplBase>(const Scaleform::Ptr<Scaleform::Render::StereoImplBase> &);
	Ptr<Scaleform::Render::StereoImplBase>(Scaleform::Render::StereoImplBase *);
	Ptr<Scaleform::Render::StereoImplBase>(Scaleform::Ptr<Scaleform::Render::StereoImplBase> &, Scaleform::PickType);
	Ptr<Scaleform::Render::StereoImplBase>(Scaleform::Pickable<Scaleform::Render::StereoImplBase>);
	Ptr<Scaleform::Render::StereoImplBase>(Scaleform::Render::StereoImplBase &);
	Ptr<Scaleform::Render::StereoImplBase>();
	~Ptr<Scaleform::Render::StereoImplBase>();
	bool operator==(Scaleform::Render::StereoImplBase *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::StereoImplBase> &);
	bool operator!=(Scaleform::Render::StereoImplBase *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::StereoImplBase> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::StereoImplBase> &);
	Scaleform::Ptr<Scaleform::Render::StereoImplBase> & operator=(Scaleform::Pickable<Scaleform::Render::StereoImplBase>);
	const Scaleform::Ptr<Scaleform::Render::StereoImplBase> & operator=(Scaleform::Render::StereoImplBase &);
	const Scaleform::Ptr<Scaleform::Render::StereoImplBase> & operator=(Scaleform::Render::StereoImplBase *);
	const Scaleform::Ptr<Scaleform::Render::StereoImplBase> & operator=(const Scaleform::Ptr<Scaleform::Render::StereoImplBase> &);
	Scaleform::Ptr<Scaleform::Render::StereoImplBase> & SetPtr(Scaleform::Pickable<Scaleform::Render::StereoImplBase>);
	Scaleform::Ptr<Scaleform::Render::StereoImplBase> & SetPtr(Scaleform::Render::StereoImplBase &);
	Scaleform::Ptr<Scaleform::Render::StereoImplBase> & SetPtr(Scaleform::Render::StereoImplBase *);
	Scaleform::Ptr<Scaleform::Render::StereoImplBase> & SetPtr(const Scaleform::Ptr<Scaleform::Render::StereoImplBase> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::StereoImplBase * & GetRawRef();
	Scaleform::Render::StereoImplBase * GetPtr();
	Scaleform::Render::StereoImplBase & operator*();
	Scaleform::Render::StereoImplBase * operator->();
	Scaleform::Render::StereoImplBase * operator class Scaleform::Render::StereoImplBase *();
	Scaleform::Ptr<Scaleform::Render::StereoImplBase> & Pick(Scaleform::Render::StereoImplBase *);
	Scaleform::Ptr<Scaleform::Render::StereoImplBase> & Pick(Scaleform::Pickable<Scaleform::Render::StereoImplBase>);
	Scaleform::Ptr<Scaleform::Render::StereoImplBase> & Pick(Scaleform::Ptr<Scaleform::Render::StereoImplBase> &);
};
class Scaleform::NewOverrideBase<67>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 67,
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
class Scaleform::Render::MatrixStateFactory :
	Scaleform::NewOverrideBase<67>
{
public:
	MatrixStateFactory(const Scaleform::Render::MatrixStateFactory &);
	MatrixStateFactory(Scaleform::MemoryHeap *);
	~MatrixStateFactory();
	Scaleform::Render::MatrixState * CreateMatrixState();
protected:
	Scaleform::MemoryHeap * pHeap; // 0x8
public:
	Scaleform::Render::MatrixStateFactory & operator=(const Scaleform::Render::MatrixStateFactory &);
	void __dflt_ctor_closure();
};