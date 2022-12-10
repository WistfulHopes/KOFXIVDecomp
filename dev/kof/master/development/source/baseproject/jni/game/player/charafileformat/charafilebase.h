#pragma once

class InputStreamBroker<CFile>
{
private:
	CFile & f; // 0x0
	InputStreamBroker<CFile>(const InputStreamBroker<CFile> &);
public:
	InputStreamBroker<CFile>(CFile &);
	~InputStreamBroker<CFile>();
	void close();
	long read(void *, long, long);
	void seek(long, long);
private:
	InputStreamBroker<CFile> & operator=(const InputStreamBroker<CFile> &);
};
InputStreamBroker<CFile>::~InputStreamBroker<CFile>(); // 0x14017D7A0
void InputStreamBroker<CFile>::close(); // 0x14017D7F0
long InputStreamBroker<CFile>::read(void * pBuf, long size, long n); // 0x14017D840
class InputStreamBroker<OGLInputStream>
{
private:
	OGLInputStream & in; // 0x0
	InputStreamBroker<OGLInputStream>(const InputStreamBroker<OGLInputStream> &);
public:
	InputStreamBroker<OGLInputStream>(OGLInputStream &);
	~InputStreamBroker<OGLInputStream>();
	void close();
	long read(void *, long, long);
	void seek(long, long);
private:
	InputStreamBroker<OGLInputStream> & operator=(const InputStreamBroker<OGLInputStream> &);
};
InputStreamBroker<OGLInputStream>::~InputStreamBroker<OGLInputStream>(); // 0x14017D890
long InputStreamBroker<OGLInputStream>::read(void * pBuf, long size, long n); // 0x14017D8A0
class CharaFileBase
{
private:
	CharaFileBase(const CharaFileBase &);
public:
	CharaFileBase();
	~CharaFileBase();
private:
	CharaFileBase & operator=(const CharaFileBase &);
	enum <unnamed-enum-FILE_INDENTIFIER_COUNT>
	{
		FILE_INDENTIFIER_COUNT = 4,
	};
	struct FileHeader;
public:
	CharaFileBase::FileHeader fileHeader; // 0x8
	bool CheckFileID();
	unsigned long GetFormatVersion();
	void InitData();
	long ReadFile(const char *);
	long ReadBuffer(unsigned char *, unsigned long);
	long GetReadErrorID();
	bool IsEmpty();
	bool IsReadSuccess();
protected:
	long iReadErrorID; // 0x10
};
struct CharaFileBase::FileHeader
{
	char fileIdentifier[4]; // 0x0
	unsigned long uiFormatVersion; // 0x4
};
unsigned long CharaFileBase::GetFormatVersion(); // 0x1400305F0
long CharaFileBase::GetReadErrorID(); // 0x14017D8E0
bool CharaFileBase::IsEmpty(); // 0x14017D8F0