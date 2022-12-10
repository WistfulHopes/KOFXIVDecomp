#pragma once

class Scaleform::Render::Tessellator :
	Scaleform::Render::TessBase
{
	enum FillRuleType
	{
		FillNonZero = 0,
		FillEvenOdd = 1,
		FillStroker = 2,
	};
	struct SrcVertexType;
	struct MonoVertexType;
	struct TriangleType;
	enum EdgeFlags_e
	{
		EndChainFlag = 2,
		VisibleChain = 4,
		EventFlag = 8,
		HasIntersection = 16,
	};
	enum ScanbeamFlags_e
	{
		InsertEdgesFlag = 1,
		RemoveEdgesFlag = 2,
	};
	enum ChainFlagAtScanline_e
	{
		ChainContinuesAtScanline = 1,
		ChainStartsAtScanline = 2,
		ChainEndsAtScanline = 3,
	};
	enum <unnamed-enum-LeftFlag>
	{
		LeftFlag = -2147483648,
		VisitedFlag = 1073741824,
	};
private:
	static bool isLeft(unsigned long);
	static bool isRight(unsigned long);
	static unsigned long verIdx(unsigned long);
	static unsigned short styleIdx(unsigned long);
	static unsigned long styleIsLeft(unsigned long);
	unsigned long isComplex(unsigned long, unsigned long);
	enum PathShapeType
	{
		PathShape_Generic = 0,
		PathShape_Triangle = 1,
		PathShape_Quadrangle = 2,
	};
	struct PathType;
	struct EdgeType;
	struct MonoChainType;
	struct IntersectionType;
	struct BaseLineType;
	struct MonotoneType;
	struct ScanChainType;
	struct PendingEndType;
	struct EdgeAAType;
	struct TmpEdgeAAType;
	struct InnerQuadType;
	struct OuterEdgeType;
	struct StrokerEdgeType;
	struct StarVertexType;
public:
	Tessellator(Scaleform::Render::LinearHeap *, Scaleform::Render::LinearHeap *);
	void SetFillRule(Scaleform::Render::Tessellator::FillRuleType);
	void SetToleranceParam(const Scaleform::Render::ToleranceParams &);
	void SetEdgeAAWidth(float);
	void EnableInvasiveMerge(bool);
	void SetVertexLimit(unsigned long);
	unsigned long GetVertexLimit();
	virtual void Clear();
	virtual float GetLastX();
	virtual float GetLastY();
	virtual void AddVertex(float, float);
	virtual void ClosePath();
	virtual void FinalizePath(unsigned long, unsigned long, bool, bool);
	void PopLastVertex();
	void GetSrcBounds(float *, float *, float *, float *);
	void Tessellate(bool);
	void SplitMeshes();
	virtual void Transform(const Scaleform::Render::Matrix2x4<float> &);
	virtual Scaleform::Render::Matrix2x4<float> StretchTo(float, float, float, float);
	virtual unsigned long GetMeshCount();
	virtual unsigned long GetMeshVertexCount(unsigned long);
	virtual unsigned long GetMeshTriangleCount(unsigned long);
	virtual void GetMesh(unsigned long, Scaleform::Render::TessMesh *);
	virtual unsigned long GetVertices(Scaleform::Render::TessMesh *, Scaleform::Render::TessVertex *, unsigned long);
	virtual void GetTrianglesI16(unsigned long, unsigned short *, unsigned long, unsigned long);
	void SortTrianglesByVertex1(unsigned long);
	virtual unsigned long GetVertexCount();
	const Scaleform::Render::TessVertex & GetVertex(unsigned long);
	Scaleform::Render::Tessellator::TriangleType & GetTriangle(unsigned long, unsigned long);
	const Scaleform::Render::Tessellator::TriangleType & GetTriangle(unsigned long, unsigned long);
	unsigned long GetSrcVertexCount();
	const Scaleform::Render::Tessellator::SrcVertexType & GetSrcVertex(unsigned long);
	class SrcVertexArray;
	class MeshVertexArray;
	class ChainPtrArray;
	class ScanChainArray;
	class PendingEndArray;
	class ChainVertexArray;
	class TriangleArray;
	class EdgeFanArray;
private:
	bool haveSpecialCase();
	bool handleSpecialCase();
	void prepareSpecialCaseMeshes(unsigned long, unsigned long);
	bool createMeshForTriangle(const Scaleform::Render::Tessellator::PathType &);
	bool createMeshForQuad(const Scaleform::Render::Tessellator::PathType &);
	void clearHeap1();
	void monotonize();
	struct CmpScanbeams;
	static bool cmpMonoChains(const Scaleform::Render::Tessellator::MonoChainType *, const Scaleform::Render::Tessellator::MonoChainType *);
	static bool cmpActiveChains(const Scaleform::Render::Tessellator::MonoChainType *, const Scaleform::Render::Tessellator::MonoChainType *);
	static bool cmpIntersectionY(const Scaleform::Render::Tessellator::IntersectionType &, const Scaleform::Render::Tessellator::IntersectionType &);
	struct CmpVer1;
	bool forwardMin(long, long);
	bool reverseMin(long, long);
	bool forwardMax(long, long);
	bool reverseMax(long, long);
	void buildEdgeList(unsigned long, unsigned long, long, unsigned long, unsigned long);
	void decomposePath(const Scaleform::Render::Tessellator::PathType &);
	void addStyle(unsigned long, bool);
	void incStyles(const Scaleform::Render::Tessellator::MonoChainType *);
	unsigned short findElderStyle();
	void perceiveStyles(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType *,4,8> &);
	float calcX(const Scaleform::Render::Tessellator::EdgeType *, float);
	unsigned long nextScanbeam(float, float, unsigned long, unsigned long);
	void setupIntersections();
	unsigned long addEventVertex(const Scaleform::Render::Tessellator::MonoChainType *, float, bool);
	unsigned long addEventVertex(const Scaleform::Render::Tessellator::SrcVertexType &);
	void addPendingEnd(Scaleform::Render::Tessellator::ScanChainType *, Scaleform::Render::Tessellator::ScanChainType *, float);
	unsigned long lastMonoVertex(const Scaleform::Render::Tessellator::MonotoneType *);
	void removeLastMonoVertex(Scaleform::Render::Tessellator::MonotoneType *);
	static void resetMonotone(Scaleform::Render::Tessellator::MonotoneType *, unsigned long);
	void startMonotone(Scaleform::Render::Tessellator::ScanChainType *, unsigned long);
	Scaleform::Render::Tessellator::MonotoneType * startMonotone(unsigned long);
	void replaceMonotone(Scaleform::Render::Tessellator::PendingEndType *, unsigned long);
	void replaceMonotone(Scaleform::Render::Tessellator::ScanChainType *, unsigned long);
	static long pendingMonotoneStyle(const Scaleform::Render::Tessellator::PendingEndType *);
	static long startingMonotoneStyle(const Scaleform::Render::Tessellator::ScanChainType *);
	void connectPendingToLeft(Scaleform::Render::Tessellator::ScanChainType *, unsigned long);
	void connectPendingToRight(Scaleform::Render::Tessellator::ScanChainType *, unsigned long);
	void connectStartingToPending(Scaleform::Render::Tessellator::ScanChainType *, Scaleform::Render::Tessellator::BaseLineType *);
	void connectStartingToLeft(Scaleform::Render::Tessellator::ScanChainType *, Scaleform::Render::Tessellator::BaseLineType *, unsigned long);
	void connectStartingToRight(Scaleform::Render::Tessellator::ScanChainType *, Scaleform::Render::Tessellator::BaseLineType *, unsigned long);
	void connectStarting(Scaleform::Render::Tessellator::ScanChainType *, Scaleform::Render::Tessellator::BaseLineType *);
	void growMonotone(Scaleform::Render::Tessellator::ScanChainType *, unsigned long);
	void growMonotone(Scaleform::Render::Tessellator::MonotoneType *, unsigned long, unsigned long);
	void growMonotone(Scaleform::Render::Tessellator::MonotoneType *, unsigned long);
	unsigned long nextChainInBundle(unsigned long, unsigned long, unsigned long);
	void sweepScanbeam(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType *,4,8> &, float);
	void swapChains(unsigned long, unsigned long);
	void processInterior(float, float, unsigned long);
	unsigned long setMesh(unsigned long, unsigned long);
	unsigned long setMesh(unsigned long);
	unsigned long emitVertex(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, bool);
	unsigned long emitVertex(unsigned long, unsigned long, unsigned long, unsigned long);
	void splitMesh(Scaleform::Render::TessMesh *);
	static bool cmpEdgeAA(const Scaleform::Render::Tessellator::TmpEdgeAAType &, const Scaleform::Render::Tessellator::TmpEdgeAAType &);
	static bool cmpOuterEdges(const Scaleform::Render::Tessellator::OuterEdgeType &, const Scaleform::Render::Tessellator::OuterEdgeType &);
	static bool cmpStrokerEdges(const Scaleform::Render::Tessellator::StrokerEdgeType &, const Scaleform::Render::Tessellator::StrokerEdgeType &);
	static bool cmpStrokerNode1(const Scaleform::Render::Tessellator::StrokerEdgeType &, unsigned long);
	void collectFanEdges(Scaleform::Render::Tessellator::MonotoneType *);
	void collectFanEdges(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8> &, const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8> &, unsigned long);
	unsigned long countFanEdges(Scaleform::Render::Tessellator::MonotoneType *);
	bool computeMiter(const Scaleform::Render::TessVertex &, const Scaleform::Render::TessVertex &, const Scaleform::Render::TessVertex &, Scaleform::Render::TessVertex *, Scaleform::Render::TessVertex *);
	void processFan(unsigned long, unsigned long);
	void emitTriangles();
	unsigned long addStrokerJoin(const Scaleform::Render::Tessellator::StrokerEdgeType *, const Scaleform::Render::Tessellator::StrokerEdgeType *);
	void emitStrokerVertex(float, float);
	void emitStrokerTrapezoid(const Scaleform::Render::Tessellator::StrokerEdgeType *, unsigned long, unsigned long);
	void addStrokerEdge(unsigned long, unsigned long);
	void processStrokerEdges();
	void processEdgeAA();
	void moveVertexAA(const Scaleform::Render::TessVertex &, Scaleform::Render::TessVertex *, const Scaleform::Render::TessVertex &, const Scaleform::Render::TessVertex &);
	void addTriangleAA(Scaleform::Render::Tessellator::MonoVertexType *, Scaleform::Render::Tessellator::MonoVertexType *, Scaleform::Render::Tessellator::MonoVertexType *, float);
	float triangleRatio(Scaleform::Render::Tessellator::MonoVertexType *, Scaleform::Render::Tessellator::MonoVertexType *, Scaleform::Render::Tessellator::MonoVertexType *);
	void triangulateMountainAA();
	void triangulateMonotoneAA(Scaleform::Render::Tessellator::MonotoneType *);
	void unflipTriangles();
	Scaleform::Render::LinearHeap * pHeap1; // 0x8
	Scaleform::Render::LinearHeap * pHeap2; // 0x10
	Scaleform::Render::Tessellator::FillRuleType FillRule; // 0x18
	float Epsilon; // 0x1C
	bool HasEpsilon; // 0x20
	bool StrokerMode; // 0x21
	bool InvasiveMerge; // 0x22
	bool HasComplexFill; // 0x23
	unsigned long VertexLimit; // 0x24
	Scaleform::Render::ArrayUnsafe<unsigned long> ComplexFlags; // 0x28
	unsigned long MaxStyle; // 0x40
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PathType,4,4> Paths; // 0x48
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::SrcVertexType,4,16> SrcVertices; // 0x70
	unsigned long LastVertex; // 0x98
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::EdgeType,4,16> Edges; // 0xA0
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType,4,16> MonoChains; // 0xC8
	Scaleform::Render::ArrayUnsafe<Scaleform::Render::Tessellator::MonoChainType *> MonoChainsSorted; // 0xF0
	Scaleform::Render::ArrayPaged<unsigned int,4,16> Scanbeams; // 0x108
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType *,4,8> ActiveChains; // 0x130
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType *,4,8> InteriorChains; // 0x158
	Scaleform::Render::ArrayPaged<unsigned int,4,16> ValidChains; // 0x180
	Scaleform::Render::ArrayPaged<unsigned int,4,16> InteriorOrder; // 0x1A8
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::IntersectionType,4,4> Intersections; // 0x1D0
	Scaleform::Render::ArrayUnsafe<int> StyleCounts; // 0x1F8
	float LastX; // 0x210
	float MinX; // 0x214
	float MinY; // 0x218
	float MaxX; // 0x21C
	float MaxY; // 0x220
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::ScanChainType,4,8> ChainsBelow; // 0x228
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::ScanChainType,4,8> ChainsAbove; // 0x250
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::BaseLineType,4,4> BaseLines; // 0x278
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PendingEndType,4,4> PendingEnds; // 0x2A0
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonotoneType,4,16> Monotones; // 0x2C8
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType,4,16> MonoVertices; // 0x2F0
	Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16> MeshVertices; // 0x318
	Scaleform::Render::ArrayMatrix<unsigned short> StyleMatrix; // 0x340
	Scaleform::Render::ArrayPaged<Scaleform::Render::TessMesh,4,4> Meshes; // 0x358
	Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16> MeshTriangles; // 0x380
	unsigned long MonoStyle; // 0x3A0
	unsigned long MeshIdx; // 0x3A4
	unsigned long FactorOneFlag; // 0x3A8
	float EdgeAAWidth; // 0x3AC
	bool EdgeAAFlag; // 0x3B0
	float IntersectionEpsilon; // 0x3B4
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8> LeftChain; // 0x3B8
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8> RightChain; // 0x3E0
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::TmpEdgeAAType,3,4> TmpEdgeFan; // 0x408
	Scaleform::Render::ArrayUnsafe<Scaleform::Render::Tessellator::EdgeAAType> EdgeFans; // 0x430
	Scaleform::Render::ArrayPaged<unsigned int,3,4> StartFan; // 0x448
	Scaleform::Render::ArrayPaged<unsigned int,3,4> EndFan; // 0x470
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> OuterEdges; // 0x498
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::StrokerEdgeType,4,16> StrokerEdges; // 0x4C0
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,2> MonoStack; // 0x4E8
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16> InnerQuads; // 0x510
	Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::StarVertexType,4,16> StarVertices; // 0x538
	long FakeVar; // 0x560
public:
	virtual ~Tessellator();
};
struct Scaleform::Render::Tessellator::SrcVertexType
{
	float x; // 0x0
	float y; // 0x4
	SrcVertexType(float, float);
	SrcVertexType();
};
struct Scaleform::Render::Tessellator::MonoVertexType
{
	unsigned long srcVer; // 0x0
	unsigned long aaVer; // 0x4
	Scaleform::Render::Tessellator::MonoVertexType * next; // 0x8
};
struct Scaleform::Render::Tessellator::TriangleType
{
	union <unnamed-type-d>;
	Scaleform::Render::Tessellator::TriangleType::<unnamed-type-d> d; // 0x0
};
union Scaleform::Render::Tessellator::TriangleType::<unnamed-type-d>
{
	struct <unnamed-type-m>;
	struct
	{
		Scaleform::Render::Tessellator::TriangleType::<unnamed-type-d>::<unnamed-type-m> m; // 0x0
		struct <unnamed-type-t>;
	};
public:
	Scaleform::Render::Tessellator::TriangleType::<unnamed-type-d>::<unnamed-type-t> t; // 0x0
};
struct Scaleform::Render::Tessellator::TriangleType::<unnamed-type-d>::<unnamed-type-m>
{
	Scaleform::Render::Tessellator::MonoVertexType * v1; // 0x0
	Scaleform::Render::Tessellator::MonoVertexType * v2; // 0x8
	Scaleform::Render::Tessellator::MonoVertexType * v3; // 0x10
};
struct Scaleform::Render::Tessellator::TriangleType::<unnamed-type-d>::<unnamed-type-t>
{
	unsigned long v1; // 0x0
	unsigned long v2; // 0x4
	unsigned long v3; // 0x8
};
struct Scaleform::Render::Tessellator::PathType
{
	unsigned long start; // 0x0
	unsigned long end; // 0x4
	unsigned long leftStyle; // 0x8
	unsigned long rightStyle; // 0xC
	Scaleform::Render::Tessellator::PathShapeType pathShape; // 0x10
};
struct Scaleform::Render::Tessellator::EdgeType
{
	unsigned long lower; // 0x0
	float slope; // 0x4
};
struct Scaleform::Render::Tessellator::MonoChainType
{
	unsigned long edge; // 0x0
	unsigned long end; // 0x4
	float ySort; // 0x8
	float xb; // 0xC
	float xt; // 0x10
	short dir; // 0x14
	unsigned short flags; // 0x16
	unsigned short leftStyle; // 0x18
	unsigned short rightStyle; // 0x1A
	unsigned short leftBelow; // 0x1C
	unsigned short leftAbove; // 0x1E
	unsigned short rightBelow; // 0x20
	unsigned short rightAbove; // 0x22
	unsigned long posIntr; // 0x24
	unsigned long posScan; // 0x28
};
struct Scaleform::Render::Tessellator::IntersectionType
{
	unsigned long pos1; // 0x0
	unsigned long pos2; // 0x4
	float y; // 0x8
};
struct Scaleform::Render::Tessellator::BaseLineType
{
	float y; // 0x0
	unsigned long styleLeft; // 0x4
	unsigned long vertexLeft; // 0x8
	unsigned long vertexRight; // 0xC
	unsigned long firstChain; // 0x10
	unsigned long numChains; // 0x14
	unsigned long leftAbove; // 0x18
};
struct Scaleform::Render::Tessellator::MonotoneType
{
	Scaleform::Render::Tessellator::MonoVertexType * start; // 0x0
	union <unnamed-type-d>;
	Scaleform::Render::Tessellator::MonotoneType::<unnamed-type-d> d; // 0x8
	unsigned long style; // 0x14
	Scaleform::Render::Tessellator::BaseLineType * lowerBase; // 0x18
};
union Scaleform::Render::Tessellator::MonotoneType::<unnamed-type-d>
{
	struct <unnamed-type-m>;
	struct
	{
		Scaleform::Render::Tessellator::MonotoneType::<unnamed-type-d>::<unnamed-type-m> m; // 0x0
		struct <unnamed-type-t>;
	};
public:
	Scaleform::Render::Tessellator::MonotoneType::<unnamed-type-d>::<unnamed-type-t> t; // 0x0
};
struct Scaleform::Render::Tessellator::MonotoneType::<unnamed-type-d>::<unnamed-type-m>
{
	unsigned long lastIdx; // 0x0
	unsigned long prevIdx1; // 0x4
	unsigned long prevIdx2; // 0x8
};
struct Scaleform::Render::Tessellator::MonotoneType::<unnamed-type-d>::<unnamed-type-t>
{
	unsigned long startTriangle; // 0x0
	unsigned long numTriangles; // 0x4
	unsigned long meshIdx; // 0x8
};
struct Scaleform::Render::Tessellator::ScanChainType
{
	Scaleform::Render::Tessellator::MonoChainType * chain; // 0x0
	Scaleform::Render::Tessellator::MonotoneType * monotone; // 0x8
	unsigned long vertex; // 0x10
};
struct Scaleform::Render::Tessellator::PendingEndType
{
	unsigned long vertex; // 0x0
	Scaleform::Render::Tessellator::MonotoneType * monotone; // 0x8
};
struct Scaleform::Render::Tessellator::EdgeAAType
{
	Scaleform::Render::Tessellator::MonoVertexType * cntVer; // 0x0
	Scaleform::Render::Tessellator::MonoVertexType * rayVer; // 0x8
	unsigned short style; // 0x10
	unsigned short slope; // 0x12
};
struct Scaleform::Render::Tessellator::TmpEdgeAAType
{
	Scaleform::Render::Tessellator::MonoVertexType * cntVer; // 0x0
	Scaleform::Render::Tessellator::MonoVertexType * rayVer; // 0x8
	float slope; // 0x10
	unsigned long style; // 0x14
};
struct Scaleform::Render::Tessellator::InnerQuadType
{
	Scaleform::Render::Tessellator::EdgeAAType * e1; // 0x0
	Scaleform::Render::Tessellator::EdgeAAType * e2; // 0x8
};
struct Scaleform::Render::Tessellator::OuterEdgeType
{
	Scaleform::Render::Tessellator::EdgeAAType * edge; // 0x0
	unsigned long outVer; // 0x8
};
struct Scaleform::Render::Tessellator::StrokerEdgeType
{
	unsigned long node1; // 0x0
	unsigned long node2; // 0x4
};
struct Scaleform::Render::Tessellator::StarVertexType
{
	unsigned long cntVer; // 0x0
	unsigned long starVer; // 0x4
};
float Scaleform::Render::Tessellator::GetLastX(); // 0x1403A3E10
float Scaleform::Render::Tessellator::GetLastY(); // 0x1403A3E40
unsigned long Scaleform::Render::Tessellator::GetMeshCount(); // 0x1403A3EC0
unsigned long Scaleform::Render::Tessellator::GetMeshVertexCount(unsigned long meshIdx); // 0x1403A3EF0
unsigned long Scaleform::Render::Tessellator::GetMeshTriangleCount(unsigned long meshIdx); // 0x1403A3ED0
unsigned long Scaleform::Render::Tessellator::GetVertexCount(); // 0x1403A4010
class Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::SrcVertexType,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Tessellator::SrcVertexType,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::SrcVertexType,4,16> &);
public:
	ArrayPaged<Scaleform::Render::Tessellator::SrcVertexType,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Tessellator::SrcVertexType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::SrcVertexType & operator[](unsigned long long);
	const Scaleform::Render::Tessellator::SrcVertexType & operator[](unsigned long long);
	Scaleform::Render::Tessellator::SrcVertexType & Back();
	const Scaleform::Render::Tessellator::SrcVertexType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::SrcVertexType,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::SrcVertexType,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Tessellator::SrcVertexType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Tessellator::SrcVertexType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::TessVertex,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16> &);
