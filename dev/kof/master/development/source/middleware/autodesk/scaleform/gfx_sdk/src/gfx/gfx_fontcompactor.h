#pragma once

void Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::ReadBounds(unsigned long pos); // 0x1403D92B0
void Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >::ReadBounds(unsigned long pos); // 0x1403D9480
void Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::readPathHeader(); // 0x1403DAE10
void Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >::readPathHeader(); // 0x1403DAF40
class Scaleform::RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >,261> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,261>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 261,
	};
public:
	RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >,261>(Scaleform::RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >,261> &);
	RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >,261>(const Scaleform::RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >,261> &);
	RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >,261>();
	virtual ~RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >,261>();
	Scaleform::RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >,261> & operator=(Scaleform::RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >,261> &);
	Scaleform::RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >,261> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >,261> &);
};
class Scaleform::RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >,261> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,261>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 261,
	};
public:
	RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >,261>(Scaleform::RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >,261> &);
	RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >,261>(const Scaleform::RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >,261> &);
	RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >,261>();
	virtual ~RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >,261>();
	Scaleform::RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >,261> & operator=(Scaleform::RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >,261> &);
	Scaleform::RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >,261> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >,261> &);
};
class Scaleform::GFx::PathDataDecoder<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > :
	Scaleform::GFx::PathDataTypes
{
public:
	PathDataDecoder<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >(const Scaleform::ArrayUnsafeLH_POD<unsigned char,261> &);
	unsigned long GetSize();
	const Scaleform::ArrayUnsafeLH_POD<unsigned char,261> & GetData();
	char ReadChar(unsigned long);
	unsigned long ReadUInt16fixlen(unsigned long);
	unsigned long ReadUInt32fixlen(unsigned long);
	long ReadSInt16fixlen(unsigned long);
	long ReadSInt32fixlen(unsigned long);
	unsigned long ReadSInt15(unsigned long, long *);
	unsigned long ReadSInt30(unsigned long, long *);
	unsigned long ReadUInt15(unsigned long, unsigned long *);
	unsigned long ReadUInt30(unsigned long, unsigned long *);
	unsigned long ReadRawEdge(unsigned long, unsigned char *);
	unsigned long ReadEdge(unsigned long, long *);
private:
	const Scaleform::ArrayUnsafeLH_POD<unsigned char,261> * Data; // 0x0
	static const unsigned char Sizes[16]; // 0xFFFFFFFFFFFFFFFF
};
class Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >
{
	class PathDataDecoderType;
public:
	GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >(const Scaleform::ArrayUnsafeLH_POD<unsigned char,261> &);
	void ReadBounds(unsigned long);
	bool ValidBounds();
	void SetSpaceBounds(unsigned long);
	void StartGlyph(unsigned long);
	Scaleform::Render::Rect<float> & GetBounds(Scaleform::Render::Rect<float> *);
	long GetWidth();
	long GetHeight();
	bool IsFinished();
	void AdvancePath();
	long GetMoveX();
	long GetMoveY();
	bool IsPathFinished();
	void ReadEdge(long *);
private:
	void readPathHeader();
	Scaleform::GFx::PathDataDecoder<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > Data; // 0x0
	unsigned long Pos; // 0x8
	short XMin; // 0xC
	short YMin; // 0xE
	short XMax; // 0x10
	short YMax; // 0x12
	long MoveX; // 0x14
	long MoveY; // 0x18
	unsigned long NumContours; // 0x1C
	unsigned long NumEdges; // 0x20
	unsigned long EdgePos; // 0x24
	bool JumpToPos; // 0x28
};
class Scaleform::ArrayUnsafePOD<char,2> :
	Scaleform::ArrayUnsafeBase<char,Scaleform::AllocatorGH_POD<char,2> >
{
	typedef char ValueType;
	struct AllocatorType;
	class BaseType;
	class SelfType;
public:
	ArrayUnsafePOD<char,2>(const Scaleform::ArrayUnsafePOD<char,2> &);
	ArrayUnsafePOD<char,2>(unsigned long long);
	ArrayUnsafePOD<char,2>();
	const Scaleform::ArrayUnsafePOD<char,2> & operator=(const Scaleform::ArrayUnsafePOD<char,2> &);
	~ArrayUnsafePOD<char,2>();
};
long Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::GetGlyphIndex(unsigned short code); // 0x1403D6470
long Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >::GetGlyphIndex(unsigned short code); // 0x1403D6530
float Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::GetKerningAdjustment(unsigned long lastCode, unsigned long thisCode); // 0x1403D6A40
float Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >::GetKerningAdjustment(unsigned long lastCode, unsigned long thisCode); // 0x1403D6BB0
float Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::GetGlyphWidth(unsigned long glyphIndex); // 0x1403D6750
float Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >::GetGlyphWidth(unsigned long glyphIndex); // 0x1403D6880
float Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::GetGlyphHeight(unsigned long glyphIndex); // 0x1403D6200
float Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >::GetGlyphHeight(unsigned long glyphIndex); // 0x1403D62E0
Scaleform::Render::Rect<float> & Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::GetGlyphBounds(unsigned long glyphIndex, Scaleform::Render::Rect<float> * prect); // 0x1403D5DB0
Scaleform::Render::Rect<float> & Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >::GetGlyphBounds(unsigned long glyphIndex, Scaleform::Render::Rect<float> * prect); // 0x1403D5F20
void Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >::GetGlyphShape(unsigned long glyphIndex, Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > * glyph); // 0x1403D6680
unsigned long Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::AcquireFont(unsigned long startPos); // 0x1403D49F0
unsigned long Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >::AcquireFont(unsigned long startPos); // 0x1403D4D90
enum Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::AcquireFont::__l2::<unnamed-enum-MinFontDataSize>
{
	MinFontDataSize = 15,
};
enum Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >::AcquireFont::__l2::<unnamed-enum-MinFontDataSize>
{
	MinFontDataSize = 15,
};
class Scaleform::GFx::FontCompactor :
	Scaleform::RefCountBaseNTS<Scaleform::GFx::FontCompactor,261>
{
	enum <unnamed-enum-SID>
	{
		SID = 261,
	};
	class ContainerType;
	class PathDataEncoderType;
	class PathDataDecoderType;
	class GlyphPathIteratorType;
	class CompactedFontType;
private:
	FontCompactor(const Scaleform::GFx::FontCompactor &);
public:
	FontCompactor(Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> &);
	virtual ~FontCompactor();
	void Clear();
	void StartFont(const char *, unsigned long, unsigned long, long, long, long);
	void StartGlyph();
	void MoveTo(short, short);
	void LineTo(short, short);
	void QuadTo(short, short, short, short);
	void EndGlyph(unsigned long, long, bool);
	void EndGlyph(bool);
	void AssignGlyphInfo(unsigned long, unsigned long, long);
	void AssignGlyphCode(unsigned long, unsigned long);
	void AssignGlyphAdvance(unsigned long, long);
	void AddKerningPair(unsigned long, unsigned long, long);
	void UpdateFlags(unsigned long);
	void UpdateMetrics(long, long, long);
	void EndFont();
	unsigned long long GetDataSize();
	void Serialize(void *, unsigned long, unsigned long);
	unsigned long ComputePathHash(unsigned long);
	bool PathsEqual(unsigned long, const Scaleform::GFx::FontCompactor &, unsigned long);
	unsigned long ComputeGlyphHash(unsigned long);
	bool GlyphsEqual(unsigned long, const Scaleform::GFx::FontCompactor &, unsigned long);
private:
	const Scaleform::GFx::FontCompactor & operator=(Scaleform::GFx::FontCompactor &);
	struct VertexType;
	struct ContourType;
	struct GlyphInfoType;
	struct ContourKeyType;
	struct GlyphKeyType;
	struct KerningPairType;
	static bool cmpGlyphCodes(const Scaleform::GFx::FontCompactor::GlyphInfoType &, const Scaleform::GFx::FontCompactor::GlyphInfoType &);
	static bool cmpKerningPairs(const Scaleform::GFx::FontCompactor::KerningPairType &, const Scaleform::GFx::FontCompactor::KerningPairType &);
	void normalizeLastContour();
	static void extendBounds(long *, long *, long *, long *, long, long);
	void computeBounds(long *, long *, long *, long *);
	unsigned long navigateToEndGlyph(unsigned long);
	struct ContainerGlobalAllocator;
	class ContourHashType;
	class GlyphHashType;
	Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > Encoder; // 0x10
	Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > Decoder; // 0x18
	Scaleform::HashSet<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType> > ContourHash; // 0x20
	Scaleform::HashSet<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> > GlyphHash; // 0x28
	Scaleform::ArrayPagedPOD<Scaleform::GFx::FontCompactor::VertexType,6,64,261> TmpVertices; // 0x30
	Scaleform::ArrayPagedPOD<Scaleform::GFx::FontCompactor::ContourType,6,64,261> TmpContours; // 0x58
	Scaleform::ArrayPagedPOD<Scaleform::GFx::FontCompactor::VertexType,6,64,261> TmpContour; // 0x80
	Scaleform::HashSet<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > > GlyphCodes; // 0xA8
	Scaleform::ArrayPagedPOD<Scaleform::GFx::FontCompactor::GlyphInfoType,6,64,261> GlyphInfoTable; // 0xB0
	Scaleform::ArrayPagedPOD<Scaleform::GFx::FontCompactor::KerningPairType,6,64,261> KerningTable; // 0xD8
	unsigned long FontMetricsPos; // 0x100
	unsigned long FontNumGlyphs; // 0x104
	unsigned long FontTotalGlyphBytes; // 0x108
	unsigned long FontStartGlyphs; // 0x10C
};
class Scaleform::RefCountBaseNTS<Scaleform::GFx::FontCompactor,261> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,261>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 261,
	};
