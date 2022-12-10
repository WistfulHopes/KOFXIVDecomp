#pragma once

class OGLMirrorData
{
public:
	long boneID; // 0x0
	long mirrorType; // 0x4
	OGLMirrorData();
};
class OGLMirror
{
public:
	OGLMirrorData * m_MirrorData; // 0x0
	long m_MirrorCount; // 0x8
	unsigned char * * m_cBoneName; // 0x10
	unsigned long m_uiBoneCount; // 0x18
	long cFormatType; // 0x1C
	OGLMirror();
	~OGLMirror();
	void initialize();
	void finalize();
	static OGLMirror * createMirror(unsigned char *, long);
	static OGLMirror * createMirror(const char *);
	unsigned char loadOmirData(unsigned char *, long);
	unsigned char loadOmirData(const char *);
	static OGLMirror * createMirrorDummy(OGLFigure *);
};