#pragma once

class Scaleform::WStringBuffer
{
	struct ReserveHeader;
private:
	wchar_t * pText; // 0x0
	unsigned long long Length; // 0x8
	Scaleform::WStringBuffer::ReserveHeader Reserved; // 0x10
public:
	WStringBuffer(const Scaleform::WStringBuffer &);
	WStringBuffer(const Scaleform::WStringBuffer::ReserveHeader &);
	WStringBuffer();
	~WStringBuffer();
	bool Resize(unsigned long long);
	void Clear();
	const wchar_t * ToWStr();
	unsigned long long GetLength();
	wchar_t * GetBuffer();
	wchar_t & operator[](unsigned long long);
	wchar_t operator[](unsigned long long);
	Scaleform::WStringBuffer & operator=(const char *);
	Scaleform::WStringBuffer & operator=(const wchar_t *);
	Scaleform::WStringBuffer & operator=(const Scaleform::String &);
	Scaleform::WStringBuffer & operator=(const Scaleform::WStringBuffer &);
	void ResizeInternal(unsigned long long, bool);
	void SetString(const char *, unsigned long long);
	void SetString(const wchar_t *, unsigned long long);
	void StripTrailingNewLines();
};
struct Scaleform::WStringBuffer::ReserveHeader
{
	wchar_t * pBuffer; // 0x0
	unsigned long long Size; // 0x8
	ReserveHeader(wchar_t *, unsigned long long);
	ReserveHeader();
};