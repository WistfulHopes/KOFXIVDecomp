#pragma once

class extension::gfxi_detail::MovieInstanceListNode :
	extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>
{
public:
	MovieInstanceListNode();
	~MovieInstanceListNode();
};
class extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>
{
private:
	extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode> * m_Prev; // 0x0
	extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode> * m_Next; // 0x8
	BiLinkable<extension::gfxi_detail::MovieInstanceListNode>(extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode> &);
public:
	BiLinkable<extension::gfxi_detail::MovieInstanceListNode>();
protected:
	~BiLinkable<extension::gfxi_detail::MovieInstanceListNode>();
public:
	static extension::gfxi_detail::MovieInstanceListNode * Prev(const extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode> *);
	static extension::gfxi_detail::MovieInstanceListNode * Next(const extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode> *);
	static void Link(extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode> *, extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode> *);
	static void Isolate(extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode> *);
	static bool IsIsolated(extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode> *);
private:
	extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode> & operator=(extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode> &);
};
class extension::BiLinkable<extension::gfxi_detail::MovieStackNode>
{
private:
	extension::BiLinkable<extension::gfxi_detail::MovieStackNode> * m_Prev; // 0x0
	extension::BiLinkable<extension::gfxi_detail::MovieStackNode> * m_Next; // 0x8
	BiLinkable<extension::gfxi_detail::MovieStackNode>(extension::BiLinkable<extension::gfxi_detail::MovieStackNode> &);
public:
	BiLinkable<extension::gfxi_detail::MovieStackNode>();
protected:
	~BiLinkable<extension::gfxi_detail::MovieStackNode>();
public:
	static extension::gfxi_detail::MovieStackNode * Prev(const extension::BiLinkable<extension::gfxi_detail::MovieStackNode> *);
	static extension::gfxi_detail::MovieStackNode * Next(const extension::BiLinkable<extension::gfxi_detail::MovieStackNode> *);
	static void Link(extension::BiLinkable<extension::gfxi_detail::MovieStackNode> *, extension::BiLinkable<extension::gfxi_detail::MovieStackNode> *);
	static void Isolate(extension::BiLinkable<extension::gfxi_detail::MovieStackNode> *);
	static bool IsIsolated(extension::BiLinkable<extension::gfxi_detail::MovieStackNode> *);
private:
	extension::BiLinkable<extension::gfxi_detail::MovieStackNode> & operator=(extension::BiLinkable<extension::gfxi_detail::MovieStackNode> &);
};
class extension::gfxi_detail::MovieStackNode :
	extension::BiLinkable<extension::gfxi_detail::MovieStackNode>
{
public:
	MovieStackNode();
	~MovieStackNode();
};
class extension::gfxi_detail::MovieInstanceVisitor
{
public:
	MovieInstanceVisitor();
private:
	MovieInstanceVisitor(const extension::gfxi_detail::MovieInstanceVisitor &);
	extension::gfxi_detail::MovieInstanceVisitor & operator=(extension::gfxi_detail::MovieInstanceVisitor &);
protected:
	~MovieInstanceVisitor();
public:
	void visit(Scaleform::GFx::Movie &);
};
class extension::GFXIMovieData
{
private:
	GFXIMovieData();
	GFXIMovieData(const extension::GFXIMovieData &);
	extension::GFXIMovieData & operator=(extension::GFXIMovieData &);
public:
	~GFXIMovieData();
	class Future;
	static void EnqueueFutureMovieDataJob(extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> >);
	extension::GFXIMovie createInstance();
	Scaleform::GFx::MovieDef * getMovieDefPtr();
	class LoadJob;
private:
	Scaleform::Ptr<Scaleform::GFx::MovieDef> m_movieDef; // 0x0
};
class extension::BasicFutureObject<extension::GFXIMovieData,void> :
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
	class Content_t;
	class Body;
	class BodySharedPtr_t;
	class BodyWeakPtr_t;
private:
	bool m_isNoCache; // 0x1
	extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> m_body; // 0x8
