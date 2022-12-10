#pragma once

struct z_stream_s
{
	unsigned char * next_in; // 0x0
	unsigned long avail_in; // 0x8
	unsigned long total_in; // 0xC
	unsigned char * next_out; // 0x10
	unsigned long avail_out; // 0x18
	unsigned long total_out; // 0x1C
	char * msg; // 0x20
	internal_state * state; // 0x28
	void *(*zalloc)(void *, unsigned long, unsigned long); // 0x30
	void(*zfree)(void *, void *); // 0x38
	void * opaque; // 0x40
	long data_type; // 0x48
	unsigned long adler; // 0x4C
	unsigned long reserved; // 0x50
};
class Scaleform::GFx::ZLibFile :
	Scaleform::File
{
private:
	Scaleform::GFx::ZLibFileImpl * pImpl; // 0x10
	static long ZLib_InitStream(z_stream_s *, void *, void *, unsigned long);
public:
	ZLibFile(const Scaleform::GFx::ZLibFile &);
	ZLibFile(Scaleform::File *);
	virtual ~ZLibFile();
	virtual const char * GetFilePath();
	virtual bool IsValid();
	virtual bool IsWritable();
	virtual long Tell();
	virtual long long LTell();
	virtual long GetLength();
	virtual long long LGetLength();
	virtual long GetErrorCode();
	virtual long Write(const unsigned char *, long);
	virtual long Read(unsigned char *, long);
	virtual long SkipBytes(long);
	virtual long BytesAvailable();
	virtual bool Flush();
	virtual long Seek(long, long);
	virtual long long LSeek(long long, long);
	virtual bool ChangeSize(long);
	virtual long CopyFromStream(Scaleform::File *, long);
	virtual bool Close();
	Scaleform::GFx::ZLibFile & operator=(const Scaleform::GFx::ZLibFile &);
	void __dflt_ctor_closure();
};
bool Scaleform::GFx::ZLibFile::ChangeSize(long newSize); // 0x14004BBE0