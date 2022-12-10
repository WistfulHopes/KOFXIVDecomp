#pragma once

enum Scaleform::Render::DrawModeType
{
	DrawMode_Fill = 0,
	DrawMode_Mask = 1,
	DrawMode_CachedPrim = 2,
	DrawMode_Clear = 3,
	DrawMode_Count = 4,
};
enum Scaleform::Render::ProfilerModes
{
	Profile_None = 0,
	Profile_Overdraw = 1,
	Profile_Batch = 2,
	Profile_Blending = 3,
	Profile_TextureDensity = 4,
	Profile_2Dvs3D = 5,
	Profile_Count = 6,
	Profile_All = 255,
};
enum Scaleform::Render::ProfilerFlags
{
	ProfileFlag_NoFilterCaching = 1,
	ProfileFlag_NoBlendCaching = 2,
	ProfileFlag_NoBatching = 4,
	ProfileFlag_NoInstancing = 8,
	ProfileFlag_All = 255,
};
enum Scaleform::Render::ProfilerUniform
{
	ProfileUniform_TextureSize = 0,
	ProfileUniform_TextureMips = 1,
};
class Scaleform::NewOverrideBase<65>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 65,
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
class Scaleform::Render::ProfileModifier :
	Scaleform::NewOverrideBase<65>
{
public:
	ProfileModifier(const Scaleform::Render::ProfileModifier &);
	ProfileModifier();
	~ProfileModifier();
	Scaleform::Render::Color GetClearColor(Scaleform::Render::DrawModeType, Scaleform::Render::Color);
	Scaleform::Render::BlendMode GetBlendMode(Scaleform::Render::DrawModeType, Scaleform::Render::BlendMode);
	Scaleform::Render::PrimitiveFillType GetFillType(Scaleform::Render::DrawModeType, Scaleform::Render::PrimitiveFillType);
	Scaleform::Render::Color GetColor(Scaleform::Render::DrawModeType, Scaleform::Render::Color);
	bool IsCxformChanged(Scaleform::Render::DrawModeType);
	Scaleform::Render::Cxform GetCxform(Scaleform::Render::DrawModeType, const Scaleform::Render::Cxform &);
	void SetFillFlags(Scaleform::Render::DrawModeType, unsigned long);
	void SetBatch(Scaleform::Render::DrawModeType, Scaleform::Render::HAL *, Scaleform::Render::ComplexMesh *, unsigned long);
	void SetBatch(Scaleform::Render::DrawModeType, Scaleform::Render::HAL *, Scaleform::Render::Primitive *, unsigned long);
	bool ShouldDrawMaskVisible();
	bool ShouldDrawCachedPrimArea();
	void BeginScene();
protected:
	unsigned long FillFlags; // 0x8
public:
	Scaleform::Render::ProfileModifier & operator=(const Scaleform::Render::ProfileModifier &);
};
Scaleform::Render::Color Scaleform::Render::ProfileModifier::GetClearColor(Scaleform::Render::DrawModeType __formal, Scaleform::Render::Color c); // 0x140319CA0
Scaleform::Render::BlendMode Scaleform::Render::ProfileModifier::GetBlendMode(Scaleform::Render::DrawModeType __formal, Scaleform::Render::BlendMode mode); // 0x140319C70
Scaleform::Render::Cxform Scaleform::Render::ProfileModifier::GetCxform(Scaleform::Render::DrawModeType __formal, const Scaleform::Render::Cxform & cx); // 0x140319CC0
void Scaleform::Render::ProfileModifier::SetFillFlags(Scaleform::Render::DrawModeType __formal, unsigned long flags); // 0x14031C4E0
class Scaleform::Render::ProfileViews :
	Scaleform::NewOverrideBase<65>
{
public:
	~ProfileViews();
	bool IsModeAvailable(Scaleform::Render::ProfilerModes);
	bool IsFlagAvailable(unsigned long);
	void SetModeAvailability(unsigned long);
	void SetFlagAvailability(unsigned long);
	void SetProfileMode(Scaleform::Render::ProfilerModes);
	Scaleform::Render::ProfilerModes GetProfileMode();
	void SetProfileFlags(unsigned long);
	void SetProfileFlag(unsigned long, bool);
	unsigned long GetProfileFlag(unsigned long);
	void SetHighlightedBatch(unsigned long);
	Scaleform::Render::DrawModeType GetDrawMode();
	void SetDrawMode(Scaleform::Render::DrawModeType);
	bool IsFilterCachingEnabled();
	bool IsBlendCachingEnabled();
	Scaleform::Render::ProfileModifier & GetCurrentProfileModifier();
	const Scaleform::Render::ProfileModifier & GetCurrentProfileModifier();
	Scaleform::Render::Color GetClearColor(Scaleform::Render::Color);
	Scaleform::Render::BlendMode GetBlendMode(Scaleform::Render::BlendMode);
	Scaleform::Render::PrimitiveFillType GetFillType(Scaleform::Render::PrimitiveFillType);
	Scaleform::Render::Color GetColor(Scaleform::Render::Color);
	bool IsCxformChanged();
	Scaleform::Render::Cxform GetCxform(const Scaleform::Render::Cxform &);
	void SetFillFlags(unsigned long);
	void SetBatch(Scaleform::Render::HAL *, Scaleform::Render::ComplexMesh *, unsigned long);
	void SetBatch(Scaleform::Render::HAL *, Scaleform::Render::Primitive *, unsigned long);
	bool ShouldDrawMaskVisible();
	bool ShouldDrawCachedPrimArea();
	void BeginScene(Scaleform::Render::HAL *);
protected:
	Scaleform::Render::ProfileModifier PMDefault; // 0x8
public:
	ProfileViews(const Scaleform::Render::ProfileViews &);
	ProfileViews();
	Scaleform::Render::ProfileViews & operator=(const Scaleform::Render::ProfileViews &);
};
Scaleform::Render::DrawModeType Scaleform::Render::ProfileViews::GetDrawMode(); // 0x14002DEF0
Scaleform::Render::ProfileModifier & Scaleform::Render::ProfileViews::GetCurrentProfileModifier(); // 0x1400D7970
Scaleform::Render::Color Scaleform::Render::ProfileViews::GetClearColor(Scaleform::Render::Color c); // 0x140319C90
Scaleform::Render::BlendMode Scaleform::Render::ProfileViews::GetBlendMode(Scaleform::Render::BlendMode mode); // 0x140319C80
Scaleform::Render::Cxform Scaleform::Render::ProfileViews::GetCxform(const Scaleform::Render::Cxform & cx); // 0x140319CE0