public:
	ArrayPaged<Scaleform::Render::TessVertex,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::TessVertex &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::TessVertex & operator[](unsigned long long);
	const Scaleform::Render::TessVertex & operator[](unsigned long long);
	Scaleform::Render::TessVertex & Back();
	const Scaleform::Render::TessVertex & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::TessVertex * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::TessVertex * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType *,4,8>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	typedef Scaleform::Render::Tessellator::MonoChainType ValueType;
private:
	ArrayPaged<Scaleform::Render::Tessellator::MonoChainType *,4,8>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType *,4,8> &);
public:
	ArrayPaged<Scaleform::Render::Tessellator::MonoChainType *,4,8>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(Scaleform::Render::Tessellator::MonoChainType * &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::MonoChainType * & operator[](unsigned long long);
	Scaleform::Render::Tessellator::MonoChainType * & operator[](unsigned long long);
	Scaleform::Render::Tessellator::MonoChainType * & Back();
	Scaleform::Render::Tessellator::MonoChainType * & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType *,4,8> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType *,4,8> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Tessellator::MonoChainType * * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Tessellator::MonoChainType * * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::ScanChainType,4,8>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Tessellator::ScanChainType,4,8>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::ScanChainType,4,8> &);
public:
	ArrayPaged<Scaleform::Render::Tessellator::ScanChainType,4,8>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Tessellator::ScanChainType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::ScanChainType & operator[](unsigned long long);
	const Scaleform::Render::Tessellator::ScanChainType & operator[](unsigned long long);
	Scaleform::Render::Tessellator::ScanChainType & Back();
	const Scaleform::Render::Tessellator::ScanChainType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::ScanChainType,4,8> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::ScanChainType,4,8> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Tessellator::ScanChainType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Tessellator::ScanChainType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PendingEndType,4,4>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Tessellator::PendingEndType,4,4>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PendingEndType,4,4> &);
