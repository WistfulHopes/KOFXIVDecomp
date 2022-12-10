#pragma once

class OGLModelStackData
{
public:
	long no; // 0x0
	unsigned long * pIndex; // 0x8
	unsigned short * pSIndex; // 0x10
	unsigned long sIndexCount; // 0x18
	long TexID[4]; // 0x1C
	long MatMapID[10]; // 0x2C
	unsigned long BlendMode; // 0x54
	unsigned long EffectFlg; // 0x58
	float * Colors; // 0x60
	float fAlpha; // 0x68
	OGLModel * pModel; // 0x70
	OGLMatrix pMatrix; // 0x78
	OGLMatrix pWorldMatrix; // 0xB8
	OGLVec3 * pVec3; // 0xF8
	long PosZ; // 0x100
	long MatNo; // 0x104
	long ThisID; // 0x108
	float * work0; // 0x110
	float * work1; // 0x118
	float * work2; // 0x120
	float * work3; // 0x128
	long m_iRenderNo; // 0x130
	OGLModelStackData();
};