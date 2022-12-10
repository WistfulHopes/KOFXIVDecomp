#pragma once

class extension::GFXILoader :
	protected extension::GFXISystem
{
private:
	GFXILoader();
	GFXILoader(const extension::GFXILoader &);
	extension::GFXILoader & operator=(const extension::GFXILoader &);
public:
	~GFXILoader();
	static extension::GFXILoader & Instance();
	Scaleform::GFx::Loader * operator->();
	Scaleform::GFx::Loader & operator*();
	bool operator bool();
private:
	Scaleform::Ptr<Scaleform::Log> m_log; // 0x10
	std::unique_ptr<Scaleform::GFx::Loader,std::default_delete<Scaleform::GFx::Loader> > m_loader; // 0x18
};
class std::unique_ptr<Scaleform::GFx::Loader,std::default_delete<Scaleform::GFx::Loader> > :
	std::_Unique_ptr_base<Scaleform::GFx::Loader,std::default_delete<Scaleform::GFx::Loader> >
{
	class _Myt;
	class _Mybase;
	typedef Scaleform::GFx::Loader pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<Scaleform::GFx::Loader,std::default_delete<Scaleform::GFx::Loader> >(const std::unique_ptr<Scaleform::GFx::Loader,std::default_delete<Scaleform::GFx::Loader> > &);
	unique_ptr<Scaleform::GFx::Loader,std::default_delete<Scaleform::GFx::Loader> >(std::unique_ptr<Scaleform::GFx::Loader,std::default_delete<Scaleform::GFx::Loader> > &);
	unique_ptr<Scaleform::GFx::Loader,std::default_delete<Scaleform::GFx::Loader> >(Scaleform::GFx::Loader *, std::default_delete<Scaleform::GFx::Loader> &);
	unique_ptr<Scaleform::GFx::Loader,std::default_delete<Scaleform::GFx::Loader> >(Scaleform::GFx::Loader *, const std::default_delete<Scaleform::GFx::Loader> &);
	unique_ptr<Scaleform::GFx::Loader,std::default_delete<Scaleform::GFx::Loader> >(Scaleform::GFx::Loader *);
	unique_ptr<Scaleform::GFx::Loader,std::default_delete<Scaleform::GFx::Loader> >(void *);
	unique_ptr<Scaleform::GFx::Loader,std::default_delete<Scaleform::GFx::Loader> >();
	std::unique_ptr<Scaleform::GFx::Loader,std::default_delete<Scaleform::GFx::Loader> > & operator=(const std::unique_ptr<Scaleform::GFx::Loader,std::default_delete<Scaleform::GFx::Loader> > &);
	std::unique_ptr<Scaleform::GFx::Loader,std::default_delete<Scaleform::GFx::Loader> > & operator=(std::unique_ptr<Scaleform::GFx::Loader,std::default_delete<Scaleform::GFx::Loader> > &);
	std::unique_ptr<Scaleform::GFx::Loader,std::default_delete<Scaleform::GFx::Loader> > & operator=(void *);
	void swap(std::unique_ptr<Scaleform::GFx::Loader,std::default_delete<Scaleform::GFx::Loader> > &);
	~unique_ptr<Scaleform::GFx::Loader,std::default_delete<Scaleform::GFx::Loader> >();
	Scaleform::GFx::Loader & operator*();
	Scaleform::GFx::Loader * operator->();
	Scaleform::GFx::Loader * get();
	bool operator bool();
	Scaleform::GFx::Loader * release();
	void reset(Scaleform::GFx::Loader *);
};