public:
	ArrayPaged<Scaleform::Render::Tessellator::PendingEndType,4,4>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Tessellator::PendingEndType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::PendingEndType & operator[](unsigned long long);
	const Scaleform::Render::Tessellator::PendingEndType & operator[](unsigned long long);
	Scaleform::Render::Tessellator::PendingEndType & Back();
	const Scaleform::Render::Tessellator::PendingEndType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PendingEndType,4,4> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PendingEndType,4,4> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Tessellator::PendingEndType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Tessellator::PendingEndType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	typedef Scaleform::Render::Tessellator::MonoVertexType ValueType;
private:
	ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8> &);
public:
	ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(Scaleform::Render::Tessellator::MonoVertexType * &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::MonoVertexType * & operator[](unsigned long long);
	Scaleform::Render::Tessellator::MonoVertexType * & operator[](unsigned long long);
	Scaleform::Render::Tessellator::MonoVertexType * & Back();
	Scaleform::Render::Tessellator::MonoVertexType * & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,8> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Tessellator::MonoVertexType * * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Tessellator::MonoVertexType * * * Pages; // 0x20
};
class Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>
{
	struct ArrayType;
	enum PageScale_e
	{
		ArrayInc = 16,
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
	class ArrayAdaptor;
private:
	ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>(const Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16> &);
public:
	ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>(Scaleform::Render::LinearHeap *);
	void ClearAndRelease();
	void AddArray();
	Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayAdaptor GetArrayAdaptor(unsigned long long);
	unsigned long long GetArrayCount();
	unsigned long long GetSize(unsigned long long);
	void PushBack(unsigned long long, const Scaleform::Render::Tessellator::TriangleType &);
	void PopBack(unsigned long long);
	void CutAt(unsigned long long, unsigned long long);
	Scaleform::Render::Tessellator::TriangleType & At(unsigned long long, unsigned long long);
	const Scaleform::Render::Tessellator::TriangleType & At(unsigned long long, unsigned long long);
	Scaleform::Render::Tessellator::TriangleType & Back(unsigned long long);
	const Scaleform::Render::Tessellator::TriangleType & Back(unsigned long long);
	unsigned long long GetPageCount(unsigned long long);
	const Scaleform::Render::Tessellator::TriangleType * GetPage(unsigned long long, unsigned long long);
	bool Split(unsigned long long, unsigned long long);
private:
	const Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16> & operator=(const Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16> &);
	void allocPage(Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType *, unsigned long long);
	Scaleform::Render::Tessellator::TriangleType * dataPtr(unsigned long long);
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType * Arrays; // 0x8
	unsigned long long NumArrays; // 0x10
	unsigned long long MaxArrays; // 0x18
};
class Scaleform::Render::ArrayUnsafe<Scaleform::Render::Tessellator::EdgeAAType>
{
	struct ValueType;
private:
	ArrayUnsafe<Scaleform::Render::Tessellator::EdgeAAType>(const Scaleform::Render::ArrayUnsafe<Scaleform::Render::Tessellator::EdgeAAType> &);
public:
	ArrayUnsafe<Scaleform::Render::Tessellator::EdgeAAType>(Scaleform::Render::LinearHeap *);
	void ClearAndRelease();
	void Resize(unsigned long long);
	void Zero();
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::EdgeAAType & operator[](unsigned long long);
	const Scaleform::Render::Tessellator::EdgeAAType & operator[](unsigned long long);
private:
	const Scaleform::Render::ArrayUnsafe<Scaleform::Render::Tessellator::EdgeAAType> & operator=(const Scaleform::Render::ArrayUnsafe<Scaleform::Render::Tessellator::EdgeAAType> &);
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	Scaleform::Render::Tessellator::EdgeAAType * Array; // 0x10
};
struct Scaleform::Render::Tessellator::CmpScanbeams
{
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::SrcVertexType,4,16> & Ver; // 0x0
	CmpScanbeams(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::SrcVertexType,4,16> &);
	bool operator()(unsigned long, unsigned long);
private:
	void operator=(Scaleform::Render::Tessellator::CmpScanbeams &);
};
struct Scaleform::Render::Tessellator::CmpVer1
{
	const Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16> & Ver; // 0x0
	CmpVer1(const Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16> &);
	bool operator()(const Scaleform::Render::Tessellator::TriangleType &, const Scaleform::Render::Tessellator::TriangleType &);
private:
	void operator=(Scaleform::Render::Tessellator::CmpVer1 &);
};
class Scaleform::Render::ArrayUnsafe<unsigned long>
{
	typedef unsigned long ValueType;
private:
	ArrayUnsafe<unsigned long>(const Scaleform::Render::ArrayUnsafe<unsigned long> &);
public:
	ArrayUnsafe<unsigned long>(Scaleform::Render::LinearHeap *);
	void ClearAndRelease();
	void Resize(unsigned long long);
	void Zero();
	unsigned long long GetSize();
	unsigned long & operator[](unsigned long long);
	const unsigned long & operator[](unsigned long long);
private:
	const Scaleform::Render::ArrayUnsafe<unsigned long> & operator=(const Scaleform::Render::ArrayUnsafe<unsigned long> &);
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long * Array; // 0x10
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PathType,4,4>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Tessellator::PathType,4,4>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PathType,4,4> &);
public:
	ArrayPaged<Scaleform::Render::Tessellator::PathType,4,4>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Tessellator::PathType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::PathType & operator[](unsigned long long);
	const Scaleform::Render::Tessellator::PathType & operator[](unsigned long long);
	Scaleform::Render::Tessellator::PathType & Back();
	const Scaleform::Render::Tessellator::PathType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PathType,4,4> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PathType,4,4> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Tessellator::PathType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Tessellator::PathType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::EdgeType,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Tessellator::EdgeType,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::EdgeType,4,16> &);
