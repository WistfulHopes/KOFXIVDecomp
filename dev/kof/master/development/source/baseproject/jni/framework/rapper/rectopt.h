#pragma once

struct RECT_BASE
{
	float x; // 0x0
	float y; // 0x4
	float w; // 0x8
	float h; // 0xC
};
class RectOpt :
	RECT_BASE
{
public:
	RectOpt(float, float, float, float);
	RectOpt(const RectOpt &);
	RectOpt();
	const RectOpt & operator=(const RectOpt &);
	float getLeft();
	float getTop();
	float getRight();
	float getBottom();
	unsigned char equals(const RectOpt &);
	unsigned char contains(float, float, float, float);
	unsigned char contains(const RectOpt &);
	unsigned char contains(float, float);
	static RectOpt fromLTRB(float, float, float, float);
	void intersect(float, float, float, float);
	void intersect(const RectOpt &);
	unsigned char intersectsWith(float, float, float, float);
	unsigned char intersectsWith(const RectOpt &);
};