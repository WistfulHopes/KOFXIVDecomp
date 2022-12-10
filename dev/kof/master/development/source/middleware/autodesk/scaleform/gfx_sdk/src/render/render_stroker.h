#pragma once

struct Scaleform::Render::StrokeVertex
{
	float x; // 0x0
	float y; // 0x4
	float dist; // 0x8
	StrokeVertex(float, float);
	StrokeVertex();
	bool Distance(const Scaleform::Render::StrokeVertex &);
};
class Scaleform::Render::StrokePath
{
	typedef float CoordType;
	class ContainerType;
private:
	StrokePath(const Scaleform::Render::StrokePath &);
public:
	StrokePath(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	float GetLastX();
	float GetLastY();
	void AddVertex(const Scaleform::Render::StrokeVertex &);
	bool ClosePath();
	unsigned long long GetVertexCount();
	const Scaleform::Render::StrokeVertex & GetVertexPrev(unsigned long long);
	Scaleform::Render::StrokeVertex & GetVertex(unsigned long long);
	const Scaleform::Render::StrokeVertex & GetVertex(unsigned long long);
	const Scaleform::Render::StrokeVertex & GetVertexNext(unsigned long long);
	const Scaleform::Render::StrokeVertex & GetVertexForw(unsigned long long);
private:
	Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16> Path; // 0x0
	void operator=(Scaleform::Render::StrokePath &);
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::StrokeVertex,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16> &);
public:
	ArrayPaged<Scaleform::Render::StrokeVertex,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::StrokeVertex &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::StrokeVertex & operator[](unsigned long long);
	const Scaleform::Render::StrokeVertex & operator[](unsigned long long);
	Scaleform::Render::StrokeVertex & Back();
	const Scaleform::Render::StrokeVertex & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::StrokeVertex * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::StrokeVertex * * Pages; // 0x20
};
class Scaleform::Render::StrokerTypes
{
	enum LineCapType
	{
		ButtCap = 0,
		SquareCap = 1,
		RoundCap = 2,
	};
	enum LineJoinType
	{
		MiterJoin = 0,
		MiterBevelJoin = 1,
		RoundJoin = 2,
		BevelJoin = 3,
	};
	enum EquidistantDir
	{
		DirForward = 0,
		DirBackward = 1,
	};
};
class Scaleform::Render::Stroker :
	Scaleform::Render::StrokerTypes,
	Scaleform::Render::TessBase
{
	typedef float CoordType;
private:
	Stroker(const Scaleform::Render::Stroker &);
public:
	Stroker(Scaleform::Render::LinearHeap *);
	void SetToleranceParam(const Scaleform::Render::ToleranceParams &);
	void SetWidth(float);
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
	void GenerateStroke(Scaleform::Render::TessBase *);
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
	void CalcEquidistant(Scaleform::Render::TessBase *, Scaleform::Render::StrokerTypes::EquidistantDir);
private:
	void operator=(Scaleform::Render::Stroker &);
	void generateStroke(Scaleform::Render::TessBase *, unsigned long long, unsigned long long, bool);
	void calcArc(Scaleform::Render::TessBase *, float, float, float, float, float, float);
	void calcMiter(Scaleform::Render::TessBase *, const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokeVertex &, float, float, float, float, Scaleform::Render::StrokerTypes::LineJoinType, float, float, float);
	void calcCap(Scaleform::Render::TessBase *, const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokeVertex &, float, Scaleform::Render::StrokerTypes::LineCapType);
	void calcJoin(Scaleform::Render::TessBase *, const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokeVertex &, const Scaleform::Render::StrokeVertex &, float, float);
	Scaleform::Render::LinearHeap * pHeap; // 0x8
	Scaleform::Render::StrokePath Path; // 0x10
	float Width; // 0x38
	Scaleform::Render::StrokerTypes::LineJoinType LineJoin; // 0x3C
	Scaleform::Render::StrokerTypes::LineCapType StartLineCap; // 0x40
	Scaleform::Render::StrokerTypes::LineCapType EndLineCap; // 0x44
	float MiterLimit; // 0x48
	float CurveTolerance; // 0x4C
	float IntersectionEpsilon; // 0x50
	bool Closed; // 0x54
public:
	virtual ~Stroker();
};
float Scaleform::Render::Stroker::GetLastX(); // 0x14039FC00
float Scaleform::Render::Stroker::GetLastY(); // 0x14039FC60
void Scaleform::Render::StrokeSorter::ClosePath(); // 0x14002E7C0
Scaleform::Render::Matrix2x4<float> Scaleform::Render::StrokeSorter::StretchTo(float __formal, float __formal, float __formal, float __formal); // 0x140378C50
unsigned long Scaleform::Render::StrokeSorter::GetMeshCount(); // 0x1400470F0
void Scaleform::Render::Stroker::AddVertex(float x, float y); // 0x14039E970
class Scaleform::Render::StrokeScaler :
	Scaleform::Render::TessBase
{
private:
	Scaleform::Render::Stroker & Str; // 0x8
	float ScaleX; // 0x10
	float ScaleY; // 0x14
	float LastX; // 0x18
	float LastY; // 0x1C
public:
	StrokeScaler(const Scaleform::Render::StrokeScaler &);
	StrokeScaler(Scaleform::Render::Stroker &, float, float);
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
private:
	void operator=(Scaleform::Render::StrokeScaler &);
public:
	virtual ~StrokeScaler();
};
float Scaleform::Render::StrokeScaler::GetLastX(); // 0x140377580
float Scaleform::Render::StrokeScaler::GetLastY(); // 0x140377590
void Scaleform::Render::StrokeScaler::AddVertex(float x, float y); // 0x140376180
Scaleform::Render::Matrix2x4<float> Scaleform::Render::StrokeScaler::StretchTo(float __formal, float __formal, float __formal, float __formal); // 0x140378C50
unsigned long Scaleform::Render::StrokeScaler::GetMeshCount(); // 0x1400470F0
class Scaleform::Render::StrokeSorter :
	Scaleform::Render::TessBase
{
	enum <unnamed-enum-NumVerMask>
	{
		NumVerMask = 268435455,
		VisitedFlag = 1073741824,
		ClosedFlag = 536870912,
	};
	struct PathType;
	struct SortedPathType;
	typedef float CoordType;
	struct VertexType;
	class VertexArrayType;
	class PathArrayType;
public:
	StrokeSorter(Scaleform::Render::LinearHeap *);
	virtual void Clear();
	virtual float GetLastX();
	virtual float GetLastY();
	virtual void AddVertex(float, float);
	virtual void FinalizePath(unsigned long, unsigned long, bool, bool);
	virtual void ClosePath();
	void Transform(const Scaleform::Render::TransformerBase *);
	virtual void Transform(const Scaleform::Render::Matrix2x4<float> &);
	virtual Scaleform::Render::Matrix2x4<float> StretchTo(float, float, float, float);
	unsigned long GetVertexCount(unsigned long);
	virtual unsigned long GetVertexCount();
	virtual unsigned long GetMeshCount();
	virtual unsigned long GetMeshVertexCount(unsigned long);
	virtual unsigned long GetMeshTriangleCount(unsigned long);
	virtual void GetMesh(unsigned long, Scaleform::Render::TessMesh *);
	virtual unsigned long GetVertices(Scaleform::Render::TessMesh *, Scaleform::Render::TessVertex *, unsigned long);
	virtual void GetTrianglesI16(unsigned long, unsigned short *, unsigned long, unsigned long);
	void AddVertexNV(float, float, unsigned long);
	void AddQuad(float, float, float, float);
	void AddCubic(float, float, float, float, float, float);
	void Sort();
	void AddOffset(float, float);
	void Snap(float, float);
	void GenerateDashes(const Scaleform::Render::DashArray *, const Scaleform::Render::ToleranceParams &, float);
	unsigned long GetPathCount();
	bool IsClosed(unsigned long);
	const Scaleform::Render::StrokeSorter::VertexType & GetVertex(unsigned long, unsigned long);
private:
	static bool cmpPaths(const Scaleform::Render::StrokeSorter::SortedPathType &, const Scaleform::Render::StrokeSorter::SortedPathType &);
	void appendPath(Scaleform::Render::StrokeSorter::PathType *, Scaleform::Render::StrokeSorter::PathType *);
	unsigned long findNext(const Scaleform::Render::StrokeSorter::PathType &);
	Scaleform::Render::StrokeSorter::VertexType * getVertex(unsigned long, unsigned long);
	Scaleform::Render::LinearHeap * pHeap; // 0x8
	Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeSorter::VertexType,4,16> SrcVertices; // 0x10
	Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeSorter::PathType,4,16> SrcPaths; // 0x38
	Scaleform::Render::ArrayUnsafe<Scaleform::Render::StrokeSorter::SortedPathType> SortedPaths; // 0x60
	Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeSorter::VertexType,4,16> OutVertices; // 0x78
	Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeSorter::PathType,4,16> OutPaths; // 0xA0
	unsigned long LastVertex; // 0xC8
public:
	virtual ~StrokeSorter();
};
struct Scaleform::Render::StrokeSorter::PathType
{
	unsigned long start; // 0x0
	unsigned long numVer; // 0x4
};
struct Scaleform::Render::StrokeSorter::SortedPathType
{
	float x; // 0x0
	float y; // 0x4
	Scaleform::Render::StrokeSorter::PathType * thisPath; // 0x8
};
struct Scaleform::Render::StrokeSorter::VertexType
{
	float x; // 0x0
	float y; // 0x4
	float Dist; // 0x8
	unsigned char segType; // 0xC
	bool snapX; // 0xD
	bool snapY; // 0xE
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeSorter::VertexType,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::StrokeSorter::VertexType,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeSorter::VertexType,4,16> &);
public:
	ArrayPaged<Scaleform::Render::StrokeSorter::VertexType,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::StrokeSorter::VertexType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::StrokeSorter::VertexType & operator[](unsigned long long);
	const Scaleform::Render::StrokeSorter::VertexType & operator[](unsigned long long);
	Scaleform::Render::StrokeSorter::VertexType & Back();
	const Scaleform::Render::StrokeSorter::VertexType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeSorter::VertexType,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeSorter::VertexType,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::StrokeSorter::VertexType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::StrokeSorter::VertexType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeSorter::PathType,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::StrokeSorter::PathType,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeSorter::PathType,4,16> &);
