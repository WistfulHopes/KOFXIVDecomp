#pragma once

class extension::AsyncContent<ComboMissionData> :
	extension::RefCountable<extension::AsyncContent<ComboMissionData> >
{
public:
	AsyncContent<ComboMissionData>(const std::string &);
	AsyncContent<ComboMissionData>(const std::string &, const std::string &);
private:
	AsyncContent<ComboMissionData>(const extension::AsyncContent<ComboMissionData> &);
	extension::AsyncContent<ComboMissionData> & operator=(const extension::AsyncContent<ComboMissionData> &);
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_loadOptionString; // 0x28
	std::unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> > m_data; // 0x48
	long m_errorCode; // 0x50
	extension::AsyncStatus m_status; // 0x58
	bool m_isDataReleased; // 0x60
	void initRawMember();
protected:
	~AsyncContent<ComboMissionData>();
	class SharedPtr_t;
public:
	const std::string & name();
	const std::string & path();
	const std::string & optionString();
	bool isReady();
	void waitForReady();
	long getErrorCode();
	ComboMissionData * getData();
	ComboMissionData * releaseData();
	bool isDataReleased();
	void requestForCancel();
	void setResult(std::unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> >);
	void setErrorResult(long);
	void setErrorResultWithData(long, std::unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> >);
	bool isCancelRequested();
};
class AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob :
	extension::FutureObjectJob<ComboMissionData>
{
	class Base_Type;
public:
	AsyncLoadJob(extension::RefCountablePtr<extension::AsyncContent<ComboMissionData> >);
	virtual long run();
	virtual ~AsyncLoadJob();
};
class extension::FutureObjectJob<ComboMissionData> :
	extension::ExThread::Runnable,
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
public:
	FutureObjectJob<ComboMissionData>(extension::RefCountablePtr<extension::AsyncContent<ComboMissionData> >);
private:
	FutureObjectJob<ComboMissionData>(const extension::FutureObjectJob<ComboMissionData> &);
	extension::FutureObjectJob<ComboMissionData> & operator=(const extension::FutureObjectJob<ComboMissionData> &);
	class ContentSharedPtr_t;
public:
	virtual ~FutureObjectJob<ComboMissionData>();
	void setResult(std::unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> > &);
	void setErrorResult(extension::AsyncContentConstants::ErrorCode);
	const std::string & contentPath();
	bool isCancelRequested();
	extension::RefCountablePtr<extension::AsyncContent<ComboMissionData> > releaseContent();
	long run() = 0;
