#pragma once

class extension::GFXIRenderer :
	protected extension::GFXISystem
{
private:
	GFXIRenderer();
	GFXIRenderer(const extension::GFXIRenderer &);
	extension::GFXIRenderer & operator=(const extension::GFXIRenderer &);
public:
	~GFXIRenderer();
	static extension::GFXIRenderer & Instance();
	bool isInitialized();
	void initialize();
	Scaleform::Render::HAL & getHAL();
	void onResize();
	void terminate();
	void execRenderThreadCommands();
	void beginFrame();
	void beginScene();
	void renderDisplayHandle(Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot>);
	void endScene();
	void endFrame(bool);
	void useOffscreenRenderTarget(long, long, long);
	const Scaleform::GFx::Viewport & defaultMovieViewport();
	Scaleform::Render::ThreadCommandQueue * getCommandQueue();
	void renderDrawText();
private:
	Framework::GLManager * m_glm; // 0x10
	std::unique_ptr<Scaleform::Render::MemoryManager,std::default_delete<Scaleform::Render::MemoryManager> > m_renderMemory; // 0x18
	std::unique_ptr<Scaleform::Render::ThreadCommandQueue,std::default_delete<Scaleform::Render::ThreadCommandQueue> > m_commandQueue; // 0x20
	Scaleform::Ptr<Scaleform::Render::HAL> m_hal; // 0x28
	std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > m_screenRenderTargets; // 0x30
	Scaleform::GFx::Viewport m_defaultMovieViewport; // 0x48
	Scaleform::Ptr<Scaleform::Render::RenderTarget> m_offscreenRenderTarget; // 0x80
	Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> m_offscreenDepthTarget; // 0x88
};
class std::unique_ptr<Scaleform::Render::MemoryManager,std::default_delete<Scaleform::Render::MemoryManager> > :
	std::_Unique_ptr_base<Scaleform::Render::MemoryManager,std::default_delete<Scaleform::Render::MemoryManager> >
{
	class _Myt;
	class _Mybase;
	typedef Scaleform::Render::MemoryManager pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<Scaleform::Render::MemoryManager,std::default_delete<Scaleform::Render::MemoryManager> >(const std::unique_ptr<Scaleform::Render::MemoryManager,std::default_delete<Scaleform::Render::MemoryManager> > &);
	unique_ptr<Scaleform::Render::MemoryManager,std::default_delete<Scaleform::Render::MemoryManager> >(std::unique_ptr<Scaleform::Render::MemoryManager,std::default_delete<Scaleform::Render::MemoryManager> > &);
	unique_ptr<Scaleform::Render::MemoryManager,std::default_delete<Scaleform::Render::MemoryManager> >(Scaleform::Render::MemoryManager *, std::default_delete<Scaleform::Render::MemoryManager> &);
	unique_ptr<Scaleform::Render::MemoryManager,std::default_delete<Scaleform::Render::MemoryManager> >(Scaleform::Render::MemoryManager *, const std::default_delete<Scaleform::Render::MemoryManager> &);
	unique_ptr<Scaleform::Render::MemoryManager,std::default_delete<Scaleform::Render::MemoryManager> >(Scaleform::Render::MemoryManager *);
	unique_ptr<Scaleform::Render::MemoryManager,std::default_delete<Scaleform::Render::MemoryManager> >(void *);
	unique_ptr<Scaleform::Render::MemoryManager,std::default_delete<Scaleform::Render::MemoryManager> >();
	std::unique_ptr<Scaleform::Render::MemoryManager,std::default_delete<Scaleform::Render::MemoryManager> > & operator=(const std::unique_ptr<Scaleform::Render::MemoryManager,std::default_delete<Scaleform::Render::MemoryManager> > &);
	std::unique_ptr<Scaleform::Render::MemoryManager,std::default_delete<Scaleform::Render::MemoryManager> > & operator=(std::unique_ptr<Scaleform::Render::MemoryManager,std::default_delete<Scaleform::Render::MemoryManager> > &);
	std::unique_ptr<Scaleform::Render::MemoryManager,std::default_delete<Scaleform::Render::MemoryManager> > & operator=(void *);
	void swap(std::unique_ptr<Scaleform::Render::MemoryManager,std::default_delete<Scaleform::Render::MemoryManager> > &);
	~unique_ptr<Scaleform::Render::MemoryManager,std::default_delete<Scaleform::Render::MemoryManager> >();
	Scaleform::Render::MemoryManager & operator*();
	Scaleform::Render::MemoryManager * operator->();
	Scaleform::Render::MemoryManager * get();
	bool operator bool();
	Scaleform::Render::MemoryManager * release();
	void reset(Scaleform::Render::MemoryManager *);
};
class std::unique_ptr<Scaleform::Render::ThreadCommandQueue,std::default_delete<Scaleform::Render::ThreadCommandQueue> > :
	std::_Unique_ptr_base<Scaleform::Render::ThreadCommandQueue,std::default_delete<Scaleform::Render::ThreadCommandQueue> >
{
	class _Myt;
	class _Mybase;
	typedef Scaleform::Render::ThreadCommandQueue pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<Scaleform::Render::ThreadCommandQueue,std::default_delete<Scaleform::Render::ThreadCommandQueue> >(const std::unique_ptr<Scaleform::Render::ThreadCommandQueue,std::default_delete<Scaleform::Render::ThreadCommandQueue> > &);
	unique_ptr<Scaleform::Render::ThreadCommandQueue,std::default_delete<Scaleform::Render::ThreadCommandQueue> >(std::unique_ptr<Scaleform::Render::ThreadCommandQueue,std::default_delete<Scaleform::Render::ThreadCommandQueue> > &);
	unique_ptr<Scaleform::Render::ThreadCommandQueue,std::default_delete<Scaleform::Render::ThreadCommandQueue> >(Scaleform::Render::ThreadCommandQueue *, std::default_delete<Scaleform::Render::ThreadCommandQueue> &);
	unique_ptr<Scaleform::Render::ThreadCommandQueue,std::default_delete<Scaleform::Render::ThreadCommandQueue> >(Scaleform::Render::ThreadCommandQueue *, const std::default_delete<Scaleform::Render::ThreadCommandQueue> &);
	unique_ptr<Scaleform::Render::ThreadCommandQueue,std::default_delete<Scaleform::Render::ThreadCommandQueue> >(Scaleform::Render::ThreadCommandQueue *);
	unique_ptr<Scaleform::Render::ThreadCommandQueue,std::default_delete<Scaleform::Render::ThreadCommandQueue> >(void *);
	unique_ptr<Scaleform::Render::ThreadCommandQueue,std::default_delete<Scaleform::Render::ThreadCommandQueue> >();
	std::unique_ptr<Scaleform::Render::ThreadCommandQueue,std::default_delete<Scaleform::Render::ThreadCommandQueue> > & operator=(const std::unique_ptr<Scaleform::Render::ThreadCommandQueue,std::default_delete<Scaleform::Render::ThreadCommandQueue> > &);
	std::unique_ptr<Scaleform::Render::ThreadCommandQueue,std::default_delete<Scaleform::Render::ThreadCommandQueue> > & operator=(std::unique_ptr<Scaleform::Render::ThreadCommandQueue,std::default_delete<Scaleform::Render::ThreadCommandQueue> > &);
	std::unique_ptr<Scaleform::Render::ThreadCommandQueue,std::default_delete<Scaleform::Render::ThreadCommandQueue> > & operator=(void *);
	void swap(std::unique_ptr<Scaleform::Render::ThreadCommandQueue,std::default_delete<Scaleform::Render::ThreadCommandQueue> > &);
	~unique_ptr<Scaleform::Render::ThreadCommandQueue,std::default_delete<Scaleform::Render::ThreadCommandQueue> >();
	Scaleform::Render::ThreadCommandQueue & operator*();
	Scaleform::Render::ThreadCommandQueue * operator->();
	Scaleform::Render::ThreadCommandQueue * get();
	bool operator bool();
	Scaleform::Render::ThreadCommandQueue * release();
	void reset(Scaleform::Render::ThreadCommandQueue *);
};
class Scaleform::Ptr<Scaleform::Render::HAL>
{
protected:
	Scaleform::Render::HAL * pObject; // 0x0
public:
	Ptr<Scaleform::Render::HAL>(const Scaleform::Ptr<Scaleform::Render::HAL> &);
	Ptr<Scaleform::Render::HAL>(Scaleform::Render::HAL *);
	Ptr<Scaleform::Render::HAL>(Scaleform::Ptr<Scaleform::Render::HAL> &, Scaleform::PickType);
	Ptr<Scaleform::Render::HAL>(Scaleform::Pickable<Scaleform::Render::HAL>);
	Ptr<Scaleform::Render::HAL>(Scaleform::Render::HAL &);
	Ptr<Scaleform::Render::HAL>();
	~Ptr<Scaleform::Render::HAL>();
	bool operator==(Scaleform::Render::HAL *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::HAL> &);
	bool operator!=(Scaleform::Render::HAL *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::HAL> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::HAL> &);
	Scaleform::Ptr<Scaleform::Render::HAL> & operator=(Scaleform::Pickable<Scaleform::Render::HAL>);
	const Scaleform::Ptr<Scaleform::Render::HAL> & operator=(Scaleform::Render::HAL &);
	const Scaleform::Ptr<Scaleform::Render::HAL> & operator=(Scaleform::Render::HAL *);
	const Scaleform::Ptr<Scaleform::Render::HAL> & operator=(const Scaleform::Ptr<Scaleform::Render::HAL> &);
	Scaleform::Ptr<Scaleform::Render::HAL> & SetPtr(Scaleform::Pickable<Scaleform::Render::HAL>);
	Scaleform::Ptr<Scaleform::Render::HAL> & SetPtr(Scaleform::Render::HAL &);
	Scaleform::Ptr<Scaleform::Render::HAL> & SetPtr(Scaleform::Render::HAL *);
	Scaleform::Ptr<Scaleform::Render::HAL> & SetPtr(const Scaleform::Ptr<Scaleform::Render::HAL> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::HAL * & GetRawRef();
	Scaleform::Render::HAL * GetPtr();
	Scaleform::Render::HAL & operator*();
	Scaleform::Render::HAL * operator->();
	Scaleform::Render::HAL * operator class Scaleform::Render::HAL *();
	Scaleform::Ptr<Scaleform::Render::HAL> & Pick(Scaleform::Render::HAL *);
	Scaleform::Ptr<Scaleform::Render::HAL> & Pick(Scaleform::Pickable<Scaleform::Render::HAL>);
	Scaleform::Ptr<Scaleform::Render::HAL> & Pick(Scaleform::Ptr<Scaleform::Render::HAL> &);
};
class std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > :
	std::_Vector_alloc<std::_Vec_base_types<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef Scaleform::Ptr<Scaleform::Render::RenderTarget> pointer;
	typedef const Scaleform::Ptr<Scaleform::Render::RenderTarget> const_pointer;
	typedef Scaleform::Ptr<Scaleform::Render::RenderTarget> reference;
	typedef const Scaleform::Ptr<Scaleform::Render::RenderTarget> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > >(std::initializer_list<Scaleform::Ptr<Scaleform::Render::RenderTarget> >, const std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > &);
	vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > >(std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > &, const std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > &);
	vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > >(std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > &);
	vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > >(const std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > &, const std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > &);
	vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > >(const std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > &);
	vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > >(unsigned long long, const Scaleform::Ptr<Scaleform::Render::RenderTarget> &, const std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > &);
	vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > >(unsigned long long, const Scaleform::Ptr<Scaleform::Render::RenderTarget> &);
	vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > >(unsigned long long);
	vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > >(const std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > &);
	vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > >();
	void _Construct_n(unsigned long long, const Scaleform::Ptr<Scaleform::Render::RenderTarget> *);
	std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > & operator=(const std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > &);
	std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > & operator=(std::initializer_list<Scaleform::Ptr<Scaleform::Render::RenderTarget> >);
	std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > & operator=(std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > &);
	void _Assign_rv(std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > &);
	void _Assign_rv(std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > &, std::integral_constant<bool,1>);
	void push_back(const Scaleform::Ptr<Scaleform::Render::RenderTarget> &);
	void push_back(Scaleform::Ptr<Scaleform::Render::RenderTarget> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > >, unsigned long long, const Scaleform::Ptr<Scaleform::Render::RenderTarget> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > >, const Scaleform::Ptr<Scaleform::Render::RenderTarget> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > >, std::initializer_list<Scaleform::Ptr<Scaleform::Render::RenderTarget> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > >, Scaleform::Ptr<Scaleform::Render::RenderTarget> &);
	void assign(unsigned long long, const Scaleform::Ptr<Scaleform::Render::RenderTarget> &);
	void assign(std::initializer_list<Scaleform::Ptr<Scaleform::Render::RenderTarget> >);
	~vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const Scaleform::Ptr<Scaleform::Render::RenderTarget> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > get_allocator();
	Scaleform::Ptr<Scaleform::Render::RenderTarget> & at(unsigned long long);
	const Scaleform::Ptr<Scaleform::Render::RenderTarget> & at(unsigned long long);
	Scaleform::Ptr<Scaleform::Render::RenderTarget> & operator[](unsigned long long);
	const Scaleform::Ptr<Scaleform::Render::RenderTarget> & operator[](unsigned long long);
	const Scaleform::Ptr<Scaleform::Render::RenderTarget> * data();
	Scaleform::Ptr<Scaleform::Render::RenderTarget> * data();
	const Scaleform::Ptr<Scaleform::Render::RenderTarget> & front();
	Scaleform::Ptr<Scaleform::Render::RenderTarget> & front();
	const Scaleform::Ptr<Scaleform::Render::RenderTarget> & back();
	Scaleform::Ptr<Scaleform::Render::RenderTarget> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<Scaleform::Ptr<Scaleform::Render::RenderTarget>,std::allocator<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(Scaleform::Ptr<Scaleform::Render::RenderTarget> *, Scaleform::Ptr<Scaleform::Render::RenderTarget> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const Scaleform::Ptr<Scaleform::Render::RenderTarget> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Scaleform::Ptr<Scaleform::Render::RenderTarget> > > >, unsigned long long, const Scaleform::Ptr<Scaleform::Render::RenderTarget> &);
	Scaleform::Ptr<Scaleform::Render::RenderTarget> * _Ufill(Scaleform::Ptr<Scaleform::Render::RenderTarget> *, unsigned long long, const Scaleform::Ptr<Scaleform::Render::RenderTarget> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(Scaleform::Ptr<Scaleform::Render::RenderTarget> *, Scaleform::Ptr<Scaleform::Render::RenderTarget> *);
};