public:
	ArrayPaged<Scaleform::Render::StrokeSorter::PathType,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::StrokeSorter::PathType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::StrokeSorter::PathType & operator[](unsigned long long);
	const Scaleform::Render::StrokeSorter::PathType & operator[](unsigned long long);
	Scaleform::Render::StrokeSorter::PathType & Back();
	const Scaleform::Render::StrokeSorter::PathType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeSorter::PathType,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeSorter::PathType,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::StrokeSorter::PathType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::StrokeSorter::PathType * * Pages; // 0x20
};
float Scaleform::Render::StrokeSorter::GetLastX(); // 0x14039FBD0
float Scaleform::Render::StrokeSorter::GetLastY(); // 0x14039FC30
bool Scaleform::Render::StrokeSorter::cmpPaths(const Scaleform::Render::StrokeSorter::SortedPathType & a, const Scaleform::Render::StrokeSorter::SortedPathType & b); // 0x1403A13D0
class Scaleform::Render::ArrayUnsafe<Scaleform::Render::StrokeSorter::SortedPathType>
{
	struct ValueType;
private:
	ArrayUnsafe<Scaleform::Render::StrokeSorter::SortedPathType>(const Scaleform::Render::ArrayUnsafe<Scaleform::Render::StrokeSorter::SortedPathType> &);
public:
	ArrayUnsafe<Scaleform::Render::StrokeSorter::SortedPathType>(Scaleform::Render::LinearHeap *);
	void ClearAndRelease();
	void Resize(unsigned long long);
	void Zero();
	unsigned long long GetSize();
	Scaleform::Render::StrokeSorter::SortedPathType & operator[](unsigned long long);
	const Scaleform::Render::StrokeSorter::SortedPathType & operator[](unsigned long long);
private:
	const Scaleform::Render::ArrayUnsafe<Scaleform::Render::StrokeSorter::SortedPathType> & operator=(const Scaleform::Render::ArrayUnsafe<Scaleform::Render::StrokeSorter::SortedPathType> &);
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	Scaleform::Render::StrokeSorter::SortedPathType * Array; // 0x10
};
class Scaleform::Render::DashGenerator
{
	enum DashStatus
	{
		Status_Ready = 0,
		Status_Polyline = 1,
		Status_Stop = 2,
	};
private:
	DashGenerator(const Scaleform::Render::DashGenerator &);
public:
	DashGenerator(const float *, unsigned long, float, Scaleform::Render::StrokeSorter::VertexType *, unsigned long, bool);
	unsigned long GetVertex(float *, float *);
private:
	const Scaleform::Render::DashGenerator & operator=(const Scaleform::Render::DashGenerator &);
	const float * pDashArray; // 0x0
	unsigned long DashCount; // 0x8
	float DashStart; // 0xC
	unsigned long CurrDash; // 0x10
	float CurrRest; // 0x14
	float CurrDashStart; // 0x18
	Scaleform::Render::StrokeSorter::VertexType * Vertices; // 0x20
	unsigned long VerCount; // 0x28
	const Scaleform::Render::StrokeSorter::VertexType * Ver1; // 0x30
	const Scaleform::Render::StrokeSorter::VertexType * Ver2; // 0x38
	bool Closed; // 0x40
	Scaleform::Render::DashGenerator::DashStatus Status; // 0x44
	unsigned long SrcVertex; // 0x48
};