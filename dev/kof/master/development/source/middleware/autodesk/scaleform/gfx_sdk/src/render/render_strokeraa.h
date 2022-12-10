#pragma once

class Scaleform::Render::StrokerAA :
	Scaleform::Render::StrokerTypes,
	Scaleform::Render::TessBase
{
	struct VertexType;
	struct TriangleType;
public:
	StrokerAA(Scaleform::Render::LinearHeap *);
	void SetToleranceParam(const Scaleform::Render::ToleranceParams &);
	void SetStyleLeft(long);
	void SetStyleRight(long);
	void SetSolidWidth(float);
	void SetSolidWidthLeft(float);
	void SetSolidWidthRight(float);
	void SetEdgeAAWidth(float);
	void SetEdgeAAWidthLeft(float);
	void SetEdgeAAWidthRight(float);
	void SetLineJoin(Scaleform::Render::StrokerTypes::LineJoinType);
	void SetLineCap(Scaleform::Render::StrokerTypes::LineCapType);
	void SetStartLineCap(Scaleform::Render::StrokerTypes::LineCapType);
	void SetEndLineCap(Scaleform::Render::StrokerTypes::LineCapType);
	void SetMiterLimit(float);
	virtual void Clear();
	virtual float GetLastX();
	virtual float GetLastY();
	virtual void AddVertex(float, float);
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
	enum VertexMarkers
	{
		MarkerSolidL = 252,
		MarkerSolidR = 253,
		MarkerTotalL = 254,
		MarkerTotalR = 255,
	};
	struct WidthsType;
	struct JoinParamType;
private:
	unsigned long addVertex(float, float, unsigned long, unsigned long);
	void addTriangle(unsigned long, unsigned long, unsigned long);
	void calcWidths(Scaleform::Render::StrokerAA::WidthsType &);
	void calcButtCap(const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokeVertex &, float, const Scaleform::Render::StrokerAA::WidthsType &, bool);
	void calcRoundCap(const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokeVertex &, float, const Scaleform::Render::StrokerAA::WidthsType &, bool);
	void calcCap(const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokeVertex &, float, const Scaleform::Render::StrokerAA::WidthsType &, bool);
	void calcRoundJoin(const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokerAA::WidthsType &, const Scaleform::Render::StrokerAA::JoinParamType &);
	void calcBevelJoin(const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokerAA::WidthsType &, const Scaleform::Render::StrokerAA::JoinParamType &, Scaleform::Render::StrokerTypes::LineJoinType);
	void calcMiterJoin(const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokerAA::WidthsType &, const Scaleform::Render::StrokerAA::JoinParamType &, Scaleform::Render::StrokerTypes::LineJoinType);
	static bool MitersIntersect(float, float, float, float, float, float, float, float, float);
	void calcJoinParam(const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokerAA::WidthsType &, Scaleform::Render::StrokerAA::JoinParamType &);
	void calcInitialJoinParam(const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokerAA::WidthsType &, Scaleform::Render::StrokerAA::JoinParamType &);
	void calcJoin(const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokerAA::WidthsType &, Scaleform::Render::StrokerAA::JoinParamType &);
	void calcButtJoin(const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokeVertex &, float, const Scaleform::Render::StrokerAA::WidthsType &);
	Scaleform::Render::StrokerTypes::LineJoinType LineJoin; // 0x8
	Scaleform::Render::StrokerTypes::LineCapType StartLineCap; // 0xC
	Scaleform::Render::StrokerTypes::LineCapType EndLineCap; // 0x10
	float MiterLimit; // 0x14
	unsigned long StyleLeft; // 0x18
	unsigned long StyleRight; // 0x1C
	float WidthLeft; // 0x20
	float WidthRight; // 0x24
	float AaWidthLeft; // 0x28
	float AaWidthRight; // 0x2C
	float Tolerance; // 0x30
	float IntersectionEpsilon; // 0x34
	bool Closed; // 0x38
	Scaleform::Render::StrokePath Path; // 0x40
	Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> Vertices; // 0x68
	Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::TriangleType,4,16> Triangles; // 0x90
	unsigned long SolidL; // 0xB8
	unsigned long SolidR; // 0xBC
	unsigned long TotalL; // 0xC0
	unsigned long TotalR; // 0xC4
	float MinX; // 0xC8
	float MinY; // 0xCC
	float MaxX; // 0xD0
	float MaxY; // 0xD4
public:
	virtual ~StrokerAA();
};
struct Scaleform::Render::StrokerAA::VertexType
{
	float x; // 0x0
	float y; // 0x4
	unsigned short style; // 0x8
	unsigned short alpha; // 0xA
	VertexType(float, float, unsigned long, unsigned long);
	VertexType();
};
struct Scaleform::Render::StrokerAA::TriangleType
{
	unsigned long v1; // 0x0
	unsigned long v2; // 0x4
	unsigned long v3; // 0x8
};
float Scaleform::Render::StrokerAA::GetLastX(); // 0x1403B4980
float Scaleform::Render::StrokerAA::GetLastY(); // 0x1403B49B0
unsigned long Scaleform::Render::StrokerAA::GetMeshCount(); // 0x1403B4A00
unsigned long Scaleform::Render::StrokerAA::GetMeshVertexCount(unsigned long __formal); // 0x140047560
unsigned long Scaleform::Render::StrokerAA::GetMeshTriangleCount(unsigned long __formal); // 0x1403B4A10
struct Scaleform::Render::StrokerAA::WidthsType
{
	float solidWidthL; // 0x0
	float solidWidthR; // 0x4
	float solidWidth; // 0x8
	float totalWidthL; // 0xC
	float totalWidthR; // 0x10
	float totalWidth; // 0x14
	float widthCoeff; // 0x18
	float solidCoeffL; // 0x1C
	float solidCoeffR; // 0x20
	float solidLimitL; // 0x24
	float solidLimitR; // 0x28
	float totalLimitL; // 0x2C
	float totalLimitR; // 0x30
	bool solidFlagL; // 0x34
	bool solidFlagR; // 0x35
	bool aaFlagL; // 0x36
	bool aaFlagR; // 0x37
	bool solidFlag; // 0x38
	bool rightSideCalc; // 0x39
	WidthsType();
};
struct Scaleform::Render::StrokerAA::JoinParamType
{
	float dx1SolidL; // 0x0
	float dy1SolidL; // 0x4
	float dx1TotalL; // 0x8
	float dy1TotalL; // 0xC
	float dx2SolidL; // 0x10
	float dy2SolidL; // 0x14
	float dx2TotalL; // 0x18
	float dy2TotalL; // 0x1C
	float dx3SolidL; // 0x20
	float dy3SolidL; // 0x24
	float dx3TotalL; // 0x28
	float dy3TotalL; // 0x2C
	float dx1SolidR; // 0x30
	float dy1SolidR; // 0x34
	float dx1TotalR; // 0x38
	float dy1TotalR; // 0x3C
	float dx2SolidR; // 0x40
	float dy2SolidR; // 0x44
	float dx2TotalR; // 0x48
	float dy2TotalR; // 0x4C
	float dx3SolidR; // 0x50
	float dy3SolidR; // 0x54
	float dx3TotalR; // 0x58
	float dy3TotalR; // 0x5C
	float dbSolidL; // 0x60
	float dbTotalL; // 0x64
	float dbSolidR; // 0x68
	float dbTotalR; // 0x6C
	float xMiterPrevL; // 0x70
	float yMiterPrevL; // 0x74
	float xMiterPrevR; // 0x78
	float yMiterPrevR; // 0x7C
	float dMiterPrevL; // 0x80
	float dMiterPrevR; // 0x84
	float xMiterThisL; // 0x88
	float yMiterThisL; // 0x8C
	float xMiterThisR; // 0x90
	float yMiterThisR; // 0x94
	float dMiterThisL; // 0x98
	float dMiterThisR; // 0x9C
	float xMiterNextL; // 0xA0
	float yMiterNextL; // 0xA4
	float xMiterNextR; // 0xA8
	float yMiterNextR; // 0xAC
	float dMiterNextL; // 0xB0
	float dMiterNextR; // 0xB4
	float xSolidMiterL; // 0xB8
	float ySolidMiterL; // 0xBC
	float xSolidMiterR; // 0xC0
	float ySolidMiterR; // 0xC4
	float dSolidMiterL; // 0xC8
	float dSolidMiterR; // 0xCC
	bool badMiterPrevL; // 0xD0
	bool badMiterPrevR; // 0xD1
	bool badMiterThisL; // 0xD2
	bool badMiterThisR; // 0xD3
	bool badMiterNextL; // 0xD4
	bool badMiterNextR; // 0xD5
	bool rightTurnPrev; // 0xD6
	bool rightTurnThis; // 0xD7
	bool rightTurnNext; // 0xD8
	bool overlapPrev; // 0xD9
	bool overlapThis; // 0xDA
	JoinParamType();
};
unsigned long Scaleform::Render::StrokerAA::addVertex(float x, float y, unsigned long style, unsigned long alpha); // 0x1403B5370
void Scaleform::Render::StrokerAA::addTriangle(unsigned long v1, unsigned long v2, unsigned long v3); // 0x1403B5300
class Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> &);
public:
	ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::StrokerAA::VertexType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::StrokerAA::VertexType & operator[](unsigned long long);
	const Scaleform::Render::StrokerAA::VertexType & operator[](unsigned long long);
	Scaleform::Render::StrokerAA::VertexType & Back();
	const Scaleform::Render::StrokerAA::VertexType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::VertexType,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::StrokerAA::VertexType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::StrokerAA::VertexType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::TriangleType,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::StrokerAA::TriangleType,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::TriangleType,4,16> &);
public:
	ArrayPaged<Scaleform::Render::StrokerAA::TriangleType,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::StrokerAA::TriangleType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::StrokerAA::TriangleType & operator[](unsigned long long);
	const Scaleform::Render::StrokerAA::TriangleType & operator[](unsigned long long);
	Scaleform::Render::StrokerAA::TriangleType & Back();
	const Scaleform::Render::StrokerAA::TriangleType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::TriangleType,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::TriangleType,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::StrokerAA::TriangleType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::StrokerAA::TriangleType * * Pages; // 0x20
};
void Scaleform::Render::StrokerAA::AddVertex(float x, float y); // 0x1403B3EA0