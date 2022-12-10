#pragma once

enum extension::MOTION_INDEX
{
	MOTION_INDEX_UNIQUE = 0,
	MOTION_INDEX_COMMON = 1,
	MOTION_INDEX_FACE_UP = 2,
	MOTION_INDEX_FACE_DOWN = 3,
	MOTION_INDEX_PARTS = 4,
};
enum extension::MODEL_TYPE
{
	MODEL_TYPE_DEFAULT = 255,
	MODEL_TYPE_CHARA = 0,
	MODEL_TYPE_WEAPON = 1,
	MODEL_TYPE_KO_CHARA = 2,
	MODEL_TYPE_EXTRA = 3,
};
class extension::AsyncContent<extension::AsyncFileImage> :
	extension::RefCountable<extension::AsyncContent<extension::AsyncFileImage> >
{
public:
	AsyncContent<extension::AsyncFileImage>(const std::string &);
	AsyncContent<extension::AsyncFileImage>(const std::string &, const std::string &);
private:
	AsyncContent<extension::AsyncFileImage>(const extension::AsyncContent<extension::AsyncFileImage> &);
	extension::AsyncContent<extension::AsyncFileImage> & operator=(const extension::AsyncContent<extension::AsyncFileImage> &);
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_loadOptionString; // 0x28
	std::unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> > m_data; // 0x48
	long m_errorCode; // 0x50
	extension::AsyncStatus m_status; // 0x58
	bool m_isDataReleased; // 0x60
	void initRawMember();
protected:
	~AsyncContent<extension::AsyncFileImage>();
	class SharedPtr_t;
public:
	const std::string & name();
	const std::string & path();
	const std::string & optionString();
	bool isReady();
	void waitForReady();
	long getErrorCode();
	extension::AsyncFileImage * getData();
	extension::AsyncFileImage * releaseData();
	bool isDataReleased();
	void requestForCancel();
	void setResult(std::unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> >);
	void setErrorResult(long);
	void setErrorResultWithData(long, std::unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> >);
	bool isCancelRequested();
};
class extension::AsyncContent<OGLTexture> :
	extension::RefCountable<extension::AsyncContent<OGLTexture> >
{
public:
	AsyncContent<OGLTexture>(const std::string &);
	AsyncContent<OGLTexture>(const std::string &, const std::string &);
private:
	AsyncContent<OGLTexture>(const extension::AsyncContent<OGLTexture> &);
	extension::AsyncContent<OGLTexture> & operator=(const extension::AsyncContent<OGLTexture> &);
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_loadOptionString; // 0x28
	std::unique_ptr<OGLTexture,std::default_delete<OGLTexture> > m_data; // 0x48
	long m_errorCode; // 0x50
	extension::AsyncStatus m_status; // 0x58
	bool m_isDataReleased; // 0x60
	void initRawMember();
protected:
	~AsyncContent<OGLTexture>();
	class SharedPtr_t;
public:
	const std::string & name();
	const std::string & path();
	const std::string & optionString();
	bool isReady();
	void waitForReady();
	long getErrorCode();
	OGLTexture * getData();
	OGLTexture * releaseData();
	bool isDataReleased();
	void requestForCancel();
	void setResult(std::unique_ptr<OGLTexture,std::default_delete<OGLTexture> >);
	void setErrorResult(long);
	void setErrorResultWithData(long, std::unique_ptr<OGLTexture,std::default_delete<OGLTexture> >);
	bool isCancelRequested();
};
class extension::AsyncContent<OGLFigure> :
	extension::RefCountable<extension::AsyncContent<OGLFigure> >
{
public:
	AsyncContent<OGLFigure>(const std::string &);
	AsyncContent<OGLFigure>(const std::string &, const std::string &);
private:
	AsyncContent<OGLFigure>(const extension::AsyncContent<OGLFigure> &);
	extension::AsyncContent<OGLFigure> & operator=(const extension::AsyncContent<OGLFigure> &);
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_loadOptionString; // 0x28
	std::unique_ptr<OGLFigure,std::default_delete<OGLFigure> > m_data; // 0x48
	long m_errorCode; // 0x50
	extension::AsyncStatus m_status; // 0x58
	bool m_isDataReleased; // 0x60
	void initRawMember();
protected:
	~AsyncContent<OGLFigure>();
	class SharedPtr_t;
public:
	const std::string & name();
	const std::string & path();
	const std::string & optionString();
	bool isReady();
	void waitForReady();
	long getErrorCode();
	OGLFigure * getData();
	OGLFigure * releaseData();
	bool isDataReleased();
	void requestForCancel();
	void setResult(std::unique_ptr<OGLFigure,std::default_delete<OGLFigure> >);
	void setErrorResult(long);
	void setErrorResultWithData(long, std::unique_ptr<OGLFigure,std::default_delete<OGLFigure> >);
	bool isCancelRequested();
};
class extension::AsyncContent<OGLMotion> :
	extension::RefCountable<extension::AsyncContent<OGLMotion> >
{
public:
	AsyncContent<OGLMotion>(const std::string &);
	AsyncContent<OGLMotion>(const std::string &, const std::string &);
private:
	AsyncContent<OGLMotion>(const extension::AsyncContent<OGLMotion> &);
	extension::AsyncContent<OGLMotion> & operator=(const extension::AsyncContent<OGLMotion> &);
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_loadOptionString; // 0x28
	std::unique_ptr<OGLMotion,std::default_delete<OGLMotion> > m_data; // 0x48
	long m_errorCode; // 0x50
	extension::AsyncStatus m_status; // 0x58
	bool m_isDataReleased; // 0x60
	void initRawMember();
protected:
	~AsyncContent<OGLMotion>();
	class SharedPtr_t;
public:
	const std::string & name();
	const std::string & path();
	const std::string & optionString();
	bool isReady();
	void waitForReady();
	long getErrorCode();
	OGLMotion * getData();
	OGLMotion * releaseData();
	bool isDataReleased();
	void requestForCancel();
	void setResult(std::unique_ptr<OGLMotion,std::default_delete<OGLMotion> >);
	void setErrorResult(long);
	void setErrorResultWithData(long, std::unique_ptr<OGLMotion,std::default_delete<OGLMotion> >);
	bool isCancelRequested();
};
class extension::AsyncContent<OGLMirror> :
	extension::RefCountable<extension::AsyncContent<OGLMirror> >
{
public:
	AsyncContent<OGLMirror>(const std::string &);
	AsyncContent<OGLMirror>(const std::string &, const std::string &);
private:
	AsyncContent<OGLMirror>(const extension::AsyncContent<OGLMirror> &);
	extension::AsyncContent<OGLMirror> & operator=(const extension::AsyncContent<OGLMirror> &);
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_loadOptionString; // 0x28
	std::unique_ptr<OGLMirror,std::default_delete<OGLMirror> > m_data; // 0x48
	long m_errorCode; // 0x50
	extension::AsyncStatus m_status; // 0x58
	bool m_isDataReleased; // 0x60
	void initRawMember();
protected:
	~AsyncContent<OGLMirror>();
	class SharedPtr_t;
public:
	const std::string & name();
	const std::string & path();
	const std::string & optionString();
	bool isReady();
	void waitForReady();
	long getErrorCode();
	OGLMirror * getData();
	OGLMirror * releaseData();
	bool isDataReleased();
	void requestForCancel();
	void setResult(std::unique_ptr<OGLMirror,std::default_delete<OGLMirror> >);
	void setErrorResult(long);
	void setErrorResultWithData(long, std::unique_ptr<OGLMirror,std::default_delete<OGLMirror> >);
	bool isCancelRequested();
};
class extension::AsyncContent<OGLCamera> :
	extension::RefCountable<extension::AsyncContent<OGLCamera> >
{
public:
	AsyncContent<OGLCamera>(const std::string &);
	AsyncContent<OGLCamera>(const std::string &, const std::string &);
private:
	AsyncContent<OGLCamera>(const extension::AsyncContent<OGLCamera> &);
	extension::AsyncContent<OGLCamera> & operator=(const extension::AsyncContent<OGLCamera> &);
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_loadOptionString; // 0x28
	std::unique_ptr<OGLCamera,std::default_delete<OGLCamera> > m_data; // 0x48
	long m_errorCode; // 0x50
	extension::AsyncStatus m_status; // 0x58
	bool m_isDataReleased; // 0x60
	void initRawMember();
protected:
	~AsyncContent<OGLCamera>();
	class SharedPtr_t;
public:
	const std::string & name();
	const std::string & path();
	const std::string & optionString();
	bool isReady();
	void waitForReady();
	long getErrorCode();
	OGLCamera * getData();
	OGLCamera * releaseData();
	bool isDataReleased();
	void requestForCancel();
	void setResult(std::unique_ptr<OGLCamera,std::default_delete<OGLCamera> >);
	void setErrorResult(long);
	void setErrorResultWithData(long, std::unique_ptr<OGLCamera,std::default_delete<OGLCamera> >);
	bool isCancelRequested();
};
class extension::AsyncContent<OGLSecondary> :
	extension::RefCountable<extension::AsyncContent<OGLSecondary> >
{
public:
	AsyncContent<OGLSecondary>(const std::string &);
	AsyncContent<OGLSecondary>(const std::string &, const std::string &);
private:
	AsyncContent<OGLSecondary>(const extension::AsyncContent<OGLSecondary> &);
	extension::AsyncContent<OGLSecondary> & operator=(const extension::AsyncContent<OGLSecondary> &);
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_loadOptionString; // 0x28
	std::unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> > m_data; // 0x48
	long m_errorCode; // 0x50
	extension::AsyncStatus m_status; // 0x58
	bool m_isDataReleased; // 0x60
	void initRawMember();
protected:
	~AsyncContent<OGLSecondary>();
	class SharedPtr_t;
public:
	const std::string & name();
	const std::string & path();
	const std::string & optionString();
	bool isReady();
	void waitForReady();
	long getErrorCode();
	OGLSecondary * getData();
	OGLSecondary * releaseData();
	bool isDataReleased();
	void requestForCancel();
	void setResult(std::unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> >);
	void setErrorResult(long);
	void setErrorResultWithData(long, std::unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> >);
	bool isCancelRequested();
};
class extension::AsyncContent<Image> :
	extension::RefCountable<extension::AsyncContent<Image> >
{
public:
	AsyncContent<Image>(const std::string &);
	AsyncContent<Image>(const std::string &, const std::string &);
private:
	AsyncContent<Image>(const extension::AsyncContent<Image> &);
	extension::AsyncContent<Image> & operator=(const extension::AsyncContent<Image> &);
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_loadOptionString; // 0x28
	std::unique_ptr<Image,std::default_delete<Image> > m_data; // 0x48
	long m_errorCode; // 0x50
	extension::AsyncStatus m_status; // 0x58
	bool m_isDataReleased; // 0x60
	void initRawMember();
protected:
	~AsyncContent<Image>();
	class SharedPtr_t;
public:
	const std::string & name();
	const std::string & path();
	const std::string & optionString();
	bool isReady();
	void waitForReady();
	long getErrorCode();
	Image * getData();
	Image * releaseData();
	bool isDataReleased();
	void requestForCancel();
	void setResult(std::unique_ptr<Image,std::default_delete<Image> >);
	void setErrorResult(long);
	void setErrorResultWithData(long, std::unique_ptr<Image,std::default_delete<Image> >);
	bool isCancelRequested();
};
class extension::AsyncContent<OGLCurve> :
	extension::RefCountable<extension::AsyncContent<OGLCurve> >
{
public:
	AsyncContent<OGLCurve>(const std::string &);
	AsyncContent<OGLCurve>(const std::string &, const std::string &);
private:
	AsyncContent<OGLCurve>(const extension::AsyncContent<OGLCurve> &);
	extension::AsyncContent<OGLCurve> & operator=(const extension::AsyncContent<OGLCurve> &);
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_loadOptionString; // 0x28
	std::unique_ptr<OGLCurve,std::default_delete<OGLCurve> > m_data; // 0x48
	long m_errorCode; // 0x50
	extension::AsyncStatus m_status; // 0x58
	bool m_isDataReleased; // 0x60
	void initRawMember();
protected:
	~AsyncContent<OGLCurve>();
	class SharedPtr_t;
public:
	const std::string & name();
	const std::string & path();
	const std::string & optionString();
	bool isReady();
	void waitForReady();
	long getErrorCode();
	OGLCurve * getData();
	OGLCurve * releaseData();
	bool isDataReleased();
	void requestForCancel();
	void setResult(std::unique_ptr<OGLCurve,std::default_delete<OGLCurve> >);
	void setErrorResult(long);
	void setErrorResultWithData(long, std::unique_ptr<OGLCurve,std::default_delete<OGLCurve> >);
	bool isCancelRequested();
};
class extension::AsyncContent<extension::AsyncAsset> :
	extension::RefCountable<extension::AsyncContent<extension::AsyncAsset> >
{
public:
	AsyncContent<extension::AsyncAsset>(const std::string &);
	AsyncContent<extension::AsyncAsset>(const std::string &, const std::string &);
private:
	AsyncContent<extension::AsyncAsset>(const extension::AsyncContent<extension::AsyncAsset> &);
	extension::AsyncContent<extension::AsyncAsset> & operator=(const extension::AsyncContent<extension::AsyncAsset> &);
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_loadOptionString; // 0x28
	std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> > m_data; // 0x48
	long m_errorCode; // 0x50
	extension::AsyncStatus m_status; // 0x58
	bool m_isDataReleased; // 0x60
	void initRawMember();
protected:
	~AsyncContent<extension::AsyncAsset>();
	class SharedPtr_t;
public:
	const std::string & name();
	const std::string & path();
	const std::string & optionString();
	bool isReady();
	void waitForReady();
	long getErrorCode();
	extension::AsyncAsset * getData();
	extension::AsyncAsset * releaseData();
	bool isDataReleased();
	void requestForCancel();
	void setResult(std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> >);
	void setErrorResult(long);
	void setErrorResultWithData(long, std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> >);
	bool isCancelRequested();
};
struct extension::FutureObjectJobManager<extension::AsyncFileImage,void>
{
	class Content_t;
	class ContentSharedPtr_t;
	static extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > LoadStart(const std::string &, const std::string &, const void *);
	static std::string Stringize(const void *);
private:
	static void EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> >);
};
void extension::FutureObjectJobManager<extension::AsyncFileImage,void>::EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > shared); // 0x1402488F0
struct extension::FutureObjectJobManager<OGLTexture,extension::FutureTextureOption>
{
	class Content_t;
	class ContentSharedPtr_t;
	static extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > LoadStart(const std::string &, const std::string &, const extension::FutureTextureOption *);
	static std::string Stringize(const extension::FutureTextureOption *);
private:
	static void EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<OGLTexture> >, const extension::FutureTextureOption *);
};
struct extension::FutureObjectJobManager<OGLFigure,extension::FutureFigureOption>
{
	class Content_t;
	class ContentSharedPtr_t;
	static extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > LoadStart(const std::string &, const std::string &, const extension::FutureFigureOption *);
	static std::string Stringize(const extension::FutureFigureOption *);
private:
	static void EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<OGLFigure> >, const extension::FutureFigureOption *);
};
struct extension::FutureObjectJobManager<OGLMotion,void>
{
	class Content_t;
	class ContentSharedPtr_t;
	static extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > LoadStart(const std::string &, const std::string &, const void *);
	static std::string Stringize(const void *);
private:
	static void EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<OGLMotion> >);
};
void extension::FutureObjectJobManager<OGLMotion,void>::EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > shared); // 0x1401D22E0
struct extension::FutureObjectJobManager<OGLMirror,void>
{
	class Content_t;
	class ContentSharedPtr_t;
	static extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > LoadStart(const std::string &, const std::string &, const void *);
	static std::string Stringize(const void *);
private:
	static void EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<OGLMirror> >);
};
void extension::FutureObjectJobManager<OGLMirror,void>::EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > shared); // 0x1401D2360
struct extension::FutureObjectJobManager<OGLCamera,void>
{
	class Content_t;
	class ContentSharedPtr_t;
	static extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > LoadStart(const std::string &, const std::string &, const void *);
	static std::string Stringize(const void *);
private:
	static void EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<OGLCamera> >);
};
struct extension::FutureObjectJobManager<OGLSecondary,void>
{
	class Content_t;
	class ContentSharedPtr_t;
	static extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > LoadStart(const std::string &, const std::string &, const void *);
	static std::string Stringize(const void *);
private:
	static void EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> >);
};
void extension::FutureObjectJobManager<OGLSecondary,void>::EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > shared); // 0x140248970
struct extension::FutureObjectJobManager<Image,extension::FutureImageOption>
{
	class Content_t;
	class ContentSharedPtr_t;
	static extension::RefCountablePtr<extension::AsyncContent<Image> > LoadStart(const std::string &, const std::string &, const extension::FutureImageOption *);
	static std::string Stringize(const extension::FutureImageOption *);
private:
	static void EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<Image> >, const extension::FutureImageOption *);
};
struct extension::FutureObjectJobManager<OGLCurve,void>
{
	class Content_t;
	class ContentSharedPtr_t;
	static extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > LoadStart(const std::string &, const std::string &, const void *);
	static std::string Stringize(const void *);
private:
	static void EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<OGLCurve> >);
};
struct extension::FutureObjectJobManager<extension::AsyncAsset,extension::FutureAssetOption>
{
	class Content_t;
	class ContentSharedPtr_t;
	static extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > LoadStart(const std::string &, const std::string &, const extension::FutureAssetOption *);
	static std::string Stringize(const extension::FutureAssetOption *);
private:
	static void EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >, const extension::FutureAssetOption *);
};
class extension::AsyncFileImage
{
public:
	AsyncFileImage(long);
private:
	AsyncFileImage(const extension::AsyncFileImage &);
	extension::AsyncFileImage & operator=(const extension::AsyncFileImage &);
public:
	~AsyncFileImage();
	const void * getData();
	long getLength();
private:
	long m_length; // 0x0
	CFixMemoryPara fileBufPara; // 0x8
public:
	void __dflt_ctor_closure();
};
struct extension::FutureTextureOption
{
	long texParam; // 0x0
	std::vector<unsigned char,std::allocator<unsigned char> > paletteData; // 0x8
	long keyIndex; // 0x20
	FutureTextureOption(extension::FutureTextureOption &);
	FutureTextureOption(const extension::FutureTextureOption &);
	FutureTextureOption();
	bool operator==(const extension::FutureTextureOption &);
	std::string stringize();
	~FutureTextureOption();
	extension::FutureTextureOption & operator=(extension::FutureTextureOption &);
	extension::FutureTextureOption & operator=(const extension::FutureTextureOption &);
};
class std::vector<unsigned char,std::allocator<unsigned char> > :
	std::_Vector_alloc<std::_Vec_base_types<unsigned char,std::allocator<unsigned char> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef unsigned char value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef unsigned char *pointer;
	typedef const unsigned char const_pointer;
	typedef unsigned char reference;
	typedef const unsigned char const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<unsigned char,std::allocator<unsigned char> >(std::initializer_list<unsigned char>, const std::allocator<unsigned char> &);
	vector<unsigned char,std::allocator<unsigned char> >(std::vector<unsigned char,std::allocator<unsigned char> > &, const std::allocator<unsigned char> &);
	vector<unsigned char,std::allocator<unsigned char> >(std::vector<unsigned char,std::allocator<unsigned char> > &);
	vector<unsigned char,std::allocator<unsigned char> >(const std::vector<unsigned char,std::allocator<unsigned char> > &, const std::allocator<unsigned char> &);
	vector<unsigned char,std::allocator<unsigned char> >(const std::vector<unsigned char,std::allocator<unsigned char> > &);
	vector<unsigned char,std::allocator<unsigned char> >(unsigned long long, const unsigned char &, const std::allocator<unsigned char> &);
	vector<unsigned char,std::allocator<unsigned char> >(unsigned long long, const unsigned char &);
	vector<unsigned char,std::allocator<unsigned char> >(unsigned long long);
	vector<unsigned char,std::allocator<unsigned char> >(const std::allocator<unsigned char> &);
	vector<unsigned char,std::allocator<unsigned char> >();
	void _Construct_n(unsigned long long, const unsigned char *);
	std::vector<unsigned char,std::allocator<unsigned char> > & operator=(const std::vector<unsigned char,std::allocator<unsigned char> > &);
	std::vector<unsigned char,std::allocator<unsigned char> > & operator=(std::initializer_list<unsigned char>);
	std::vector<unsigned char,std::allocator<unsigned char> > & operator=(std::vector<unsigned char,std::allocator<unsigned char> > &);
	void _Assign_rv(std::vector<unsigned char,std::allocator<unsigned char> > &);
	void _Assign_rv(std::vector<unsigned char,std::allocator<unsigned char> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<unsigned char,std::allocator<unsigned char> > &, std::integral_constant<bool,1>);
	void push_back(const unsigned char &);
	void push_back(unsigned char &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >, unsigned long long, const unsigned char &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >, const unsigned char &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >, std::initializer_list<unsigned char>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >, unsigned char &);
	void assign(unsigned long long, const unsigned char &);
	void assign(std::initializer_list<unsigned char>);
	~vector<unsigned char,std::allocator<unsigned char> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const unsigned char &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<unsigned char> get_allocator();
	unsigned char & at(unsigned long long);
	const unsigned char & at(unsigned long long);
	unsigned char & operator[](unsigned long long);
	const unsigned char & operator[](unsigned long long);
	const unsigned char * data();
	unsigned char * data();
	const unsigned char & front();
	unsigned char & front();
	const unsigned char & back();
	unsigned char & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<unsigned char,std::allocator<unsigned char> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(unsigned char *, unsigned char *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const unsigned char *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > >, unsigned long long, const unsigned char &);
	unsigned char * _Ufill(unsigned char *, unsigned long long, const unsigned char *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(unsigned char *, unsigned char *);
};
struct extension::FutureImageOption
{
	bool transparent; // 0x0
	bool filter; // 0x1
	long option; // 0x4
	long texParam; // 0x8
	FutureImageOption();
	bool operator==(const extension::FutureImageOption &);
	std::string stringize();
};
struct extension::FutureAssetOptionFileSetting
{
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > fileName; // 0x0
	bool bNoMotion; // 0x20
	FutureAssetOptionFileSetting(extension::FutureAssetOptionFileSetting &);
	FutureAssetOptionFileSetting(const extension::FutureAssetOptionFileSetting &);
	FutureAssetOptionFileSetting();
	~FutureAssetOptionFileSetting();
	extension::FutureAssetOptionFileSetting & operator=(extension::FutureAssetOptionFileSetting &);
	extension::FutureAssetOptionFileSetting & operator=(const extension::FutureAssetOptionFileSetting &);
};
struct extension::FutureFigureOption
{
	bool bBaseFigure; // 0x0
	bool bMemoryAllocationByCPU; // 0x1
	bool bNoMotion; // 0x2
	std::vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> > fileSetting; // 0x8
	FutureFigureOption(extension::FutureFigureOption &);
	FutureFigureOption(const extension::FutureFigureOption &);
	FutureFigureOption();
	bool operator==(const extension::FutureFigureOption &);
	std::string stringize();
	~FutureFigureOption();
	extension::FutureFigureOption & operator=(extension::FutureFigureOption &);
	extension::FutureFigureOption & operator=(const extension::FutureFigureOption &);
};
class std::vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> > :
	std::_Vector_alloc<std::_Vec_base_types<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::FutureAssetOptionFileSetting pointer;
	typedef const extension::FutureAssetOptionFileSetting const_pointer;
	typedef extension::FutureAssetOptionFileSetting reference;
	typedef const extension::FutureAssetOptionFileSetting const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> >(std::initializer_list<extension::FutureAssetOptionFileSetting>, const std::allocator<extension::FutureAssetOptionFileSetting> &);
	vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> >(std::vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> > &, const std::allocator<extension::FutureAssetOptionFileSetting> &);
	vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> >(std::vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> > &);
	vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> >(const std::vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> > &, const std::allocator<extension::FutureAssetOptionFileSetting> &);
	vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> >(const std::vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> > &);
	vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> >(unsigned long long, const extension::FutureAssetOptionFileSetting &, const std::allocator<extension::FutureAssetOptionFileSetting> &);
	vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> >(unsigned long long, const extension::FutureAssetOptionFileSetting &);
	vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> >(unsigned long long);
	vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> >(const std::allocator<extension::FutureAssetOptionFileSetting> &);
	vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> >();
	void _Construct_n(unsigned long long, const extension::FutureAssetOptionFileSetting *);
	std::vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> > & operator=(const std::vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> > &);
	std::vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> > & operator=(std::initializer_list<extension::FutureAssetOptionFileSetting>);
	std::vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> > & operator=(std::vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> > &);
	void _Assign_rv(std::vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> > &);
	void _Assign_rv(std::vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> > &, std::integral_constant<bool,1>);
	void push_back(const extension::FutureAssetOptionFileSetting &);
	void push_back(extension::FutureAssetOptionFileSetting &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > >, unsigned long long, const extension::FutureAssetOptionFileSetting &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > >, const extension::FutureAssetOptionFileSetting &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > >, std::initializer_list<extension::FutureAssetOptionFileSetting>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > >, extension::FutureAssetOptionFileSetting &);
	void assign(unsigned long long, const extension::FutureAssetOptionFileSetting &);
	void assign(std::initializer_list<extension::FutureAssetOptionFileSetting>);
	~vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::FutureAssetOptionFileSetting &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::FutureAssetOptionFileSetting> get_allocator();
	extension::FutureAssetOptionFileSetting & at(unsigned long long);
	const extension::FutureAssetOptionFileSetting & at(unsigned long long);
	extension::FutureAssetOptionFileSetting & operator[](unsigned long long);
	const extension::FutureAssetOptionFileSetting & operator[](unsigned long long);
	const extension::FutureAssetOptionFileSetting * data();
	extension::FutureAssetOptionFileSetting * data();
	const extension::FutureAssetOptionFileSetting & front();
	extension::FutureAssetOptionFileSetting & front();
	const extension::FutureAssetOptionFileSetting & back();
	extension::FutureAssetOptionFileSetting & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::FutureAssetOptionFileSetting *, extension::FutureAssetOptionFileSetting *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::FutureAssetOptionFileSetting *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::FutureAssetOptionFileSetting> > >, unsigned long long, const extension::FutureAssetOptionFileSetting &);
	extension::FutureAssetOptionFileSetting * _Ufill(extension::FutureAssetOptionFileSetting *, unsigned long long, const extension::FutureAssetOptionFileSetting *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::FutureAssetOptionFileSetting *, extension::FutureAssetOptionFileSetting *);
};
class extension::BasicFutureObject<extension::AsyncFileImage,void> :
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
	class Content_t;
	class Body;
	class BodySharedPtr_t;
	class BodyWeakPtr_t;
