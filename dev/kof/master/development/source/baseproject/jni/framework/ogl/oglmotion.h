#pragma once

class OGLMotion
{
public:
	OGLMotionData * * m_ppMotionData; // 0x0
	unsigned long m_usMotionCount; // 0x8
	unsigned char * * m_cBoneName; // 0x10
	unsigned long m_ucBoneCount; // 0x18
	long cFormatType; // 0x1C
	unsigned long long * m_iBoneHash; // 0x20
	unsigned char * m_ptr; // 0x28
	OGLMotion();
	~OGLMotion();
	static OGLMotion * createMotion(unsigned char *, long);
	static OGLMotion * createMotion(const char *);
	void initialize();
	void finalize();
	long loadOtraData(unsigned char *, long);
	unsigned char loadOtraData(const char *);
	float getTotalFrame(long);
};