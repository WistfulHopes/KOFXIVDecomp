#pragma once

class OGLBone
{
public:
	long m_iNo; // 0x0
	unsigned long m_usIndexCount; // 0x4
	unsigned long * m_pusIndex; // 0x8
	float m_fLength; // 0x10
	OGLVec3 m_vTransform; // 0x14
	OGLMatrix m_mOffset; // 0x20
	long m_sParents; // 0x60
	unsigned long m_uiBoneInfoFlg; // 0x64
	long m_sChild; // 0x68
	long m_sBrother; // 0x6C
	unsigned char * m_cName; // 0x70
	unsigned char m_cNameOrigin[64]; // 0x78
	long m_iNodeLevel; // 0xB8
	OGLPrevAnimationBone m_aBindPose; // 0xBC
	unsigned char m_bNewFormat; // 0xE4
	OGLBone(const OGLBone &);
	OGLBone();
	~OGLBone();
	void initialize();
	void finalize();
	void clear();
	float getLength();
	unsigned char load(OGLInputStream *, long);
	unsigned char loadFloat(OGLInputStream *, long);
	unsigned char loadMemcpy(OGLInputStream *, long);
	unsigned char setOGLBone(OGLBone *);
};