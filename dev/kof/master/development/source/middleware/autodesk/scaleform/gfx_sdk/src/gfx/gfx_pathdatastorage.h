#pragma once

struct Scaleform::GFx::PathDataTypes
{
	enum RawEdgeType
	{
		Edge_H12 = 0,
		Edge_H20 = 1,
		Edge_V12 = 2,
		Edge_V20 = 3,
		Edge_L6 = 4,
		Edge_L10 = 5,
		Edge_L14 = 6,
		Edge_L18 = 7,
		Edge_C5 = 8,
		Edge_C7 = 9,
		Edge_C9 = 10,
		Edge_C11 = 11,
		Edge_C13 = 12,
		Edge_C15 = 13,
		Edge_C17 = 14,
		Edge_C19 = 15,
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
		MinSInt22 = -2097152,
		MaxSInt22 = 2097151,
	};
	enum EdgeType
	{
		Edge_HLine = 0,
		Edge_VLine = 1,
		Edge_Line = 2,
		Edge_Quad = 3,
	};
};
void Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::WriteUInt16fixlen(unsigned long v); // 0x140425710
void Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::WriteUInt32fixlen(unsigned long v); // 0x140425A50
void Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::WriteSInt16fixlen(long v); // 0x140425580
unsigned long Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::WriteUInt15(unsigned long v); // 0x140425620
unsigned long Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::WriteSInt15(long v); // 0x140425490
unsigned long Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::WriteUInt30(unsigned long v); // 0x1404257B0
unsigned long Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::WriteHLine(long x); // 0x1404240B0
unsigned long Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::WriteVLine(long y); // 0x140425B70
unsigned long Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::WriteLine(long x, long y); // 0x140424220
enum Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::WriteLine::__l2::<unnamed-enum-m2>
{
	m2 = 3,
	m6 = 63,
};
unsigned long Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::WriteQuad(long cx, long cy, long ax, long ay); // 0x140424640
enum Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::WriteQuad::__l14::<unnamed-enum-m1>
{
	m1 = 1,
	m2 = 3,
	m3 = 7,
	m4 = 15,
	m5 = 31,
	m6 = 63,
	m7 = 127,
};
unsigned long Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::ReadUInt30(unsigned long pos, unsigned long * v); // 0x1403DA5A0
unsigned long Scaleform::GFx::PathDataDecoder<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >::ReadUInt30(unsigned long pos, unsigned long * v); // 0x1403DA700
unsigned long Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> >::ReadEdge(unsigned long pos, long * data); // 0x1403D9730
unsigned long Scaleform::GFx::PathDataDecoder<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >::ReadEdge(unsigned long pos, long * data); // 0x1403D9D80