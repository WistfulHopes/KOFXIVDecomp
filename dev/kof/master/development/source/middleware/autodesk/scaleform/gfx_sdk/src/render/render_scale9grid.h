#pragma once

class Scaleform::RefCountBase<Scaleform::Render::Scale9GridRect,71> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,71>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 71,
	};
public:
	RefCountBase<Scaleform::Render::Scale9GridRect,71>(Scaleform::RefCountBase<Scaleform::Render::Scale9GridRect,71> &);
	RefCountBase<Scaleform::Render::Scale9GridRect,71>(const Scaleform::RefCountBase<Scaleform::Render::Scale9GridRect,71> &);
	RefCountBase<Scaleform::Render::Scale9GridRect,71>();
	virtual ~RefCountBase<Scaleform::Render::Scale9GridRect,71>();
	Scaleform::RefCountBase<Scaleform::Render::Scale9GridRect,71> & operator=(Scaleform::RefCountBase<Scaleform::Render::Scale9GridRect,71> &);
	Scaleform::RefCountBase<Scaleform::Render::Scale9GridRect,71> & operator=(const Scaleform::RefCountBase<Scaleform::Render::Scale9GridRect,71> &);
};
struct Scaleform::Render::Scale9GridRect :
	Scaleform::RefCountBase<Scaleform::Render::Scale9GridRect,71>
{
	Scaleform::Render::Rect<float> Scale9; // 0x10
	Scale9GridRect(Scaleform::Render::Scale9GridRect &);
	Scale9GridRect(const Scaleform::Render::Scale9GridRect &);
	Scale9GridRect();
	virtual ~Scale9GridRect();
	Scaleform::Render::Scale9GridRect & operator=(Scaleform::Render::Scale9GridRect &);
	Scaleform::Render::Scale9GridRect & operator=(const Scaleform::Render::Scale9GridRect &);
};
class Scaleform::RefCountBase<Scaleform::Render::Scale9GridInfo,71> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,71>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 71,
	};
