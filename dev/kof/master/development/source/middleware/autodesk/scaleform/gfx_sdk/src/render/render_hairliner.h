#pragma once

class Scaleform::Render::Hairliner :
	Scaleform::Render::TessBase
{
	struct SrcVertexType;
	struct OutVertexType;
	struct TriangleType;
	enum EdgeFlags_e
	{
		EndChainFlag = 1,
		EventFlag = 2,
		IntersectionFlag = 4,
	};
	enum ScanbeamFlags_e
	{
		InsertEdgesFlag = 1,
		RemoveEdgesFlag = 2,
	};
	struct PathType;
	struct SrcEdgeType;
	struct MonoChainType;
	struct IntersectionType;
	struct HorizontalEdgeType;
	struct FanEdgeType;
public:
	Hairliner(Scaleform::Render::LinearHeap *);
	void SetToleranceParam(const Scaleform::Render::ToleranceParams &);
	void SetWidth(float);
	virtual void Clear();
	virtual float GetLastX();
	virtual float GetLastY();
	virtual void AddVertex(float, float);
	virtual void ClosePath();
	virtual void FinalizePath(unsigned long, unsigned long, bool, bool);
	void Tessellate();
	virtual void Transform(const Scaleform::Render::Matrix2x4<float> &);
	virtual Scaleform::Render::Matrix2x4<float> StretchTo(float, float, float, float);
	virtual unsigned long GetVertexCount();
	virtual unsigned long GetMeshCount();
	virtual unsigned long GetMeshVertexCount(unsigned long);
	virtual unsigned long GetMeshTriangleCount(unsigned long);
	virtual void GetMesh(unsigned long, Scaleform::Render::TessMesh *);
	virtual unsigned long GetVertices(Scaleform::Render::TessMesh *, Scaleform::Render::TessVertex *, unsigned long);
	virtual void GetTrianglesI16(unsigned long, unsigned short *, unsigned long, unsigned long);
	class ChainPtrArray;
	class SrcVertexArray;
	struct CmpScanbeams;
private:
	static bool cmpMonoChains(const Scaleform::Render::Hairliner::MonoChainType *, const Scaleform::Render::Hairliner::MonoChainType *);
	static bool cmpActiveChains(const Scaleform::Render::Hairliner::MonoChainType *, const Scaleform::Render::Hairliner::MonoChainType *);
	static bool cmpIntersections(const Scaleform::Render::Hairliner::IntersectionType &, const Scaleform::Render::Hairliner::IntersectionType &);
	static bool cmpHorizontalEdges(const Scaleform::Render::Hairliner::HorizontalEdgeType &, const Scaleform::Render::Hairliner::HorizontalEdgeType &);
	static bool cmpEdges(const Scaleform::Render::Hairliner::FanEdgeType &, const Scaleform::Render::Hairliner::FanEdgeType &);
	static bool cmpNode1(const Scaleform::Render::Hairliner::FanEdgeType &, unsigned long);
	bool forwardMin(long, long);
	bool reverseMin(long, long);
	bool forwardMax(long, long);
	bool reverseMax(long, long);
	void decomposePath(const Scaleform::Render::Hairliner::PathType &);
	void buildEdgeList(unsigned long, unsigned long, long);
	float calcX(const Scaleform::Render::Hairliner::SrcEdgeType *, float);
	unsigned long nextScanbeam(float, float, unsigned long, unsigned long);
	void setupIntersections();
	unsigned long addEventVertex(const Scaleform::Render::Hairliner::MonoChainType *, float, bool);
	unsigned long addEventVertex(const Scaleform::Render::Hairliner::SrcVertexType &);
	unsigned long processHorizontalEdges(Scaleform::Render::Hairliner::MonoChainType *, unsigned long, float);
	void sweepScanbeam(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8> &, float);
	void buildGraph();
	void emitEdge(Scaleform::Render::Hairliner::HorizontalEdgeType *, unsigned long);
	void emitEdge(Scaleform::Render::Hairliner::MonoChainType *, unsigned long);
	void emitEdge(unsigned long, unsigned long);
	void processInterior(float);
	unsigned long addJoin(unsigned long, const Scaleform::Render::Hairliner::OutVertexType &, const Scaleform::Render::Hairliner::OutVertexType &, const Scaleform::Render::Hairliner::OutVertexType &, float, float, float);
	void generateTriangles(float);
	void generateContourAA(unsigned long);
	Scaleform::Render::LinearHeap * pHeap; // 0x8
	float Epsilon; // 0x10
	float IntersectionEpsilon; // 0x14
	float Width; // 0x18
	Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::PathType,4,4> Paths; // 0x20
	Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcVertexType,4,16> SrcVertices; // 0x48
	Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::OutVertexType,4,16> OutVertices; // 0x70
	Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::TriangleType,4,16> Triangles; // 0x98
	unsigned long LastVertex; // 0xC0
	Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcEdgeType,4,16> SrcEdges; // 0xC8
	Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType,4,8> MonoChains; // 0xF0
	Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8> MonoChainsSorted; // 0x118
	Scaleform::Render::ArrayPaged<unsigned int,4,16> Scanbeams; // 0x140
	Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::HorizontalEdgeType,2,4> HorizontalEdges; // 0x168
	unsigned long StartHorizontals; // 0x190
	unsigned long NumHorizontals; // 0x194
	float LastX; // 0x198
	float LastY; // 0x19C
	float MinX; // 0x1A0
	float MinY; // 0x1A4
	float MaxX; // 0x1A8
	float MaxY; // 0x1AC
	Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8> ActiveChains; // 0x1B0
	Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8> ChainsAtBottom; // 0x1D8
	Scaleform::Render::ArrayPaged<unsigned int,4,16> ValidChains; // 0x200
	Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::IntersectionType,4,4> Intersections; // 0x228
	Scaleform::Render::ArrayPaged<unsigned int,4,16> ContourNodes; // 0x250
	Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::FanEdgeType,4,16> FanEdges; // 0x278
public:
	virtual ~Hairliner();
};
struct Scaleform::Render::Hairliner::SrcVertexType
{
	float x; // 0x0
	float y; // 0x4
};
struct Scaleform::Render::Hairliner::OutVertexType
{
	float x; // 0x0
	float y; // 0x4
	unsigned long alpha; // 0x8
};
struct Scaleform::Render::Hairliner::TriangleType
{
	unsigned long v1; // 0x0
	unsigned long v2; // 0x4
	unsigned long v3; // 0x8
};
struct Scaleform::Render::Hairliner::PathType
{
	unsigned long start; // 0x0
	unsigned long end; // 0x4
};
struct Scaleform::Render::Hairliner::SrcEdgeType
{
	unsigned long lower; // 0x0
	unsigned long upper; // 0x4
	float slope; // 0x8
	Scaleform::Render::Hairliner::SrcEdgeType * next; // 0x10
};
struct Scaleform::Render::Hairliner::MonoChainType
{
	Scaleform::Render::Hairliner::SrcEdgeType * edge; // 0x0
	float ySort; // 0x8
	float xb; // 0xC
	float xt; // 0x10
	unsigned long flags; // 0x14
	unsigned long prevVertex; // 0x18
};
struct Scaleform::Render::Hairliner::IntersectionType
{
	Scaleform::Render::Hairliner::MonoChainType * mc1; // 0x0
	Scaleform::Render::Hairliner::MonoChainType * mc2; // 0x8
	float y; // 0x10
};
struct Scaleform::Render::Hairliner::HorizontalEdgeType
{
	float x1; // 0x0
	float x2; // 0x4
	float y; // 0x8
	unsigned long lv; // 0xC
	unsigned long rv; // 0x10
};
struct Scaleform::Render::Hairliner::FanEdgeType
{
	enum <unnamed-enum-Visited>
	{
		Visited = -2147483648,
	};
	unsigned long node1; // 0x0
	unsigned long node2; // 0x4
	float slope; // 0x8
};
float Scaleform::Render::Hairliner::GetLastX(); // 0x1403B9F30
float Scaleform::Render::Hairliner::GetLastY(); // 0x1403B9F60
unsigned long Scaleform::Render::Hairliner::GetMeshVertexCount(unsigned long __formal); // 0x1400477D0
unsigned long Scaleform::Render::Hairliner::GetMeshCount(); // 0x1403B9FB0
unsigned long Scaleform::Render::Hairliner::GetMeshTriangleCount(unsigned long __formal); // 0x1403B9FC0
class Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	typedef Scaleform::Render::Hairliner::MonoChainType ValueType;
private:
	ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8> &);
