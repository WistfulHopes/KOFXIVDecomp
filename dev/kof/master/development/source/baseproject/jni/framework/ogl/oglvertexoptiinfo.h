#pragma once

class OGLVertexOptiInfo
{
public:
	long VerCoordFlg; // 0x0
	long Count; // 0x4
	float pWeights[16]; // 0x8
	unsigned short pBoneIdx[16]; // 0x48
	OGLVertexOptiInfo();
	~OGLVertexOptiInfo();
	void initialize();
	void finalize();
};