#pragma once

class RandomNumbers :
	RandomMT
{
public:
	RandomNumbers(const RandomNumbers &);
	RandomNumbers();
	~RandomNumbers();
	long uniformRandomNumbers();
	OGLVec4 widthUniformrandomNumbers(OGLVec4);
	OGLVec3 widthUniformrandomNumbers(OGLVec3);
	RandomNumbers & operator=(const RandomNumbers &);
};
float RandomNumbers::uniformRandomNumbers<float>(float under, float over); // 0x1401376D0
double RandomNumbers::uniformRandomNumbers<double>(double under, double over); // 0x1401469A0
float RandomNumbers::widthUniformRandomNumbers<float>(float width); // 0x140137670