private:
	bool m_isNoCache; // 0x1
	extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> m_body; // 0x8
public:
	BasicFutureObject<extension::AsyncFileImage,void>(const extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	BasicFutureObject<extension::AsyncFileImage,void>(extension::FutureObjectSpec::NoCache_t, const std::string &, const void *);
	BasicFutureObject<extension::AsyncFileImage,void>(const std::string &, const void *);
	BasicFutureObject<extension::AsyncFileImage,void>();
	~BasicFutureObject<extension::AsyncFileImage,void>();
	extension::BasicFutureObject<extension::AsyncFileImage,void> & operator=(const extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	bool isEmpty();
	bool isReady();
	void waitForReady();
	const extension::AsyncFileImage * get();
	bool hasData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	const char * getErrorString();
	void reset();
	void dispose();
	extension::AsyncFileImage * releaseData();
	extension::AsyncFileImage * operator->();
	extension::AsyncFileImage & operator*();
	extension::AsyncFileImage * operator class extension::AsyncFileImage *const();
	std::string contentPath();
	static extension::BasicFutureObject<extension::AsyncFileImage,void> MakeDataHolder(extension::AsyncFileImage *);
	class AssetCache;
private:
	static extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache s_cacheManager; // 0xFFFFFFFFFFFFFFFF
};
class extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> :
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
	class Content_t;
	class Body;
	class BodySharedPtr_t;
	class BodyWeakPtr_t;
private:
	bool m_isNoCache; // 0x1
	extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> m_body; // 0x8
public:
	BasicFutureObject<OGLTexture,extension::FutureTextureOption>(const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> &);
	BasicFutureObject<OGLTexture,extension::FutureTextureOption>(extension::FutureObjectSpec::NoCache_t, const std::string &, const extension::FutureTextureOption *);
	BasicFutureObject<OGLTexture,extension::FutureTextureOption>(const std::string &, const extension::FutureTextureOption *);
	BasicFutureObject<OGLTexture,extension::FutureTextureOption>();
	~BasicFutureObject<OGLTexture,extension::FutureTextureOption>();
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> & operator=(const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> &);
	bool isEmpty();
	bool isReady();
	void waitForReady();
	const OGLTexture * get();
	bool hasData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	const char * getErrorString();
	void reset();
	void dispose();
	OGLTexture * releaseData();
	OGLTexture * operator->();
	OGLTexture & operator*();
	OGLTexture * operator class OGLTexture *const();
	std::string contentPath();
	static extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> MakeDataHolder(OGLTexture *);
	class AssetCache;
private:
	static extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache s_cacheManager; // 0xFFFFFFFFFFFFFFFF
};
class extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> :
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
	class Content_t;
	class Body;
	class BodySharedPtr_t;
	class BodyWeakPtr_t;
