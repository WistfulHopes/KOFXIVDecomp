#pragma once

class InputStream
{
public:
	InputStream();
private:
	InputStream(const InputStream &);
	InputStream & operator=(const InputStream &);
protected:
	long exception; // 0x8
public:
	~InputStream();
	long read(unsigned char *, long, long);
	long read(unsigned char *, long);
	long read();
	long skip(long);
	long available();
	void close();
	void mark(long);
	void reset();
	unsigned char markSupported();
	void setException(long);
	long getException();
	long length();
	long seek(char, long);
};