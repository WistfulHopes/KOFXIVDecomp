#pragma once

class Scaleform::Render::Rasterizer :
	Scaleform::Render::TessBase
{
	enum <unnamed-enum-SubpixelShift>
	{
		SubpixelShift = 8,
		SubpixelScale = 256,
		SubpixelMask = 255,
		AntiAliasShift = 8,
		AntiAliasScale = 256,
		AntiAliasMask = 255,
		AntiAliasScale2 = 512,
		AntiAliasMask2 = 511,
	};
	enum FillRuleType
	{
		FillNonZero = 0,
		FillEvenOdd = 1,
	};
public:
	Rasterizer(Scaleform::MemoryHeap *);
	void SetFillRule(Scaleform::Render::Rasterizer::FillRuleType);
	Scaleform::Render::Rasterizer::FillRuleType GetFillRule();
	void SetGamma1(float);
	float GetGamma1();
	void SetGamma2(float);
	float GetGamma2();
	virtual void Clear();
	void MoveTo(float, float);
	void LineTo(float, float);
	virtual void AddVertex(float, float);
	virtual float GetLastX();
	virtual float GetLastY();
	virtual void ClosePath();
	virtual void FinalizePath(unsigned long, unsigned long, bool, bool);
	virtual void Transform(const Scaleform::Render::Matrix2x4<float> &);
	virtual Scaleform::Render::Matrix2x4<float> StretchTo(float, float, float, float);
	virtual unsigned long GetVertexCount();
	virtual unsigned long GetMeshCount();
	virtual unsigned long GetMeshVertexCount(unsigned long);
	virtual unsigned long GetMeshTriangleCount(unsigned long);
	virtual void GetMesh(unsigned long, Scaleform::Render::TessMesh *);
	virtual unsigned long GetVertices(Scaleform::Render::TessMesh *, Scaleform::Render::TessVertex *, unsigned long);
	virtual void GetTrianglesI16(unsigned long, unsigned short *, unsigned long, unsigned long);
	long GetMinX();
	long GetMinY();
	long GetMaxX();
	long GetMaxY();
	unsigned long long GetNumScanlines();
	bool SortCells();
	void SweepScanline(unsigned long, unsigned char *, unsigned long, long);
	void SweepScanlineThreshold(unsigned long, unsigned char *, unsigned long, unsigned long);
	struct Cell;
	struct SortedY;
private:
	void setGamma(long, float);
	void line(long, long, long, long);
	void horLine(long, long, long, long, long);
	void setCurrCell(long, long);
	static bool cellXLess(const Scaleform::Render::Rasterizer::Cell *, const Scaleform::Render::Rasterizer::Cell *);
	unsigned long calcAlpha(long, unsigned long);
	unsigned long calcAlpha(long, long);
	Scaleform::Render::LinearHeap LHeap; // 0x8
	Scaleform::Render::Rasterizer::FillRuleType FillRule; // 0x30
	float Gamma1; // 0x34
	float Gamma2; // 0x38
	unsigned char GammaLut[256][2]; // 0x3C
	Scaleform::Render::ArrayPaged<Scaleform::Render::Rasterizer::Cell,4,16> Cells; // 0x240
	Scaleform::Render::ArrayUnsafe<Scaleform::Render::Rasterizer::Cell *> SortedCells; // 0x268
	Scaleform::Render::ArrayUnsafe<Scaleform::Render::Rasterizer::SortedY> SortedYs; // 0x280
	Scaleform::Render::Rasterizer::Cell CurrCell; // 0x298
	long MinX; // 0x2A8
	long MinY; // 0x2AC
	long MaxX; // 0x2B0
	long MaxY; // 0x2B4
	long StartX; // 0x2B8
	long StartY; // 0x2BC
	long LastX; // 0x2C0
	long LastY; // 0x2C4
	float LastXf; // 0x2C8
	float LastYf; // 0x2CC
public:
	virtual ~Rasterizer();
};
void Scaleform::Render::Rasterizer::AddVertex(float x, float y); // 0x140408F40
float Scaleform::Render::Rasterizer::GetLastX(); // 0x140409070
float Scaleform::Render::Rasterizer::GetLastY(); // 0x140409080
void Scaleform::Render::Rasterizer::FinalizePath(unsigned long __formal, unsigned long __formal, bool __formal, bool __formal); // 0x14002E7C0
Scaleform::Render::Matrix2x4<float> Scaleform::Render::Rasterizer::StretchTo(float __formal, float __formal, float __formal, float __formal); // 0x140378C50
unsigned long Scaleform::Render::Rasterizer::GetMeshCount(); // 0x1400470F0
struct Scaleform::Render::Rasterizer::Cell
{
	long x; // 0x0
	long y; // 0x4
	long Cover; // 0x8
	long Area; // 0xC
};
struct Scaleform::Render::Rasterizer::SortedY
{
	unsigned long Start; // 0x0
	unsigned long Count; // 0x4
};
bool Scaleform::Render::Rasterizer::cellXLess(const Scaleform::Render::Rasterizer::Cell * a, const Scaleform::Render::Rasterizer::Cell * b); // 0x1404096B0
class Scaleform::Render::ArrayPaged<Scaleform::Render::Rasterizer::Cell,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Rasterizer::Cell,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Rasterizer::Cell,4,16> &);
public:
	ArrayPaged<Scaleform::Render::Rasterizer::Cell,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Rasterizer::Cell &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Rasterizer::Cell & operator[](unsigned long long);
	const Scaleform::Render::Rasterizer::Cell & operator[](unsigned long long);
	Scaleform::Render::Rasterizer::Cell & Back();
	const Scaleform::Render::Rasterizer::Cell & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Rasterizer::Cell,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Rasterizer::Cell,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Rasterizer::Cell * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Rasterizer::Cell * * Pages; // 0x20
};
class Scaleform::Render::ArrayUnsafe<Scaleform::Render::Rasterizer::Cell *>
{
	typedef Scaleform::Render::Rasterizer::Cell ValueType;
private:
	ArrayUnsafe<Scaleform::Render::Rasterizer::Cell *>(const Scaleform::Render::ArrayUnsafe<Scaleform::Render::Rasterizer::Cell *> &);
public:
	ArrayUnsafe<Scaleform::Render::Rasterizer::Cell *>(Scaleform::Render::LinearHeap *);
	void ClearAndRelease();
	void Resize(unsigned long long);
	void Zero();
	unsigned long long GetSize();
	Scaleform::Render::Rasterizer::Cell * & operator[](unsigned long long);
	Scaleform::Render::Rasterizer::Cell * & operator[](unsigned long long);
private:
	const Scaleform::Render::ArrayUnsafe<Scaleform::Render::Rasterizer::Cell *> & operator=(const Scaleform::Render::ArrayUnsafe<Scaleform::Render::Rasterizer::Cell *> &);
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	Scaleform::Render::Rasterizer::Cell * * Array; // 0x10
};
class Scaleform::Render::ArrayUnsafe<Scaleform::Render::Rasterizer::SortedY>
{
	struct ValueType;
private:
	ArrayUnsafe<Scaleform::Render::Rasterizer::SortedY>(const Scaleform::Render::ArrayUnsafe<Scaleform::Render::Rasterizer::SortedY> &);
public:
	ArrayUnsafe<Scaleform::Render::Rasterizer::SortedY>(Scaleform::Render::LinearHeap *);
	void ClearAndRelease();
	void Resize(unsigned long long);
	void Zero();
	unsigned long long GetSize();
	Scaleform::Render::Rasterizer::SortedY & operator[](unsigned long long);
	const Scaleform::Render::Rasterizer::SortedY & operator[](unsigned long long);
private:
	const Scaleform::Render::ArrayUnsafe<Scaleform::Render::Rasterizer::SortedY> & operator=(const Scaleform::Render::ArrayUnsafe<Scaleform::Render::Rasterizer::SortedY> &);
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	Scaleform::Render::Rasterizer::SortedY * Array; // 0x10
};