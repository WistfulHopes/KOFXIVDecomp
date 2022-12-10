#pragma once

struct Scaleform::Render::MeshCacheParams
{
	unsigned long long MemReserve; // 0x0
	unsigned long long MemLimit; // 0x8
	unsigned long long MemGranularity; // 0x10
	unsigned long long LRUTailSize; // 0x18
	unsigned long long StagingBufferSize; // 0x20
	unsigned long long VBLockEvictSizeLimit; // 0x28
	unsigned long MaxBatchInstances; // 0x30
	unsigned long InstancingThreshold; // 0x34
	unsigned long NoBatchVerticesSizeThreshold; // 0x38
	unsigned long MaxVerticesSizeInBatch; // 0x3C
	unsigned long MaxIndicesInBatch; // 0x40
	enum PCDefaultsType
	{
		PC_Defaults = 0,
	};
	enum ConsoleDefaultsType
	{
		Console_Defaults = 0,
	};
	MeshCacheParams(const Scaleform::Render::MeshCacheParams &, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long);
	MeshCacheParams(const Scaleform::Render::MeshCacheParams &);
	MeshCacheParams(Scaleform::Render::MeshCacheParams::ConsoleDefaultsType);
	MeshCacheParams(Scaleform::Render::MeshCacheParams::PCDefaultsType);
	void __dflt_ctor_closure();
};
class Scaleform::Render::MeshCacheConfig
{
public:
	~MeshCacheConfig();
	bool SetParams(const Scaleform::Render::MeshCacheParams &);
	const Scaleform::Render::MeshCacheParams & GetParams();
	void ClearCache();
	MeshCacheConfig(const Scaleform::Render::MeshCacheConfig &);
	MeshCacheConfig();
	Scaleform::Render::MeshCacheConfig & operator=(const Scaleform::Render::MeshCacheConfig &);
};