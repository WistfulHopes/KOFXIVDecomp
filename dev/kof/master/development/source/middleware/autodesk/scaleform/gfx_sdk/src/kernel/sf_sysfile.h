#pragma once

struct Scaleform::FileStat
{
	long long ModifyTime; // 0x0
	long long AccessTime; // 0x8
	long long FileSize; // 0x10
	bool operator==(const Scaleform::FileStat &);
};
class Scaleform::SysFile :
	Scaleform::DelegatedFile
{
public:
	SysFile(const Scaleform::String &, long, long);
	SysFile();
protected:
	SysFile(const Scaleform::SysFile &);
public:
	bool Open(const Scaleform::String &, long, long);
	bool Create(const Scaleform::String &, long);
	static bool GetFileStat(Scaleform::FileStat *, const Scaleform::String &);
	virtual long GetErrorCode();
	virtual bool IsValid();
	virtual bool Close();
	virtual ~SysFile();
	Scaleform::SysFile & operator=(const Scaleform::SysFile &);
};