public:
	ArrayPaged<Scaleform::Render::Tessellator::EdgeType,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Tessellator::EdgeType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::EdgeType & operator[](unsigned long long);
	const Scaleform::Render::Tessellator::EdgeType & operator[](unsigned long long);
	Scaleform::Render::Tessellator::EdgeType & Back();
	const Scaleform::Render::Tessellator::EdgeType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::EdgeType,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::EdgeType,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Tessellator::EdgeType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Tessellator::EdgeType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Tessellator::MonoChainType,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType,4,16> &);
public:
	ArrayPaged<Scaleform::Render::Tessellator::MonoChainType,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Tessellator::MonoChainType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::MonoChainType & operator[](unsigned long long);
	const Scaleform::Render::Tessellator::MonoChainType & operator[](unsigned long long);
	Scaleform::Render::Tessellator::MonoChainType & Back();
	const Scaleform::Render::Tessellator::MonoChainType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Tessellator::MonoChainType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Tessellator::MonoChainType * * Pages; // 0x20
};
class Scaleform::Render::ArrayUnsafe<Scaleform::Render::Tessellator::MonoChainType *>
{
	typedef Scaleform::Render::Tessellator::MonoChainType ValueType;
private:
	ArrayUnsafe<Scaleform::Render::Tessellator::MonoChainType *>(const Scaleform::Render::ArrayUnsafe<Scaleform::Render::Tessellator::MonoChainType *> &);
public:
	ArrayUnsafe<Scaleform::Render::Tessellator::MonoChainType *>(Scaleform::Render::LinearHeap *);
	void ClearAndRelease();
	void Resize(unsigned long long);
	void Zero();
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::MonoChainType * & operator[](unsigned long long);
	Scaleform::Render::Tessellator::MonoChainType * & operator[](unsigned long long);
private:
	const Scaleform::Render::ArrayUnsafe<Scaleform::Render::Tessellator::MonoChainType *> & operator=(const Scaleform::Render::ArrayUnsafe<Scaleform::Render::Tessellator::MonoChainType *> &);
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	Scaleform::Render::Tessellator::MonoChainType * * Array; // 0x10
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
class Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::IntersectionType,4,4>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Tessellator::IntersectionType,4,4>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::IntersectionType,4,4> &);
public:
	ArrayPaged<Scaleform::Render::Tessellator::IntersectionType,4,4>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Tessellator::IntersectionType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::IntersectionType & operator[](unsigned long long);
	const Scaleform::Render::Tessellator::IntersectionType & operator[](unsigned long long);
	Scaleform::Render::Tessellator::IntersectionType & Back();
	const Scaleform::Render::Tessellator::IntersectionType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::IntersectionType,4,4> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::IntersectionType,4,4> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Tessellator::IntersectionType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Tessellator::IntersectionType * * Pages; // 0x20
};
class Scaleform::Render::ArrayUnsafe<int>
{
	typedef long ValueType;
private:
	ArrayUnsafe<int>(const Scaleform::Render::ArrayUnsafe<int> &);
public:
	ArrayUnsafe<int>(Scaleform::Render::LinearHeap *);
	void ClearAndRelease();
	void Resize(unsigned long long);
	void Zero();
	unsigned long long GetSize();
	long & operator[](unsigned long long);
	const long & operator[](unsigned long long);
private:
	const Scaleform::Render::ArrayUnsafe<int> & operator=(const Scaleform::Render::ArrayUnsafe<int> &);
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	long * Array; // 0x10
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::BaseLineType,4,4>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Tessellator::BaseLineType,4,4>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::BaseLineType,4,4> &);
public:
	ArrayPaged<Scaleform::Render::Tessellator::BaseLineType,4,4>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Tessellator::BaseLineType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::BaseLineType & operator[](unsigned long long);
	const Scaleform::Render::Tessellator::BaseLineType & operator[](unsigned long long);
	Scaleform::Render::Tessellator::BaseLineType & Back();
	const Scaleform::Render::Tessellator::BaseLineType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::BaseLineType,4,4> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::BaseLineType,4,4> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Tessellator::BaseLineType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Tessellator::BaseLineType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonotoneType,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Tessellator::MonotoneType,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonotoneType,4,16> &);
