#pragma once

class OGLFigure
{
public:
	unsigned long m_uiStateFlg; // 0x0
	float * m_pfVertexCoord; // 0x8
	unsigned long m_usVertexCoordCount; // 0x10
	float * m_pfNormalCoord; // 0x18
	unsigned long m_usNormalCoordCount; // 0x20
	float * m_pfVertexColor; // 0x28
	unsigned long m_usVertexColorCount; // 0x30
	unsigned long m_uiMultiUvCount; // 0x34
	float * m_pfTexCoord[4]; // 0x38
	unsigned long m_usTexCoordCount[4]; // 0x58
	OGLMatrix * m_pBindPose; // 0x68
	OGLBone * m_pBone; // 0x70
	unsigned char * m_cBoneNames; // 0x78
	unsigned long long * m_iBoneHash; // 0x80
	unsigned long m_uiBoneCount; // 0x88
	OGLMaterial * m_pMaterial; // 0x90
	unsigned char * m_cMatreialNames; // 0x98
	unsigned long m_ucMaterialCount; // 0xA0
	unsigned long * m_pusIndex; // 0xA8
	unsigned short * m_pussIndex; // 0xB0
	unsigned long m_usIndexCount; // 0xB8
	long m_iFormatType; // 0xBC
	long * m_psMaterialIndex; // 0xC0
	long * m_psVertexCoordIndex; // 0xC8
	float * m_pfTangentCoord; // 0xD0
	unsigned long m_usTangentCoordCount; // 0xD8
	long m_iNodeLevelMax; // 0xDC
	long m_iInfluenceMax; // 0xE0
	OGLVertexOptiInfo * m_pVerOptiInfo; // 0xE8
	void * m_pfVertexBuffer; // 0xF0
	void * m_pfIndexBuffer; // 0xF8
	unsigned long vertexBuffer; // 0x100
	OGLFigure();
	~OGLFigure();
	void initialize();
	static OGLFigure * createFigure(unsigned char *, long, unsigned char, unsigned char);
	static OGLFigure * createFigure(const char *, unsigned char, unsigned char);
	static OGLFigure * createBaseFigure(const char *, unsigned char, unsigned char);
	void finalize();
	void setNodeLevel(OGLBone *);
	long loadObacData(unsigned char *, unsigned long);
	unsigned char loadObacData(const char *);
	long loadBaseObacData(unsigned char *, unsigned long);
	unsigned char loadBaseObacData(const char *);
	void loadObacDataNoMotion(unsigned char);
	void copyParamaterGPU();
	unsigned long getStateFlg();
	void flipH();
	void calcTangentAndBinormal(float *, float *, float *, float *, float *, float *, float *, float *);
};