private:
	std::unique_ptr<ComboMissionData,std::default_delete<ComboMissionData> > createOnErrorData();
	extension::RefCountablePtr<extension::AsyncContent<ComboMissionData> > m_content; // 0x18
};
AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob::AsyncLoadJob(extension::RefCountablePtr<extension::AsyncContent<ComboMissionData> > c); // 0x1401CA3F0
long AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob::run(); // 0x1401CA100
class std::unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> > :
	std::_Unique_ptr_base<unsigned char,std::default_delete<unsigned char [0]> >
{
	class _Myt;
	class _Mybase;
	typedef unsigned char *pointer;
	typedef unsigned char element_type;
	struct deleter_type;
public:
	unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> >(const std::unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> > &);
	unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> >(void *);
	unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> >(std::unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> > &);
	unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> >();
	std::unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> > & operator=(const std::unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> > &);
	std::unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> > & operator=(void *);
	std::unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> > & operator=(std::unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> > &);
	void reset(void *);
	void swap(std::unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> > &);
	~unique_ptr<unsigned char [0],std::default_delete<unsigned char [0]> >();
	unsigned char & operator[](unsigned long long);
	unsigned char * get();
	bool operator bool();
	unsigned char * release();
private:
	void _Delete();
};
AsyncCharaFileLoad<ComboMissionData>::~AsyncCharaFileLoad<ComboMissionData>(); // 0x14009DDA0
void AsyncCharaFileLoad<ComboMissionData>::LoadCharaFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > filePath); // 0x1401C9CD0
class std::unique_ptr<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob,std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> > :
	std::_Unique_ptr_base<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob,std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> >
{
	class _Myt;
	class _Mybase;
	typedef AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob,std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> >(const std::unique_ptr<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob,std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> > &);
	unique_ptr<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob,std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> >(std::unique_ptr<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob,std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> > &);
	unique_ptr<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob,std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> >(AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob *, std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> &);
	unique_ptr<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob,std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> >(AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob *, const std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> &);
	unique_ptr<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob,std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> >(AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob *);
	unique_ptr<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob,std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> >(void *);
	unique_ptr<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob,std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> >();
	std::unique_ptr<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob,std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> > & operator=(const std::unique_ptr<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob,std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> > &);
	std::unique_ptr<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob,std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> > & operator=(std::unique_ptr<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob,std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> > &);
	std::unique_ptr<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob,std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> > & operator=(void *);
	void swap(std::unique_ptr<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob,std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> > &);
	~unique_ptr<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob,std::default_delete<AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob> >();
	AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob & operator*();
	AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob * operator->();
	AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob * get();
	bool operator bool();
	AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob * release();
	void reset(AsyncCharaFileLoad<ComboMissionData>::AsyncLoadJob *);
};
extension::AsyncContentConstants::ErrorCode AsyncCharaFileLoad<ComboMissionData>::GetErrorCode(); // 0x1401C94D0
class AsyncCharaDataUnifyLoad
{
	class AsyncState;
	class AsyncLoadJob;
public:
	AsyncCharaDataUnifyLoad(const AsyncCharaDataUnifyLoad &);
	AsyncCharaDataUnifyLoad();
	~AsyncCharaDataUnifyLoad();
	void LoadObj(const CharaProjectData *, long, CharaDataUnify::DATA_TYPE);
	bool IsLoaded();
	CharaDataUnify * GetObj();
	bool IsWorking();
	void Release();
	extension::AsyncContentConstants::ErrorCode GetErrorCode();
private:
	extension::RefCountablePtr<extension::AsyncContent<CharaDataUnify> > state; // 0x0
	bool bWorking; // 0x8
public:
	AsyncCharaDataUnifyLoad & operator=(const AsyncCharaDataUnifyLoad &);
};
class extension::AsyncContent<CharaDataUnify> :
	extension::RefCountable<extension::AsyncContent<CharaDataUnify> >
{
public:
	AsyncContent<CharaDataUnify>(const std::string &);
	AsyncContent<CharaDataUnify>(const std::string &, const std::string &);
private:
	AsyncContent<CharaDataUnify>(const extension::AsyncContent<CharaDataUnify> &);
	extension::AsyncContent<CharaDataUnify> & operator=(const extension::AsyncContent<CharaDataUnify> &);
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_loadOptionString; // 0x28
	std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> > m_data; // 0x48
	long m_errorCode; // 0x50
	extension::AsyncStatus m_status; // 0x58
	bool m_isDataReleased; // 0x60
	void initRawMember();
protected:
	~AsyncContent<CharaDataUnify>();
	class SharedPtr_t;
public:
	const std::string & name();
	const std::string & path();
	const std::string & optionString();
	bool isReady();
	void waitForReady();
	long getErrorCode();
	CharaDataUnify * getData();
	CharaDataUnify * releaseData();
	bool isDataReleased();
	void requestForCancel();
	void setResult(std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> >);
	void setErrorResult(long);
	void setErrorResultWithData(long, std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> >);
	bool isCancelRequested();
};
class AsyncCharaDataUnifyLoad::AsyncLoadJob :
	extension::FutureObjectJob<CharaDataUnify>,
	protected IBinaryDataLoadListener
{
	class Base_Type;
private:
	const CharaProjectData * pProj; // 0x28
	long id; // 0x30
	CharaDataUnify::DATA_TYPE type; // 0x34
public:
	AsyncLoadJob(extension::RefCountablePtr<extension::AsyncContent<CharaDataUnify> >, const CharaProjectData *, long, CharaDataUnify::DATA_TYPE);
	virtual void ReceiveBinaryLoad(const char *, unsigned char * *, unsigned long &);
	virtual long run();
	virtual ~AsyncLoadJob();
};
class extension::FutureObjectJob<CharaDataUnify> :
	extension::ExThread::Runnable,
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
public:
	FutureObjectJob<CharaDataUnify>(extension::RefCountablePtr<extension::AsyncContent<CharaDataUnify> >);
private:
	FutureObjectJob<CharaDataUnify>(const extension::FutureObjectJob<CharaDataUnify> &);
	extension::FutureObjectJob<CharaDataUnify> & operator=(const extension::FutureObjectJob<CharaDataUnify> &);
	class ContentSharedPtr_t;
public:
	virtual ~FutureObjectJob<CharaDataUnify>();
	void setResult(std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> > &);
	void setErrorResult(extension::AsyncContentConstants::ErrorCode);
	const std::string & contentPath();
	bool isCancelRequested();
	extension::RefCountablePtr<extension::AsyncContent<CharaDataUnify> > releaseContent();
	long run() = 0;
