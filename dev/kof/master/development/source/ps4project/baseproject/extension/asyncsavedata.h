#pragma once

class extension::AsyncSaveDataConstants
{
protected:
	AsyncSaveDataConstants();
	enum ErrorCode
	{
		ErrorCode_None = 0,
		ErrorCode_LogicError = 1,
		ErrorCode_Not_Login = 2,
		ErrorCode_Data_Corrupted = 3,
		ErrorCode_No_User_Space = 4,
		ErrorCode_Unexpected = 5,
	};
	enum ProgresOption
	{
		ProgressOption_Create = 1,
		ProgressOption_Load = 2,
		ProgressOption_Save = 4,
	};
};
enum extension::AsyncSaveDataConstants::ErrorCode
{
	ErrorCode_None = 0,
	ErrorCode_LogicError = 1,
	ErrorCode_Not_Login = 2,
	ErrorCode_Data_Corrupted = 3,
	ErrorCode_No_User_Space = 4,
	ErrorCode_Unexpected = 5,
};
class extension::AsyncSaveDataStorage :
	extension::AsyncSaveDataConstants
{
private:
	AsyncSaveDataStorage();
	AsyncSaveDataStorage(extension::AsyncSaveDataStorage &);
	extension::AsyncSaveDataStorage & operator=(const extension::AsyncSaveDataStorage &);
public:
	static extension::AsyncSaveDataStorage & Instance();
	~AsyncSaveDataStorage();
	struct DataOption;
	extension::FutureSaveData save(const std::string &, const std::string &, const extension::AsyncSaveDataStorage::DataOption *);
	extension::FutureSaveData load(const std::string &, const extension::AsyncSaveDataStorage::DataOption *);
private:
	extension::AsyncJobConsumer m_jobConsumer; // 0x0
	extension::AsyncSaveDataStorage::DataOption m_defaultOption; // 0xB0
};
struct extension::AsyncSaveDataStorage::DataOption
{
	long userIndex; // 0x0
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > fsName; // 0x8
	unsigned long long fsSizeLimit; // 0x28
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > titleText; // 0x30
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > subTitleText; // 0x50
	unsigned long progressOption; // 0x70
	DataOption(extension::AsyncSaveDataStorage::DataOption &);
	DataOption(const extension::AsyncSaveDataStorage::DataOption &);
	DataOption();
	~DataOption();
	extension::AsyncSaveDataStorage::DataOption & operator=(extension::AsyncSaveDataStorage::DataOption &);
	extension::AsyncSaveDataStorage::DataOption & operator=(const extension::AsyncSaveDataStorage::DataOption &);
};
class extension::FutureSaveData :
	extension::AsyncSaveDataConstants
{
	class State_t;
private:
	extension::RefCountablePtr<extension::savedata_detail::AsyncSaveDataState> m_state; // 0x0
	extension::AsyncSaveDataConstants::ErrorCode m_lastError; // 0x8
public:
	FutureSaveData(const extension::FutureSaveData &);
	FutureSaveData();
	~FutureSaveData();
	bool isEmpty();
	bool isReady();
	bool hasResult();
	std::string getData();
	extension::AsyncSaveDataConstants::ErrorCode getError();
	void reset();
	extension::FutureSaveData & operator=(const extension::FutureSaveData &);
};
class extension::RefCountablePtr<extension::savedata_detail::AsyncSaveDataState>
{
private:
	extension::savedata_detail::AsyncSaveDataState * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::savedata_detail::AsyncSaveDataState>(const extension::RefCountablePtr<extension::savedata_detail::AsyncSaveDataState> &);
	RefCountablePtr<extension::savedata_detail::AsyncSaveDataState>(extension::savedata_detail::AsyncSaveDataState *, bool);
	RefCountablePtr<extension::savedata_detail::AsyncSaveDataState>(extension::savedata_detail::AsyncSaveDataState *);
	RefCountablePtr<extension::savedata_detail::AsyncSaveDataState>();
	~RefCountablePtr<extension::savedata_detail::AsyncSaveDataState>();
	void swap(extension::RefCountablePtr<extension::savedata_detail::AsyncSaveDataState> &);
	extension::RefCountablePtr<extension::savedata_detail::AsyncSaveDataState> & operator=(const extension::RefCountablePtr<extension::savedata_detail::AsyncSaveDataState> &);
	void reset(extension::savedata_detail::AsyncSaveDataState *);
	void resetWithAddRef(extension::savedata_detail::AsyncSaveDataState *);
	extension::savedata_detail::AsyncSaveDataState * get();
	extension::savedata_detail::AsyncSaveDataState & operator*();
	extension::savedata_detail::AsyncSaveDataState * operator->();
	bool isNull();
};
class extension::savedata_detail::DataConverter
{
private:
	static void ScrambleData(std::string &);
	static unsigned long long CalcHash(const std::string &);
	static void AppendHashData(std::string &);
	static bool CheckHashedData(std::string &);
public:
	static std::string MakeSavedFileImage(const std::string &);
	static bool ExtractDataFromSavedFileImage(std::string &);
};
class extension::RefCountable<extension::savedata_detail::AsyncSaveDataState>
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::savedata_detail::AsyncSaveDataState>(const extension::RefCountable<extension::savedata_detail::AsyncSaveDataState> &);
public:
	RefCountable<extension::savedata_detail::AsyncSaveDataState>();
