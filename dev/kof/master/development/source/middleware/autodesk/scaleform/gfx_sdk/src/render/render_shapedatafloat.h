#pragma once

void Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::StartLayer(); // 0x1402EB3D0
void Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::StartLayer(); // 0x140350B30
void Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::StartPath(unsigned long leftStyle, unsigned long rightStyle, unsigned long strokeStyle); // 0x1402EB450
void Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::StartPath(unsigned long leftStyle, unsigned long rightStyle, unsigned long strokeStyle); // 0x140350BB0
void Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::MoveTo(float x, float y); // 0x1402E5590
void Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::MoveTo(float x, float y); // 0x140350040
void Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::LineTo(float x, float y); // 0x1402E4AA0
void Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::LineTo(float x, float y); // 0x14034FF80
void Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::QuadTo(float cx, float cy, float ax, float ay); // 0x1403503B0
void Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::CubicTo(float cx1, float cy1, float cx2, float cy2, float ax, float ay); // 0x14034EC30
void Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::EndPath(); // 0x1402E1840
void Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::EndShape(); // 0x1402E18C0
class Scaleform::Render::PathDataEncoder<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > :
	Scaleform::Render::PathDataPackerTypes
{
public:
	PathDataEncoder<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
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
	Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> * Data; // 0x0
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
unsigned long Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetFillStyleCount(); // 0x14034F960
unsigned long Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetStrokeStyleCount(); // 0x14035A410
unsigned long Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetStrokeStyleCount(); // 0x14035A410
void Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetFillStyle(unsigned long idx, Scaleform::Render::FillStyleType * p); // 0x14034F860
void Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetFillStyle(unsigned long idx, Scaleform::Render::FillStyleType * p); // 0x14034F860
void Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetStrokeStyle(unsigned long idx, Scaleform::Render::StrokeStyleType * p); // 0x14034FA40
void Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetStrokeStyle(unsigned long idx, Scaleform::Render::StrokeStyleType * p); // 0x14034FA40
unsigned long Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetStartingPos(); // 0x1406C2200
unsigned long Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetStartingPos(); // 0x1406C2200
Scaleform::Render::ShapePathType Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::ReadPathInfo(Scaleform::Render::ShapePosInfo * pos, float * coord, unsigned long * styles); // 0x1402E7C60
Scaleform::Render::ShapePathType Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::ReadPathInfo(Scaleform::Render::ShapePosInfo * pos, float * coord, unsigned long * styles); // 0x1402E7C60
Scaleform::Render::PathEdgeType Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::ReadEdge(Scaleform::Render::ShapePosInfo * pos, float * coord); // 0x1402E7A30
Scaleform::Render::PathEdgeType Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::ReadEdge(Scaleform::Render::ShapePosInfo * pos, float * coord); // 0x1402E7A30
class Scaleform::Render::PathDataDecoder<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > :
	Scaleform::Render::PathDataPackerTypes
{
public:
	PathDataDecoder<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(const Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	unsigned long GetSize();
	const Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> & GetData();
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
	const Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> * Data; // 0x0
	static const unsigned char Sizes[16]; // 0xFFFFFFFFFFFFFFFF
};
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
class Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > :
	Scaleform::Render::ShapeDataInterface
{
	enum DataStatus
	{
		Status_Clean = 0,
		Status_StartLayer = 1,
		Status_StartPath = 2,
		Status_MoveTo = 3,
		Status_EdgeTo = 4,
		Status_EndPath = 5,
		Status_EndShape = 6,
	};
	enum DataTags
	{
		Tag_NewLayer = 0,
		Tag_NewPath = 1,
		Tag_MoveTo = 2,
		Tag_LineTo = 3,
		Tag_QuadTo = 4,
		Tag_CubicTo = 5,
		Tag_EndPath = 6,
		Tag_EndShape = 7,
	};
public:
	ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > &);
	ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(const Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > &);
	ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> *, unsigned long);
	void Clear();
	unsigned long AddFillStyle(const Scaleform::Render::FillStyleType &);
	unsigned long AddStrokeStyle(float, unsigned long, float, unsigned long);
	unsigned long AddStrokeStyle(const Scaleform::Render::StrokeStyleType &);
	void StartLayer();
	void StartPath(unsigned long, unsigned long, unsigned long);
	void MoveTo(float, float);
	void LineTo(float, float);
	void QuadTo(float, float, float, float);
	void CubicTo(float, float, float, float, float, float);
	void ClosePath();
	void EndPath();
	void EndShape();
	virtual unsigned long GetFillStyleCount();
	virtual unsigned long GetStrokeStyleCount();
	virtual void GetFillStyle(unsigned long, Scaleform::Render::FillStyleType *);
	virtual void GetStrokeStyle(unsigned long, Scaleform::Render::StrokeStyleType *);
	virtual unsigned long GetStartingPos();
	virtual Scaleform::Render::ShapePathType ReadPathInfo(Scaleform::Render::ShapePosInfo *, float *, unsigned long *);
	virtual Scaleform::Render::PathEdgeType ReadEdge(Scaleform::Render::ShapePosInfo *, float *);
	float GetLastX();
	float GetLastY();
private:
	Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::DataStatus Status; // 0x10
	Scaleform::ArrayLH<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy> Fills; // 0x18
	Scaleform::ArrayLH<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy> Strokes; // 0x30
	Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> * Data; // 0x48
	unsigned long StartingPos; // 0x50
	float StartX; // 0x54
	float StartY; // 0x58
	float LastX; // 0x5C
	float LastY; // 0x60
public:
	virtual ~ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >();
	Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > & operator=(Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > &);
	Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > & operator=(const Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> > &);
};
class Scaleform::Render::ShapeDataFloat :
	Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >
{
	class BaseType;
public:
	ShapeDataFloat(Scaleform::Render::ShapeDataFloat &);
	ShapeDataFloat(const Scaleform::Render::ShapeDataFloat &);
	ShapeDataFloat();
private:
	Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> Container; // 0x68
public:
	virtual ~ShapeDataFloat();
	Scaleform::Render::ShapeDataFloat & operator=(Scaleform::Render::ShapeDataFloat &);
	Scaleform::Render::ShapeDataFloat & operator=(const Scaleform::Render::ShapeDataFloat &);
};
class Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef unsigned char ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>();
};