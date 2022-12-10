#pragma once

class extension::savedata_detail::PCSaveDataJob :
	extension::savedata_detail::AsyncSaveDataJob
{
private:
	PCSaveDataJob();
public:
	static std::unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> > CreateLoadJob();
	static std::unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> > CreateSaveJob();
	virtual ~PCSaveDataJob();
	virtual long run();
	virtual void setDataOption(const extension::AsyncSaveDataStorage::DataOption &);
private:
	void setDirName(const char *);
	extension::AsyncSaveDataConstants::ErrorCode trySaveOrLoad();
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_dirName; // 0x38
	unsigned long m_progressOption; // 0x58
	bool m_isLoad; // 0x5C
};
class std::unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> > :
	std::_Unique_ptr_base<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> >
{
	class _Myt;
	class _Mybase;
	typedef extension::savedata_detail::AsyncSaveDataJob pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> >(const std::unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> > &);
	unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> >(std::unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> > &);
	unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> >(extension::savedata_detail::AsyncSaveDataJob *, std::default_delete<extension::savedata_detail::AsyncSaveDataJob> &);
	unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> >(extension::savedata_detail::AsyncSaveDataJob *, const std::default_delete<extension::savedata_detail::AsyncSaveDataJob> &);
	unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> >(extension::savedata_detail::AsyncSaveDataJob *);
	unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> >(void *);
	unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> >();
	std::unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> > & operator=(const std::unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> > &);
	std::unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> > & operator=(std::unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> > &);
	std::unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> > & operator=(void *);
	void swap(std::unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> > &);
	~unique_ptr<extension::savedata_detail::AsyncSaveDataJob,std::default_delete<extension::savedata_detail::AsyncSaveDataJob> >();
	extension::savedata_detail::AsyncSaveDataJob & operator*();
	extension::savedata_detail::AsyncSaveDataJob * operator->();
	extension::savedata_detail::AsyncSaveDataJob * get();
	bool operator bool();
	extension::savedata_detail::AsyncSaveDataJob * release();
	void reset(extension::savedata_detail::AsyncSaveDataJob *);
};