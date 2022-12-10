#pragma once

struct Scaleform::Render::PathDataPackerTypes
{
	enum RawEdgeType
	{
		Edge_H12 = 0,
		Edge_H28 = 1,
		Edge_V12 = 2,
		Edge_V28 = 3,
		Edge_L6 = 4,
		Edge_L10 = 5,
		Edge_L14 = 6,
		Edge_L30 = 7,
		Edge_C5 = 8,
		Edge_C7 = 9,
		Edge_C9 = 10,
		Edge_C11 = 11,
		Edge_C13 = 12,
		Edge_C15 = 13,
		Edge_C31 = 14,
		EndPath = 15,
	};
	enum RangeType
	{
		MaxUInt6 = 63,
		MaxUInt7 = 127,
		MaxUInt14 = 16383,
		MaxUInt22 = 4194303,
		MaxUInt30 = 1073741823,
		MinSInt5 = 240,
		MaxSInt5 = 15,
		MinSInt6 = 224,
		MaxSInt6 = 31,
		MinSInt7 = 192,
		MaxSInt7 = 63,
		MinSInt8 = 128,
		MaxSInt8 = 127,
		MinSInt9 = -256,
		MaxSInt9 = 255,
		MinSInt10 = -512,
		MaxSInt10 = 511,
		MinSInt11 = -1024,
		MaxSInt11 = 1023,
		MinSInt12 = -2048,
		MaxSInt12 = 2047,
		MinSInt13 = -4096,
		MaxSInt13 = 4095,
		MinSInt14 = -8192,
		MaxSInt14 = 8191,
		MinSInt15 = -16384,
		MaxSInt15 = 16383,
		MinSInt17 = -65536,
		MaxSInt17 = 65535,
		MinSInt18 = -131072,
		MaxSInt18 = 131071,
		MinSInt19 = -262144,
		MaxSInt19 = 262143,
		MinSInt20 = -524288,
		MaxSInt20 = 524287,
		MinSInt21 = -1048576,
		MaxSInt21 = 1048575,
		MinSInt22 = -2097152,
		MaxSInt22 = 2097151,
		MinSInt23 = -4194304,
		MaxSInt23 = 4194303,
		MinSInt24 = -8388608,
		MaxSInt24 = 8388607,
		MinSInt25 = -16777216,
		MaxSInt25 = 16777215,
		MinSInt26 = -33554432,
		MaxSInt26 = 33554431,
		MinSInt27 = -67108864,
		MaxSInt27 = 67108863,
		MinSInt28 = -268435456,
		MaxSInt28 = 268435455,
		MinSInt29 = -268435456,
		MaxSInt29 = 268435455,
		MinSInt30 = -536870912,
		MaxSInt30 = 536870911,
		MinSInt31 = -1073741824,
		MaxSInt31 = 1073741823,
	};
	enum EdgeType
	{
		Edge_HLine = 0,
		Edge_VLine = 1,
		Edge_Line = 2,
		Edge_Quad = 3,
		Edge_EndPath = 4,
	};
};
void Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteFloat(float v); // 0x140350CE0
unsigned long Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteUInt15(unsigned long v); // 0x14035D780
unsigned long Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteUInt15(unsigned long v); // 0x140372DD0
unsigned long Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteUInt30(unsigned long v); // 0x14035D8C0
unsigned long Scaleform::Render::PathDataEncoder<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteUInt30(unsigned long v); // 0x1402ED520
unsigned long Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteUInt30(unsigned long v); // 0x140350E40
unsigned long Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteSInt30(long v); // 0x14035D3D0
unsigned long Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteSInt30(long v); // 0x140372A60
unsigned long Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteHLine(long x); // 0x14035B940
unsigned long Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteHLine(long x); // 0x1403710F0
unsigned long Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteVLine(long y); // 0x14035DC50
unsigned long Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteVLine(long y); // 0x140372F00
unsigned long Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteLine(long x, long y); // 0x14035BB90
unsigned long Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteLine(long x, long y); // 0x140371320
enum Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteLine::__l2::<unnamed-enum-m2>
{
	m2 = 3,
	m6 = 63,
};
enum Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteLine::__l2::<unnamed-enum-m2>
{
	m2 = 3,
	m6 = 63,
};
unsigned long Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteQuad(long cx, long cy, long ax, long ay); // 0x14035C220
unsigned long Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteQuad(long cx, long cy, long ax, long ay); // 0x140371940
enum Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteQuad::__l14::<unnamed-enum-m1>
{
	m1 = 1,
	m2 = 3,
	m3 = 7,
	m4 = 15,
	m5 = 31,
	m6 = 63,
	m7 = 127,
};
enum Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteQuad::__l14::<unnamed-enum-m1>
{
	m1 = 1,
	m2 = 3,
	m3 = 7,
	m4 = 15,
	m5 = 31,
	m6 = 63,
	m7 = 127,
};
unsigned long Scaleform::Render::PathDataEncoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteEndPath(); // 0x14035B8D0
unsigned long Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::WriteEndPath(); // 0x140371080
unsigned long Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::ReadUInt30(unsigned long pos, unsigned long * v); // 0x1403DA700
unsigned long Scaleform::Render::PathDataDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::ReadUInt30(unsigned long pos, unsigned long * v); // 0x1403DA700
unsigned long Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::ReadSInt30(unsigned long pos, long * v); // 0x14035B170
unsigned long Scaleform::Render::PathDataDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::ReadSInt30(unsigned long pos, long * v); // 0x14035B170
unsigned long Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::ReadEdge(unsigned long pos, long * data); // 0x14035A8E0
unsigned long Scaleform::Render::PathDataDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::ReadEdge(unsigned long pos, long * data); // 0x140378240