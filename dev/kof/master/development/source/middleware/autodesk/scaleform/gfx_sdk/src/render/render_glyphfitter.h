#pragma once

class Scaleform::Render::GlyphFitter :
	Scaleform::Render::TessBase
{
	enum DirType
	{
		DirCW = 1,
		DirCCW = 2,
	};
	enum FitDir
	{
		FitX = 1,
		FitY = 2,
	};
	struct VertexType;
	struct ContourType;
public:
	GlyphFitter(Scaleform::MemoryHeap *, long);
	void SetNominalFontHeight(long);
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
	long ComputeTopY();
	void FitGlyph(long, long, long, long);
	long GetNominalFontHeight();
	long GetUnitsPerPixelX();
	long GetUnitsPerPixelY();
	long GetSnappedHeight();
	unsigned long long GetNumContours();
	const Scaleform::Render::GlyphFitter::ContourType & GetContour(unsigned long);
	const Scaleform::Render::GlyphFitter::VertexType & GetVertex(const Scaleform::Render::GlyphFitter::ContourType &, unsigned long);
	void SnapVertex(Scaleform::Render::GlyphFitter::VertexType &);
private:
	void removeDuplicateClosures();
	void computeBounds();
	void detectEvents(Scaleform::Render::GlyphFitter::FitDir);
	void computeLerpRamp(Scaleform::Render::GlyphFitter::FitDir, long, long, long, long);
	long snapToPixel(long, long);
	long NominalFontHeight; // 0x8
	Scaleform::Render::LinearHeap LHeap; // 0x10
	Scaleform::Render::ArrayPaged<Scaleform::Render::GlyphFitter::ContourType,2,4> Contours; // 0x38
	Scaleform::Render::ArrayPaged<Scaleform::Render::GlyphFitter::VertexType,4,16> Vertices; // 0x60
	Scaleform::Render::ArrayUnsafe<unsigned char> Events; // 0x88
	Scaleform::Render::ArrayPaged<Scaleform::Render::GlyphFitter::VertexType,4,16> LerpPairs; // 0xA0
	Scaleform::Render::ArrayUnsafe<short> LerpRampX; // 0xC8
	Scaleform::Render::ArrayUnsafe<short> LerpRampY; // 0xE0
	short MinX; // 0xF8
	short MinY; // 0xFA
	short MaxX; // 0xFC
	short MaxY; // 0xFE
	Scaleform::Render::GlyphFitter::DirType Direction; // 0x100
	long UnitsPerPixelX; // 0x104
	long UnitsPerPixelY; // 0x108
	long SnappedHeight; // 0x10C
	float StartX; // 0x110
	float StartY; // 0x114
	float LastXf; // 0x118
	float LastYf; // 0x11C
public:
	virtual ~GlyphFitter();
};
struct Scaleform::Render::GlyphFitter::VertexType
{
	short x; // 0x0
	short y; // 0x2
};
struct Scaleform::Render::GlyphFitter::ContourType
{
	unsigned long StartVertex; // 0x0
	unsigned long NumVertices; // 0x4
};
void Scaleform::Render::GlyphFitter::AddVertex(float x, float y); // 0x140407D60
float Scaleform::Render::GlyphFitter::GetLastX(); // 0x140407F90
float Scaleform::Render::GlyphFitter::GetLastY(); // 0x140407FA0
void Scaleform::Render::GlyphFitter::FinalizePath(unsigned long __formal, unsigned long __formal, bool __formal, bool __formal); // 0x14002E7C0
Scaleform::Render::Matrix2x4<float> Scaleform::Render::GlyphFitter::StretchTo(float __formal, float __formal, float __formal, float __formal); // 0x140378C50
unsigned long Scaleform::Render::GlyphFitter::GetMeshCount(); // 0x1400470F0
class Scaleform::Render::ArrayPaged<Scaleform::Render::GlyphFitter::ContourType,2,4>
{
	enum PageScale_e
	{
		PageShift = 2,
		PageSize = 4,
		PageMask = 3,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::GlyphFitter::ContourType,2,4>(const Scaleform::Render::ArrayPaged<Scaleform::Render::GlyphFitter::ContourType,2,4> &);
public:
	ArrayPaged<Scaleform::Render::GlyphFitter::ContourType,2,4>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::GlyphFitter::ContourType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::GlyphFitter::ContourType & operator[](unsigned long long);
	const Scaleform::Render::GlyphFitter::ContourType & operator[](unsigned long long);
	Scaleform::Render::GlyphFitter::ContourType & Back();
	const Scaleform::Render::GlyphFitter::ContourType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::GlyphFitter::ContourType,2,4> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::GlyphFitter::ContourType,2,4> &);
	void allocPage(unsigned long long);
	Scaleform::Render::GlyphFitter::ContourType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::GlyphFitter::ContourType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::GlyphFitter::VertexType,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::GlyphFitter::VertexType,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::GlyphFitter::VertexType,4,16> &);
public:
	ArrayPaged<Scaleform::Render::GlyphFitter::VertexType,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::GlyphFitter::VertexType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::GlyphFitter::VertexType & operator[](unsigned long long);
	const Scaleform::Render::GlyphFitter::VertexType & operator[](unsigned long long);
	Scaleform::Render::GlyphFitter::VertexType & Back();
	const Scaleform::Render::GlyphFitter::VertexType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::GlyphFitter::VertexType,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::GlyphFitter::VertexType,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::GlyphFitter::VertexType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::GlyphFitter::VertexType * * Pages; // 0x20
};
class Scaleform::Render::ArrayUnsafe<unsigned char>
{
	typedef unsigned char ValueType;
private:
	ArrayUnsafe<unsigned char>(const Scaleform::Render::ArrayUnsafe<unsigned char> &);
public:
	ArrayUnsafe<unsigned char>(Scaleform::Render::LinearHeap *);
	void ClearAndRelease();
	void Resize(unsigned long long);
	void Zero();
	unsigned long long GetSize();
	unsigned char & operator[](unsigned long long);
	const unsigned char & operator[](unsigned long long);
private:
	const Scaleform::Render::ArrayUnsafe<unsigned char> & operator=(const Scaleform::Render::ArrayUnsafe<unsigned char> &);
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned char * Array; // 0x10
};
class Scaleform::Render::ArrayUnsafe<short>
{
	typedef short ValueType;
private:
	ArrayUnsafe<short>(const Scaleform::Render::ArrayUnsafe<short> &);
public:
	ArrayUnsafe<short>(Scaleform::Render::LinearHeap *);
	void ClearAndRelease();
	void Resize(unsigned long long);
	void Zero();
	unsigned long long GetSize();
	short & operator[](unsigned long long);
	const short & operator[](unsigned long long);
private:
	const Scaleform::Render::ArrayUnsafe<short> & operator=(const Scaleform::Render::ArrayUnsafe<short> &);
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	short * Array; // 0x10
};