protected:
	extension::RefCountable<extension::savedata_detail::AsyncSaveDataState> & operator=(const extension::RefCountable<extension::savedata_detail::AsyncSaveDataState> &);
	~RefCountable<extension::savedata_detail::AsyncSaveDataState>();
};
class extension::savedata_detail::AsyncSaveDataState :
	extension::RefCountable<extension::savedata_detail::AsyncSaveDataState>,
	extension::AsyncSaveDataConstants
{
public:
	AsyncSaveDataState(const std::string &);
private:
	AsyncSaveDataState(const extension::savedata_detail::AsyncSaveDataState &);
	extension::savedata_detail::AsyncSaveDataState & operator=(const extension::savedata_detail::AsyncSaveDataState &);
	~AsyncSaveDataState();
public:
	bool isReady();
	extension::AsyncSaveDataConstants::ErrorCode getError();
	std::string getData();
	const std::string & getFileName();
	extension::AsyncSaveDataConstants::ErrorCode setResult(extension::AsyncSaveDataConstants::ErrorCode, const std::string *);
private:
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_fileName; // 0x8
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_data; // 0x28
	extension::AtomicInt m_result; // 0x48
	static extension::ExSimpleMutex s_mutex; // 0xFFFFFFFFFFFFFFFF
	static extension::ExWaitCondition s_signalCondition; // 0xFFFFFFFFFFFFFFFF
};
class extension::savedata_detail::AsyncSaveDataJob :
	extension::ExThread::Runnable,
	extension::AsyncSaveDataConstants
{
protected:
	AsyncSaveDataJob();
private:
	AsyncSaveDataJob(const extension::savedata_detail::AsyncSaveDataJob &);
	extension::savedata_detail::AsyncSaveDataJob & operator=(const extension::savedata_detail::AsyncSaveDataJob &);
public:
	virtual ~AsyncSaveDataJob();
	long run() = 0;
	void setDataOption(const extension::AsyncSaveDataStorage::DataOption &);
	extension::RefCountablePtr<extension::savedata_detail::AsyncSaveDataState> getSharedState();
protected:
	extension::AsyncSaveDataConstants::ErrorCode setResult(extension::AsyncSaveDataConstants::ErrorCode, const std::string *);
	bool isSetResult();
	const std::string & getFileName();
	const std::string & getFileImageSaveTo();
private:
	extension::RefCountablePtr<extension::savedata_detail::AsyncSaveDataState> m_state; // 0x10
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_fileImageSaveTo; // 0x18
};
extension::RefCountablePtr<extension::savedata_detail::AsyncSaveDataState> extension::savedata_detail::AsyncSaveDataJob::getSharedState(); // 0x140247100
std::string extension::FutureSaveData::getData(); // 0x1401021C0