public:
	ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(Scaleform::Render::Hairliner::MonoChainType * &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Hairliner::MonoChainType * & operator[](unsigned long long);
	Scaleform::Render::Hairliner::MonoChainType * & operator[](unsigned long long);
	Scaleform::Render::Hairliner::MonoChainType * & Back();
	Scaleform::Render::Hairliner::MonoChainType * & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType *,4,8> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Hairliner::MonoChainType * * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Hairliner::MonoChainType * * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcVertexType,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Hairliner::SrcVertexType,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcVertexType,4,16> &);
public:
	ArrayPaged<Scaleform::Render::Hairliner::SrcVertexType,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Hairliner::SrcVertexType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Hairliner::SrcVertexType & operator[](unsigned long long);
	const Scaleform::Render::Hairliner::SrcVertexType & operator[](unsigned long long);
	Scaleform::Render::Hairliner::SrcVertexType & Back();
	const Scaleform::Render::Hairliner::SrcVertexType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcVertexType,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcVertexType,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Hairliner::SrcVertexType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Hairliner::SrcVertexType * * Pages; // 0x20
};
struct Scaleform::Render::Hairliner::CmpScanbeams
{
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcVertexType,4,16> & Ver; // 0x0
	CmpScanbeams(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcVertexType,4,16> &);
	bool operator()(unsigned long, unsigned long);
private:
	void operator=(Scaleform::Render::Hairliner::CmpScanbeams &);
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::PathType,4,4>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Hairliner::PathType,4,4>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::PathType,4,4> &);
public:
	ArrayPaged<Scaleform::Render::Hairliner::PathType,4,4>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Hairliner::PathType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Hairliner::PathType & operator[](unsigned long long);
	const Scaleform::Render::Hairliner::PathType & operator[](unsigned long long);
	Scaleform::Render::Hairliner::PathType & Back();
	const Scaleform::Render::Hairliner::PathType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::PathType,4,4> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::PathType,4,4> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Hairliner::PathType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Hairliner::PathType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::OutVertexType,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Hairliner::OutVertexType,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::OutVertexType,4,16> &);
