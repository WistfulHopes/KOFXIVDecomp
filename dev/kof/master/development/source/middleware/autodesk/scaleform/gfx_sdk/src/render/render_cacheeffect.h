#pragma once

class Scaleform::NewOverrideBase<71>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 71,
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
class Scaleform::Render::CacheEffect :
	Scaleform::NewOverrideBase<71>
{
protected:
	Scaleform::Render::CacheEffect * pNext; // 0x8
	unsigned long Length; // 0x10
public:
	CacheEffect(const Scaleform::Render::CacheEffect &);
	CacheEffect(Scaleform::Render::CacheEffect *);
	~CacheEffect();
	Scaleform::Render::StateType GetType();
	Scaleform::Render::TreeCacheNode * GetSourceNode();
	bool Update(Scaleform::Render::HAL *, const Scaleform::Render::State *);
	void ChainNext(Scaleform::Render::BundleEntryRange *, Scaleform::Render::BundleEntryRange *);
	void GetRange(Scaleform::Render::BundleEntryRange *);
	typedef Scaleform::Render::CacheEffect *(*CreateFunc)(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheNode *, const Scaleform::Render::State *, Scaleform::Render::CacheEffect *);
protected:
	void ChainNextDefault(Scaleform::Render::BundleEntryRange *, Scaleform::Render::BundleEntry &, Scaleform::Render::BundleEntry &);
public:
	Scaleform::Render::CacheEffect & operator=(const Scaleform::Render::CacheEffect &);
};
class Scaleform::Render::CacheEffectChain
{
private:
	Scaleform::Render::CacheEffect * pEffect; // 0x0
public:
	CacheEffectChain();
	~CacheEffectChain();
	bool IsEmpty();
	bool UpdateEffects(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheNode *, unsigned long);
	void UpdateBundleChain(Scaleform::Render::BundleEntryRange *, Scaleform::Render::BundleEntryRange *);
	bool GetRange(Scaleform::Render::BundleEntryRange *);
private:
	void updateBundleChain(Scaleform::Render::CacheEffect *, Scaleform::Render::BundleEntryRange *, Scaleform::Render::BundleEntryRange *);
};
enum Scaleform::Render::MaskEffectState
{
	MES_NoMask = 0,
	MES_Culled = 1,
	MES_Combinable = 2,
	MES_Entry_Count = 3,
};
class Scaleform::Render::MaskEffect :
	Scaleform::Render::CacheEffect
{
public:
	MaskEffect(Scaleform::Render::MaskEffect &);
	MaskEffect(const Scaleform::Render::MaskEffect &);
	MaskEffect(Scaleform::Render::TreeCacheNode *, const Scaleform::Render::MaskEffectState, const Scaleform::Render::MatrixPoolImpl::HMatrix &, Scaleform::Render::CacheEffect *);
	Scaleform::Render::BundleEntry StartEntry; // 0x18
	Scaleform::Render::BundleEntry EndEntry; // 0x58
	Scaleform::Render::BundleEntry PopEntry; // 0x98
	Scaleform::Render::MaskEffectState MES; // 0xD8
	Scaleform::Render::MatrixPoolImpl::HMatrix BoundsMatrix; // 0xE0
	Scaleform::Render::MatrixPoolImpl::HMatrix GetBoundsMatrix();
	Scaleform::Render::MaskEffectState GetEffectState();
	bool UpdateMatrix(const Scaleform::Render::MaskEffectState, const Scaleform::Render::Matrix2x4<float> &);
	virtual Scaleform::Render::StateType GetType();
	virtual Scaleform::Render::TreeCacheNode * GetSourceNode();
	virtual bool Update(Scaleform::Render::HAL *, const Scaleform::Render::State *);
	virtual void ChainNext(Scaleform::Render::BundleEntryRange *, Scaleform::Render::BundleEntryRange *);
	virtual void GetRange(Scaleform::Render::BundleEntryRange *);
	static Scaleform::Render::CacheEffect * Create(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheNode *, const Scaleform::Render::State *, Scaleform::Render::CacheEffect *);
	virtual ~MaskEffect();
	Scaleform::Render::MaskEffect & operator=(Scaleform::Render::MaskEffect &);
	Scaleform::Render::MaskEffect & operator=(const Scaleform::Render::MaskEffect &);
};
Scaleform::Render::StateType Scaleform::Render::MaskEffect::GetType(); // 0x14002DEF0
class Scaleform::Render::CacheableTargetEffect :
	Scaleform::Render::CacheEffect
{
public:
	CacheableTargetEffect(Scaleform::Render::CacheableTargetEffect &);
	CacheableTargetEffect(const Scaleform::Render::CacheableTargetEffect &);
	CacheableTargetEffect(const Scaleform::Render::MatrixPoolImpl::HMatrix &, Scaleform::Render::CacheEffect *);
	Scaleform::Render::MatrixPoolImpl::HMatrix GetBoundsMatrix();
	bool UpdateMatrix(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, bool);
	void UpdateCxform(const Scaleform::Render::Cxform &);
	Scaleform::Render::MatrixPoolImpl::HMatrix BoundsMatrix; // 0x18
protected:
	bool canCacheAcrossTransform(bool, bool, bool);
public:
	virtual ~CacheableTargetEffect();
	Scaleform::Render::CacheableTargetEffect & operator=(Scaleform::Render::CacheableTargetEffect &);
	Scaleform::Render::CacheableTargetEffect & operator=(const Scaleform::Render::CacheableTargetEffect &);
};
class Scaleform::Render::BlendModeEffect :
	Scaleform::Render::CacheableTargetEffect
{
public:
	BlendModeEffect(Scaleform::Render::BlendModeEffect &);
	BlendModeEffect(const Scaleform::Render::BlendModeEffect &);
	BlendModeEffect(Scaleform::Render::TreeCacheNode *, const Scaleform::Render::MatrixPoolImpl::HMatrix &, const Scaleform::Render::BlendState &, Scaleform::Render::CacheEffect *);
	Scaleform::Render::BundleEntry StartEntry; // 0x20
	Scaleform::Render::BundleEntry EndEntry; // 0x60
	virtual Scaleform::Render::StateType GetType();
	virtual bool Update(Scaleform::Render::HAL *, const Scaleform::Render::State *);
	virtual void ChainNext(Scaleform::Render::BundleEntryRange *, Scaleform::Render::BundleEntryRange *);
	virtual void GetRange(Scaleform::Render::BundleEntryRange *);
	virtual Scaleform::Render::TreeCacheNode * GetSourceNode();
	static Scaleform::Render::CacheEffect * Create(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheNode *, const Scaleform::Render::State *, Scaleform::Render::CacheEffect *);
protected:
	virtual bool canCacheAcrossTransform(bool, bool, bool);
public:
	virtual ~BlendModeEffect();
	Scaleform::Render::BlendModeEffect & operator=(Scaleform::Render::BlendModeEffect &);
	Scaleform::Render::BlendModeEffect & operator=(const Scaleform::Render::BlendModeEffect &);
};
Scaleform::Render::StateType Scaleform::Render::BlendModeEffect::GetType(); // 0x1400482A0
Scaleform::Render::TreeCacheNode * Scaleform::Render::BlendModeEffect::GetSourceNode(); // 0x140417890
bool Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(bool deltaTrans, bool deltaRot, bool deltaScale); // 0x1400B8180
class Scaleform::Render::FilterEffect :
	Scaleform::Render::CacheableTargetEffect
{
public:
	FilterEffect(Scaleform::Render::FilterEffect &);
	FilterEffect(const Scaleform::Render::FilterEffect &);
	FilterEffect(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheNode *, const Scaleform::Render::MatrixPoolImpl::HMatrix &, const Scaleform::Render::FilterState &, Scaleform::Render::CacheEffect *);
	bool Contributing; // 0x20
	Scaleform::Render::BundleEntry StartEntry; // 0x28
	Scaleform::Render::BundleEntry EndEntry; // 0x68
	virtual Scaleform::Render::StateType GetType();
	virtual bool Update(Scaleform::Render::HAL *, const Scaleform::Render::State *);
	virtual void ChainNext(Scaleform::Render::BundleEntryRange *, Scaleform::Render::BundleEntryRange *);
	virtual void GetRange(Scaleform::Render::BundleEntryRange *);
	virtual Scaleform::Render::TreeCacheNode * GetSourceNode();
	static Scaleform::Render::CacheEffect * Create(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheNode *, const Scaleform::Render::State *, Scaleform::Render::CacheEffect *);
protected:
	void updateGradientImages(Scaleform::Render::HAL *, const Scaleform::Render::FilterState &);
	virtual bool canCacheAcrossTransform(bool, bool, bool);
public:
	virtual ~FilterEffect();
	Scaleform::Render::FilterEffect & operator=(Scaleform::Render::FilterEffect &);
	Scaleform::Render::FilterEffect & operator=(const Scaleform::Render::FilterEffect &);
};
Scaleform::Render::StateType Scaleform::Render::FilterEffect::GetType(); // 0x1400BBAA0
Scaleform::Render::TreeCacheNode * Scaleform::Render::FilterEffect::GetSourceNode(); // 0x14012A870
class Scaleform::Render::ViewMatrix3DEffect :
	Scaleform::Render::CacheEffect
{
public:
	ViewMatrix3DEffect(Scaleform::Render::ViewMatrix3DEffect &);
	ViewMatrix3DEffect(const Scaleform::Render::ViewMatrix3DEffect &);
	ViewMatrix3DEffect(Scaleform::Render::TreeCacheNode *, const Scaleform::Render::ViewMatrix3DState &, Scaleform::Render::CacheEffect *);
	Scaleform::Render::BundleEntry StartEntry; // 0x18
	Scaleform::Render::BundleEntry EndEntry; // 0x58
	virtual Scaleform::Render::StateType GetType();
	virtual Scaleform::Render::TreeCacheNode * GetSourceNode();
	virtual bool Update(Scaleform::Render::HAL *, const Scaleform::Render::State *);
	virtual void ChainNext(Scaleform::Render::BundleEntryRange *, Scaleform::Render::BundleEntryRange *);
	virtual void GetRange(Scaleform::Render::BundleEntryRange *);
	static Scaleform::Render::CacheEffect * Create(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheNode *, const Scaleform::Render::State *, Scaleform::Render::CacheEffect *);
	virtual ~ViewMatrix3DEffect();
	Scaleform::Render::ViewMatrix3DEffect & operator=(Scaleform::Render::ViewMatrix3DEffect &);
	Scaleform::Render::ViewMatrix3DEffect & operator=(const Scaleform::Render::ViewMatrix3DEffect &);
};
Scaleform::Render::StateType Scaleform::Render::ViewMatrix3DEffect::GetType(); // 0x1403EF7A0
Scaleform::Render::TreeCacheNode * Scaleform::Render::MaskEffect::GetSourceNode(); // 0x14068F5F0
class Scaleform::Render::ProjectionMatrix3DEffect :
	Scaleform::Render::CacheEffect
{
public:
	ProjectionMatrix3DEffect(Scaleform::Render::ProjectionMatrix3DEffect &);
	ProjectionMatrix3DEffect(const Scaleform::Render::ProjectionMatrix3DEffect &);
	ProjectionMatrix3DEffect(Scaleform::Render::TreeCacheNode *, const Scaleform::Render::ProjectionMatrix3DState &, Scaleform::Render::CacheEffect *);
	Scaleform::Render::BundleEntry StartEntry; // 0x18
	Scaleform::Render::BundleEntry EndEntry; // 0x58
	virtual Scaleform::Render::StateType GetType();
	virtual Scaleform::Render::TreeCacheNode * GetSourceNode();
	virtual bool Update(Scaleform::Render::HAL *, const Scaleform::Render::State *);
	virtual void ChainNext(Scaleform::Render::BundleEntryRange *, Scaleform::Render::BundleEntryRange *);
	virtual void GetRange(Scaleform::Render::BundleEntryRange *);
	static Scaleform::Render::CacheEffect * Create(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheNode *, const Scaleform::Render::State *, Scaleform::Render::CacheEffect *);
	virtual ~ProjectionMatrix3DEffect();
	Scaleform::Render::ProjectionMatrix3DEffect & operator=(Scaleform::Render::ProjectionMatrix3DEffect &);
	Scaleform::Render::ProjectionMatrix3DEffect & operator=(const Scaleform::Render::ProjectionMatrix3DEffect &);
};
Scaleform::Render::StateType Scaleform::Render::ProjectionMatrix3DEffect::GetType(); // 0x1406F7470
class Scaleform::Render::UserDataEffect :
	Scaleform::Render::CacheEffect
{
public:
	UserDataEffect(Scaleform::Render::UserDataEffect &);
	UserDataEffect(const Scaleform::Render::UserDataEffect &);
	UserDataEffect(Scaleform::Render::TreeCacheNode *, const Scaleform::Render::UserDataState &, Scaleform::Render::CacheEffect *);
	virtual Scaleform::Render::StateType GetType();
	virtual Scaleform::Render::TreeCacheNode * GetSourceNode();
	virtual bool Update(Scaleform::Render::HAL *, const Scaleform::Render::State *);
	virtual void ChainNext(Scaleform::Render::BundleEntryRange *, Scaleform::Render::BundleEntryRange *);
	virtual void GetRange(Scaleform::Render::BundleEntryRange *);
	static Scaleform::Render::CacheEffect * Create(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheNode *, const Scaleform::Render::State *, Scaleform::Render::CacheEffect *);
protected:
	void rebuildBundles(const Scaleform::Render::UserDataState &);
	Scaleform::Render::BundleEntry StartEntry; // 0x18
	Scaleform::Render::BundleEntry EndEntry; // 0x58
public:
	virtual ~UserDataEffect();
	Scaleform::Render::UserDataEffect & operator=(Scaleform::Render::UserDataEffect &);
	Scaleform::Render::UserDataEffect & operator=(const Scaleform::Render::UserDataEffect &);
};
Scaleform::Render::StateType Scaleform::Render::UserDataEffect::GetType(); // 0x14032E300