public:
	ArrayPaged<Scaleform::Render::Tessellator::MonotoneType,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Tessellator::MonotoneType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::MonotoneType & operator[](unsigned long long);
	const Scaleform::Render::Tessellator::MonotoneType & operator[](unsigned long long);
	Scaleform::Render::Tessellator::MonotoneType & Back();
	const Scaleform::Render::Tessellator::MonotoneType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonotoneType,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonotoneType,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Tessellator::MonotoneType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Tessellator::MonotoneType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType,4,16> &);
public:
	ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Tessellator::MonoVertexType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::MonoVertexType & operator[](unsigned long long);
	const Scaleform::Render::Tessellator::MonoVertexType & operator[](unsigned long long);
	Scaleform::Render::Tessellator::MonoVertexType & Back();
	const Scaleform::Render::Tessellator::MonoVertexType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Tessellator::MonoVertexType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Tessellator::MonoVertexType * * Pages; // 0x20
};
class Scaleform::Render::ArrayMatrix<unsigned short>
{
	typedef unsigned short ValueType;
public:
	ArrayMatrix<unsigned short>(Scaleform::Render::LinearHeap *);
	void ClearAndRelease();
	void Resize(unsigned long long);
	unsigned short & At(unsigned long long, unsigned long long);
	const unsigned short & At(unsigned long long, unsigned long long);
	unsigned short ValueAt(unsigned long long, unsigned long long);
private:
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned short * Array; // 0x10
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::TessMesh,4,4>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::TessMesh,4,4>(const Scaleform::Render::ArrayPaged<Scaleform::Render::TessMesh,4,4> &);
public:
	ArrayPaged<Scaleform::Render::TessMesh,4,4>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::TessMesh &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::TessMesh & operator[](unsigned long long);
	const Scaleform::Render::TessMesh & operator[](unsigned long long);
	Scaleform::Render::TessMesh & Back();
	const Scaleform::Render::TessMesh & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::TessMesh,4,4> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::TessMesh,4,4> &);
	void allocPage(unsigned long long);
	Scaleform::Render::TessMesh * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::TessMesh * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::TmpEdgeAAType,3,4>
{
	enum PageScale_e
	{
		PageShift = 3,
		PageSize = 8,
		PageMask = 7,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Tessellator::TmpEdgeAAType,3,4>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::TmpEdgeAAType,3,4> &);
public:
	ArrayPaged<Scaleform::Render::Tessellator::TmpEdgeAAType,3,4>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Tessellator::TmpEdgeAAType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::TmpEdgeAAType & operator[](unsigned long long);
	const Scaleform::Render::Tessellator::TmpEdgeAAType & operator[](unsigned long long);
	Scaleform::Render::Tessellator::TmpEdgeAAType & Back();
	const Scaleform::Render::Tessellator::TmpEdgeAAType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::TmpEdgeAAType,3,4> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::TmpEdgeAAType,3,4> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Tessellator::TmpEdgeAAType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Tessellator::TmpEdgeAAType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<unsigned int,3,4>
{
	enum PageScale_e
	{
		PageShift = 3,
		PageSize = 8,
		PageMask = 7,
	};
	typedef unsigned long ValueType;
private:
	ArrayPaged<unsigned int,3,4>(const Scaleform::Render::ArrayPaged<unsigned int,3,4> &);
public:
	ArrayPaged<unsigned int,3,4>(Scaleform::Render::LinearHeap *);
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
	const Scaleform::Render::ArrayPaged<unsigned int,3,4> & operator=(const Scaleform::Render::ArrayPaged<unsigned int,3,4> &);
	void allocPage(unsigned long long);
	unsigned long * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	unsigned long * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> &);
public:
	ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Tessellator::OuterEdgeType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::OuterEdgeType & operator[](unsigned long long);
	const Scaleform::Render::Tessellator::OuterEdgeType & operator[](unsigned long long);
	Scaleform::Render::Tessellator::OuterEdgeType & Back();
	const Scaleform::Render::Tessellator::OuterEdgeType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::OuterEdgeType,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Tessellator::OuterEdgeType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Tessellator::OuterEdgeType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::StrokerEdgeType,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Tessellator::StrokerEdgeType,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::StrokerEdgeType,4,16> &);
