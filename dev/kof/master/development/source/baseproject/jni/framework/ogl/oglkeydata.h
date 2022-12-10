#pragma once

struct _OGLKeyParse
{
	long Frame; // 0x0
	OGLVec2 Aspect; // 0x4
	float fovYDegree; // 0xC
	_OGLKeyParse();
};
struct OGLKeyScale
{
	long Frame; // 0x0
	OGLVec3 s; // 0x4
	OGLKeyScale(OGLKeyScale &);
	OGLKeyScale(const OGLKeyScale &);
	OGLKeyScale();
};
struct OGLKeyRot
{
	long Frame; // 0x0
	OGLQuat q; // 0x4
	OGLKeyRot();
};
struct OGLKeyTrans
{
	long Frame; // 0x0
	OGLVec3 t; // 0x4
	OGLKeyTrans(OGLKeyTrans &);
	OGLKeyTrans(const OGLKeyTrans &);
	OGLKeyTrans();
};
struct OGLUVData
{
	long Material; // 0x0
	long Index; // 0x4
	float Scal; // 0x8
	OGLVec2 uv; // 0xC
	OGLUVData();
};
class OGLKeyUV
{
public:
	float m_fFrame; // 0x0
	long m_iUvCount; // 0x4
	OGLUVData * m_pUvData; // 0x8
	OGLKeyUV();
	~OGLKeyUV();
	void initialize();
	void finalize();
};