public:
	ArrayPaged<Scaleform::Render::Hairliner::OutVertexType,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Hairliner::OutVertexType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Hairliner::OutVertexType & operator[](unsigned long long);
	const Scaleform::Render::Hairliner::OutVertexType & operator[](unsigned long long);
	Scaleform::Render::Hairliner::OutVertexType & Back();
	const Scaleform::Render::Hairliner::OutVertexType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::OutVertexType,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::OutVertexType,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Hairliner::OutVertexType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Hairliner::OutVertexType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::TriangleType,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Hairliner::TriangleType,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::TriangleType,4,16> &);
public:
	ArrayPaged<Scaleform::Render::Hairliner::TriangleType,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Hairliner::TriangleType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Hairliner::TriangleType & operator[](unsigned long long);
	const Scaleform::Render::Hairliner::TriangleType & operator[](unsigned long long);
	Scaleform::Render::Hairliner::TriangleType & Back();
	const Scaleform::Render::Hairliner::TriangleType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::TriangleType,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::TriangleType,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Hairliner::TriangleType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Hairliner::TriangleType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcEdgeType,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Hairliner::SrcEdgeType,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcEdgeType,4,16> &);
public:
	ArrayPaged<Scaleform::Render::Hairliner::SrcEdgeType,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Hairliner::SrcEdgeType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Hairliner::SrcEdgeType & operator[](unsigned long long);
	const Scaleform::Render::Hairliner::SrcEdgeType & operator[](unsigned long long);
	Scaleform::Render::Hairliner::SrcEdgeType & Back();
	const Scaleform::Render::Hairliner::SrcEdgeType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcEdgeType,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcEdgeType,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Hairliner::SrcEdgeType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Hairliner::SrcEdgeType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType,4,8>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Hairliner::MonoChainType,4,8>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType,4,8> &);