public:
	RefCountBaseNTS<Scaleform::GFx::FontCompactor,261>(Scaleform::RefCountBaseNTS<Scaleform::GFx::FontCompactor,261> &);
	RefCountBaseNTS<Scaleform::GFx::FontCompactor,261>(const Scaleform::RefCountBaseNTS<Scaleform::GFx::FontCompactor,261> &);
	RefCountBaseNTS<Scaleform::GFx::FontCompactor,261>();
	virtual ~RefCountBaseNTS<Scaleform::GFx::FontCompactor,261>();
	Scaleform::RefCountBaseNTS<Scaleform::GFx::FontCompactor,261> & operator=(Scaleform::RefCountBaseNTS<Scaleform::GFx::FontCompactor,261> &);
	Scaleform::RefCountBaseNTS<Scaleform::GFx::FontCompactor,261> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::GFx::FontCompactor,261> &);
};
class Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> :
	Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261> >
{
	class SelfType;
	typedef unsigned char ValueType;
	struct AllocatorType;
public:
	ArrayPagedLH_POD<unsigned char,12,256,261>();
	~ArrayPagedLH_POD<unsigned char,12,256,261>();
};
class Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > :
	Scaleform::GFx::PathDataTypes
{
public:
	PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >(Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> &);
	void Clear();
	void WriteChar(char);
	void WriteUInt16fixlen(unsigned long);
	void WriteUInt32fixlen(unsigned long);
	void WriteSInt16fixlen(long);
	void WriteSInt32fixlen(long);
	void UpdateUInt16fixlen(unsigned long, unsigned long);
	void UpdateUInt32fixlen(unsigned long, unsigned long);
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
	void CutAt(unsigned long);
	unsigned long long GetSize();
	void Serialize(void *, unsigned long, unsigned long);
	void Deserialize(const void *, unsigned long);
private:
	Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> * Data; // 0x0
};
class Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > :
	Scaleform::GFx::PathDataTypes
{
public:
	PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >(const Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> &);
	unsigned long GetSize();
	const Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> & GetData();
	char ReadChar(unsigned long);
	unsigned long ReadUInt16fixlen(unsigned long);
	unsigned long ReadUInt32fixlen(unsigned long);
	long ReadSInt16fixlen(unsigned long);
	long ReadSInt32fixlen(unsigned long);
	unsigned long ReadSInt15(unsigned long, long *);
	unsigned long ReadSInt30(unsigned long, long *);
	unsigned long ReadUInt15(unsigned long, unsigned long *);
	unsigned long ReadUInt30(unsigned long, unsigned long *);
	unsigned long ReadRawEdge(unsigned long, unsigned char *);
	unsigned long ReadEdge(unsigned long, long *);
private:
	const Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> * Data; // 0x0
	static const unsigned char Sizes[16]; // 0xFFFFFFFFFFFFFFFF
};
class Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >
{
	class PathDataDecoderType;
public:
	GlyphPathIterator<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >(const Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> &);
	void ReadBounds(unsigned long);
	bool ValidBounds();
	void SetSpaceBounds(unsigned long);
	void StartGlyph(unsigned long);
	Scaleform::Render::Rect<float> & GetBounds(Scaleform::Render::Rect<float> *);
	long GetWidth();
	long GetHeight();
	bool IsFinished();
	void AdvancePath();
	long GetMoveX();
	long GetMoveY();
	bool IsPathFinished();
	void ReadEdge(long *);
private:
	void readPathHeader();
	Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > Data; // 0x0
	unsigned long Pos; // 0x8
	short XMin; // 0xC
	short YMin; // 0xE
	short XMax; // 0x10
	short YMax; // 0x12
	long MoveX; // 0x14
	long MoveY; // 0x18
	unsigned long NumContours; // 0x1C
	unsigned long NumEdges; // 0x20
	unsigned long EdgePos; // 0x24
	bool JumpToPos; // 0x28
};
class Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > :
	Scaleform::RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >,261>
{
	class PathDataDecoderType;
	class GlyphPathIteratorType;
private:
	CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >(const Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > &);
public:
	CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >(const Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> &);
	unsigned long AcquireFont(unsigned long);
	unsigned long GetNumGlyphs();
	long GetGlyphIndex(unsigned short);
	unsigned long GetGlyphCode(unsigned long);
	unsigned long GetAdvanceInt(unsigned long);
	float GetAdvance(unsigned long);
	float GetKerningAdjustment(unsigned long, unsigned long);
	float GetGlyphWidth(unsigned long);
	float GetGlyphHeight(unsigned long);
	Scaleform::Render::Rect<float> & GetGlyphBounds(unsigned long, Scaleform::Render::Rect<float> *);
	void GetGlyphShape(unsigned long, Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *);
	float GetAscent();
	float GetDescent();
	float GetLeading();
	const char * GetName();
	unsigned long GetFontFlags();
	unsigned long GetNominalSize();
	bool MatchFont(const char *, unsigned long);
private:
	const Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > & operator=(const Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > &);
	unsigned long getGlyphPos(unsigned long);
	const Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > Decoder; // 0x10
	unsigned long NumGlyphs; // 0x18
	unsigned long GlyphInfoTablePos; // 0x1C
	unsigned long KerningTableSize; // 0x20
	unsigned long KerningTablePos; // 0x24
	Scaleform::ArrayUnsafePOD<char,2> Name; // 0x28
	unsigned long Flags; // 0x40
	unsigned long NominalSize; // 0x44
	float Ascent; // 0x48
	float Descent; // 0x4C
	float Leading; // 0x50
public:
	virtual ~CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >();
};
struct Scaleform::GFx::FontCompactor::VertexType
{
	short x; // 0x0
	short y; // 0x2
};
struct Scaleform::GFx::FontCompactor::ContourType
{
	unsigned long DataStart; // 0x0
	unsigned long DataSize; // 0x4
};
struct Scaleform::GFx::FontCompactor::GlyphInfoType
{
	unsigned short GlyphCode; // 0x0
	short AdvanceX; // 0x2
	unsigned long GlobalOffset; // 0x4
};
struct Scaleform::GFx::FontCompactor::ContourKeyType
{
	const Scaleform::GFx::FontCompactor * pCoord; // 0x0
	unsigned long HashValue; // 0x8
	unsigned long DataStart; // 0xC
	ContourKeyType(const Scaleform::GFx::FontCompactor *, unsigned long, unsigned long);
	ContourKeyType();
	unsigned long long operator()(const Scaleform::GFx::FontCompactor::ContourKeyType &);
	bool operator==(const Scaleform::GFx::FontCompactor::ContourKeyType &);
};
struct Scaleform::GFx::FontCompactor::GlyphKeyType
{
	const Scaleform::GFx::FontCompactor * pFont; // 0x0
	unsigned long HashValue; // 0x8
	unsigned long DataStart; // 0xC
	GlyphKeyType(const Scaleform::GFx::FontCompactor *, unsigned long, unsigned long);
	GlyphKeyType();
	unsigned long long operator()(const Scaleform::GFx::FontCompactor::GlyphKeyType &);
	bool operator==(const Scaleform::GFx::FontCompactor::GlyphKeyType &);
};
struct Scaleform::GFx::FontCompactor::KerningPairType
{
	unsigned short Char1; // 0x0
	unsigned short Char2; // 0x2
	long Adjustment; // 0x4
};
bool Scaleform::GFx::FontCompactor::cmpKerningPairs(const Scaleform::GFx::FontCompactor::KerningPairType & a, const Scaleform::GFx::FontCompactor::KerningPairType & b); // 0x140425EA0
struct Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261> :
	Scaleform::AllocatorBaseGH<261>,
	Scaleform::ConstructorMov<Scaleform::GFx::FontCompactor::ContourKeyType>
{
};
class Scaleform::HashSet<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType> > :
	Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType> >
{
	class BaseType;
	class SelfType;
	struct ValueType;
public:
	HashSet<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scalef(const Scaleform::HashSet<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType> > &);
	HashSet<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scalef(void *, long);
	HashSet<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scalef(void *);
	HashSet<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scalef(long);
	HashSet<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scalef();
	~HashSet<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scale();
	void operator=(const Scaleform::HashSet<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType> > &);
	void CheckExpand();
	void Resize(unsigned long long);
	void SetCapacity(unsigned long long);
};
class Scaleform::HashSet<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> > :
	Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> >
{
	class BaseType;
	class SelfType;
	struct ValueType;
public:
	HashSet<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::G(const Scaleform::HashSet<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> > &);
	HashSet<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::G(void *, long);
	HashSet<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::G(void *);
	HashSet<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::G(long);
	HashSet<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::G();
	~HashSet<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::();
	void operator=(const Scaleform::HashSet<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> > &);
	void CheckExpand();
	void Resize(unsigned long long);
	void SetCapacity(unsigned long long);
};
class Scaleform::ArrayPagedPOD<Scaleform::GFx::FontCompactor::VertexType,6,64,261> :
	Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::VertexType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::VertexType,261> >
{
	class SelfType;
	struct ValueType;
	struct AllocatorType;
public:
	ArrayPagedPOD<Scaleform::GFx::FontCompactor::VertexType,6,64,261>();
	~ArrayPagedPOD<Scaleform::GFx::FontCompactor::VertexType,6,64,261>();
};
class Scaleform::ArrayPagedPOD<Scaleform::GFx::FontCompactor::ContourType,6,64,261> :
	Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::ContourType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::ContourType,261> >
{
	class SelfType;
	struct ValueType;
	struct AllocatorType;
public:
	ArrayPagedPOD<Scaleform::GFx::FontCompactor::ContourType,6,64,261>();
	~ArrayPagedPOD<Scaleform::GFx::FontCompactor::ContourType,6,64,261>();
};
class Scaleform::HashSet<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > > :
	Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > >
{
	class BaseType;
	class SelfType;
	typedef unsigned short ValueType;
public:
	HashSet<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > >(const Scaleform::HashSet<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > > &);
	HashSet<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > >(void *, long);
	HashSet<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > >(void *);
	HashSet<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > >(long);
	HashSet<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > >();
	~HashSet<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > >();
	void operator=(const Scaleform::HashSet<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > > &);
	void CheckExpand();
	void Resize(unsigned long long);
	void SetCapacity(unsigned long long);
};
class Scaleform::ArrayPagedPOD<Scaleform::GFx::FontCompactor::GlyphInfoType,6,64,261> :
	Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::GlyphInfoType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::GlyphInfoType,261> >
{
	class SelfType;
	struct ValueType;
	struct AllocatorType;
public:
	ArrayPagedPOD<Scaleform::GFx::FontCompactor::GlyphInfoType,6,64,261>();
	~ArrayPagedPOD<Scaleform::GFx::FontCompactor::GlyphInfoType,6,64,261>();
};
class Scaleform::ArrayPagedPOD<Scaleform::GFx::FontCompactor::KerningPairType,6,64,261> :
	Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::KerningPairType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::KerningPairType,261> >
{
	class SelfType;
	struct ValueType;
	struct AllocatorType;
public:
	ArrayPagedPOD<Scaleform::GFx::FontCompactor::KerningPairType,6,64,261>();
	~ArrayPagedPOD<Scaleform::GFx::FontCompactor::KerningPairType,6,64,261>();
};