public:
	ArrayPaged<Scaleform::Render::Tessellator::StrokerEdgeType,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Tessellator::StrokerEdgeType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::StrokerEdgeType & operator[](unsigned long long);
	const Scaleform::Render::Tessellator::StrokerEdgeType & operator[](unsigned long long);
	Scaleform::Render::Tessellator::StrokerEdgeType & Back();
	const Scaleform::Render::Tessellator::StrokerEdgeType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::StrokerEdgeType,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::StrokerEdgeType,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Tessellator::StrokerEdgeType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Tessellator::StrokerEdgeType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,2>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	typedef Scaleform::Render::Tessellator::MonoVertexType ValueType;
private:
	ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,2>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,2> &);
public:
	ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,2>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(Scaleform::Render::Tessellator::MonoVertexType * &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::MonoVertexType * & operator[](unsigned long long);
	Scaleform::Render::Tessellator::MonoVertexType * & operator[](unsigned long long);
	Scaleform::Render::Tessellator::MonoVertexType * & Back();
	Scaleform::Render::Tessellator::MonoVertexType * & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,2> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType *,4,2> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Tessellator::MonoVertexType * * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Tessellator::MonoVertexType * * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16> &);
public:
	ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Tessellator::InnerQuadType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::InnerQuadType & operator[](unsigned long long);
	const Scaleform::Render::Tessellator::InnerQuadType & operator[](unsigned long long);
	Scaleform::Render::Tessellator::InnerQuadType & Back();
	const Scaleform::Render::Tessellator::InnerQuadType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Tessellator::InnerQuadType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Tessellator::InnerQuadType * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::StarVertexType,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::Tessellator::StarVertexType,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::StarVertexType,4,16> &);
public:
	ArrayPaged<Scaleform::Render::Tessellator::StarVertexType,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::Tessellator::StarVertexType &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::StarVertexType & operator[](unsigned long long);
	const Scaleform::Render::Tessellator::StarVertexType & operator[](unsigned long long);
	Scaleform::Render::Tessellator::StarVertexType & Back();
	const Scaleform::Render::Tessellator::StarVertexType & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::StarVertexType,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::StarVertexType,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::Tessellator::StarVertexType * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::Tessellator::StarVertexType * * Pages; // 0x20
};
void Scaleform::Render::Tessellator::AddVertex(float x, float y); // 0x1403A3360