#pragma once

class OGLInputStream
{
private:
	unsigned char * m_pucData; // 0x0
	unsigned long m_uiPoint; // 0x8
	unsigned long m_uiSize; // 0xC
	unsigned long m_uiVersion; // 0x10
public:
	OGLInputStream(unsigned char *, unsigned long);
	OGLInputStream();
	~OGLInputStream();
	void open(unsigned char *, unsigned long);
	void setVersion(unsigned long);
	void close();
	char getChar();
	short getShort();
	long getInt();
	long getInt24();
	float getFloat();
	void forwardInt24();
	void getData(void *, long);
	unsigned long getPointer();
	void seek(long, long);
	void seekInt(long, long);
};