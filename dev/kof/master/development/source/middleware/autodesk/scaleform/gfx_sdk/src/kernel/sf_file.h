#pragma once

class Scaleform::FileConstants
{
	enum OpenFlags
	{
		Open_Read = 1,
		Open_Write = 2,
		Open_ReadWrite = 3,
		Open_Truncate = 4,
		Open_Create = 8,
		Open_CreateOnly = 24,
		Open_Buffered = 32,
	};
	enum Modes
	{
		Mode_Read = 292,
		Mode_Write = 146,
		Mode_Execute = 73,
		Mode_ReadWrite = 438,
	};
	enum SeekOps
	{
		Seek_Set = 0,
		Seek_Cur = 1,
		Seek_End = 2,
	};
	enum Errors
	{
		Error_FileNotFound = 4097,
		Error_Access = 4098,
		Error_IOError = 4099,
		Error_DiskFull = 4100,
	};
};
class Scaleform::File :
	Scaleform::RefCountBase<Scaleform::File,2>,
	Scaleform::FileConstants
{
public:
	File(Scaleform::File &);
	File(const Scaleform::File &);
	File();
	const char * GetFilePath();
	bool IsValid();
	bool IsWritable();
	long Tell();
	long long LTell();
	long GetLength();
	long long LGetLength();
	long GetErrorCode();
	long Write(const unsigned char *, long);
	long Read(unsigned char *, long);
	long SkipBytes(long);
	long BytesAvailable();
	bool Flush();
	bool IsEOF();
	long Seek(long, long);
	long long LSeek(long long, long);
	long SeekToBegin();
	long SeekToEnd();
	long Skip(long);
	bool ChangeSize(long);
	long CopyFromStream(Scaleform::File *, long);
	bool Close();
private:
	unsigned long long PRead64();
	unsigned long PRead32();
	unsigned short PRead16();
	unsigned char PRead8();
	void PWrite64(unsigned long long);
	void PWrite32(unsigned long);
	void PWrite16(unsigned short);
	void PWrite8(unsigned char);
public:
	void WriteUByte(unsigned char);
	void WriteSByte(char);
	void WriteUInt8(unsigned char);
	void WriteSInt8(char);
	void WriteUInt16(unsigned short);
	void WriteSInt16(short);
	void WriteUInt32(unsigned long);
	void WriteSInt32(long);
	void WriteUInt64(unsigned long long);
	void WriteSInt64(long long);
	void WriteFloat(float);
	void WriteDouble(double);
	void WriteUByteBE(unsigned char);
	void WriteSByteBE(char);
	void WriteUInt8BE(unsigned short);
	void WriteSInt8BE(short);
	void WriteUInt16BE(unsigned short);
	void WriteSInt16BE(unsigned short);
	void WriteUInt32BE(unsigned long);
	void WriteSInt32BE(unsigned long);
	void WriteUInt64BE(unsigned long long);
	void WriteSInt64BE(unsigned long long);
	void WriteFloatBE(float);
	void WriteDoubleBE(double);
	unsigned char ReadUByte();
	char ReadSByte();
	unsigned char ReadUInt8();
	char ReadSInt8();
	unsigned short ReadUInt16();
	short ReadSInt16();
	unsigned long ReadUInt32();
	long ReadSInt32();
	unsigned long long ReadUInt64();
	long long ReadSInt64();
	float ReadFloat();
	double ReadDouble();
	unsigned char ReadUByteBE();
	char ReadSByteBE();
	unsigned char ReadUInt8BE();
	char ReadSInt8BE();
	unsigned short ReadUInt16BE();
	short ReadSInt16BE();
	unsigned long ReadUInt32BE();
	long ReadSInt32BE();
	unsigned long long ReadUInt64BE();
	long long ReadSInt64BE();
	float ReadFloatBE();
	double ReadDoubleBE();
	virtual ~File();
	Scaleform::File & operator=(Scaleform::File &);
	Scaleform::File & operator=(const Scaleform::File &);
};
class Scaleform::RefCountBase<Scaleform::File,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::File,2>(Scaleform::RefCountBase<Scaleform::File,2> &);
	RefCountBase<Scaleform::File,2>(const Scaleform::RefCountBase<Scaleform::File,2> &);
	RefCountBase<Scaleform::File,2>();
	virtual ~RefCountBase<Scaleform::File,2>();
	Scaleform::RefCountBase<Scaleform::File,2> & operator=(Scaleform::RefCountBase<Scaleform::File,2> &);
	Scaleform::RefCountBase<Scaleform::File,2> & operator=(const Scaleform::RefCountBase<Scaleform::File,2> &);
};
long Scaleform::File::SeekToBegin(); // 0x1402708B0
class Scaleform::DelegatedFile :
	Scaleform::File
{
protected:
	Scaleform::Ptr<Scaleform::File> pFile; // 0x10
public:
	DelegatedFile(Scaleform::File *);
protected:
	DelegatedFile(const Scaleform::DelegatedFile &);
	DelegatedFile();
public:
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
	virtual ~DelegatedFile();
	Scaleform::DelegatedFile & operator=(const Scaleform::DelegatedFile &);
};
class Scaleform::Ptr<Scaleform::File>
{
protected:
	Scaleform::File * pObject; // 0x0
public:
	Ptr<Scaleform::File>(const Scaleform::Ptr<Scaleform::File> &);
	Ptr<Scaleform::File>(Scaleform::File *);
	Ptr<Scaleform::File>(Scaleform::Ptr<Scaleform::File> &, Scaleform::PickType);
	Ptr<Scaleform::File>(Scaleform::Pickable<Scaleform::File>);
	Ptr<Scaleform::File>(Scaleform::File &);
	Ptr<Scaleform::File>();
	~Ptr<Scaleform::File>();
	bool operator==(Scaleform::File *);
	bool operator==(const Scaleform::Ptr<Scaleform::File> &);
	bool operator!=(Scaleform::File *);
	bool operator!=(const Scaleform::Ptr<Scaleform::File> &);
	bool operator<(const Scaleform::Ptr<Scaleform::File> &);
	Scaleform::Ptr<Scaleform::File> & operator=(Scaleform::Pickable<Scaleform::File>);
	const Scaleform::Ptr<Scaleform::File> & operator=(Scaleform::File &);
	const Scaleform::Ptr<Scaleform::File> & operator=(Scaleform::File *);
	const Scaleform::Ptr<Scaleform::File> & operator=(const Scaleform::Ptr<Scaleform::File> &);
	Scaleform::Ptr<Scaleform::File> & SetPtr(Scaleform::Pickable<Scaleform::File>);
	Scaleform::Ptr<Scaleform::File> & SetPtr(Scaleform::File &);
	Scaleform::Ptr<Scaleform::File> & SetPtr(Scaleform::File *);
	Scaleform::Ptr<Scaleform::File> & SetPtr(const Scaleform::Ptr<Scaleform::File> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::File * & GetRawRef();
	Scaleform::File * GetPtr();
	Scaleform::File & operator*();
	Scaleform::File * operator->();
	Scaleform::File * operator class Scaleform::File *();
	Scaleform::Ptr<Scaleform::File> & Pick(Scaleform::File *);
	Scaleform::Ptr<Scaleform::File> & Pick(Scaleform::Pickable<Scaleform::File>);
	Scaleform::Ptr<Scaleform::File> & Pick(Scaleform::Ptr<Scaleform::File> &);
};
const char * Scaleform::DelegatedFile::GetFilePath(); // 0x1402EE220
bool Scaleform::DelegatedFile::IsValid(); // 0x1403692F0
bool Scaleform::DelegatedFile::IsWritable(); // 0x14034FC20
long Scaleform::DelegatedFile::Tell(); // 0x1403477E0
long long Scaleform::DelegatedFile::LTell(); // 0x1402EE450
long Scaleform::DelegatedFile::GetLength(); // 0x1402EE280
long long Scaleform::DelegatedFile::LGetLength(); // 0x140347820
long Scaleform::DelegatedFile::GetErrorCode(); // 0x1403477B0
long Scaleform::DelegatedFile::Write(const unsigned char * pbuffer, long numBytes); // 0x1402EE860
long Scaleform::DelegatedFile::Read(unsigned char * pbuffer, long numBytes); // 0x1402EE5B0
long Scaleform::DelegatedFile::SkipBytes(long numBytes); // 0x1402EE700
long Scaleform::DelegatedFile::BytesAvailable(); // 0x1402EDFF0
bool Scaleform::DelegatedFile::Flush(); // 0x1402EE1A0
long Scaleform::DelegatedFile::Seek(long offset, long origin); // 0x140326860
long long Scaleform::DelegatedFile::LSeek(long long offset, long origin); // 0x1402EE3F0
bool Scaleform::DelegatedFile::ChangeSize(long newSize); // 0x1402EE030
long Scaleform::DelegatedFile::CopyFromStream(Scaleform::File * pstream, long byteSize); // 0x1402EE170
bool Scaleform::DelegatedFile::Close(); // 0x1402EE090
class Scaleform::BufferedFile :
	Scaleform::DelegatedFile
{
	enum BufferModeType
	{
		NoBuffer = 0,
		ReadBuffer = 1,
		WriteBuffer = 2,
	};
protected:
	unsigned char * pBuffer; // 0x18
	Scaleform::BufferedFile::BufferModeType BufferMode; // 0x20
	unsigned long Pos; // 0x24
	unsigned long DataSize; // 0x28
	unsigned long long FilePos; // 0x30
	bool SetBufferMode(Scaleform::BufferedFile::BufferModeType);
	void FlushBuffer();
	void LoadBuffer();
public:
	BufferedFile(Scaleform::File *);
protected:
	BufferedFile(const Scaleform::BufferedFile &);
	BufferedFile();
	Scaleform::BufferedFile & operator=(const Scaleform::BufferedFile &);
public:
	virtual ~BufferedFile();
	virtual long Tell();
	virtual long long LTell();
	virtual long GetLength();
	virtual long long LGetLength();
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
};
class Scaleform::MemoryFile :
	Scaleform::File
{
public:
	virtual const char * GetFilePath();
	virtual bool IsValid();
	virtual bool IsWritable();
	virtual bool Flush();
	virtual long GetErrorCode();
	virtual long Tell();
	virtual long long LTell();
	virtual long GetLength();
	virtual long long LGetLength();
	virtual bool Close();
	virtual long CopyFromStream(Scaleform::File *, long);
	virtual long Write(const unsigned char *, long);
	virtual long Read(unsigned char *, long);
	virtual long SkipBytes(long);
	virtual long BytesAvailable();
	virtual long Seek(long, long);
	virtual long long LSeek(long long, long);
	virtual bool ChangeSize(long);
	MemoryFile(Scaleform::MemoryFile &);
	MemoryFile(const Scaleform::MemoryFile &);
	MemoryFile(const char *, const unsigned char *, long);
	MemoryFile(const Scaleform::String &, const unsigned char *, long);
private:
	Scaleform::String FilePath; // 0x10
	const unsigned char * FileData; // 0x18
	long FileSize; // 0x20
	long FileIndex; // 0x24
	bool Valid; // 0x28
public:
	virtual ~MemoryFile();
	Scaleform::MemoryFile & operator=(Scaleform::MemoryFile &);
	Scaleform::MemoryFile & operator=(const Scaleform::MemoryFile &);
};
const char * Scaleform::MemoryFile::GetFilePath(); // 0x1403696F0
bool Scaleform::MemoryFile::IsValid(); // 0x1402F0120
bool Scaleform::MemoryFile::IsWritable(); // 0x14004BBE0
bool Scaleform::MemoryFile::Flush(); // 0x1400B8180
long Scaleform::MemoryFile::Tell(); // 0x1402F0860
long long Scaleform::MemoryFile::LTell(); // 0x1402F0160
long Scaleform::MemoryFile::GetLength(); // 0x14034F960
long long Scaleform::MemoryFile::LGetLength(); // 0x1402F0130
bool Scaleform::MemoryFile::Close(); // 0x1402F00C0
long Scaleform::MemoryFile::CopyFromStream(Scaleform::File * pstream, long byteSize); // 0x1400470F0
long Scaleform::MemoryFile::Read(unsigned char * pbufer, long numBytes); // 0x1402F07B0
long Scaleform::MemoryFile::SkipBytes(long numBytes); // 0x1402F0830
long Scaleform::MemoryFile::BytesAvailable(); // 0x1402F00A0
long Scaleform::MemoryFile::Seek(long offset, long origin); // 0x1402F0800
long long Scaleform::MemoryFile::LSeek(long long offset, long origin); // 0x1402F0140
bool Scaleform::MemoryFile::ChangeSize(long newSize); // 0x1402F00B0
Scaleform::MemoryFile::MemoryFile(const Scaleform::String & fileName, const unsigned char * pBuffer, long buffSize); // 0x1402EFE00