private:
	std::unique_ptr<CharaDataUnify,std::default_delete<CharaDataUnify> > createOnErrorData();
	extension::RefCountablePtr<extension::AsyncContent<CharaDataUnify> > m_content; // 0x18
};
AsyncCharaDataUnifyLoad::AsyncLoadJob::AsyncLoadJob(extension::RefCountablePtr<extension::AsyncContent<CharaDataUnify> > c, const CharaProjectData * pProj, long id, CharaDataUnify::DATA_TYPE type); // 0x1401AA500
void AsyncCharaDataUnifyLoad::AsyncLoadJob::ReceiveBinaryLoad(const char * fileName, unsigned char * * pBuf, unsigned long & size); // 0x1401AA5B0
long AsyncCharaDataUnifyLoad::AsyncLoadJob::run(); // 0x1401AA740
AsyncCharaDataUnifyLoad::AsyncCharaDataUnifyLoad(); // 0x1400987B0
AsyncCharaDataUnifyLoad::~AsyncCharaDataUnifyLoad(); // 0x1400987C0
void AsyncCharaDataUnifyLoad::LoadObj(const CharaProjectData * pProj, long id, CharaDataUnify::DATA_TYPE type); // 0x1401AA8A0
class std::unique_ptr<AsyncCharaDataUnifyLoad::AsyncLoadJob,std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> > :
	std::_Unique_ptr_base<AsyncCharaDataUnifyLoad::AsyncLoadJob,std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> >
{
	class _Myt;
	class _Mybase;
	typedef AsyncCharaDataUnifyLoad::AsyncLoadJob pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<AsyncCharaDataUnifyLoad::AsyncLoadJob,std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> >(const std::unique_ptr<AsyncCharaDataUnifyLoad::AsyncLoadJob,std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> > &);
	unique_ptr<AsyncCharaDataUnifyLoad::AsyncLoadJob,std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> >(std::unique_ptr<AsyncCharaDataUnifyLoad::AsyncLoadJob,std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> > &);
	unique_ptr<AsyncCharaDataUnifyLoad::AsyncLoadJob,std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> >(AsyncCharaDataUnifyLoad::AsyncLoadJob *, std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> &);
	unique_ptr<AsyncCharaDataUnifyLoad::AsyncLoadJob,std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> >(AsyncCharaDataUnifyLoad::AsyncLoadJob *, const std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> &);
	unique_ptr<AsyncCharaDataUnifyLoad::AsyncLoadJob,std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> >(AsyncCharaDataUnifyLoad::AsyncLoadJob *);
	unique_ptr<AsyncCharaDataUnifyLoad::AsyncLoadJob,std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> >(void *);
	unique_ptr<AsyncCharaDataUnifyLoad::AsyncLoadJob,std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> >();
	std::unique_ptr<AsyncCharaDataUnifyLoad::AsyncLoadJob,std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> > & operator=(const std::unique_ptr<AsyncCharaDataUnifyLoad::AsyncLoadJob,std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> > &);
	std::unique_ptr<AsyncCharaDataUnifyLoad::AsyncLoadJob,std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> > & operator=(std::unique_ptr<AsyncCharaDataUnifyLoad::AsyncLoadJob,std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> > &);
	std::unique_ptr<AsyncCharaDataUnifyLoad::AsyncLoadJob,std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> > & operator=(void *);
	void swap(std::unique_ptr<AsyncCharaDataUnifyLoad::AsyncLoadJob,std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> > &);
	~unique_ptr<AsyncCharaDataUnifyLoad::AsyncLoadJob,std::default_delete<AsyncCharaDataUnifyLoad::AsyncLoadJob> >();
	AsyncCharaDataUnifyLoad::AsyncLoadJob & operator*();
	AsyncCharaDataUnifyLoad::AsyncLoadJob * operator->();
	AsyncCharaDataUnifyLoad::AsyncLoadJob * get();
	bool operator bool();
	AsyncCharaDataUnifyLoad::AsyncLoadJob * release();
	void reset(AsyncCharaDataUnifyLoad::AsyncLoadJob *);
};
CharaDataUnify * AsyncCharaDataUnifyLoad::GetObj(); // 0x1401AAAE0
class AsyncKeyRecordDataLoad
{
	struct KeyData;
	class AsyncState;
	class AsyncLoadJob;
public:
	AsyncKeyRecordDataLoad(const AsyncKeyRecordDataLoad &);
	AsyncKeyRecordDataLoad();
	~AsyncKeyRecordDataLoad();
	void LoadKeyRecordFile(std::string);
	bool IsLoaded();
	bool IsWorking();
	bool GetInputKeyRecord(InputKeyRecord &);
	void Release();
	extension::AsyncContentConstants::ErrorCode GetErrorCode();
private:
	extension::RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> > state; // 0x0
	bool bWorking; // 0x8
public:
	AsyncKeyRecordDataLoad & operator=(const AsyncKeyRecordDataLoad &);
};
struct AsyncKeyRecordDataLoad::KeyData
{
	unsigned long uiKeyCount; // 0x0
	std::unique_ptr<InputKeyRecord::RecordKey [0],std::default_delete<InputKeyRecord::RecordKey [0]> > pKey; // 0x8
	KeyData(AsyncKeyRecordDataLoad::KeyData &);
	KeyData();
	~KeyData();
	AsyncKeyRecordDataLoad::KeyData & operator=(AsyncKeyRecordDataLoad::KeyData &);
};
class std::unique_ptr<InputKeyRecord::RecordKey [0],std::default_delete<InputKeyRecord::RecordKey [0]> > :
	std::_Unique_ptr_base<InputKeyRecord::RecordKey,std::default_delete<InputKeyRecord::RecordKey [0]> >
{
	class _Myt;
	class _Mybase;
	typedef InputKeyRecord::RecordKey pointer;
	struct element_type;
	struct deleter_type;
public:
	unique_ptr<InputKeyRecord::RecordKey [0],std::default_delete<InputKeyRecord::RecordKey [0]> >(const std::unique_ptr<InputKeyRecord::RecordKey [0],std::default_delete<InputKeyRecord::RecordKey [0]> > &);
	unique_ptr<InputKeyRecord::RecordKey [0],std::default_delete<InputKeyRecord::RecordKey [0]> >(void *);
	unique_ptr<InputKeyRecord::RecordKey [0],std::default_delete<InputKeyRecord::RecordKey [0]> >(std::unique_ptr<InputKeyRecord::RecordKey [0],std::default_delete<InputKeyRecord::RecordKey [0]> > &);
	unique_ptr<InputKeyRecord::RecordKey [0],std::default_delete<InputKeyRecord::RecordKey [0]> >();
	std::unique_ptr<InputKeyRecord::RecordKey [0],std::default_delete<InputKeyRecord::RecordKey [0]> > & operator=(const std::unique_ptr<InputKeyRecord::RecordKey [0],std::default_delete<InputKeyRecord::RecordKey [0]> > &);
	std::unique_ptr<InputKeyRecord::RecordKey [0],std::default_delete<InputKeyRecord::RecordKey [0]> > & operator=(void *);
	std::unique_ptr<InputKeyRecord::RecordKey [0],std::default_delete<InputKeyRecord::RecordKey [0]> > & operator=(std::unique_ptr<InputKeyRecord::RecordKey [0],std::default_delete<InputKeyRecord::RecordKey [0]> > &);
	void reset(void *);
	void swap(std::unique_ptr<InputKeyRecord::RecordKey [0],std::default_delete<InputKeyRecord::RecordKey [0]> > &);
	~unique_ptr<InputKeyRecord::RecordKey [0],std::default_delete<InputKeyRecord::RecordKey [0]> >();
	InputKeyRecord::RecordKey & operator[](unsigned long long);
	InputKeyRecord::RecordKey * get();
	bool operator bool();
	InputKeyRecord::RecordKey * release();
private:
	void _Delete();
};
class extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> :
	extension::RefCountable<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> >
{
public:
	AsyncContent<AsyncKeyRecordDataLoad::KeyData>(const std::string &);
	AsyncContent<AsyncKeyRecordDataLoad::KeyData>(const std::string &, const std::string &);
private:
	AsyncContent<AsyncKeyRecordDataLoad::KeyData>(const extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> &);
	extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> & operator=(const extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> &);
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_loadOptionString; // 0x28
	std::unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> > m_data; // 0x48
	long m_errorCode; // 0x50
	extension::AsyncStatus m_status; // 0x58
	bool m_isDataReleased; // 0x60
	void initRawMember();
protected:
	~AsyncContent<AsyncKeyRecordDataLoad::KeyData>();
	class SharedPtr_t;
public:
	const std::string & name();
	const std::string & path();
	const std::string & optionString();
	bool isReady();
	void waitForReady();
	long getErrorCode();
	AsyncKeyRecordDataLoad::KeyData * getData();
	AsyncKeyRecordDataLoad::KeyData * releaseData();
	bool isDataReleased();
	void requestForCancel();
	void setResult(std::unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> >);
	void setErrorResult(long);
	void setErrorResultWithData(long, std::unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> >);
	bool isCancelRequested();
};
class extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData> :
	extension::ExThread::Runnable,
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
public:
	FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>(extension::RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> >);
