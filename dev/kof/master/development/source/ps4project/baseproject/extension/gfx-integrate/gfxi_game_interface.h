#pragma once

class extension::GFXIMovieContext
{
public:
	GFXIMovieContext(Scaleform::Ptr<Scaleform::GFx::Movie>);
private:
	GFXIMovieContext(const extension::GFXIMovieContext &);
	extension::GFXIMovieContext & operator=(const extension::GFXIMovieContext &);
public:
	Scaleform::GFx::Value createASObject(const char *, const Scaleform::GFx::Value *, unsigned long);
	Scaleform::GFx::Value createASArray();
	bool setASVariable(const char *, const Scaleform::GFx::Value &, Scaleform::GFx::Movie::SetVarType);
	bool setASString(const char *, const char *, Scaleform::GFx::Movie::SetVarType);
	bool setASNumber(const char *, double, Scaleform::GFx::Movie::SetVarType);
	Scaleform::GFx::Value getASVariable(const char *);
	std::string getASString(const char *);
	double getASNumber(const char *);
	bool getASVariableArray(const char *, unsigned long, Scaleform::GFx::Value *, unsigned long);
	bool invoke(const char *, Scaleform::GFx::Value *, Scaleform::GFx::Value *, unsigned long);
	bool setASVariableArray(Scaleform::GFx::Movie::SetArrayType, const char *, unsigned long, const void *, unsigned long);
	void restart();
	Scaleform::GFx::Movie & gmovie();
private:
	Scaleform::Ptr<Scaleform::GFx::Movie> m_movie; // 0x0
public:
	~GFXIMovieContext();
};
class Scaleform::Ptr<Scaleform::GFx::Movie>
{
protected:
	Scaleform::GFx::Movie * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::Movie>(const Scaleform::Ptr<Scaleform::GFx::Movie> &);
	Ptr<Scaleform::GFx::Movie>(Scaleform::GFx::Movie *);
	Ptr<Scaleform::GFx::Movie>(Scaleform::Ptr<Scaleform::GFx::Movie> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::Movie>(Scaleform::Pickable<Scaleform::GFx::Movie>);
	Ptr<Scaleform::GFx::Movie>(Scaleform::GFx::Movie &);
	Ptr<Scaleform::GFx::Movie>();
	~Ptr<Scaleform::GFx::Movie>();
	bool operator==(Scaleform::GFx::Movie *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::Movie> &);
	bool operator!=(Scaleform::GFx::Movie *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::Movie> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::Movie> &);
	Scaleform::Ptr<Scaleform::GFx::Movie> & operator=(Scaleform::Pickable<Scaleform::GFx::Movie>);
	const Scaleform::Ptr<Scaleform::GFx::Movie> & operator=(Scaleform::GFx::Movie &);
	const Scaleform::Ptr<Scaleform::GFx::Movie> & operator=(Scaleform::GFx::Movie *);
	const Scaleform::Ptr<Scaleform::GFx::Movie> & operator=(const Scaleform::Ptr<Scaleform::GFx::Movie> &);
	Scaleform::Ptr<Scaleform::GFx::Movie> & SetPtr(Scaleform::Pickable<Scaleform::GFx::Movie>);
	Scaleform::Ptr<Scaleform::GFx::Movie> & SetPtr(Scaleform::GFx::Movie &);
	Scaleform::Ptr<Scaleform::GFx::Movie> & SetPtr(Scaleform::GFx::Movie *);
	Scaleform::Ptr<Scaleform::GFx::Movie> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::Movie> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::Movie * & GetRawRef();
	Scaleform::GFx::Movie * GetPtr();
	Scaleform::GFx::Movie & operator*();
	Scaleform::GFx::Movie * operator->();
	Scaleform::GFx::Movie * operator class Scaleform::GFx::Movie *();
	Scaleform::Ptr<Scaleform::GFx::Movie> & Pick(Scaleform::GFx::Movie *);
	Scaleform::Ptr<Scaleform::GFx::Movie> & Pick(Scaleform::Pickable<Scaleform::GFx::Movie>);
	Scaleform::Ptr<Scaleform::GFx::Movie> & Pick(Scaleform::Ptr<Scaleform::GFx::Movie> &);
};
Scaleform::GFx::Value extension::GFXIMovieContext::createASArray(); // 0x14027A560
Scaleform::GFx::Value extension::GFXIMovieContext::getASVariable(const char * pathToVar); // 0x14027A5B0
class extension::GFXIGameInterface
{
public:
	GFXIGameInterface(const extension::GFXIGameInterface &);
	GFXIGameInterface();
	~GFXIGameInterface();
	extension::GFXIGameInterface & operator=(const extension::GFXIGameInterface &);
	Scaleform::Ptr<Scaleform::GFx::ExternalInterface> getExternalInterface();
	Scaleform::Ptr<Scaleform::GFx::FSCommandHandler> getFSCommandHandler();
	void setState(Scaleform::GFx::StateBag &);
	class MethodFn;
	void installFunction(const char *, const std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> &);
	static extension::GFXIGameInterface & GlobalInterface();
private:
	extension::RefCountablePtr<extension::gfxi_detail::GameInterfaceImpl> m_impl; // 0x0
};
void extension::GFXIGameInterface::setState(Scaleform::GFx::StateBag & target); // 0x140277F70
class std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> :
	std::_Func_class<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>
{
	class _Mybase;
	class _Myt;
public:
	function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>(std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> &);
	function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>(const std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> &);
	function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>(void *);
	function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>();
	~function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>();
	std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> & operator=(void *);
	std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> & operator=(std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> &);
	std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> & operator=(const std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> &);
	void swap(std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> &);
	bool operator bool();
	const type_info & target_type();
};
struct std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >
{
	struct _Myt;
	typedef const char first_type;
	class second_type;
	pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >(std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > &);
	pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >(const std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > &);
	std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > & operator=(const std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > &);
	std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > & operator=(std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > &);
	const char * first; // 0x0
	std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> second; // 0x8
	void swap(std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > &);
	~pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >();
};
class extension::RefCountablePtr<extension::gfxi_detail::GameInterfaceImpl>
{
private:
	extension::gfxi_detail::GameInterfaceImpl * m_ptr; // 0x0
	void addRef();
	void release();
public:
	RefCountablePtr<extension::gfxi_detail::GameInterfaceImpl>(const extension::RefCountablePtr<extension::gfxi_detail::GameInterfaceImpl> &);
	RefCountablePtr<extension::gfxi_detail::GameInterfaceImpl>(extension::gfxi_detail::GameInterfaceImpl *, bool);
	RefCountablePtr<extension::gfxi_detail::GameInterfaceImpl>(extension::gfxi_detail::GameInterfaceImpl *);
	RefCountablePtr<extension::gfxi_detail::GameInterfaceImpl>();
	~RefCountablePtr<extension::gfxi_detail::GameInterfaceImpl>();
	void swap(extension::RefCountablePtr<extension::gfxi_detail::GameInterfaceImpl> &);
	extension::RefCountablePtr<extension::gfxi_detail::GameInterfaceImpl> & operator=(const extension::RefCountablePtr<extension::gfxi_detail::GameInterfaceImpl> &);
	void reset(extension::gfxi_detail::GameInterfaceImpl *);
	void resetWithAddRef(extension::gfxi_detail::GameInterfaceImpl *);
	extension::gfxi_detail::GameInterfaceImpl * get();
	extension::gfxi_detail::GameInterfaceImpl & operator*();
	extension::gfxi_detail::GameInterfaceImpl * operator->();
	bool isNull();
};
void extension::GFXIGameInterface::installFunctions<299>(const std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> >[5382] & table); // 0x14026EBB0