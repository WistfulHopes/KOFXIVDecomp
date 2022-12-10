#pragma once

enum Scaleform::Render::TessStyleFlags
{
	TessStyleTranslucent = 1,
	TessStyleOpaque = 2,
	TessStyleFactorHalf = 4,
	TessStyleFactorOne = 8,
	TessStyleMixColors = 16,
	TessStyleUseColor2 = 32,
	TessStyleComplex = 32768,
};
struct Scaleform::Render::TessMesh
{
	unsigned long MeshIdx; // 0x0
	unsigned long Style1; // 0x4
	unsigned long Style2; // 0x8
	unsigned long Flags1; // 0xC
	unsigned long Flags2; // 0x10
	unsigned long StartVertex; // 0x14
	unsigned long VertexCount; // 0x18
};
struct Scaleform::Render::TessVertex
{
	float x; // 0x0
	float y; // 0x4
	unsigned long Idx; // 0x8
	unsigned short Styles[2]; // 0xC
	unsigned short Flags; // 0x10
	unsigned short Mesh; // 0x12
};
struct Scaleform::Render::VertexBasic
{
	float x; // 0x0
	float y; // 0x4
};
struct Scaleform::Render::PathBasic
{
	unsigned long Start; // 0x0
	unsigned long Count; // 0x4
};
class Scaleform::Render::TessBase
{
public:
	~TessBase();
	void Clear();
	float GetLastX();
	float GetLastY();
	void AddVertex(float, float);
	void ClosePath();
	void FinalizePath(unsigned long, unsigned long, bool, bool);
	void Transform(const Scaleform::Render::Matrix2x4<float> &);
	Scaleform::Render::Matrix2x4<float> StretchTo(float, float, float, float);
	unsigned long GetVertexCount();
	unsigned long GetMeshCount();
	unsigned long GetMeshVertexCount(unsigned long);
	unsigned long GetMeshTriangleCount(unsigned long);
	void GetMesh(unsigned long, Scaleform::Render::TessMesh *);
	unsigned long GetVertices(Scaleform::Render::TessMesh *, Scaleform::Render::TessVertex *, unsigned long);
	void GetTrianglesI16(unsigned long, unsigned short *, unsigned long, unsigned long);
	TessBase(const Scaleform::Render::TessBase &);
	TessBase();
	Scaleform::Render::TessBase & operator=(const Scaleform::Render::TessBase &);
};
class Scaleform::Render::VertexPath :
	Scaleform::Render::TessBase
{
	typedef float CoordType;
	struct VertexType;
public:
	VertexPath(Scaleform::Render::LinearHeap *);
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
	unsigned long long GetNumPaths();
	const Scaleform::Render::PathBasic & GetPath(unsigned long);
	unsigned long long GetNumVertices();
	const Scaleform::Render::VertexBasic & GetVertex(unsigned long);
	void Scale(float, float);
private:
	Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> Vertices; // 0x8
	Scaleform::Render::ArrayPaged<Scaleform::Render::PathBasic,2,4> Paths; // 0x30
	unsigned long LastVertex; // 0x58
public:
	virtual ~VertexPath();
};
float Scaleform::Render::VertexPath::GetLastX(); // 0x140319DF0
float Scaleform::Render::VertexPath::GetLastY(); // 0x140319E20
Scaleform::Render::Matrix2x4<float> Scaleform::Render::VertexPath::StretchTo(float __formal, float __formal, float __formal, float __formal); // 0x140378C50
Scaleform::Render::GraphicsDevice * Scaleform::Render::HAL::GetGraphicsDeviceBase(); // 0x1400470F0
void Scaleform::Render::RenderEvents::Begin(Scaleform::Render::EventType type, const char * eventName); // 0x14002E7C0
class Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::VertexBasic,4,16>(const Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> &);
public:
	ArrayPaged<Scaleform::Render::VertexBasic,4,16>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::VertexBasic &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::VertexBasic & operator[](unsigned long long);
	const Scaleform::Render::VertexBasic & operator[](unsigned long long);
	Scaleform::Render::VertexBasic & Back();
	const Scaleform::Render::VertexBasic & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16> &);
	void allocPage(unsigned long long);
	Scaleform::Render::VertexBasic * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::VertexBasic * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::PathBasic,2,4>
{
	enum PageScale_e
	{
		PageShift = 2,
		PageSize = 4,
		PageMask = 3,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::PathBasic,2,4>(const Scaleform::Render::ArrayPaged<Scaleform::Render::PathBasic,2,4> &);
public:
	ArrayPaged<Scaleform::Render::PathBasic,2,4>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::PathBasic &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::PathBasic & operator[](unsigned long long);
	const Scaleform::Render::PathBasic & operator[](unsigned long long);
	Scaleform::Render::PathBasic & Back();
	const Scaleform::Render::PathBasic & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::PathBasic,2,4> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::PathBasic,2,4> &);
	void allocPage(unsigned long long);
	Scaleform::Render::PathBasic * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::PathBasic * * Pages; // 0x20
};
class Scaleform::Render::TransformerBase
{
public:
	~TransformerBase();
	void Transform(float *, float *);
	float GetScale();
	float GetXScale();
	float GetYScale();
	TransformerBase(const Scaleform::Render::TransformerBase &);
	TransformerBase();
	Scaleform::Render::TransformerBase & operator=(const Scaleform::Render::TransformerBase &);
};