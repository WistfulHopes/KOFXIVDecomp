#pragma once

class OGLShader
{
	class AttribIndexArray;
public:
	unsigned long m_Program; // 0x0
	OGLShader::AttribIndexArray m_piGLAttrib; // 0x8
	long m_programSlot; // 0x18
	long m_outputMask; // 0x1C
	long m_iGLAttribNum; // 0x20
	long * m_piGLUniform; // 0x28
	long m_iGLUniformNum; // 0x30
	OGLShader(unsigned long, unsigned long, const char *, unsigned char, long, const _SHADER_INFO *, long, const _SHADER_INFO *, unsigned char *);
	OGLShader(unsigned long, unsigned long, const char *, bool, long, const _SHADER_INFO *, long, const _SHADER_INFO *, unsigned char *, void *, const unsigned long);
	OGLShader(unsigned long, unsigned long, bool, long, const _SHADER_INFO *, long, const _SHADER_INFO *, unsigned char *, void *, const unsigned long);
	OGLShader(const char *, unsigned char, long, const _SHADER_INFO *, long, const _SHADER_INFO *, unsigned char *);
	OGLShader(unsigned long, unsigned long, unsigned long, unsigned char, long, const _SHADER_INFO *, long, const _SHADER_INFO *, unsigned char *);
	OGLShader(unsigned long, unsigned long, unsigned char, long, const _SHADER_INFO *, long, const _SHADER_INFO *, unsigned char *);
	OGLShader();
	const char * m_fragFile; // 0x38
	~OGLShader();
	void initialize();
	void finalize();
	unsigned char createShader(unsigned long, unsigned long, const char *, bool, long, const _SHADER_INFO *, long, const _SHADER_INFO *, void *, const unsigned long, unsigned char *);
	unsigned char createShader(unsigned long, unsigned long, const char *, unsigned char, long, const _SHADER_INFO *, long, const _SHADER_INFO *, unsigned char *);
	unsigned char createShader(unsigned long, unsigned long, bool, long, const _SHADER_INFO *, long, const _SHADER_INFO *, void *, const unsigned long, unsigned char *);
	unsigned char createShader(unsigned long, unsigned long, unsigned long, unsigned char, long, const _SHADER_INFO *, long, const _SHADER_INFO *, unsigned char *);
	unsigned char createShader(unsigned long, unsigned long, unsigned char, long, const _SHADER_INFO *, long, const _SHADER_INFO *, unsigned char *);
	unsigned char compileShader(unsigned long *, unsigned long, const char *, bool, void *, const unsigned long *, unsigned char *, long);
	static unsigned char compileShader(unsigned long *, unsigned long, const char *, unsigned char, unsigned char *, long);
	void releaseShader();
	void useShader();
	unsigned char createComputeShader(const char *, unsigned char, long, const _SHADER_INFO *, long, const _SHADER_INFO *, unsigned char *);
	unsigned char getAttribLocations(long, const _SHADER_INFO *);
	unsigned char getUniformLocations(long, const _SHADER_INFO *);
	void listUniforms();
	static const char * getFileName(const char *);
};
class OGLShader::AttribIndexArray
{
public:
	long operator[](long);
	bool operator==(long *);
	long * glValue; // 0x0
	unsigned char * divisor; // 0x8
};