private:
	bool m_isNoCache; // 0x1
	extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> m_body; // 0x8
public:
	BasicFutureObject<OGLFigure,extension::FutureFigureOption>(const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> &);
	BasicFutureObject<OGLFigure,extension::FutureFigureOption>(extension::FutureObjectSpec::NoCache_t, const std::string &, const extension::FutureFigureOption *);
	BasicFutureObject<OGLFigure,extension::FutureFigureOption>(const std::string &, const extension::FutureFigureOption *);
	BasicFutureObject<OGLFigure,extension::FutureFigureOption>();
	~BasicFutureObject<OGLFigure,extension::FutureFigureOption>();
	extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> & operator=(const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> &);
	bool isEmpty();
	bool isReady();
	void waitForReady();
	const OGLFigure * get();
	bool hasData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	const char * getErrorString();
	void reset();
	void dispose();
	OGLFigure * releaseData();
	OGLFigure * operator->();
	OGLFigure & operator*();
	OGLFigure * operator class OGLFigure *const();
	std::string contentPath();
	static extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> MakeDataHolder(OGLFigure *);
	class AssetCache;
private:
	static extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache s_cacheManager; // 0xFFFFFFFFFFFFFFFF
};
class extension::BasicFutureObject<OGLMotion,void> :
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
	class Content_t;
	class Body;
	class BodySharedPtr_t;
	class BodyWeakPtr_t;
