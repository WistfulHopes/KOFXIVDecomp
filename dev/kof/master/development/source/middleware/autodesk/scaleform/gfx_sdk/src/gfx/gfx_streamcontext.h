#pragma once

struct Scaleform::GFx::StreamContext
{
	const unsigned char * pData; // 0x0
	unsigned long long DataSize; // 0x8
	unsigned long long CurByteIndex; // 0x10
	unsigned long CurBitIndex; // 0x18
	StreamContext(const unsigned char *, unsigned long long);
	unsigned long ReadU32();
	unsigned short ReadU16();
	unsigned char ReadU8();
	char ReadS8();
	unsigned long ReadUInt4();
	unsigned long ReadUInt5();
	unsigned long ReadUInt(unsigned long);
	long ReadSInt(unsigned long);
	bool ReadUInt1();
	float ReadFloat();
	void ReadRgb(Scaleform::Render::Color *);
	void ReadRgba(Scaleform::Render::Color *);
	void ReadMatrix(Scaleform::Render::Matrix2x4<float> *);
	void ReadCxformRgb(Scaleform::Render::Cxform *);
	void ReadCxformRgba(Scaleform::Render::Cxform *);
	void Align();
	void Skip(unsigned long);
};