public:
	RefCountBase<Scaleform::Render::Scale9GridInfo,71>(Scaleform::RefCountBase<Scaleform::Render::Scale9GridInfo,71> &);
	RefCountBase<Scaleform::Render::Scale9GridInfo,71>(const Scaleform::RefCountBase<Scaleform::Render::Scale9GridInfo,71> &);
	RefCountBase<Scaleform::Render::Scale9GridInfo,71>();
	virtual ~RefCountBase<Scaleform::Render::Scale9GridInfo,71>();
	Scaleform::RefCountBase<Scaleform::Render::Scale9GridInfo,71> & operator=(Scaleform::RefCountBase<Scaleform::Render::Scale9GridInfo,71> &);
	Scaleform::RefCountBase<Scaleform::Render::Scale9GridInfo,71> & operator=(const Scaleform::RefCountBase<Scaleform::Render::Scale9GridInfo,71> &);
};
struct Scaleform::Render::Scale9GridInfo :
	Scaleform::RefCountBase<Scaleform::Render::Scale9GridInfo,71>
{
	Scaleform::Render::Rect<float> Scale9; // 0x10
	Scaleform::Render::Matrix2x4<float> S9gMatrix; // 0x20
	Scaleform::Render::Matrix2x4<float> ShapeMatrix; // 0x40
	Scaleform::Render::Rect<float> Bounds; // 0x60
	Scaleform::Render::Rect<float> ResultingGrid; // 0x70
	Scaleform::Render::Matrix2x4<float> InverseMatrix; // 0x80
	Scaleform::Render::Matrix2x4<float> ResultingMatrices[9]; // 0xA0
	Scale9GridInfo(Scaleform::Render::Scale9GridInfo &);
	Scale9GridInfo(const Scaleform::Render::Scale9GridInfo &);
	Scale9GridInfo(const Scaleform::Render::Rect<float> &, const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Rect<float> &);
	Scale9GridInfo(const Scaleform::Render::Scale9GridData *, const Scaleform::Render::Matrix2x4<float> &);
	Scale9GridInfo();
	unsigned long Transform(float *, float *);
	float GetScale();
	float GetXScale();
	float GetYScale();
	unsigned long GetAreaCode(float, float);
	Scaleform::Render::Rect<float> AdjustBounds(const Scaleform::Render::Rect<float> &);
	void Compute();
	virtual ~Scale9GridInfo();
	Scaleform::Render::Scale9GridInfo & operator=(Scaleform::Render::Scale9GridInfo &);
	Scaleform::Render::Scale9GridInfo & operator=(const Scaleform::Render::Scale9GridInfo &);
};
struct Scaleform::Render::Image9GridVertex
{
	float x; // 0x0
	float y; // 0x4
	float u; // 0x8
	float v; // 0xC
	void Set(float, float, float, float);
	static Scaleform::Render::VertexElement Elements[3]; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::VertexFormat Format; // 0xFFFFFFFFFFFFFFFF
};
struct Scaleform::Render::Scale9GridTess
{
	struct TmpVertexType;
	class TmpVertices;
	Scale9GridTess(Scaleform::MemoryHeap *, const Scaleform::Render::Scale9GridInfo &, const Scaleform::Render::Rect<float> &, const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &);
	unsigned long GetVertexCount();
	Scaleform::Render::Image9GridVertex * GetVertices();
	unsigned long GetIndexCount();
	unsigned short * GetIndices();
private:
	unsigned long getAreaCode(const Scaleform::Render::Rect<float> &, float, float);
	void addVertex(Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2> &, float, float, float, float, unsigned long);
	void addVertices(Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2> &, const Scaleform::Render::Matrix2x4<float> &, float, float, unsigned long, unsigned long);
	void addCorner(Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2> &, const float *, float, float, const Scaleform::Render::Matrix2x4<float> &, unsigned long, unsigned long, unsigned long, unsigned long);
	void transformVertex(const Scaleform::Render::Scale9GridInfo &, Scaleform::Render::Image9GridVertex &);
	void tessellateArea(Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2> &, unsigned long, unsigned long);
	static bool cmpCodes(const Scaleform::Render::Scale9GridTess::TmpVertexType &, const Scaleform::Render::Scale9GridTess::TmpVertexType &);
	static bool cmpSlopes(const Scaleform::Render::Scale9GridTess::TmpVertexType &, const Scaleform::Render::Scale9GridTess::TmpVertexType &);
	Scaleform::Render::Image9GridVertex Vertices[24]; // 0x0
	unsigned long VerCount; // 0x180
	Scaleform::ArrayStaticBuffPOD<unsigned short,72,2> Indices; // 0x188
public:
	~Scale9GridTess();
};
struct Scaleform::Render::Scale9GridTess::TmpVertexType
{
	unsigned long AreaCode; // 0x0
	unsigned long VerIdx; // 0x4
	float Slope; // 0x8
};
class Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2>
{
	struct ValueType;
private:
	ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2>(const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2> &);
public:
	ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2>(Scaleform::MemoryHeap *);
	~ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2>();
	void Clear();
	void PushBack(const Scaleform::Render::Scale9GridTess::TmpVertexType &);
	unsigned long long GetSize();
	void CutAt(unsigned long long);
	Scaleform::Render::Scale9GridTess::TmpVertexType & operator[](unsigned long long);
	const Scaleform::Render::Scale9GridTess::TmpVertexType & operator[](unsigned long long);
	Scaleform::Render::Scale9GridTess::TmpVertexType & At(unsigned long long);
	const Scaleform::Render::Scale9GridTess::TmpVertexType & At(unsigned long long);
	Scaleform::Render::Scale9GridTess::TmpVertexType ValueAt(unsigned long long);
private:
	const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2> & operator=(const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Scale9GridTess::TmpVertexType,72,2> &);
	Scaleform::MemoryHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Reserved; // 0x10
	Scaleform::Render::Scale9GridTess::TmpVertexType Static[72]; // 0x18
	Scaleform::Render::Scale9GridTess::TmpVertexType * Data; // 0x378
public:
	void __dflt_ctor_closure();
};
bool Scaleform::Render::Scale9GridTess::cmpCodes(const Scaleform::Render::Scale9GridTess::TmpVertexType & a, const Scaleform::Render::Scale9GridTess::TmpVertexType & b); // 0x1403CD2A0
bool Scaleform::Render::Scale9GridTess::cmpSlopes(const Scaleform::Render::Scale9GridTess::TmpVertexType & a, const Scaleform::Render::Scale9GridTess::TmpVertexType & b); // 0x1403BBAD0
class Scaleform::ArrayStaticBuffPOD<unsigned short,72,2>
{
	typedef unsigned short ValueType;
private:
	ArrayStaticBuffPOD<unsigned short,72,2>(const Scaleform::ArrayStaticBuffPOD<unsigned short,72,2> &);
public:
	ArrayStaticBuffPOD<unsigned short,72,2>(Scaleform::MemoryHeap *);
	~ArrayStaticBuffPOD<unsigned short,72,2>();
	void Clear();
	void PushBack(const unsigned short &);
	unsigned long long GetSize();
	void CutAt(unsigned long long);
	unsigned short & operator[](unsigned long long);
	const unsigned short & operator[](unsigned long long);
	unsigned short & At(unsigned long long);
	const unsigned short & At(unsigned long long);
	unsigned short ValueAt(unsigned long long);
private:
	const Scaleform::ArrayStaticBuffPOD<unsigned short,72,2> & operator=(const Scaleform::ArrayStaticBuffPOD<unsigned short,72,2> &);
	Scaleform::MemoryHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Reserved; // 0x10
	unsigned short Static[72]; // 0x18
	unsigned short * Data; // 0xA8
public:
	void __dflt_ctor_closure();
};