private:
	bool m_isNoCache; // 0x1
	extension::RefCountablePtr<extension::BasicFutureObject<OGLMotion,void>::Body> m_body; // 0x8
public:
	BasicFutureObject<OGLMotion,void>(const extension::BasicFutureObject<OGLMotion,void> &);
	BasicFutureObject<OGLMotion,void>(extension::FutureObjectSpec::NoCache_t, const std::string &, const void *);
	BasicFutureObject<OGLMotion,void>(const std::string &, const void *);
	BasicFutureObject<OGLMotion,void>();
	~BasicFutureObject<OGLMotion,void>();
	extension::BasicFutureObject<OGLMotion,void> & operator=(const extension::BasicFutureObject<OGLMotion,void> &);
	bool isEmpty();
	bool isReady();
	void waitForReady();
	const OGLMotion * get();
	bool hasData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	const char * getErrorString();
	void reset();
	void dispose();
	OGLMotion * releaseData();
	OGLMotion * operator->();
	OGLMotion & operator*();
	OGLMotion * operator class OGLMotion *const();
	std::string contentPath();
	static extension::BasicFutureObject<OGLMotion,void> MakeDataHolder(OGLMotion *);
	class AssetCache;
private:
	static extension::BasicFutureObject<OGLMotion,void>::AssetCache s_cacheManager; // 0xFFFFFFFFFFFFFFFF
};
class extension::BasicFutureObject<OGLMirror,void> :
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
	class Content_t;
	class Body;
	class BodySharedPtr_t;
	class BodyWeakPtr_t;
private:
	bool m_isNoCache; // 0x1
	extension::RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body> m_body; // 0x8
