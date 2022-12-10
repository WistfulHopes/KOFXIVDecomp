#pragma once

class OGLVec2
{
public:
	float x; // 0x0
	float y; // 0x4
	OGLVec2(OGLVec2 *);
	OGLVec2(float, float);
	OGLVec2();
	void set(OGLVec2 *);
	void set(float, float);
	void add(OGLVec2 *);
	void sub(OGLVec2 *);
	void normalize(OGLVec2 *);
	void normalize();
	float length(OGLVec2 *);
	float length();
	float lengthSq(OGLVec2 *);
	float lengthSq();
	void transPoint(OGLMatrix *);
	void transCoord(OGLMatrix *);
};