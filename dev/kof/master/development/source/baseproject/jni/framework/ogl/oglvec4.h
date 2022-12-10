#pragma once

class OGLVec4
{
public:
	float x; // 0x0
	float y; // 0x4
	float z; // 0x8
	float w; // 0xC
	OGLVec4(OGLVec4 *);
	OGLVec4(float, float, float, float);
	OGLVec4();
	void set(OGLVec4 *);
	void set(float, float, float, float);
	void normalize();
	float length();
	float lengthSq();
	void transCoord(OGLMatrix *, OGLVec4 *);
	void transCoord(OGLMatrix *);
	static float dot(OGLVec4 *, OGLVec4 *);
};