public:
	BasicFutureObject<OGLMirror,void>(const extension::BasicFutureObject<OGLMirror,void> &);
	BasicFutureObject<OGLMirror,void>(extension::FutureObjectSpec::NoCache_t, const std::string &, const void *);
	BasicFutureObject<OGLMirror,void>(const std::string &, const void *);
	BasicFutureObject<OGLMirror,void>();
	~BasicFutureObject<OGLMirror,void>();
	extension::BasicFutureObject<OGLMirror,void> & operator=(const extension::BasicFutureObject<OGLMirror,void> &);
	bool isEmpty();
	bool isReady();
	void waitForReady();
	const OGLMirror * get();
	bool hasData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	const char * getErrorString();
	void reset();
	void dispose();
	OGLMirror * releaseData();
	OGLMirror * operator->();
	OGLMirror & operator*();
	OGLMirror * operator class OGLMirror *const();
	std::string contentPath();
	static extension::BasicFutureObject<OGLMirror,void> MakeDataHolder(OGLMirror *);
	class AssetCache;
private:
	static extension::BasicFutureObject<OGLMirror,void>::AssetCache s_cacheManager; // 0xFFFFFFFFFFFFFFFF
};
class extension::BasicFutureObject<OGLCamera,void> :
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
	class Content_t;
	class Body;
	class BodySharedPtr_t;
	class BodyWeakPtr_t;
private:
	bool m_isNoCache; // 0x1
	extension::RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body> m_body; // 0x8
public:
	BasicFutureObject<OGLCamera,void>(const extension::BasicFutureObject<OGLCamera,void> &);
	BasicFutureObject<OGLCamera,void>(extension::FutureObjectSpec::NoCache_t, const std::string &, const void *);
	BasicFutureObject<OGLCamera,void>(const std::string &, const void *);
	BasicFutureObject<OGLCamera,void>();
	~BasicFutureObject<OGLCamera,void>();
	extension::BasicFutureObject<OGLCamera,void> & operator=(const extension::BasicFutureObject<OGLCamera,void> &);
	bool isEmpty();
	bool isReady();
	void waitForReady();
	const OGLCamera * get();
	bool hasData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	const char * getErrorString();
	void reset();
	void dispose();
	OGLCamera * releaseData();
	OGLCamera * operator->();
	OGLCamera & operator*();
	OGLCamera * operator class OGLCamera *const();
	std::string contentPath();
	static extension::BasicFutureObject<OGLCamera,void> MakeDataHolder(OGLCamera *);
	class AssetCache;
private:
	static extension::BasicFutureObject<OGLCamera,void>::AssetCache s_cacheManager; // 0xFFFFFFFFFFFFFFFF
};
class extension::BasicFutureObject<OGLSecondary,void> :
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
	class Content_t;
	class Body;
	class BodySharedPtr_t;
	class BodyWeakPtr_t;
private:
	bool m_isNoCache; // 0x1
	extension::RefCountablePtr<extension::BasicFutureObject<OGLSecondary,void>::Body> m_body; // 0x8
public:
	BasicFutureObject<OGLSecondary,void>(const extension::BasicFutureObject<OGLSecondary,void> &);
	BasicFutureObject<OGLSecondary,void>(extension::FutureObjectSpec::NoCache_t, const std::string &, const void *);
	BasicFutureObject<OGLSecondary,void>(const std::string &, const void *);
	BasicFutureObject<OGLSecondary,void>();
	~BasicFutureObject<OGLSecondary,void>();
	extension::BasicFutureObject<OGLSecondary,void> & operator=(const extension::BasicFutureObject<OGLSecondary,void> &);
	bool isEmpty();
	bool isReady();
	void waitForReady();
	const OGLSecondary * get();
	bool hasData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	const char * getErrorString();
	void reset();
	void dispose();
	OGLSecondary * releaseData();
	OGLSecondary * operator->();
	OGLSecondary & operator*();
	OGLSecondary * operator class OGLSecondary *const();
	std::string contentPath();
	static extension::BasicFutureObject<OGLSecondary,void> MakeDataHolder(OGLSecondary *);
	class AssetCache;
private:
	static extension::BasicFutureObject<OGLSecondary,void>::AssetCache s_cacheManager; // 0xFFFFFFFFFFFFFFFF
};
class extension::BasicFutureObject<Image,extension::FutureImageOption> :
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
	class Content_t;
	class Body;
	class BodySharedPtr_t;
	class BodyWeakPtr_t;
private:
	bool m_isNoCache; // 0x1
	extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> m_body; // 0x8
public:
	BasicFutureObject<Image,extension::FutureImageOption>(const extension::BasicFutureObject<Image,extension::FutureImageOption> &);
	BasicFutureObject<Image,extension::FutureImageOption>(extension::FutureObjectSpec::NoCache_t, const std::string &, const extension::FutureImageOption *);
	BasicFutureObject<Image,extension::FutureImageOption>(const std::string &, const extension::FutureImageOption *);
	BasicFutureObject<Image,extension::FutureImageOption>();
	~BasicFutureObject<Image,extension::FutureImageOption>();
	extension::BasicFutureObject<Image,extension::FutureImageOption> & operator=(const extension::BasicFutureObject<Image,extension::FutureImageOption> &);
	bool isEmpty();
	bool isReady();
	void waitForReady();
	const Image * get();
	bool hasData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	const char * getErrorString();
	void reset();
	void dispose();
	Image * releaseData();
	Image * operator->();
	Image & operator*();
	Image * operator class Image *const();
	std::string contentPath();
	static extension::BasicFutureObject<Image,extension::FutureImageOption> MakeDataHolder(Image *);
	class AssetCache;
