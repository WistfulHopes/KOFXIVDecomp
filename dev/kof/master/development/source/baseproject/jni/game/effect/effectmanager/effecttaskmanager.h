#pragma once

class EffectLightManager
{
public:
	EffectLightManager();
	~EffectLightManager();
	void initialize();
	void update();
	void clearStack();
	void clearLightData();
	void addLight(ParticleData *);
	void selectYoungLight();
	void selectOwnLight(long);
	void setLightData(ParticleData *, long);
	void setModelRoomLight();
	long getLightCount();
	OGLLight EffectLight[1]; // 0x0
	OGLLight EffectLightFor1P; // 0x9C
	OGLLight EffectLightFor2P; // 0x138
protected:
	std::vector<ParticleData,std::allocator<ParticleData> > m_LightData; // 0x1D8
	long lightCount; // 0x1F0
	OGLLight DefaultLight; // 0x1F4
	std::mutex m_LightDataMutex; // 0x290
};
class EffectTaskManager
{
public:
	EffectTaskManager();
	~EffectTaskManager();
	void initialize();
	void terminate();
	void cleanup();
	void ST_cleanup();
	void BT_cleanup();
	void onResize();
	static void effectUpdateThread(void *);
	static void effectUpdateBufferThread(void *);
	static void effectUpdateBufferThreadInBT(void *);
	void addUpdateStack(Effect *);
	void addRenderStack(Effect *);
	void updateStack();
	void updateBufferStack();
	void renderStack(long);
	void clearUpdateStack();
	void clearUpdateBufferStack();
	void clearRenderStack();
	ParticleData * newParticlePtr(long);
	void deleteParticlePtr(ParticleData *);
	long getNextBufferNum();
	long getBufferNum();
	long getBufferNumForUpdate();
	long getBufferNumForUpdateBuffer();
	long getBufferNumForRender();
	void updateBufferNum();
	long getRandomSeed();
	void setRandomSeed(unsigned long);
	EffectLightManager m_EffectLightManager; // 0x8
	Fw::cJobManager m_EffectJobManager; // 0x2E8
	EffectGpuParticleManager m_EffectGpuParticleManager; // 0x320
	EffectPs4System m_EffectPs4System; // 0x608
private:
	std::vector<Effect *,std::allocator<Effect *> > m_updateThreadStack; // 0x628
	std::vector<Effect *,std::allocator<Effect *> > m_updateBufferThreadStack; // 0x640
	std::vector<Effect *,std::allocator<Effect *> > m_renderThreadStack; // 0x658
	std::mutex updateStackMutex; // 0x670
	std::mutex renderStackMutex; // 0x6C0
	bool updateVertexBufferFlag; // 0x710
	unsigned long particleMemSearchPoint; // 0x714
	ParticleData * EffectParticleData[5]; // 0x718
	std::mutex m_JobMutex[5]; // 0x740
	long UseDataBufferNum; // 0x8D0
	RandomMT randMT; // 0x8D4
};
class std::vector<Effect *,std::allocator<Effect *> > :
	std::_Vector_alloc<std::_Vec_base_types<Effect *,std::allocator<Effect *> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef Effect value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef Effect * pointer;
	typedef Effect * const_pointer;
	typedef Effect * reference;
	typedef Effect * const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<Effect *,std::allocator<Effect *> >(std::initializer_list<Effect *>, const std::allocator<Effect *> &);
	vector<Effect *,std::allocator<Effect *> >(std::vector<Effect *,std::allocator<Effect *> > &, const std::allocator<Effect *> &);
	vector<Effect *,std::allocator<Effect *> >(std::vector<Effect *,std::allocator<Effect *> > &);
	vector<Effect *,std::allocator<Effect *> >(const std::vector<Effect *,std::allocator<Effect *> > &, const std::allocator<Effect *> &);
	vector<Effect *,std::allocator<Effect *> >(const std::vector<Effect *,std::allocator<Effect *> > &);
	vector<Effect *,std::allocator<Effect *> >(unsigned long long, Effect * &, const std::allocator<Effect *> &);
	vector<Effect *,std::allocator<Effect *> >(unsigned long long, Effect * &);
	vector<Effect *,std::allocator<Effect *> >(unsigned long long);
	vector<Effect *,std::allocator<Effect *> >(const std::allocator<Effect *> &);
	vector<Effect *,std::allocator<Effect *> >();
	void _Construct_n(unsigned long long, Effect * *);
	std::vector<Effect *,std::allocator<Effect *> > & operator=(const std::vector<Effect *,std::allocator<Effect *> > &);
	std::vector<Effect *,std::allocator<Effect *> > & operator=(std::initializer_list<Effect *>);
	std::vector<Effect *,std::allocator<Effect *> > & operator=(std::vector<Effect *,std::allocator<Effect *> > &);
	void _Assign_rv(std::vector<Effect *,std::allocator<Effect *> > &);
	void _Assign_rv(std::vector<Effect *,std::allocator<Effect *> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<Effect *,std::allocator<Effect *> > &, std::integral_constant<bool,1>);
	void push_back(Effect * &);
	void push_back(Effect * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Effect *> > >, unsigned long long, Effect * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Effect *> > >, Effect * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Effect *> > >, std::initializer_list<Effect *>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Effect *> > >, Effect * &);
	void assign(unsigned long long, Effect * &);
	void assign(std::initializer_list<Effect *>);
	~vector<Effect *,std::allocator<Effect *> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Effect *> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, Effect * &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<Effect *> get_allocator();
	Effect * & at(unsigned long long);
	Effect * & at(unsigned long long);
	Effect * & operator[](unsigned long long);
	Effect * & operator[](unsigned long long);
	Effect * * data();
	Effect * * data();
	Effect * & front();
	Effect * & front();
	Effect * & back();
	Effect * & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Effect *> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Effect *> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Effect *> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<Effect *,std::allocator<Effect *> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(Effect * *, Effect * *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(Effect * *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Effect *> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Effect *> > >, unsigned long long, Effect * &);
	Effect * * _Ufill(Effect * *, unsigned long long, Effect * *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(Effect * *, Effect * *);
};