public:
	ArrayPaged<Scaleform::Render::Hairliner::MonoChainType,4,8>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Hairliner::MonoChainType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Hairliner::MonoChainType & operator[](unsigned long long);
	const Scaleform::Render::Hairliner::MonoChainType & operator[](unsigned long long);
	Scaleform::Render::Hairliner::MonoChainType & Back();
	const Scaleform::Render::Hairliner::MonoChainType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType,4,8> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType,4,8> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Hairliner::MonoChainType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Hairliner::MonoChainType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<unsigned int,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	typedef unsigned long ValueType;
private:
	ArrayPaged<unsigned int,4,16>(const Scaleform::Render::ArrayPaged<unsigned int,4,16> &);
public:
	ArrayPaged<unsigned int,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const unsigned long &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	unsigned long & operator[](unsigned long long);
	const unsigned long & operator[](unsigned long long);
	unsigned long & Back();
	const unsigned long & Back();
private:
	const Scaleform::Render::ArrayPaged<unsigned int,4,16> & operator=(const Scaleform::Render::ArrayPaged<unsigned int,4,16> &);
	void allocPage(unsigned long long);
	unsigned long * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	unsigned long * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::HorizontalEdgeType,2,4>
{
	enum PageScale_e
	{
		PageShift = 2,
		PageSize = 4,
		PageMask = 3,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Hairliner::HorizontalEdgeType,2,4>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::HorizontalEdgeType,2,4> &);
public:
	ArrayPaged<Scaleform::Render::Hairliner::HorizontalEdgeType,2,4>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Hairliner::HorizontalEdgeType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Hairliner::HorizontalEdgeType & operator[](unsigned long long);
	const Scaleform::Render::Hairliner::HorizontalEdgeType & operator[](unsigned long long);
	Scaleform::Render::Hairliner::HorizontalEdgeType & Back();
	const Scaleform::Render::Hairliner::HorizontalEdgeType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::HorizontalEdgeType,2,4> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::HorizontalEdgeType,2,4> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Hairliner::HorizontalEdgeType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Hairliner::HorizontalEdgeType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::IntersectionType,4,4>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Hairliner::IntersectionType,4,4>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::IntersectionType,4,4> &);
public:
	ArrayPaged<Scaleform::Render::Hairliner::IntersectionType,4,4>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Hairliner::IntersectionType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Hairliner::IntersectionType & operator[](unsigned long long);
	const Scaleform::Render::Hairliner::IntersectionType & operator[](unsigned long long);
	Scaleform::Render::Hairliner::IntersectionType & Back();
	const Scaleform::Render::Hairliner::IntersectionType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::IntersectionType,4,4> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::IntersectionType,4,4> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Hairliner::IntersectionType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Hairliner::IntersectionType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::FanEdgeType,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Hairliner::FanEdgeType,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::FanEdgeType,4,16> &);
public:
	ArrayPaged<Scaleform::Render::Hairliner::FanEdgeType,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Hairliner::FanEdgeType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Hairliner::FanEdgeType & operator[](unsigned long long);
	const Scaleform::Render::Hairliner::FanEdgeType & operator[](unsigned long long);
	Scaleform::Render::Hairliner::FanEdgeType & Back();
	const Scaleform::Render::Hairliner::FanEdgeType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::FanEdgeType,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::FanEdgeType,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Hairliner::FanEdgeType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Hairliner::FanEdgeType * * Pages; // 0x20
};
void Scaleform::Render::Hairliner::AddVertex(float x, float y); // 0x1403B9BF0