private:
	static extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache s_cacheManager; // 0xFFFFFFFFFFFFFFFF
};
class extension::AsyncAsset
{
public:
	AsyncAsset();
private:
	AsyncAsset(const extension::AsyncAsset &);
	extension::AsyncAsset & operator=(const extension::AsyncAsset &);
public:
	~AsyncAsset();
	long getModelCount();
	OGLModel * getModel(long);
	long getCameraCount();
	OGLCamera * getCamera(long);
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> getExtTexture(long);
	bool isContainsExtTexture(long);
	EffectDataListManager * getEffectMgr();
	long getModelType(long);
	OGLModel * getModelFromType(long, long);
private:
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_effPath; // 0x0
	std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > m_figures; // 0x20
	std::vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > > m_motions; // 0x38
	std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > m_textures; // 0x50
	std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > m_extTextures; // 0x68
	std::vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > > m_mirrors; // 0x80
	std::vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > > m_cameras; // 0x98
	std::vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > m_secondaries; // 0xB0
	std::vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > m_models; // 0xC8
	std::unique_ptr<EffectDataListManager,std::default_delete<EffectDataListManager> > m_effect; // 0xE0
	std::vector<int,std::allocator<int> > m_modelTypes; // 0xE8
};
extension::AsyncAsset::AsyncAsset(); // 0x1402489F0
extension::AsyncAsset::~AsyncAsset(); // 0x14011C620
class std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > :
	std::_Vector_alloc<std::_Vec_base_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> pointer;
	typedef const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> const_pointer;
	typedef extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> reference;
	typedef const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > >(std::initializer_list<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> >, const std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > &);
	vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > >(std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > &, const std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > &);
	vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > >(std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > &);
	vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > >(const std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > &, const std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > &);
	vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > >(const std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > &);
	vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > >(unsigned long long, const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> &, const std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > &);
	vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > >(unsigned long long, const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> &);
	vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > >(unsigned long long);
	vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > >(const std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > &);
	vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > >();
	void _Construct_n(unsigned long long, const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *);
	std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > & operator=(const std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > &);
	std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > & operator=(std::initializer_list<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> >);
	std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > & operator=(std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > &);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > &);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > &, std::integral_constant<bool,1>);
	void push_back(const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> &);
	void push_back(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > >, unsigned long long, const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > >, const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > >, std::initializer_list<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > >, extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> &);
	void assign(unsigned long long, const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> &);
	void assign(std::initializer_list<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> >);
	~vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > get_allocator();
	extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> & at(unsigned long long);
	const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> & at(unsigned long long);
	extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> & operator[](unsigned long long);
	const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> & operator[](unsigned long long);
	const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> * data();
	extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> * data();
	const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> & front();
	extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> & front();
	const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> & back();
	extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *, extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > >, unsigned long long, const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> &);
	extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> * _Ufill(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *, unsigned long long, const extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *, extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *);
};
class std::vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::BasicFutureObject<OGLMotion,void> pointer;
	typedef const extension::BasicFutureObject<OGLMotion,void> const_pointer;
	typedef extension::BasicFutureObject<OGLMotion,void> reference;
	typedef const extension::BasicFutureObject<OGLMotion,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > >(std::initializer_list<extension::BasicFutureObject<OGLMotion,void> >, const std::allocator<extension::BasicFutureObject<OGLMotion,void> > &);
	vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > >(std::vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > > &, const std::allocator<extension::BasicFutureObject<OGLMotion,void> > &);
	vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > >(std::vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > > &);
	vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > >(const std::vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > > &, const std::allocator<extension::BasicFutureObject<OGLMotion,void> > &);
	vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > >(const std::vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > > &);
	vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > >(unsigned long long, const extension::BasicFutureObject<OGLMotion,void> &, const std::allocator<extension::BasicFutureObject<OGLMotion,void> > &);
	vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > >(unsigned long long, const extension::BasicFutureObject<OGLMotion,void> &);
	vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > >(unsigned long long);
	vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > >(const std::allocator<extension::BasicFutureObject<OGLMotion,void> > &);
	vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > >();
	void _Construct_n(unsigned long long, const extension::BasicFutureObject<OGLMotion,void> *);
	std::vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > > & operator=(const std::vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > > &);
	std::vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > > & operator=(std::initializer_list<extension::BasicFutureObject<OGLMotion,void> >);
	std::vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > > & operator=(std::vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > > &);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > > &);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > > &, std::integral_constant<bool,1>);
	void push_back(const extension::BasicFutureObject<OGLMotion,void> &);
	void push_back(extension::BasicFutureObject<OGLMotion,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > >, unsigned long long, const extension::BasicFutureObject<OGLMotion,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > >, const extension::BasicFutureObject<OGLMotion,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > >, std::initializer_list<extension::BasicFutureObject<OGLMotion,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > >, extension::BasicFutureObject<OGLMotion,void> &);
	void assign(unsigned long long, const extension::BasicFutureObject<OGLMotion,void> &);
	void assign(std::initializer_list<extension::BasicFutureObject<OGLMotion,void> >);
	~vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::BasicFutureObject<OGLMotion,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::BasicFutureObject<OGLMotion,void> > get_allocator();
	extension::BasicFutureObject<OGLMotion,void> & at(unsigned long long);
	const extension::BasicFutureObject<OGLMotion,void> & at(unsigned long long);
	extension::BasicFutureObject<OGLMotion,void> & operator[](unsigned long long);
	const extension::BasicFutureObject<OGLMotion,void> & operator[](unsigned long long);
	const extension::BasicFutureObject<OGLMotion,void> * data();
	extension::BasicFutureObject<OGLMotion,void> * data();
	const extension::BasicFutureObject<OGLMotion,void> & front();
	extension::BasicFutureObject<OGLMotion,void> & front();
	const extension::BasicFutureObject<OGLMotion,void> & back();
	extension::BasicFutureObject<OGLMotion,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::BasicFutureObject<OGLMotion,void> *, extension::BasicFutureObject<OGLMotion,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::BasicFutureObject<OGLMotion,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMotion,void> > > >, unsigned long long, const extension::BasicFutureObject<OGLMotion,void> &);
	extension::BasicFutureObject<OGLMotion,void> * _Ufill(extension::BasicFutureObject<OGLMotion,void> *, unsigned long long, const extension::BasicFutureObject<OGLMotion,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::BasicFutureObject<OGLMotion,void> *, extension::BasicFutureObject<OGLMotion,void> *);
};
class std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > :
	std::_Vector_alloc<std::_Vec_base_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> pointer;
	typedef const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> const_pointer;
	typedef extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> reference;
	typedef const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > >(std::initializer_list<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> >, const std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > &);
	vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > >(std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > &, const std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > &);
	vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > >(std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > &);
	vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > >(const std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > &, const std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > &);
	vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > >(const std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > &);
	vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > >(unsigned long long, const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> &, const std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > &);
	vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > >(unsigned long long, const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> &);
	vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > >(unsigned long long);
	vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > >(const std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > &);
	vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > >();
	void _Construct_n(unsigned long long, const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *);
	std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > & operator=(const std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > &);
	std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > & operator=(std::initializer_list<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> >);
	std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > & operator=(std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > &);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > &);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > &, std::integral_constant<bool,1>);
	void push_back(const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> &);
	void push_back(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > >, unsigned long long, const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > >, const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > >, std::initializer_list<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > >, extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> &);
	void assign(unsigned long long, const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> &);
	void assign(std::initializer_list<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> >);
	~vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > get_allocator();
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> & at(unsigned long long);
	const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> & at(unsigned long long);
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> & operator[](unsigned long long);
	const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> & operator[](unsigned long long);
	const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> * data();
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> * data();
	const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> & front();
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> & front();
	const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> & back();
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *, extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > >, unsigned long long, const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> &);
	extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> * _Ufill(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *, unsigned long long, const extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *, extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *);
};
class std::vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::BasicFutureObject<OGLMirror,void> pointer;
	typedef const extension::BasicFutureObject<OGLMirror,void> const_pointer;
	typedef extension::BasicFutureObject<OGLMirror,void> reference;
	typedef const extension::BasicFutureObject<OGLMirror,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > >(std::initializer_list<extension::BasicFutureObject<OGLMirror,void> >, const std::allocator<extension::BasicFutureObject<OGLMirror,void> > &);
	vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > >(std::vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > > &, const std::allocator<extension::BasicFutureObject<OGLMirror,void> > &);
	vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > >(std::vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > > &);
	vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > >(const std::vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > > &, const std::allocator<extension::BasicFutureObject<OGLMirror,void> > &);
	vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > >(const std::vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > > &);
	vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > >(unsigned long long, const extension::BasicFutureObject<OGLMirror,void> &, const std::allocator<extension::BasicFutureObject<OGLMirror,void> > &);
	vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > >(unsigned long long, const extension::BasicFutureObject<OGLMirror,void> &);
	vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > >(unsigned long long);
	vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > >(const std::allocator<extension::BasicFutureObject<OGLMirror,void> > &);
	vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > >();
	void _Construct_n(unsigned long long, const extension::BasicFutureObject<OGLMirror,void> *);
	std::vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > > & operator=(const std::vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > > &);
	std::vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > > & operator=(std::initializer_list<extension::BasicFutureObject<OGLMirror,void> >);
	std::vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > > & operator=(std::vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > > &);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > > &);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > > &, std::integral_constant<bool,1>);
	void push_back(const extension::BasicFutureObject<OGLMirror,void> &);
	void push_back(extension::BasicFutureObject<OGLMirror,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > >, unsigned long long, const extension::BasicFutureObject<OGLMirror,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > >, const extension::BasicFutureObject<OGLMirror,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > >, std::initializer_list<extension::BasicFutureObject<OGLMirror,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > >, extension::BasicFutureObject<OGLMirror,void> &);
	void assign(unsigned long long, const extension::BasicFutureObject<OGLMirror,void> &);
	void assign(std::initializer_list<extension::BasicFutureObject<OGLMirror,void> >);
	~vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::BasicFutureObject<OGLMirror,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::BasicFutureObject<OGLMirror,void> > get_allocator();
	extension::BasicFutureObject<OGLMirror,void> & at(unsigned long long);
	const extension::BasicFutureObject<OGLMirror,void> & at(unsigned long long);
	extension::BasicFutureObject<OGLMirror,void> & operator[](unsigned long long);
	const extension::BasicFutureObject<OGLMirror,void> & operator[](unsigned long long);
	const extension::BasicFutureObject<OGLMirror,void> * data();
	extension::BasicFutureObject<OGLMirror,void> * data();
	const extension::BasicFutureObject<OGLMirror,void> & front();
	extension::BasicFutureObject<OGLMirror,void> & front();
	const extension::BasicFutureObject<OGLMirror,void> & back();
	extension::BasicFutureObject<OGLMirror,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::BasicFutureObject<OGLMirror,void> *, extension::BasicFutureObject<OGLMirror,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::BasicFutureObject<OGLMirror,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLMirror,void> > > >, unsigned long long, const extension::BasicFutureObject<OGLMirror,void> &);
	extension::BasicFutureObject<OGLMirror,void> * _Ufill(extension::BasicFutureObject<OGLMirror,void> *, unsigned long long, const extension::BasicFutureObject<OGLMirror,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::BasicFutureObject<OGLMirror,void> *, extension::BasicFutureObject<OGLMirror,void> *);
};
class std::vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::BasicFutureObject<OGLCamera,void> pointer;
	typedef const extension::BasicFutureObject<OGLCamera,void> const_pointer;
	typedef extension::BasicFutureObject<OGLCamera,void> reference;
	typedef const extension::BasicFutureObject<OGLCamera,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > >(std::initializer_list<extension::BasicFutureObject<OGLCamera,void> >, const std::allocator<extension::BasicFutureObject<OGLCamera,void> > &);
	vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > >(std::vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > > &, const std::allocator<extension::BasicFutureObject<OGLCamera,void> > &);
	vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > >(std::vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > > &);
	vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > >(const std::vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > > &, const std::allocator<extension::BasicFutureObject<OGLCamera,void> > &);
	vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > >(const std::vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > > &);
	vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > >(unsigned long long, const extension::BasicFutureObject<OGLCamera,void> &, const std::allocator<extension::BasicFutureObject<OGLCamera,void> > &);
	vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > >(unsigned long long, const extension::BasicFutureObject<OGLCamera,void> &);
	vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > >(unsigned long long);
	vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > >(const std::allocator<extension::BasicFutureObject<OGLCamera,void> > &);
	vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > >();
	void _Construct_n(unsigned long long, const extension::BasicFutureObject<OGLCamera,void> *);
	std::vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > > & operator=(const std::vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > > &);
	std::vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > > & operator=(std::initializer_list<extension::BasicFutureObject<OGLCamera,void> >);
	std::vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > > & operator=(std::vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > > &);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > > &);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > > &, std::integral_constant<bool,1>);
	void push_back(const extension::BasicFutureObject<OGLCamera,void> &);
	void push_back(extension::BasicFutureObject<OGLCamera,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > >, unsigned long long, const extension::BasicFutureObject<OGLCamera,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > >, const extension::BasicFutureObject<OGLCamera,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > >, std::initializer_list<extension::BasicFutureObject<OGLCamera,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > >, extension::BasicFutureObject<OGLCamera,void> &);
	void assign(unsigned long long, const extension::BasicFutureObject<OGLCamera,void> &);
	void assign(std::initializer_list<extension::BasicFutureObject<OGLCamera,void> >);
	~vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::BasicFutureObject<OGLCamera,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::BasicFutureObject<OGLCamera,void> > get_allocator();
	extension::BasicFutureObject<OGLCamera,void> & at(unsigned long long);
	const extension::BasicFutureObject<OGLCamera,void> & at(unsigned long long);
	extension::BasicFutureObject<OGLCamera,void> & operator[](unsigned long long);
	const extension::BasicFutureObject<OGLCamera,void> & operator[](unsigned long long);
	const extension::BasicFutureObject<OGLCamera,void> * data();
	extension::BasicFutureObject<OGLCamera,void> * data();
	const extension::BasicFutureObject<OGLCamera,void> & front();
	extension::BasicFutureObject<OGLCamera,void> & front();
	const extension::BasicFutureObject<OGLCamera,void> & back();
	extension::BasicFutureObject<OGLCamera,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::BasicFutureObject<OGLCamera,void> *, extension::BasicFutureObject<OGLCamera,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::BasicFutureObject<OGLCamera,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLCamera,void> > > >, unsigned long long, const extension::BasicFutureObject<OGLCamera,void> &);
	extension::BasicFutureObject<OGLCamera,void> * _Ufill(extension::BasicFutureObject<OGLCamera,void> *, unsigned long long, const extension::BasicFutureObject<OGLCamera,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::BasicFutureObject<OGLCamera,void> *, extension::BasicFutureObject<OGLCamera,void> *);
};
class std::vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::BasicFutureObject<OGLSecondary,void> pointer;
	typedef const extension::BasicFutureObject<OGLSecondary,void> const_pointer;
	typedef extension::BasicFutureObject<OGLSecondary,void> reference;
	typedef const extension::BasicFutureObject<OGLSecondary,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > >(std::initializer_list<extension::BasicFutureObject<OGLSecondary,void> >, const std::allocator<extension::BasicFutureObject<OGLSecondary,void> > &);
	vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > >(std::vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > &, const std::allocator<extension::BasicFutureObject<OGLSecondary,void> > &);
	vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > >(std::vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > &);
	vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > >(const std::vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > &, const std::allocator<extension::BasicFutureObject<OGLSecondary,void> > &);
	vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > >(const std::vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > &);
	vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > >(unsigned long long, const extension::BasicFutureObject<OGLSecondary,void> &, const std::allocator<extension::BasicFutureObject<OGLSecondary,void> > &);
	vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > >(unsigned long long, const extension::BasicFutureObject<OGLSecondary,void> &);
	vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > >(unsigned long long);
	vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > >(const std::allocator<extension::BasicFutureObject<OGLSecondary,void> > &);
	vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > >();
	void _Construct_n(unsigned long long, const extension::BasicFutureObject<OGLSecondary,void> *);
	std::vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > & operator=(const std::vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > &);
	std::vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > & operator=(std::initializer_list<extension::BasicFutureObject<OGLSecondary,void> >);
	std::vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > & operator=(std::vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > &);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > &);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > &, std::integral_constant<bool,1>);
	void push_back(const extension::BasicFutureObject<OGLSecondary,void> &);
	void push_back(extension::BasicFutureObject<OGLSecondary,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > >, unsigned long long, const extension::BasicFutureObject<OGLSecondary,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > >, const extension::BasicFutureObject<OGLSecondary,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > >, std::initializer_list<extension::BasicFutureObject<OGLSecondary,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > >, extension::BasicFutureObject<OGLSecondary,void> &);
	void assign(unsigned long long, const extension::BasicFutureObject<OGLSecondary,void> &);
	void assign(std::initializer_list<extension::BasicFutureObject<OGLSecondary,void> >);
	~vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::BasicFutureObject<OGLSecondary,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::BasicFutureObject<OGLSecondary,void> > get_allocator();
	extension::BasicFutureObject<OGLSecondary,void> & at(unsigned long long);
	const extension::BasicFutureObject<OGLSecondary,void> & at(unsigned long long);
	extension::BasicFutureObject<OGLSecondary,void> & operator[](unsigned long long);
	const extension::BasicFutureObject<OGLSecondary,void> & operator[](unsigned long long);
	const extension::BasicFutureObject<OGLSecondary,void> * data();
	extension::BasicFutureObject<OGLSecondary,void> * data();
	const extension::BasicFutureObject<OGLSecondary,void> & front();
	extension::BasicFutureObject<OGLSecondary,void> & front();
	const extension::BasicFutureObject<OGLSecondary,void> & back();
	extension::BasicFutureObject<OGLSecondary,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::BasicFutureObject<OGLSecondary,void> *, extension::BasicFutureObject<OGLSecondary,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::BasicFutureObject<OGLSecondary,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<OGLSecondary,void> > > >, unsigned long long, const extension::BasicFutureObject<OGLSecondary,void> &);
	extension::BasicFutureObject<OGLSecondary,void> * _Ufill(extension::BasicFutureObject<OGLSecondary,void> *, unsigned long long, const extension::BasicFutureObject<OGLSecondary,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::BasicFutureObject<OGLSecondary,void> *, extension::BasicFutureObject<OGLSecondary,void> *);
};
class std::vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > :
	std::_Vector_alloc<std::_Vec_base_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::unique_ptr<OGLModel,std::default_delete<OGLModel> > pointer;
	typedef const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > const_pointer;
	typedef std::unique_ptr<OGLModel,std::default_delete<OGLModel> > reference;
	typedef const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > >(std::initializer_list<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > >, const std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > &);
	vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > >(std::vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > &, const std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > &);
	vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > >(std::vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > &);
	vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > >(const std::vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > &, const std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > &);
	vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > >(const std::vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > &);
	vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > >(unsigned long long, const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > &, const std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > &);
	vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > >(unsigned long long, const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > &);
	vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > >(unsigned long long);
	vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > >(const std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > &);
	vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > >();
	void _Construct_n(unsigned long long, const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > *);
	std::vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > & operator=(const std::vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > &);
	std::vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > & operator=(std::initializer_list<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > >);
	std::vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > & operator=(std::vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > &);
	void _Assign_rv(std::vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > &);
	void _Assign_rv(std::vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > &, std::integral_constant<bool,1>);
	void push_back(const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > &);
	void push_back(std::unique_ptr<OGLModel,std::default_delete<OGLModel> > &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > >, unsigned long long, const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > >, const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > >, std::initializer_list<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > >, std::unique_ptr<OGLModel,std::default_delete<OGLModel> > &);
	void assign(unsigned long long, const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > &);
	void assign(std::initializer_list<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > >);
	~vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > get_allocator();
	std::unique_ptr<OGLModel,std::default_delete<OGLModel> > & at(unsigned long long);
	const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > & at(unsigned long long);
	std::unique_ptr<OGLModel,std::default_delete<OGLModel> > & operator[](unsigned long long);
	const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > & operator[](unsigned long long);
	const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > * data();
	std::unique_ptr<OGLModel,std::default_delete<OGLModel> > * data();
	const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > & front();
	std::unique_ptr<OGLModel,std::default_delete<OGLModel> > & front();
	const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > & back();
	std::unique_ptr<OGLModel,std::default_delete<OGLModel> > & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(std::unique_ptr<OGLModel,std::default_delete<OGLModel> > *, std::unique_ptr<OGLModel,std::default_delete<OGLModel> > *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > >, unsigned long long, const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > &);
	std::unique_ptr<OGLModel,std::default_delete<OGLModel> > * _Ufill(std::unique_ptr<OGLModel,std::default_delete<OGLModel> > *, unsigned long long, const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(std::unique_ptr<OGLModel,std::default_delete<OGLModel> > *, std::unique_ptr<OGLModel,std::default_delete<OGLModel> > *);
};
class std::unique_ptr<OGLModel,std::default_delete<OGLModel> > :
	std::_Unique_ptr_base<OGLModel,std::default_delete<OGLModel> >
{
	class _Myt;
	class _Mybase;
	typedef OGLModel pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<OGLModel,std::default_delete<OGLModel> >(const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > &);
	unique_ptr<OGLModel,std::default_delete<OGLModel> >(std::unique_ptr<OGLModel,std::default_delete<OGLModel> > &);
	unique_ptr<OGLModel,std::default_delete<OGLModel> >(OGLModel *, std::default_delete<OGLModel> &);
	unique_ptr<OGLModel,std::default_delete<OGLModel> >(OGLModel *, const std::default_delete<OGLModel> &);
	unique_ptr<OGLModel,std::default_delete<OGLModel> >(OGLModel *);
	unique_ptr<OGLModel,std::default_delete<OGLModel> >(void *);
	unique_ptr<OGLModel,std::default_delete<OGLModel> >();
	std::unique_ptr<OGLModel,std::default_delete<OGLModel> > & operator=(const std::unique_ptr<OGLModel,std::default_delete<OGLModel> > &);
	std::unique_ptr<OGLModel,std::default_delete<OGLModel> > & operator=(std::unique_ptr<OGLModel,std::default_delete<OGLModel> > &);
	std::unique_ptr<OGLModel,std::default_delete<OGLModel> > & operator=(void *);
	void swap(std::unique_ptr<OGLModel,std::default_delete<OGLModel> > &);
	~unique_ptr<OGLModel,std::default_delete<OGLModel> >();
	OGLModel & operator*();
	OGLModel * operator->();
	OGLModel * get();
	bool operator bool();
	OGLModel * release();
	void reset(OGLModel *);
};
class std::unique_ptr<EffectDataListManager,std::default_delete<EffectDataListManager> > :
	std::_Unique_ptr_base<EffectDataListManager,std::default_delete<EffectDataListManager> >
{
	class _Myt;
	class _Mybase;
	typedef EffectDataListManager pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<EffectDataListManager,std::default_delete<EffectDataListManager> >(const std::unique_ptr<EffectDataListManager,std::default_delete<EffectDataListManager> > &);
	unique_ptr<EffectDataListManager,std::default_delete<EffectDataListManager> >(std::unique_ptr<EffectDataListManager,std::default_delete<EffectDataListManager> > &);
	unique_ptr<EffectDataListManager,std::default_delete<EffectDataListManager> >(EffectDataListManager *, std::default_delete<EffectDataListManager> &);
	unique_ptr<EffectDataListManager,std::default_delete<EffectDataListManager> >(EffectDataListManager *, const std::default_delete<EffectDataListManager> &);
	unique_ptr<EffectDataListManager,std::default_delete<EffectDataListManager> >(EffectDataListManager *);
	unique_ptr<EffectDataListManager,std::default_delete<EffectDataListManager> >(void *);
	unique_ptr<EffectDataListManager,std::default_delete<EffectDataListManager> >();
	std::unique_ptr<EffectDataListManager,std::default_delete<EffectDataListManager> > & operator=(const std::unique_ptr<EffectDataListManager,std::default_delete<EffectDataListManager> > &);
	std::unique_ptr<EffectDataListManager,std::default_delete<EffectDataListManager> > & operator=(std::unique_ptr<EffectDataListManager,std::default_delete<EffectDataListManager> > &);
	std::unique_ptr<EffectDataListManager,std::default_delete<EffectDataListManager> > & operator=(void *);
	void swap(std::unique_ptr<EffectDataListManager,std::default_delete<EffectDataListManager> > &);
	~unique_ptr<EffectDataListManager,std::default_delete<EffectDataListManager> >();
	EffectDataListManager & operator*();
	EffectDataListManager * operator->();
	EffectDataListManager * get();
	bool operator bool();
	EffectDataListManager * release();
	void reset(EffectDataListManager *);
};
struct extension::FutureAssetOption
{
	long playerNo; // 0x0
	bool disableShaderFXMaterialLight; // 0x4
	bool disableEffectLoad; // 0x5
	bool bNoMotion; // 0x6
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > effectPath; // 0x8
	long baseDataFlag; // 0x28
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > baseCharaPath; // 0x30
	std::vector<extension::FutureAssetOptionFileSetting,std::allocator<extension::FutureAssetOptionFileSetting> > fileSetting; // 0x50
	FutureAssetOption(extension::FutureAssetOption &);
	FutureAssetOption(const extension::FutureAssetOption &);
	FutureAssetOption();
	bool operator==(const extension::FutureAssetOption &);
	std::string stringize();
	~FutureAssetOption();
	extension::FutureAssetOption & operator=(extension::FutureAssetOption &);
	extension::FutureAssetOption & operator=(const extension::FutureAssetOption &);
};
bool extension::FutureAssetOption::operator==(const extension::FutureAssetOption & o); // 0x1401AA3B0
class extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> :
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
	class Content_t;
	class Body;
	class BodySharedPtr_t;
	class BodyWeakPtr_t;
