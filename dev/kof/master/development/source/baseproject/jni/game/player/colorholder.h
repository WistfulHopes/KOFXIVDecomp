#pragma once

struct ColorHolder
{
	float r; // 0x0
	float g; // 0x4
	float b; // 0x8
	float a; // 0xC
	ColorHolder(unsigned char, unsigned char, unsigned char, unsigned char);
	ColorHolder(long);
	ColorHolder(float, float, float, float);
	ColorHolder();
	void SetColor(float, float, float, float);
	void SetColor(unsigned char, unsigned char, unsigned char, unsigned char);
	void SetColor(long);
	void SetRed(float);
	void SetGreen(float);
	void SetBlue(float);
	void SetAlpha(float);
	void SetRed8(unsigned char);
	void SetGreen8(unsigned char);
	void SetBlue8(unsigned char);
	void SetAlpha8(unsigned char);
	long GetColor32();
	unsigned char GetRed8();
	unsigned char GetGreen8();
	unsigned char GetBlue8();
	unsigned char GetAlpha8();
	struct _rgba32;
	union _rgbauni;
private:
	float _GetColor8(unsigned char);
};
void ColorHolder::SetColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a); // 0x140173570
struct ColorHolder::_rgba32
{
	unsigned char a; // 0x0
	unsigned char b; // 0x1
	unsigned char g; // 0x2
	unsigned char r; // 0x3
};
union ColorHolder::_rgbauni
{
public:
	ColorHolder::_rgba32 s; // 0x0
	long rgba; // 0x0
};