#pragma once

class AgRectangle
{
public:
	AgRectangle(long, long, long, long);
	AgRectangle();
	bool operator==(const AgRectangle &);
	bool operator!=(const AgRectangle &);
	long m_left; // 0x0
	long m_top; // 0x4
	long m_width; // 0x8
	long m_height; // 0xC
	static long intersects(const AgRectangle &, const AgRectangle &);
};