private:
	bool m_isNoCache; // 0x1
	extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> m_body; // 0x8
public:
	BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>(const extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &);
	BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>(extension::FutureObjectSpec::NoCache_t, const std::string &, const extension::FutureAssetOption *);
	BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>(const std::string &, const extension::FutureAssetOption *);
	BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>();
	~BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>();
	extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> & operator=(const extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> &);
	bool isEmpty();
	bool isReady();
	void waitForReady();
	const extension::AsyncAsset * get();
	bool hasData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	const char * getErrorString();
	void reset();
	void dispose();
	extension::AsyncAsset * releaseData();
	extension::AsyncAsset * operator->();
	extension::AsyncAsset & operator*();
	extension::AsyncAsset * operator class extension::AsyncAsset *const();
	std::string contentPath();
	static extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> MakeDataHolder(extension::AsyncAsset *);
	class AssetCache;
private:
	static extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache s_cacheManager; // 0xFFFFFFFFFFFFFFFF
};
extension::UnloadJob<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>,6>::UnloadJob<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>,6>(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> * asset); // 0x1401F92A0
extension::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2>::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2>(extension::BasicFutureObject<Image,extension::FutureImageOption> * asset); // 0x1402428F0
long extension::UnloadJob<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>,6>::run(); // 0x1401F91D0
long extension::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2>::run(); // 0x140242820