private:
	FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>(const extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData> &);
	extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData> & operator=(const extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData> &);
	class ContentSharedPtr_t;
public:
	virtual ~FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>();
	void setResult(std::unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> > &);
	void setErrorResult(extension::AsyncContentConstants::ErrorCode);
	const std::string & contentPath();
	bool isCancelRequested();
	extension::RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> > releaseContent();
	long run() = 0;
private:
	std::unique_ptr<AsyncKeyRecordDataLoad::KeyData,std::default_delete<AsyncKeyRecordDataLoad::KeyData> > createOnErrorData();
	extension::RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> > m_content; // 0x18
};
class AsyncKeyRecordDataLoad::AsyncLoadJob :
	extension::FutureObjectJob<AsyncKeyRecordDataLoad::KeyData>
{
	class Base_Type;
public:
	AsyncLoadJob(extension::RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> >);
	virtual long run();
	virtual ~AsyncLoadJob();
};
AsyncKeyRecordDataLoad::AsyncLoadJob::AsyncLoadJob(extension::RefCountablePtr<extension::AsyncContent<AsyncKeyRecordDataLoad::KeyData> > c); // 0x1401C8E10
long AsyncKeyRecordDataLoad::AsyncLoadJob::run(); // 0x1401C8E90
AsyncKeyRecordDataLoad::~AsyncKeyRecordDataLoad(); // 0x140098810
void AsyncKeyRecordDataLoad::LoadKeyRecordFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > filePath); // 0x1401C91D0
class std::unique_ptr<AsyncKeyRecordDataLoad::AsyncLoadJob,std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> > :
	std::_Unique_ptr_base<AsyncKeyRecordDataLoad::AsyncLoadJob,std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> >
{
	class _Myt;
	class _Mybase;
	typedef AsyncKeyRecordDataLoad::AsyncLoadJob pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<AsyncKeyRecordDataLoad::AsyncLoadJob,std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> >(const std::unique_ptr<AsyncKeyRecordDataLoad::AsyncLoadJob,std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> > &);
	unique_ptr<AsyncKeyRecordDataLoad::AsyncLoadJob,std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> >(std::unique_ptr<AsyncKeyRecordDataLoad::AsyncLoadJob,std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> > &);
	unique_ptr<AsyncKeyRecordDataLoad::AsyncLoadJob,std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> >(AsyncKeyRecordDataLoad::AsyncLoadJob *, std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> &);
	unique_ptr<AsyncKeyRecordDataLoad::AsyncLoadJob,std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> >(AsyncKeyRecordDataLoad::AsyncLoadJob *, const std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> &);
	unique_ptr<AsyncKeyRecordDataLoad::AsyncLoadJob,std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> >(AsyncKeyRecordDataLoad::AsyncLoadJob *);
	unique_ptr<AsyncKeyRecordDataLoad::AsyncLoadJob,std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> >(void *);
	unique_ptr<AsyncKeyRecordDataLoad::AsyncLoadJob,std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> >();
	std::unique_ptr<AsyncKeyRecordDataLoad::AsyncLoadJob,std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> > & operator=(const std::unique_ptr<AsyncKeyRecordDataLoad::AsyncLoadJob,std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> > &);
	std::unique_ptr<AsyncKeyRecordDataLoad::AsyncLoadJob,std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> > & operator=(std::unique_ptr<AsyncKeyRecordDataLoad::AsyncLoadJob,std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> > &);
	std::unique_ptr<AsyncKeyRecordDataLoad::AsyncLoadJob,std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> > & operator=(void *);
	void swap(std::unique_ptr<AsyncKeyRecordDataLoad::AsyncLoadJob,std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> > &);
	~unique_ptr<AsyncKeyRecordDataLoad::AsyncLoadJob,std::default_delete<AsyncKeyRecordDataLoad::AsyncLoadJob> >();
	AsyncKeyRecordDataLoad::AsyncLoadJob & operator*();
	AsyncKeyRecordDataLoad::AsyncLoadJob * operator->();
	AsyncKeyRecordDataLoad::AsyncLoadJob * get();
	bool operator bool();
	AsyncKeyRecordDataLoad::AsyncLoadJob * release();
	void reset(AsyncKeyRecordDataLoad::AsyncLoadJob *);
};
bool AsyncKeyRecordDataLoad::GetInputKeyRecord(InputKeyRecord & record); // 0x1401C9390