public:
	BasicFutureObject<extension::GFXIMovieData,void>(const extension::BasicFutureObject<extension::GFXIMovieData,void> &);
	BasicFutureObject<extension::GFXIMovieData,void>(extension::FutureObjectSpec::NoCache_t, const std::string &, const void *);
	BasicFutureObject<extension::GFXIMovieData,void>(const std::string &, const void *);
	BasicFutureObject<extension::GFXIMovieData,void>();
	~BasicFutureObject<extension::GFXIMovieData,void>();
	extension::BasicFutureObject<extension::GFXIMovieData,void> & operator=(const extension::BasicFutureObject<extension::GFXIMovieData,void> &);
	bool isEmpty();
	bool isReady();
	void waitForReady();
	const extension::GFXIMovieData * get();
	bool hasData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	const char * getErrorString();
	void reset();
	void dispose();
	extension::GFXIMovieData * releaseData();
	extension::GFXIMovieData * operator->();
	extension::GFXIMovieData & operator*();
	extension::GFXIMovieData * operator class extension::GFXIMovieData *const();
	std::string contentPath();
	static extension::BasicFutureObject<extension::GFXIMovieData,void> MakeDataHolder(extension::GFXIMovieData *);
	class AssetCache;
private:
	static extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache s_cacheManager; // 0xFFFFFFFFFFFFFFFF
};
class extension::AsyncContent<extension::GFXIMovieData> :
	extension::RefCountable<extension::AsyncContent<extension::GFXIMovieData> >
{
public:
	AsyncContent<extension::GFXIMovieData>(const std::string &);
	AsyncContent<extension::GFXIMovieData>(const std::string &, const std::string &);
private:
	AsyncContent<extension::GFXIMovieData>(const extension::AsyncContent<extension::GFXIMovieData> &);
	extension::AsyncContent<extension::GFXIMovieData> & operator=(const extension::AsyncContent<extension::GFXIMovieData> &);
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
	const std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_loadOptionString; // 0x28
	std::unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> > m_data; // 0x48
	long m_errorCode; // 0x50
	extension::AsyncStatus m_status; // 0x58
	bool m_isDataReleased; // 0x60
	void initRawMember();
protected:
	~AsyncContent<extension::GFXIMovieData>();
	class SharedPtr_t;
public:
	const std::string & name();
	const std::string & path();
	const std::string & optionString();
	bool isReady();
	void waitForReady();
	long getErrorCode();
	extension::GFXIMovieData * getData();
	extension::GFXIMovieData * releaseData();
	bool isDataReleased();
	void requestForCancel();
	void setResult(std::unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> >);
	void setErrorResult(long);
	void setErrorResultWithData(long, std::unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> >);
	bool isCancelRequested();
};
class Scaleform::Ptr<Scaleform::GFx::MovieDef>
{
protected:
	Scaleform::GFx::MovieDef * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::MovieDef>(const Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
	Ptr<Scaleform::GFx::MovieDef>(Scaleform::GFx::MovieDef *);
	Ptr<Scaleform::GFx::MovieDef>(Scaleform::Ptr<Scaleform::GFx::MovieDef> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::MovieDef>(Scaleform::Pickable<Scaleform::GFx::MovieDef>);
	Ptr<Scaleform::GFx::MovieDef>(Scaleform::GFx::MovieDef &);
	Ptr<Scaleform::GFx::MovieDef>();
	~Ptr<Scaleform::GFx::MovieDef>();
	bool operator==(Scaleform::GFx::MovieDef *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
	bool operator!=(Scaleform::GFx::MovieDef *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & operator=(Scaleform::Pickable<Scaleform::GFx::MovieDef>);
	const Scaleform::Ptr<Scaleform::GFx::MovieDef> & operator=(Scaleform::GFx::MovieDef &);
	const Scaleform::Ptr<Scaleform::GFx::MovieDef> & operator=(Scaleform::GFx::MovieDef *);
	const Scaleform::Ptr<Scaleform::GFx::MovieDef> & operator=(const Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & SetPtr(Scaleform::Pickable<Scaleform::GFx::MovieDef>);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & SetPtr(Scaleform::GFx::MovieDef &);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & SetPtr(Scaleform::GFx::MovieDef *);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::MovieDef * & GetRawRef();
	Scaleform::GFx::MovieDef * GetPtr();
	Scaleform::GFx::MovieDef & operator*();
	Scaleform::GFx::MovieDef * operator->();
	Scaleform::GFx::MovieDef * operator class Scaleform::GFx::MovieDef *();
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & Pick(Scaleform::GFx::MovieDef *);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & Pick(Scaleform::Pickable<Scaleform::GFx::MovieDef>);
	Scaleform::Ptr<Scaleform::GFx::MovieDef> & Pick(Scaleform::Ptr<Scaleform::GFx::MovieDef> &);
};
struct extension::FutureObjectJobManager<extension::GFXIMovieData,void>
{
	class Content_t;
	class ContentSharedPtr_t;
	static extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > LoadStart(const std::string &, const std::string &, const void *);
	static std::string Stringize(const void *);
private:
	static void EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> >);
};
void extension::FutureObjectJobManager<extension::GFXIMovieData,void>::EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > shared); // 0x1400F8D20
class extension::GFXIMovie
{
public:
	GFXIMovie(const extension::GFXIMovie &);
	GFXIMovie();
	~GFXIMovie();
	extension::GFXIMovie & operator=(const extension::GFXIMovie &);
	bool isEmpty();
	void setMultiControllerMode(extension::GFXIMultiControllerMode::Spec);
	void bindKeyMapping(const extension::GFXIKeyMapping &, long);
	void bindKeyMapping(const extension::GFXIKeyMapping &);
	extension::GFXIMultiControllerMode::Spec getMultiControllerMode();
	void setIgnoreInputFrames(unsigned long);
	void setBgAlpha(float);
	void reset();
	void dispose();
	bool isFinished();
	Scaleform::GFx::Value createASObject();
	Scaleform::GFx::Value createASArray();
	void setASVariable(const char *, const Scaleform::GFx::Value &, Scaleform::GFx::Movie::SetVarType);
	void setASString(const char *, const char *, Scaleform::GFx::Movie::SetVarType);
	void setASNumber(const char *, double, Scaleform::GFx::Movie::SetVarType);
	Scaleform::GFx::Value getASVariable(const char *);
	std::string getASString(const char *);
	double getASNumber(const char *);
	bool getASVariableArray(const char *, unsigned long, Scaleform::GFx::Value *, unsigned long);
	bool invoke(const char *, Scaleform::GFx::Value *, Scaleform::GFx::Value *, unsigned long);
	bool isStop();
	void stop();
	void start();
	void show();
	void hidden();
	void setPause(bool);
	void restart();
	bool advance(float);
	bool render();
	extension::gfxi_detail::MovieProxy * getProxy();
	bool setViewport(const Scaleform::GFx::Viewport &);
private:
	extension::RefCountablePtr<extension::gfxi_detail::MovieProxy> m_movieProxy; // 0x0
};
void extension::GFXIMovie::dispose(); // 0x1400F8DA0
class extension::RefCountablePtr<extension::gfxi_detail::MovieProxy>
{
private:
	extension::gfxi_detail::MovieProxy * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::gfxi_detail::MovieProxy>(const extension::RefCountablePtr<extension::gfxi_detail::MovieProxy> &);
	RefCountablePtr<extension::gfxi_detail::MovieProxy>(extension::gfxi_detail::MovieProxy *, bool);
	RefCountablePtr<extension::gfxi_detail::MovieProxy>(extension::gfxi_detail::MovieProxy *);
	RefCountablePtr<extension::gfxi_detail::MovieProxy>();
	~RefCountablePtr<extension::gfxi_detail::MovieProxy>();
	void swap(extension::RefCountablePtr<extension::gfxi_detail::MovieProxy> &);
	extension::RefCountablePtr<extension::gfxi_detail::MovieProxy> & operator=(const extension::RefCountablePtr<extension::gfxi_detail::MovieProxy> &);
	void reset(extension::gfxi_detail::MovieProxy *);
	void resetWithAddRef(extension::gfxi_detail::MovieProxy *);
	extension::gfxi_detail::MovieProxy * get();
	extension::gfxi_detail::MovieProxy & operator*();
	extension::gfxi_detail::MovieProxy * operator->();
	bool isNull();
};
class extension::GFXIMovieStack
{
public:
	GFXIMovieStack();
private:
	GFXIMovieStack(const extension::GFXIMovieStack &);
	extension::GFXIMovieStack & operator=(extension::GFXIMovieStack &);
public:
	~GFXIMovieStack();
	static extension::GFXIMovieStack & Instance();
	float maxDeltaT();
	void setMaxDeltaT(float);
	bool isPaused();
	void setPaused(bool);
	void pushFront(extension::GFXIMovie &, bool);
	void pushBack(extension::GFXIMovie &, bool);
	void pushPriority(extension::GFXIMovie &, long, bool);
	void remove(extension::GFXIMovie &);
	void advance(float);
	void render();
	void renderPriority(long, long);
	float updateDeltaT();
	void setViewport(const Scaleform::GFx::Viewport &);
	enum PRIOLITY
	{
		MIN_PRIORITY_ = 0,
		MAX_PRIORITY_ = 1000,
	};
	class MovieProxy;
	class Node_t;
private:
	bool m_isAdvanceCalled; // 0x0
	bool m_isPaused; // 0x1
	long long m_lastTick; // 0x8
	float m_maxDeltaT; // 0x10
	extension::gfxi_detail::MovieStackNode m_movieListEnd; // 0x18
};