#pragma once

Scaleform::Render::ShapePathType Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::ReadPathInfo(Scaleform::Render::ShapePosInfo * pos, float * coord, unsigned long * styles); // 0x14035B060
Scaleform::Render::ShapePathType Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::ReadPathInfo(Scaleform::Render::ShapePosInfo * pos, float * coord, unsigned long * styles); // 0x14035B060
Scaleform::Render::PathEdgeType Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::ReadEdge(Scaleform::Render::ShapePosInfo * pos, float * coord); // 0x14035AF10
Scaleform::Render::PathEdgeType Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::ReadEdge(Scaleform::Render::ShapePosInfo * pos, float * coord); // 0x140378870
class Scaleform::Render::PathDataDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > :
	Scaleform::Render::PathDataPackerTypes
{
public:
	PathDataDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(const Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	unsigned long GetSize();
	const Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> & GetData();
	char ReadChar(unsigned long);
	unsigned long ReadUInt16fixlen(unsigned long);
	unsigned long ReadUInt32fixlen(unsigned long);
	long ReadSInt16fixlen(unsigned long);
	long ReadSInt32fixlen(unsigned long);
	float ReadFloat(unsigned long);
	unsigned long ReadSInt15(unsigned long, long *);
	unsigned long ReadSInt30(unsigned long, long *);
	unsigned long ReadUInt15(unsigned long, unsigned long *);
	unsigned long ReadUInt30(unsigned long, unsigned long *);
	unsigned long ReadRawEdge(unsigned long, unsigned char *);
	unsigned long ReadEdge(unsigned long, long *);
private:
	const Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> * Data; // 0x0
	static const unsigned char Sizes[16]; // 0xFFFFFFFFFFFFFFFF
};
class Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > :
	Scaleform::Render::PathDataPackerTypes
{
public:
	PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(const Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	unsigned long GetSize();
	const Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> & GetData();
	char ReadChar(unsigned long);
	unsigned long ReadUInt16fixlen(unsigned long);
	unsigned long ReadUInt32fixlen(unsigned long);
	long ReadSInt16fixlen(unsigned long);
	long ReadSInt32fixlen(unsigned long);
	float ReadFloat(unsigned long);
	unsigned long ReadSInt15(unsigned long, long *);
	unsigned long ReadSInt30(unsigned long, long *);
	unsigned long ReadUInt15(unsigned long, unsigned long *);
	unsigned long ReadUInt30(unsigned long, unsigned long *);
	unsigned long ReadRawEdge(unsigned long, unsigned char *);
	unsigned long ReadEdge(unsigned long, long *);
private:
	const Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> * Data; // 0x0
	static const unsigned char Sizes[16]; // 0xFFFFFFFFFFFFFFFF
};
class Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > :
	Scaleform::Render::PathDataPackerTypes
{
public:
	PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	void Clear();
	void WriteChar(char);
	void WriteUInt16fixlen(unsigned long);
	void WriteUInt32fixlen(unsigned long);
	void WriteSInt16fixlen(long);
	void WriteSInt32fixlen(long);
	void WriteFloat(float);
	void UpdateUInt16fixlen(unsigned long, unsigned long);
	void UpdateUInt32fixlen(unsigned long, unsigned long);
	void UpdateFloat(unsigned long, float);
	void UpdateSInt16fixlen(unsigned long, long);
	void UpdateSInt32fixlen(unsigned long, long);
	unsigned long WriteUInt15(unsigned long);
	unsigned long WriteUInt30(unsigned long);
	unsigned long WriteSInt15(long);
	unsigned long WriteSInt30(long);
	unsigned long WriteHLine(long);
	unsigned long WriteVLine(long);
	unsigned long WriteLine(long, long);
	unsigned long WriteQuad(long, long, long, long);
	unsigned long WriteEndPath();
	void CutAt(unsigned long);
	unsigned long long GetSize();
	void Serialize(void *, unsigned long, unsigned long);
	void Deserialize(const void *, unsigned long);
private:
	Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> * Data; // 0x0
};
class Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > :
	Scaleform::Render::PathDataPackerTypes
{
public:
	PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	void Clear();
	void WriteChar(char);
	void WriteUInt16fixlen(unsigned long);
	void WriteUInt32fixlen(unsigned long);
	void WriteSInt16fixlen(long);
	void WriteSInt32fixlen(long);
	void WriteFloat(float);
	void UpdateUInt16fixlen(unsigned long, unsigned long);
	void UpdateUInt32fixlen(unsigned long, unsigned long);
	void UpdateFloat(unsigned long, float);
	void UpdateSInt16fixlen(unsigned long, long);
	void UpdateSInt32fixlen(unsigned long, long);
	unsigned long WriteUInt15(unsigned long);
	unsigned long WriteUInt30(unsigned long);
	unsigned long WriteSInt15(long);
	unsigned long WriteSInt30(long);
	unsigned long WriteHLine(long);
	unsigned long WriteVLine(long);
	unsigned long WriteLine(long, long);
	unsigned long WriteQuad(long, long, long, long);
	unsigned long WriteEndPath();
	void CutAt(unsigned long);
	unsigned long long GetSize();
	void Serialize(void *, unsigned long, unsigned long);
	void Deserialize(const void *, unsigned long);
private:
	Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> * Data; // 0x0
};
unsigned long Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::AddFillStyle(const Scaleform::Render::FillStyleType & fill); // 0x140359230
unsigned long Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::AddStrokeStyle(const Scaleform::Render::StrokeStyleType & stroke); // 0x1403592A0
void Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::StartPath(Scaleform::Render::ShapePosInfo * pos, Scaleform::Render::ShapePathType type, unsigned long leftStyle, unsigned long rightStyle, unsigned long strokeStyle, float startX, float startY); // 0x14035B5A0
void Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::StartPath(Scaleform::Render::ShapePosInfo * pos, Scaleform::Render::ShapePathType type, unsigned long leftStyle, unsigned long rightStyle, unsigned long strokeStyle, float startX, float startY); // 0x140378BA0
void Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::LineTo(Scaleform::Render::ShapePosInfo * pos, float x, float y); // 0x14035A5B0
void Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::QuadTo(Scaleform::Render::ShapePosInfo * pos, float cx, float cy, float ax, float ay); // 0x14035A850
void Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::ClosePath(Scaleform::Render::ShapePosInfo * pos); // 0x140376450
void Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::EndPath(); // 0x14036FC90
void Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::EndShape(); // 0x14035A210
void Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::EndShape(); // 0x14036FCF0
class Scaleform::Render::ShapeDataPackedEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >
{
public:
	ShapeDataPackedEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *, float);
	void StartPath(Scaleform::Render::ShapePosInfo *, Scaleform::Render::ShapePathType, unsigned long, unsigned long, unsigned long, float, float);
	void LineTo(Scaleform::Render::ShapePosInfo *, float, float);
	void QuadTo(Scaleform::Render::ShapePosInfo *, float, float, float, float);
	void ClosePath(Scaleform::Render::ShapePosInfo *);
	void EndPath();
	void EndShape();
private:
	Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > Encoder; // 0x0
	float Multiplier; // 0x8
};
class Scaleform::Render::ShapeDataPackedEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >
{
public:
	ShapeDataPackedEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *, float);
	void StartPath(Scaleform::Render::ShapePosInfo *, Scaleform::Render::ShapePathType, unsigned long, unsigned long, unsigned long, float, float);
	void LineTo(Scaleform::Render::ShapePosInfo *, float, float);
	void QuadTo(Scaleform::Render::ShapePosInfo *, float, float, float, float);
	void ClosePath(Scaleform::Render::ShapePosInfo *);
	void EndPath();
	void EndShape();
private:
	Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > Encoder; // 0x0
	float Multiplier; // 0x8
};
bool Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::IsEmpty(); // 0x14035A590
unsigned long Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetFillStyleCount(); // 0x14035A410
unsigned long Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetFillStyleCount(); // 0x14035A410
unsigned long Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetStrokeStyleCount(); // 0x1406C2200
unsigned long Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetStrokeStyleCount(); // 0x1406C2200
void Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetFillStyle(unsigned long idx, Scaleform::Render::FillStyleType * p); // 0x14035A300
void Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetFillStyle(unsigned long idx, Scaleform::Render::FillStyleType * p); // 0x140377450
void Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetStrokeStyle(unsigned long idx, Scaleform::Render::StrokeStyleType * p); // 0x14035A430
void Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetStrokeStyle(unsigned long idx, Scaleform::Render::StrokeStyleType * p); // 0x1403775A0
unsigned long Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetStartingPos(); // 0x14035A420
unsigned long Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetStartingPos(); // 0x14035A420
Scaleform::Render::ShapePathType Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::ReadPathInfo(Scaleform::Render::ShapePosInfo * pos, float * coord, unsigned long * styles); // 0x14035B050
Scaleform::Render::ShapePathType Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::ReadPathInfo(Scaleform::Render::ShapePosInfo * pos, float * coord, unsigned long * styles); // 0x14035B050
Scaleform::Render::PathEdgeType Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::ReadEdge(Scaleform::Render::ShapePosInfo * pos, float * coord); // 0x14035AF00
Scaleform::Render::PathEdgeType Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::ReadEdge(Scaleform::Render::ShapePosInfo * pos, float * coord); // 0x140378860
class Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >
{
public:
	ShapeDataPackedDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(const Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *, float);
	Scaleform::Render::ShapePathType ReadPathInfo(Scaleform::Render::ShapePosInfo *, float *, unsigned long *);
	Scaleform::Render::PathEdgeType ReadEdge(Scaleform::Render::ShapePosInfo *, float *);
private:
	Scaleform::Render::PathDataDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > Decoder; // 0x0
	float OneOverMultiplier; // 0x8
};
class Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >
{
public:
	ShapeDataPackedDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(const Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *, float);
	Scaleform::Render::ShapePathType ReadPathInfo(Scaleform::Render::ShapePosInfo *, float *, unsigned long *);
	Scaleform::Render::PathEdgeType ReadEdge(Scaleform::Render::ShapePosInfo *, float *);
private:
	Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > Decoder; // 0x0
	float OneOverMultiplier; // 0x8
};
class Scaleform::ArrayLH<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::FillStyleType,Scaleform::AllocatorLH<Scaleform::Render::FillStyleType,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorLH<Scaleform::Render::StrokeStyleType,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy>();
};