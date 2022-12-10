#pragma once

struct _RTL_CRITICAL_SECTION
{
	_RTL_CRITICAL_SECTION_DEBUG * DebugInfo; // 0x0
	long LockCount; // 0x8
	long RecursionCount; // 0xC
	void * OwningThread; // 0x10
	void * LockSemaphore; // 0x18
	unsigned long long SpinCount; // 0x20
};
struct Scaleform::AtomicOpsRawBase
{
	struct FullSync;
	struct AcquireSync;
	struct ReleaseSync;
};
struct Scaleform::AtomicOpsRawBase::FullSync
{
	FullSync();
};
struct Scaleform::AtomicOpsRawBase::AcquireSync
{
	AcquireSync();
};
struct Scaleform::AtomicOpsRawBase::ReleaseSync
{
	ReleaseSync();
};
struct Scaleform::AtomicOpsRaw_4ByteImpl :
	Scaleform::AtomicOpsRawBase
{
	typedef long T;
	typedef volatile long InterlockTPtr;
	typedef long ET;
	typedef volatile long InterlockETPtr;
	static long Exchange_NoSync(volatile long *, long);
	static long ExchangeAdd_NoSync(volatile long *, long);
	static bool CompareAndSet_NoSync(volatile long *, long, long);
};
struct Scaleform::AtomicOpsRaw_8ByteImpl :
	Scaleform::AtomicOpsRawBase
{
	typedef long long T;
	typedef volatile long long InterlockTPtr;
	static long long Exchange_NoSync(volatile long long *, long long);
	static long long ExchangeAdd_NoSync(volatile long long *, long long);
	static bool CompareAndSet_NoSync(volatile long long *, long long, long long);
};
struct Scaleform::AtomicOpsRaw_DefImpl<Scaleform::AtomicOpsRaw_4ByteImpl> :
	Scaleform::AtomicOpsRaw_4ByteImpl
{
	typedef long O_T;
	struct O_FullSync;
	struct O_AcquireSync;
	struct O_ReleaseSync;
	static long Exchange_Sync(volatile long *, long);
	static long Exchange_Release(volatile long *, long);
	static long Exchange_Acquire(volatile long *, long);
	static long ExchangeAdd_Sync(volatile long *, long);
	static long ExchangeAdd_Release(volatile long *, long);
	static long ExchangeAdd_Acquire(volatile long *, long);
	static bool CompareAndSet_Sync(volatile long *, long, long);
	static bool CompareAndSet_Release(volatile long *, long, long);
	static bool CompareAndSet_Acquire(volatile long *, long, long);
	static void Store_Release(volatile long *, long);
	static long Load_Acquire(const long *);
};
struct Scaleform::AtomicOpsRaw<4> :
	Scaleform::AtomicOpsRaw_DefImpl<Scaleform::AtomicOpsRaw_4ByteImpl>
{
	AtomicOpsRaw<4>();
};
struct Scaleform::AtomicOpsRaw<8> :
	Scaleform::AtomicOpsRaw_DefImpl<Scaleform::AtomicOpsRaw_8ByteImpl>
{
	AtomicOpsRaw<8>();
};
struct Scaleform::AtomicOpsRaw_DefImpl<Scaleform::AtomicOpsRaw_8ByteImpl> :
	Scaleform::AtomicOpsRaw_8ByteImpl
{
	typedef long long O_T;
	struct O_FullSync;
	struct O_AcquireSync;
	struct O_ReleaseSync;
	static long long Exchange_Sync(volatile long long *, long long);
	static long long Exchange_Release(volatile long long *, long long);
	static long long Exchange_Acquire(volatile long long *, long long);
	static long long ExchangeAdd_Sync(volatile long long *, long long);
	static long long ExchangeAdd_Release(volatile long long *, long long);
	static long long ExchangeAdd_Acquire(volatile long long *, long long);
	static bool CompareAndSet_Sync(volatile long long *, long long, long long);
	static bool CompareAndSet_Release(volatile long long *, long long, long long);
	static bool CompareAndSet_Acquire(volatile long long *, long long, long long);
	static void Store_Release(volatile long long *, long long);
	static long long Load_Acquire(const long long *);
};
union Scaleform::AtomicOps<long>::C2T_union
{
public:
	long c; // 0x0
	long t; // 0x0
};
union Scaleform::AtomicOps<Scaleform::Render::Texture *>::C2T_union
{
public:
	Scaleform::Render::Texture * c; // 0x0
	long long t; // 0x0
};
union Scaleform::AtomicOps<int>::C2T_union
{
public:
	long c; // 0x0
	long t; // 0x0
};
union Scaleform::AtomicOps<unsigned long>::C2T_union
{
public:
	unsigned long c; // 0x0
	long t; // 0x0
};
union Scaleform::AtomicOps<Scaleform::GFx::ImportData *>::C2T_union
{
public:
	Scaleform::GFx::ImportData * c; // 0x0
	long long t; // 0x0
};
union Scaleform::AtomicOps<Scaleform::GFx::FontDataUseNode *>::C2T_union
{
public:
	Scaleform::GFx::FontDataUseNode * c; // 0x0
	long long t; // 0x0
};
union Scaleform::AtomicOps<Scaleform::GFx::FrameBindData *>::C2T_union
{
public:
	Scaleform::GFx::FrameBindData * c; // 0x0
	long long t; // 0x0
};
union Scaleform::AtomicOps<unsigned int>::C2T_union
{
public:
	unsigned long c; // 0x0
	long t; // 0x0
};
union Scaleform::AtomicOps<Scaleform::GFx::ResourceDataNode *>::C2T_union
{
public:
	Scaleform::GFx::ResourceDataNode * c; // 0x0
	long long t; // 0x0
};
union Scaleform::AtomicOps<Scaleform::Render::FontCacheHandleManager *>::C2T_union
{
public:
	Scaleform::Render::FontCacheHandleManager * c; // 0x0
	long long t; // 0x0
};
union Scaleform::AtomicOps<Scaleform::Render::MeshKeyManager *>::C2T_union
{
public:
	Scaleform::Render::MeshKeyManager * c; // 0x0
	long long t; // 0x0
};
class Scaleform::AtomicOps<Scaleform::Render::Texture *>
{
	struct Ops;
	typedef long long T;
	typedef volatile long long PT;
	union C2T_union;
public:
	static Scaleform::Render::Texture * Exchange_Sync(Scaleform::Render::Texture * *, Scaleform::Render::Texture *);
	static Scaleform::Render::Texture * Exchange_Release(Scaleform::Render::Texture * *, Scaleform::Render::Texture *);
	static Scaleform::Render::Texture * Exchange_Acquire(Scaleform::Render::Texture * *, Scaleform::Render::Texture *);
	static Scaleform::Render::Texture * Exchange_NoSync(Scaleform::Render::Texture * *, Scaleform::Render::Texture *);
	static Scaleform::Render::Texture * ExchangeAdd_Sync(Scaleform::Render::Texture * *, Scaleform::Render::Texture *);
	static Scaleform::Render::Texture * ExchangeAdd_Release(Scaleform::Render::Texture * *, Scaleform::Render::Texture *);
	static Scaleform::Render::Texture * ExchangeAdd_Acquire(Scaleform::Render::Texture * *, Scaleform::Render::Texture *);
	static Scaleform::Render::Texture * ExchangeAdd_NoSync(Scaleform::Render::Texture * *, Scaleform::Render::Texture *);
	static bool CompareAndSet_Sync(Scaleform::Render::Texture * *, Scaleform::Render::Texture *, Scaleform::Render::Texture *);
	static bool CompareAndSet_Release(Scaleform::Render::Texture * *, Scaleform::Render::Texture *, Scaleform::Render::Texture *);
	static bool CompareAndSet_Acquire(Scaleform::Render::Texture * *, Scaleform::Render::Texture *, Scaleform::Render::Texture *);
	static bool CompareAndSet_NoSync(Scaleform::Render::Texture * *, Scaleform::Render::Texture *, Scaleform::Render::Texture *);
	static void Store_Release(Scaleform::Render::Texture * *, Scaleform::Render::Texture *);
	static Scaleform::Render::Texture * Load_Acquire(Scaleform::Render::Texture * *);
};
class Scaleform::AtomicOps<int>
{
	struct Ops;
	typedef long T;
	typedef volatile long PT;
	union C2T_union;
public:
	static long Exchange_Sync(volatile long *, long);
	static long Exchange_Release(volatile long *, long);
	static long Exchange_Acquire(volatile long *, long);
	static long Exchange_NoSync(volatile long *, long);
	static long ExchangeAdd_Sync(volatile long *, long);
	static long ExchangeAdd_Release(volatile long *, long);
	static long ExchangeAdd_Acquire(volatile long *, long);
	static long ExchangeAdd_NoSync(volatile long *, long);
	static bool CompareAndSet_Sync(volatile long *, long, long);
	static bool CompareAndSet_Release(volatile long *, long, long);
	static bool CompareAndSet_Acquire(volatile long *, long, long);
	static bool CompareAndSet_NoSync(volatile long *, long, long);
	static void Store_Release(volatile long *, long);
	static long Load_Acquire(const long *);
};
class Scaleform::AtomicOps<unsigned long>
{
	struct Ops;
	typedef long T;
	typedef volatile long PT;
	union C2T_union;
public:
	static unsigned long Exchange_Sync(volatile unsigned long *, unsigned long);
	static unsigned long Exchange_Release(volatile unsigned long *, unsigned long);
	static unsigned long Exchange_Acquire(volatile unsigned long *, unsigned long);
	static unsigned long Exchange_NoSync(volatile unsigned long *, unsigned long);
	static unsigned long ExchangeAdd_Sync(volatile unsigned long *, unsigned long);
	static unsigned long ExchangeAdd_Release(volatile unsigned long *, unsigned long);
	static unsigned long ExchangeAdd_Acquire(volatile unsigned long *, unsigned long);
	static unsigned long ExchangeAdd_NoSync(volatile unsigned long *, unsigned long);
	static bool CompareAndSet_Sync(volatile unsigned long *, unsigned long, unsigned long);
	static bool CompareAndSet_Release(volatile unsigned long *, unsigned long, unsigned long);
	static bool CompareAndSet_Acquire(volatile unsigned long *, unsigned long, unsigned long);
	static bool CompareAndSet_NoSync(volatile unsigned long *, unsigned long, unsigned long);
	static void Store_Release(volatile unsigned long *, unsigned long);
	static unsigned long Load_Acquire(const unsigned long *);
};
class Scaleform::AtomicOps<Scaleform::GFx::ImportData *>
{
	struct Ops;
	typedef long long T;
	typedef volatile long long PT;
	union C2T_union;
public:
	static Scaleform::GFx::ImportData * Exchange_Sync(Scaleform::GFx::ImportData * *, Scaleform::GFx::ImportData *);
	static Scaleform::GFx::ImportData * Exchange_Release(Scaleform::GFx::ImportData * *, Scaleform::GFx::ImportData *);
	static Scaleform::GFx::ImportData * Exchange_Acquire(Scaleform::GFx::ImportData * *, Scaleform::GFx::ImportData *);
	static Scaleform::GFx::ImportData * Exchange_NoSync(Scaleform::GFx::ImportData * *, Scaleform::GFx::ImportData *);
	static Scaleform::GFx::ImportData * ExchangeAdd_Sync(Scaleform::GFx::ImportData * *, Scaleform::GFx::ImportData *);
	static Scaleform::GFx::ImportData * ExchangeAdd_Release(Scaleform::GFx::ImportData * *, Scaleform::GFx::ImportData *);
	static Scaleform::GFx::ImportData * ExchangeAdd_Acquire(Scaleform::GFx::ImportData * *, Scaleform::GFx::ImportData *);
	static Scaleform::GFx::ImportData * ExchangeAdd_NoSync(Scaleform::GFx::ImportData * *, Scaleform::GFx::ImportData *);
	static bool CompareAndSet_Sync(Scaleform::GFx::ImportData * *, Scaleform::GFx::ImportData *, Scaleform::GFx::ImportData *);
	static bool CompareAndSet_Release(Scaleform::GFx::ImportData * *, Scaleform::GFx::ImportData *, Scaleform::GFx::ImportData *);
	static bool CompareAndSet_Acquire(Scaleform::GFx::ImportData * *, Scaleform::GFx::ImportData *, Scaleform::GFx::ImportData *);
	static bool CompareAndSet_NoSync(Scaleform::GFx::ImportData * *, Scaleform::GFx::ImportData *, Scaleform::GFx::ImportData *);
	static void Store_Release(Scaleform::GFx::ImportData * *, Scaleform::GFx::ImportData *);
	static Scaleform::GFx::ImportData * Load_Acquire(Scaleform::GFx::ImportData * *);
};
class Scaleform::AtomicOps<Scaleform::GFx::FontDataUseNode *>
{
	struct Ops;
	typedef long long T;
	typedef volatile long long PT;
	union C2T_union;
public:
	static Scaleform::GFx::FontDataUseNode * Exchange_Sync(Scaleform::GFx::FontDataUseNode * *, Scaleform::GFx::FontDataUseNode *);
	static Scaleform::GFx::FontDataUseNode * Exchange_Release(Scaleform::GFx::FontDataUseNode * *, Scaleform::GFx::FontDataUseNode *);
	static Scaleform::GFx::FontDataUseNode * Exchange_Acquire(Scaleform::GFx::FontDataUseNode * *, Scaleform::GFx::FontDataUseNode *);
	static Scaleform::GFx::FontDataUseNode * Exchange_NoSync(Scaleform::GFx::FontDataUseNode * *, Scaleform::GFx::FontDataUseNode *);
	static Scaleform::GFx::FontDataUseNode * ExchangeAdd_Sync(Scaleform::GFx::FontDataUseNode * *, Scaleform::GFx::FontDataUseNode *);
	static Scaleform::GFx::FontDataUseNode * ExchangeAdd_Release(Scaleform::GFx::FontDataUseNode * *, Scaleform::GFx::FontDataUseNode *);
	static Scaleform::GFx::FontDataUseNode * ExchangeAdd_Acquire(Scaleform::GFx::FontDataUseNode * *, Scaleform::GFx::FontDataUseNode *);
	static Scaleform::GFx::FontDataUseNode * ExchangeAdd_NoSync(Scaleform::GFx::FontDataUseNode * *, Scaleform::GFx::FontDataUseNode *);
	static bool CompareAndSet_Sync(Scaleform::GFx::FontDataUseNode * *, Scaleform::GFx::FontDataUseNode *, Scaleform::GFx::FontDataUseNode *);
	static bool CompareAndSet_Release(Scaleform::GFx::FontDataUseNode * *, Scaleform::GFx::FontDataUseNode *, Scaleform::GFx::FontDataUseNode *);
	static bool CompareAndSet_Acquire(Scaleform::GFx::FontDataUseNode * *, Scaleform::GFx::FontDataUseNode *, Scaleform::GFx::FontDataUseNode *);
	static bool CompareAndSet_NoSync(Scaleform::GFx::FontDataUseNode * *, Scaleform::GFx::FontDataUseNode *, Scaleform::GFx::FontDataUseNode *);
	static void Store_Release(Scaleform::GFx::FontDataUseNode * *, Scaleform::GFx::FontDataUseNode *);
	static Scaleform::GFx::FontDataUseNode * Load_Acquire(Scaleform::GFx::FontDataUseNode * *);
};
class Scaleform::AtomicOps<Scaleform::GFx::FrameBindData *>
{
	struct Ops;
	typedef long long T;
	typedef volatile long long PT;
	union C2T_union;
public:
	static Scaleform::GFx::FrameBindData * Exchange_Sync(Scaleform::GFx::FrameBindData * *, Scaleform::GFx::FrameBindData *);
	static Scaleform::GFx::FrameBindData * Exchange_Release(Scaleform::GFx::FrameBindData * *, Scaleform::GFx::FrameBindData *);
	static Scaleform::GFx::FrameBindData * Exchange_Acquire(Scaleform::GFx::FrameBindData * *, Scaleform::GFx::FrameBindData *);
	static Scaleform::GFx::FrameBindData * Exchange_NoSync(Scaleform::GFx::FrameBindData * *, Scaleform::GFx::FrameBindData *);
	static Scaleform::GFx::FrameBindData * ExchangeAdd_Sync(Scaleform::GFx::FrameBindData * *, Scaleform::GFx::FrameBindData *);
	static Scaleform::GFx::FrameBindData * ExchangeAdd_Release(Scaleform::GFx::FrameBindData * *, Scaleform::GFx::FrameBindData *);
	static Scaleform::GFx::FrameBindData * ExchangeAdd_Acquire(Scaleform::GFx::FrameBindData * *, Scaleform::GFx::FrameBindData *);
	static Scaleform::GFx::FrameBindData * ExchangeAdd_NoSync(Scaleform::GFx::FrameBindData * *, Scaleform::GFx::FrameBindData *);
	static bool CompareAndSet_Sync(Scaleform::GFx::FrameBindData * *, Scaleform::GFx::FrameBindData *, Scaleform::GFx::FrameBindData *);
	static bool CompareAndSet_Release(Scaleform::GFx::FrameBindData * *, Scaleform::GFx::FrameBindData *, Scaleform::GFx::FrameBindData *);
	static bool CompareAndSet_Acquire(Scaleform::GFx::FrameBindData * *, Scaleform::GFx::FrameBindData *, Scaleform::GFx::FrameBindData *);
	static bool CompareAndSet_NoSync(Scaleform::GFx::FrameBindData * *, Scaleform::GFx::FrameBindData *, Scaleform::GFx::FrameBindData *);
	static void Store_Release(Scaleform::GFx::FrameBindData * *, Scaleform::GFx::FrameBindData *);
	static Scaleform::GFx::FrameBindData * Load_Acquire(Scaleform::GFx::FrameBindData * *);
};
class Scaleform::AtomicOps<long>
{
	struct Ops;
	typedef long T;
	typedef volatile long PT;
	union C2T_union;
public:
	static long Exchange_Sync(volatile long *, long);
	static long Exchange_Release(volatile long *, long);
	static long Exchange_Acquire(volatile long *, long);
	static long Exchange_NoSync(volatile long *, long);
	static long ExchangeAdd_Sync(volatile long *, long);
	static long ExchangeAdd_Release(volatile long *, long);
	static long ExchangeAdd_Acquire(volatile long *, long);
	static long ExchangeAdd_NoSync(volatile long *, long);
	static bool CompareAndSet_Sync(volatile long *, long, long);
	static bool CompareAndSet_Release(volatile long *, long, long);
	static bool CompareAndSet_Acquire(volatile long *, long, long);
	static bool CompareAndSet_NoSync(volatile long *, long, long);
	static void Store_Release(volatile long *, long);
	static long Load_Acquire(const long *);
};
class Scaleform::AtomicOps<Scaleform::GFx::ResourceDataNode *>
{
	struct Ops;
	typedef long long T;
	typedef volatile long long PT;
	union C2T_union;
public:
	static Scaleform::GFx::ResourceDataNode * Exchange_Sync(Scaleform::GFx::ResourceDataNode * *, Scaleform::GFx::ResourceDataNode *);
	static Scaleform::GFx::ResourceDataNode * Exchange_Release(Scaleform::GFx::ResourceDataNode * *, Scaleform::GFx::ResourceDataNode *);
	static Scaleform::GFx::ResourceDataNode * Exchange_Acquire(Scaleform::GFx::ResourceDataNode * *, Scaleform::GFx::ResourceDataNode *);
	static Scaleform::GFx::ResourceDataNode * Exchange_NoSync(Scaleform::GFx::ResourceDataNode * *, Scaleform::GFx::ResourceDataNode *);
	static Scaleform::GFx::ResourceDataNode * ExchangeAdd_Sync(Scaleform::GFx::ResourceDataNode * *, Scaleform::GFx::ResourceDataNode *);
	static Scaleform::GFx::ResourceDataNode * ExchangeAdd_Release(Scaleform::GFx::ResourceDataNode * *, Scaleform::GFx::ResourceDataNode *);
	static Scaleform::GFx::ResourceDataNode * ExchangeAdd_Acquire(Scaleform::GFx::ResourceDataNode * *, Scaleform::GFx::ResourceDataNode *);
	static Scaleform::GFx::ResourceDataNode * ExchangeAdd_NoSync(Scaleform::GFx::ResourceDataNode * *, Scaleform::GFx::ResourceDataNode *);
	static bool CompareAndSet_Sync(Scaleform::GFx::ResourceDataNode * *, Scaleform::GFx::ResourceDataNode *, Scaleform::GFx::ResourceDataNode *);
	static bool CompareAndSet_Release(Scaleform::GFx::ResourceDataNode * *, Scaleform::GFx::ResourceDataNode *, Scaleform::GFx::ResourceDataNode *);
	static bool CompareAndSet_Acquire(Scaleform::GFx::ResourceDataNode * *, Scaleform::GFx::ResourceDataNode *, Scaleform::GFx::ResourceDataNode *);
	static bool CompareAndSet_NoSync(Scaleform::GFx::ResourceDataNode * *, Scaleform::GFx::ResourceDataNode *, Scaleform::GFx::ResourceDataNode *);
	static void Store_Release(Scaleform::GFx::ResourceDataNode * *, Scaleform::GFx::ResourceDataNode *);
	static Scaleform::GFx::ResourceDataNode * Load_Acquire(Scaleform::GFx::ResourceDataNode * *);
};
class Scaleform::AtomicOps<Scaleform::Render::FontCacheHandleManager *>
{
	struct Ops;
	typedef long long T;
	typedef volatile long long PT;
	union C2T_union;
public:
	static Scaleform::Render::FontCacheHandleManager * Exchange_Sync(Scaleform::Render::FontCacheHandleManager * *, Scaleform::Render::FontCacheHandleManager *);
	static Scaleform::Render::FontCacheHandleManager * Exchange_Release(Scaleform::Render::FontCacheHandleManager * *, Scaleform::Render::FontCacheHandleManager *);
	static Scaleform::Render::FontCacheHandleManager * Exchange_Acquire(Scaleform::Render::FontCacheHandleManager * *, Scaleform::Render::FontCacheHandleManager *);
	static Scaleform::Render::FontCacheHandleManager * Exchange_NoSync(Scaleform::Render::FontCacheHandleManager * *, Scaleform::Render::FontCacheHandleManager *);
	static Scaleform::Render::FontCacheHandleManager * ExchangeAdd_Sync(Scaleform::Render::FontCacheHandleManager * *, Scaleform::Render::FontCacheHandleManager *);
	static Scaleform::Render::FontCacheHandleManager * ExchangeAdd_Release(Scaleform::Render::FontCacheHandleManager * *, Scaleform::Render::FontCacheHandleManager *);
	static Scaleform::Render::FontCacheHandleManager * ExchangeAdd_Acquire(Scaleform::Render::FontCacheHandleManager * *, Scaleform::Render::FontCacheHandleManager *);
	static Scaleform::Render::FontCacheHandleManager * ExchangeAdd_NoSync(Scaleform::Render::FontCacheHandleManager * *, Scaleform::Render::FontCacheHandleManager *);
	static bool CompareAndSet_Sync(Scaleform::Render::FontCacheHandleManager * *, Scaleform::Render::FontCacheHandleManager *, Scaleform::Render::FontCacheHandleManager *);
	static bool CompareAndSet_Release(Scaleform::Render::FontCacheHandleManager * *, Scaleform::Render::FontCacheHandleManager *, Scaleform::Render::FontCacheHandleManager *);
	static bool CompareAndSet_Acquire(Scaleform::Render::FontCacheHandleManager * *, Scaleform::Render::FontCacheHandleManager *, Scaleform::Render::FontCacheHandleManager *);
	static bool CompareAndSet_NoSync(Scaleform::Render::FontCacheHandleManager * *, Scaleform::Render::FontCacheHandleManager *, Scaleform::Render::FontCacheHandleManager *);
	static void Store_Release(Scaleform::Render::FontCacheHandleManager * *, Scaleform::Render::FontCacheHandleManager *);
	static Scaleform::Render::FontCacheHandleManager * Load_Acquire(Scaleform::Render::FontCacheHandleManager * *);
};
class Scaleform::AtomicOps<Scaleform::Render::MeshKeyManager *>
{
	struct Ops;
	typedef long long T;
	typedef volatile long long PT;
	union C2T_union;
public:
	static Scaleform::Render::MeshKeyManager * Exchange_Sync(Scaleform::Render::MeshKeyManager * *, Scaleform::Render::MeshKeyManager *);
	static Scaleform::Render::MeshKeyManager * Exchange_Release(Scaleform::Render::MeshKeyManager * *, Scaleform::Render::MeshKeyManager *);
	static Scaleform::Render::MeshKeyManager * Exchange_Acquire(Scaleform::Render::MeshKeyManager * *, Scaleform::Render::MeshKeyManager *);
	static Scaleform::Render::MeshKeyManager * Exchange_NoSync(Scaleform::Render::MeshKeyManager * *, Scaleform::Render::MeshKeyManager *);
	static Scaleform::Render::MeshKeyManager * ExchangeAdd_Sync(Scaleform::Render::MeshKeyManager * *, Scaleform::Render::MeshKeyManager *);
	static Scaleform::Render::MeshKeyManager * ExchangeAdd_Release(Scaleform::Render::MeshKeyManager * *, Scaleform::Render::MeshKeyManager *);
	static Scaleform::Render::MeshKeyManager * ExchangeAdd_Acquire(Scaleform::Render::MeshKeyManager * *, Scaleform::Render::MeshKeyManager *);
	static Scaleform::Render::MeshKeyManager * ExchangeAdd_NoSync(Scaleform::Render::MeshKeyManager * *, Scaleform::Render::MeshKeyManager *);
	static bool CompareAndSet_Sync(Scaleform::Render::MeshKeyManager * *, Scaleform::Render::MeshKeyManager *, Scaleform::Render::MeshKeyManager *);
	static bool CompareAndSet_Release(Scaleform::Render::MeshKeyManager * *, Scaleform::Render::MeshKeyManager *, Scaleform::Render::MeshKeyManager *);
	static bool CompareAndSet_Acquire(Scaleform::Render::MeshKeyManager * *, Scaleform::Render::MeshKeyManager *, Scaleform::Render::MeshKeyManager *);
	static bool CompareAndSet_NoSync(Scaleform::Render::MeshKeyManager * *, Scaleform::Render::MeshKeyManager *, Scaleform::Render::MeshKeyManager *);
	static void Store_Release(Scaleform::Render::MeshKeyManager * *, Scaleform::Render::MeshKeyManager *);
	static Scaleform::Render::MeshKeyManager * Load_Acquire(Scaleform::Render::MeshKeyManager * *);
};
class Scaleform::AtomicValueBase<Scaleform::Render::Texture *>
{
	class Ops;
public:
	Scaleform::Render::Texture * Value; // 0x0
	AtomicValueBase<Scaleform::Render::Texture *>(Scaleform::AtomicValueBase<Scaleform::Render::Texture *> &);
	AtomicValueBase<Scaleform::Render::Texture *>(const Scaleform::AtomicValueBase<Scaleform::Render::Texture *> &);
	AtomicValueBase<Scaleform::Render::Texture *>(Scaleform::Render::Texture *);
	AtomicValueBase<Scaleform::Render::Texture *>();
	Scaleform::Render::Texture * operator class Scaleform::Render::Texture *();
	Scaleform::Render::Texture * Exchange_Sync(Scaleform::Render::Texture *);
	Scaleform::Render::Texture * Exchange_Release(Scaleform::Render::Texture *);
	Scaleform::Render::Texture * Exchange_Acquire(Scaleform::Render::Texture *);
	Scaleform::Render::Texture * Exchange_NoSync(Scaleform::Render::Texture *);
	bool CompareAndSet_Sync(Scaleform::Render::Texture *, Scaleform::Render::Texture *);
	bool CompareAndSet_Release(Scaleform::Render::Texture *, Scaleform::Render::Texture *);
	bool CompareAndSet_Acquire(Scaleform::Render::Texture *, Scaleform::Render::Texture *);
	bool CompareAndSet_NoSync(Scaleform::Render::Texture *, Scaleform::Render::Texture *);
	void Store_Release(Scaleform::Render::Texture *);
	Scaleform::Render::Texture * Load_Acquire();
	Scaleform::AtomicValueBase<Scaleform::Render::Texture *> & operator=(Scaleform::AtomicValueBase<Scaleform::Render::Texture *> &);
	Scaleform::AtomicValueBase<Scaleform::Render::Texture *> & operator=(const Scaleform::AtomicValueBase<Scaleform::Render::Texture *> &);
};
class Scaleform::AtomicValueBase<Scaleform::Render::FontCacheHandleManager *>
{
	class Ops;
public:
	Scaleform::Render::FontCacheHandleManager * Value; // 0x0
	AtomicValueBase<Scaleform::Render::FontCacheHandleManager *>(Scaleform::AtomicValueBase<Scaleform::Render::FontCacheHandleManager *> &);
	AtomicValueBase<Scaleform::Render::FontCacheHandleManager *>(const Scaleform::AtomicValueBase<Scaleform::Render::FontCacheHandleManager *> &);
	AtomicValueBase<Scaleform::Render::FontCacheHandleManager *>(Scaleform::Render::FontCacheHandleManager *);
	AtomicValueBase<Scaleform::Render::FontCacheHandleManager *>();
	Scaleform::Render::FontCacheHandleManager * operator class Scaleform::Render::FontCacheHandleManager *();
	Scaleform::Render::FontCacheHandleManager * Exchange_Sync(Scaleform::Render::FontCacheHandleManager *);
	Scaleform::Render::FontCacheHandleManager * Exchange_Release(Scaleform::Render::FontCacheHandleManager *);
	Scaleform::Render::FontCacheHandleManager * Exchange_Acquire(Scaleform::Render::FontCacheHandleManager *);
	Scaleform::Render::FontCacheHandleManager * Exchange_NoSync(Scaleform::Render::FontCacheHandleManager *);
	bool CompareAndSet_Sync(Scaleform::Render::FontCacheHandleManager *, Scaleform::Render::FontCacheHandleManager *);
	bool CompareAndSet_Release(Scaleform::Render::FontCacheHandleManager *, Scaleform::Render::FontCacheHandleManager *);
	bool CompareAndSet_Acquire(Scaleform::Render::FontCacheHandleManager *, Scaleform::Render::FontCacheHandleManager *);
	bool CompareAndSet_NoSync(Scaleform::Render::FontCacheHandleManager *, Scaleform::Render::FontCacheHandleManager *);
	void Store_Release(Scaleform::Render::FontCacheHandleManager *);
	Scaleform::Render::FontCacheHandleManager * Load_Acquire();
	Scaleform::AtomicValueBase<Scaleform::Render::FontCacheHandleManager *> & operator=(Scaleform::AtomicValueBase<Scaleform::Render::FontCacheHandleManager *> &);
	Scaleform::AtomicValueBase<Scaleform::Render::FontCacheHandleManager *> & operator=(const Scaleform::AtomicValueBase<Scaleform::Render::FontCacheHandleManager *> &);
};
class Scaleform::AtomicValueBase<Scaleform::Render::MeshKeyManager *>
{
	class Ops;
public:
	Scaleform::Render::MeshKeyManager * Value; // 0x0
	AtomicValueBase<Scaleform::Render::MeshKeyManager *>(Scaleform::AtomicValueBase<Scaleform::Render::MeshKeyManager *> &);
	AtomicValueBase<Scaleform::Render::MeshKeyManager *>(const Scaleform::AtomicValueBase<Scaleform::Render::MeshKeyManager *> &);
	AtomicValueBase<Scaleform::Render::MeshKeyManager *>(Scaleform::Render::MeshKeyManager *);
	AtomicValueBase<Scaleform::Render::MeshKeyManager *>();
	Scaleform::Render::MeshKeyManager * operator class Scaleform::Render::MeshKeyManager *();
	Scaleform::Render::MeshKeyManager * Exchange_Sync(Scaleform::Render::MeshKeyManager *);
	Scaleform::Render::MeshKeyManager * Exchange_Release(Scaleform::Render::MeshKeyManager *);
	Scaleform::Render::MeshKeyManager * Exchange_Acquire(Scaleform::Render::MeshKeyManager *);
	Scaleform::Render::MeshKeyManager * Exchange_NoSync(Scaleform::Render::MeshKeyManager *);
	bool CompareAndSet_Sync(Scaleform::Render::MeshKeyManager *, Scaleform::Render::MeshKeyManager *);
	bool CompareAndSet_Release(Scaleform::Render::MeshKeyManager *, Scaleform::Render::MeshKeyManager *);
	bool CompareAndSet_Acquire(Scaleform::Render::MeshKeyManager *, Scaleform::Render::MeshKeyManager *);
	bool CompareAndSet_NoSync(Scaleform::Render::MeshKeyManager *, Scaleform::Render::MeshKeyManager *);
	void Store_Release(Scaleform::Render::MeshKeyManager *);
	Scaleform::Render::MeshKeyManager * Load_Acquire();
	Scaleform::AtomicValueBase<Scaleform::Render::MeshKeyManager *> & operator=(Scaleform::AtomicValueBase<Scaleform::Render::MeshKeyManager *> &);
	Scaleform::AtomicValueBase<Scaleform::Render::MeshKeyManager *> & operator=(const Scaleform::AtomicValueBase<Scaleform::Render::MeshKeyManager *> &);
};
class Scaleform::AtomicValueBase<Scaleform::GFx::ImportData *>
{
	class Ops;
public:
	Scaleform::GFx::ImportData * Value; // 0x0
	AtomicValueBase<Scaleform::GFx::ImportData *>(Scaleform::AtomicValueBase<Scaleform::GFx::ImportData *> &);
	AtomicValueBase<Scaleform::GFx::ImportData *>(const Scaleform::AtomicValueBase<Scaleform::GFx::ImportData *> &);
	AtomicValueBase<Scaleform::GFx::ImportData *>(Scaleform::GFx::ImportData *);
	AtomicValueBase<Scaleform::GFx::ImportData *>();
	Scaleform::GFx::ImportData * operator class Scaleform::GFx::ImportData *();
	Scaleform::GFx::ImportData * Exchange_Sync(Scaleform::GFx::ImportData *);
	Scaleform::GFx::ImportData * Exchange_Release(Scaleform::GFx::ImportData *);
	Scaleform::GFx::ImportData * Exchange_Acquire(Scaleform::GFx::ImportData *);
	Scaleform::GFx::ImportData * Exchange_NoSync(Scaleform::GFx::ImportData *);
	bool CompareAndSet_Sync(Scaleform::GFx::ImportData *, Scaleform::GFx::ImportData *);
	bool CompareAndSet_Release(Scaleform::GFx::ImportData *, Scaleform::GFx::ImportData *);
	bool CompareAndSet_Acquire(Scaleform::GFx::ImportData *, Scaleform::GFx::ImportData *);
	bool CompareAndSet_NoSync(Scaleform::GFx::ImportData *, Scaleform::GFx::ImportData *);
	void Store_Release(Scaleform::GFx::ImportData *);
	Scaleform::GFx::ImportData * Load_Acquire();
	Scaleform::AtomicValueBase<Scaleform::GFx::ImportData *> & operator=(Scaleform::AtomicValueBase<Scaleform::GFx::ImportData *> &);
	Scaleform::AtomicValueBase<Scaleform::GFx::ImportData *> & operator=(const Scaleform::AtomicValueBase<Scaleform::GFx::ImportData *> &);
};
class Scaleform::AtomicValueBase<Scaleform::GFx::FontDataUseNode *>
{
	class Ops;
public:
	Scaleform::GFx::FontDataUseNode * Value; // 0x0
	AtomicValueBase<Scaleform::GFx::FontDataUseNode *>(Scaleform::AtomicValueBase<Scaleform::GFx::FontDataUseNode *> &);
	AtomicValueBase<Scaleform::GFx::FontDataUseNode *>(const Scaleform::AtomicValueBase<Scaleform::GFx::FontDataUseNode *> &);
	AtomicValueBase<Scaleform::GFx::FontDataUseNode *>(Scaleform::GFx::FontDataUseNode *);
	AtomicValueBase<Scaleform::GFx::FontDataUseNode *>();
	Scaleform::GFx::FontDataUseNode * operator struct Scaleform::GFx::FontDataUseNode *();
	Scaleform::GFx::FontDataUseNode * Exchange_Sync(Scaleform::GFx::FontDataUseNode *);
	Scaleform::GFx::FontDataUseNode * Exchange_Release(Scaleform::GFx::FontDataUseNode *);
	Scaleform::GFx::FontDataUseNode * Exchange_Acquire(Scaleform::GFx::FontDataUseNode *);
	Scaleform::GFx::FontDataUseNode * Exchange_NoSync(Scaleform::GFx::FontDataUseNode *);
	bool CompareAndSet_Sync(Scaleform::GFx::FontDataUseNode *, Scaleform::GFx::FontDataUseNode *);
	bool CompareAndSet_Release(Scaleform::GFx::FontDataUseNode *, Scaleform::GFx::FontDataUseNode *);
	bool CompareAndSet_Acquire(Scaleform::GFx::FontDataUseNode *, Scaleform::GFx::FontDataUseNode *);
	bool CompareAndSet_NoSync(Scaleform::GFx::FontDataUseNode *, Scaleform::GFx::FontDataUseNode *);
	void Store_Release(Scaleform::GFx::FontDataUseNode *);
	Scaleform::GFx::FontDataUseNode * Load_Acquire();
	Scaleform::AtomicValueBase<Scaleform::GFx::FontDataUseNode *> & operator=(Scaleform::AtomicValueBase<Scaleform::GFx::FontDataUseNode *> &);
	Scaleform::AtomicValueBase<Scaleform::GFx::FontDataUseNode *> & operator=(const Scaleform::AtomicValueBase<Scaleform::GFx::FontDataUseNode *> &);
};
class Scaleform::AtomicValueBase<Scaleform::GFx::FrameBindData *>
{
	class Ops;
public:
	Scaleform::GFx::FrameBindData * Value; // 0x0
	AtomicValueBase<Scaleform::GFx::FrameBindData *>(Scaleform::AtomicValueBase<Scaleform::GFx::FrameBindData *> &);
	AtomicValueBase<Scaleform::GFx::FrameBindData *>(const Scaleform::AtomicValueBase<Scaleform::GFx::FrameBindData *> &);
	AtomicValueBase<Scaleform::GFx::FrameBindData *>(Scaleform::GFx::FrameBindData *);
	AtomicValueBase<Scaleform::GFx::FrameBindData *>();
	Scaleform::GFx::FrameBindData * operator struct Scaleform::GFx::FrameBindData *();
	Scaleform::GFx::FrameBindData * Exchange_Sync(Scaleform::GFx::FrameBindData *);
	Scaleform::GFx::FrameBindData * Exchange_Release(Scaleform::GFx::FrameBindData *);
	Scaleform::GFx::FrameBindData * Exchange_Acquire(Scaleform::GFx::FrameBindData *);
	Scaleform::GFx::FrameBindData * Exchange_NoSync(Scaleform::GFx::FrameBindData *);
	bool CompareAndSet_Sync(Scaleform::GFx::FrameBindData *, Scaleform::GFx::FrameBindData *);
	bool CompareAndSet_Release(Scaleform::GFx::FrameBindData *, Scaleform::GFx::FrameBindData *);
	bool CompareAndSet_Acquire(Scaleform::GFx::FrameBindData *, Scaleform::GFx::FrameBindData *);
	bool CompareAndSet_NoSync(Scaleform::GFx::FrameBindData *, Scaleform::GFx::FrameBindData *);
	void Store_Release(Scaleform::GFx::FrameBindData *);
	Scaleform::GFx::FrameBindData * Load_Acquire();
	Scaleform::AtomicValueBase<Scaleform::GFx::FrameBindData *> & operator=(Scaleform::AtomicValueBase<Scaleform::GFx::FrameBindData *> &);
	Scaleform::AtomicValueBase<Scaleform::GFx::FrameBindData *> & operator=(const Scaleform::AtomicValueBase<Scaleform::GFx::FrameBindData *> &);
};
class Scaleform::AtomicValueBase<Scaleform::GFx::ResourceDataNode *>
{
	class Ops;
public:
	Scaleform::GFx::ResourceDataNode * Value; // 0x0
	AtomicValueBase<Scaleform::GFx::ResourceDataNode *>(Scaleform::AtomicValueBase<Scaleform::GFx::ResourceDataNode *> &);
	AtomicValueBase<Scaleform::GFx::ResourceDataNode *>(const Scaleform::AtomicValueBase<Scaleform::GFx::ResourceDataNode *> &);
	AtomicValueBase<Scaleform::GFx::ResourceDataNode *>(Scaleform::GFx::ResourceDataNode *);
	AtomicValueBase<Scaleform::GFx::ResourceDataNode *>();
	Scaleform::GFx::ResourceDataNode * operator struct Scaleform::GFx::ResourceDataNode *();
	Scaleform::GFx::ResourceDataNode * Exchange_Sync(Scaleform::GFx::ResourceDataNode *);
	Scaleform::GFx::ResourceDataNode * Exchange_Release(Scaleform::GFx::ResourceDataNode *);
	Scaleform::GFx::ResourceDataNode * Exchange_Acquire(Scaleform::GFx::ResourceDataNode *);
	Scaleform::GFx::ResourceDataNode * Exchange_NoSync(Scaleform::GFx::ResourceDataNode *);
	bool CompareAndSet_Sync(Scaleform::GFx::ResourceDataNode *, Scaleform::GFx::ResourceDataNode *);
	bool CompareAndSet_Release(Scaleform::GFx::ResourceDataNode *, Scaleform::GFx::ResourceDataNode *);
	bool CompareAndSet_Acquire(Scaleform::GFx::ResourceDataNode *, Scaleform::GFx::ResourceDataNode *);
	bool CompareAndSet_NoSync(Scaleform::GFx::ResourceDataNode *, Scaleform::GFx::ResourceDataNode *);
	void Store_Release(Scaleform::GFx::ResourceDataNode *);
	Scaleform::GFx::ResourceDataNode * Load_Acquire();
	Scaleform::AtomicValueBase<Scaleform::GFx::ResourceDataNode *> & operator=(Scaleform::AtomicValueBase<Scaleform::GFx::ResourceDataNode *> &);
	Scaleform::AtomicValueBase<Scaleform::GFx::ResourceDataNode *> & operator=(const Scaleform::AtomicValueBase<Scaleform::GFx::ResourceDataNode *> &);
};
class Scaleform::AtomicValueBase<long>
{
	class Ops;
public:
	volatile long Value; // 0x0
	AtomicValueBase<long>(Scaleform::AtomicValueBase<long> &);
	AtomicValueBase<long>(const Scaleform::AtomicValueBase<long> &);
	AtomicValueBase<long>(long);
	AtomicValueBase<long>();
	long operator long();
	long Exchange_Sync(long);
	long Exchange_Release(long);
	long Exchange_Acquire(long);
	long Exchange_NoSync(long);
	bool CompareAndSet_Sync(long, long);
	bool CompareAndSet_Release(long, long);
	bool CompareAndSet_Acquire(long, long);
	bool CompareAndSet_NoSync(long, long);
	void Store_Release(long);
	long Load_Acquire();
	Scaleform::AtomicValueBase<long> & operator=(Scaleform::AtomicValueBase<long> &);
	Scaleform::AtomicValueBase<long> & operator=(const Scaleform::AtomicValueBase<long> &);
};
class Scaleform::AtomicValueBase<unsigned long>
{
	class Ops;
public:
	volatile unsigned long Value; // 0x0
	AtomicValueBase<unsigned long>(Scaleform::AtomicValueBase<unsigned long> &);
	AtomicValueBase<unsigned long>(const Scaleform::AtomicValueBase<unsigned long> &);
	AtomicValueBase<unsigned long>(unsigned long);
	AtomicValueBase<unsigned long>();
	unsigned long operator unsigned long();
	unsigned long Exchange_Sync(unsigned long);
	unsigned long Exchange_Release(unsigned long);
	unsigned long Exchange_Acquire(unsigned long);
	unsigned long Exchange_NoSync(unsigned long);
	bool CompareAndSet_Sync(unsigned long, unsigned long);
	bool CompareAndSet_Release(unsigned long, unsigned long);
	bool CompareAndSet_Acquire(unsigned long, unsigned long);
	bool CompareAndSet_NoSync(unsigned long, unsigned long);
	void Store_Release(unsigned long);
	unsigned long Load_Acquire();
	Scaleform::AtomicValueBase<unsigned long> & operator=(Scaleform::AtomicValueBase<unsigned long> &);
	Scaleform::AtomicValueBase<unsigned long> & operator=(const Scaleform::AtomicValueBase<unsigned long> &);
};
class Scaleform::AtomicValueBase<int>
{
	class Ops;
public:
	volatile long Value; // 0x0
	AtomicValueBase<int>(Scaleform::AtomicValueBase<int> &);
	AtomicValueBase<int>(const Scaleform::AtomicValueBase<int> &);
	AtomicValueBase<int>(long);
	AtomicValueBase<int>();
	long operator int();
	long Exchange_Sync(long);
	long Exchange_Release(long);
	long Exchange_Acquire(long);
	long Exchange_NoSync(long);
	bool CompareAndSet_Sync(long, long);
	bool CompareAndSet_Release(long, long);
	bool CompareAndSet_Acquire(long, long);
	bool CompareAndSet_NoSync(long, long);
	void Store_Release(long);
	long Load_Acquire();
	Scaleform::AtomicValueBase<int> & operator=(Scaleform::AtomicValueBase<int> &);
	Scaleform::AtomicValueBase<int> & operator=(const Scaleform::AtomicValueBase<int> &);
};
class Scaleform::Lock
{
private:
	static void operator delete(void *);
	_RTL_CRITICAL_SECTION * cs; // 0x0
	unsigned char csBuf[40]; // 0x8
public:
	Lock(unsigned long);
	~Lock();
	void DoLock();
	void Unlock();
	class Locker;
	void __dflt_ctor_closure();
};
class Scaleform::Lock::Locker
{
public:
	Scaleform::Lock * pLock; // 0x0
	Locker(Scaleform::Lock *);
	~Locker();
};
Scaleform::Lock::Locker::~Locker(); // 0x140270F40
class Scaleform::LockSafe
{
public:
	LockSafe(unsigned long);
	void DoLock();
	void Unlock();
	class Locker;
	class TmpUnlocker;
private:
	Scaleform::Lock mLock; // 0x0
public:
	~LockSafe();
	void __dflt_ctor_closure();
};
class Scaleform::LockSafe::Locker
{
public:
	Scaleform::LockSafe * pLock; // 0x0
	Locker(Scaleform::LockSafe *);
	~Locker();
};
class Scaleform::LockSafe::TmpUnlocker
{
public:
	Scaleform::LockSafe * pLock; // 0x0
	TmpUnlocker(Scaleform::LockSafe *);
	~TmpUnlocker();
};