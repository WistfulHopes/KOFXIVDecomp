#pragma once

struct ActionArgument
{
	bool mirrorFlag; // 0x0
	OGLMatrix actMat; // 0x4
	float frame; // 0x44
	float alpha; // 0x48
	ActionArgument();
};
struct EffectUpdateArgument
{
	bool mirrorFlag; // 0x0
	std::vector<ParticleData *,std::allocator<ParticleData *> > * pParticleDataVec; // 0x8
	float frame; // 0x10
	EffectUpdateArgument();
};
class std::vector<ParticleData *,std::allocator<ParticleData *> > :
	std::_Vector_alloc<std::_Vec_base_types<ParticleData *,std::allocator<ParticleData *> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef ParticleData value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef ParticleData * pointer;
	typedef ParticleData * const_pointer;
	typedef ParticleData * reference;
	typedef ParticleData * const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<ParticleData *,std::allocator<ParticleData *> >(std::initializer_list<ParticleData *>, const std::allocator<ParticleData *> &);
	vector<ParticleData *,std::allocator<ParticleData *> >(std::vector<ParticleData *,std::allocator<ParticleData *> > &, const std::allocator<ParticleData *> &);
	vector<ParticleData *,std::allocator<ParticleData *> >(std::vector<ParticleData *,std::allocator<ParticleData *> > &);
	vector<ParticleData *,std::allocator<ParticleData *> >(const std::vector<ParticleData *,std::allocator<ParticleData *> > &, const std::allocator<ParticleData *> &);
	vector<ParticleData *,std::allocator<ParticleData *> >(const std::vector<ParticleData *,std::allocator<ParticleData *> > &);
	vector<ParticleData *,std::allocator<ParticleData *> >(unsigned long long, ParticleData * &, const std::allocator<ParticleData *> &);
	vector<ParticleData *,std::allocator<ParticleData *> >(unsigned long long, ParticleData * &);
	vector<ParticleData *,std::allocator<ParticleData *> >(unsigned long long);
	vector<ParticleData *,std::allocator<ParticleData *> >(const std::allocator<ParticleData *> &);
	vector<ParticleData *,std::allocator<ParticleData *> >();
	void _Construct_n(unsigned long long, ParticleData * *);
	std::vector<ParticleData *,std::allocator<ParticleData *> > & operator=(const std::vector<ParticleData *,std::allocator<ParticleData *> > &);
	std::vector<ParticleData *,std::allocator<ParticleData *> > & operator=(std::initializer_list<ParticleData *>);
	std::vector<ParticleData *,std::allocator<ParticleData *> > & operator=(std::vector<ParticleData *,std::allocator<ParticleData *> > &);
	void _Assign_rv(std::vector<ParticleData *,std::allocator<ParticleData *> > &);
	void _Assign_rv(std::vector<ParticleData *,std::allocator<ParticleData *> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<ParticleData *,std::allocator<ParticleData *> > &, std::integral_constant<bool,1>);
	void push_back(ParticleData * &);
	void push_back(ParticleData * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > >, unsigned long long, ParticleData * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > >, ParticleData * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > >, std::initializer_list<ParticleData *>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > >, ParticleData * &);
	void assign(unsigned long long, ParticleData * &);
	void assign(std::initializer_list<ParticleData *>);
	~vector<ParticleData *,std::allocator<ParticleData *> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, ParticleData * &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<ParticleData *> get_allocator();
	ParticleData * & at(unsigned long long);
	ParticleData * & at(unsigned long long);
	ParticleData * & operator[](unsigned long long);
	ParticleData * & operator[](unsigned long long);
	ParticleData * * data();
	ParticleData * * data();
	ParticleData * & front();
	ParticleData * & front();
	ParticleData * & back();
	ParticleData * & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<ParticleData *,std::allocator<ParticleData *> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(ParticleData * *, ParticleData * *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(ParticleData * *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleData *> > >, unsigned long long, ParticleData * &);
	ParticleData * * _Ufill(ParticleData * *, unsigned long long, ParticleData * *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(ParticleData * *, ParticleData * *);
};
struct EffectUpdateBufferArgument
{
	std::vector<ParticleData *,std::allocator<ParticleData *> > * pParticleDataVec; // 0x0
	EffectData * pEffectData; // 0x8
	EffectUpdateBufferArgument();
};
struct EffectRenderArgument
{
	std::vector<ParticleData *,std::allocator<ParticleData *> > * pParticleDataVec; // 0x0
	EffectData * pEffectData; // 0x8
	long renderOpt; // 0x10
	float zOffset; // 0x14
	long priority; // 0x18
	EffectRenderArgument();
};
class Effect
{
public:
	Effect(const Effect &);
	Effect(EffectData *);
	Effect();
	~Effect();
	void initialize();
	void mainInitialize();
	void ownInitialize();
	void terminate();
	void ownTerminate();
	void update(bool, const OGLMatrix &, float, float);
	void udpateExe(ActionArgument &);
	void mainUpdate(ActionArgument &);
	void postUpdate(ActionArgument &);
	void ownUpdate(bool, const OGLMatrix &, float);
	void ownPostUpdate(bool, float);
	void cleanup(float, bool);
	void ownCleanup(float, bool);
	void updateVertexBuffer();
	void mainUpdateVertexBuffer();
	void postUpdateVertexBuffer();
	void ownUpdateVertexBuffer();
	void ownPostUpdateVertexBuffer();
	void mainUpdateVertexBufferInBT();
	void postUpdateVertexBufferInBT();
	void ownMainUpdateVertexBufferInBT();
	void ownPostUpdateVertexBufferInBT();
	void renderSetting();
	void ownRenderSetting();
	void render(long, float, long);
	void setRenderArg(long, float, long);
	void mainRender(long, float, long, EffectRenderArgument *);
	void ownRender(long, float, long, EffectRenderArgument *);
	Effect * getParent();
	Effect * getSiblingFront();
	Effect * getSiblingBack();
	Effect * getChild();
	void setParent(Effect *);
	void setSiblingFront(Effect *);
	void setSiblingBack(Effect *);
	void setChild(Effect *);
	void setEffectData(EffectData *);
	EffectData * getSettingData();
	float getAge();
	bool getDeleteFlag();
	void setDeleteFlag(bool);
	void setEmitFlag(bool);
	bool getEmitFlag();
	void getSurviveParticleFlag(bool *);
	bool getSurviveParticleFlag();
	bool getNaturalDeathFlag();
	bool getLifeUnlimitedFlag();
	long countChild(Effect *, long);
	long countChild();
	void setEffectDataListManager(EffectDataListManager *);
	EffectDataListManager * getEffectDataListManager();
	void setBindModel(OGLModel *);
	bool getMirrorFlag();
	void setFixBlendRatioFlag(bool);
	void setFixBlendRatio(float);
	void setBlendProjectionCenterPosition(const OGLVec3 &);
	void setBlendProjection(float, const OGLVec3 &, const OGLMatrix &, const OGLMatrix &);
	void setBlendProjection(bool);
	void setBlendProjection();
	void setJobNum(long);
	long getJobNum();
	BlendProjData m_BlendProjData; // 0x8
	long renderEffectFlag; // 0xA4
	ActionArgument m_ActArg; // 0xA8
	EffectUpdateArgument m_UpdateArg; // 0xF8
	EffectUpdateBufferArgument m_UpdateBufferArg; // 0x110
	EffectRenderArgument m_RenderArg; // 0x120
	Framework::MemoryManager * m_pGpuMemory; // 0x140
	Framework::MemoryManager * m_pMemoryVertexReal[2]; // 0x148
	Framework::MemoryManager * m_pMemoryUVAnimeReal[2]; // 0x158
	Framework::MemoryManager * m_pMemoryInstancingReal[2]; // 0x168
	Framework::MemoryManager * m_pMemoryIndexReal[2]; // 0x178
	Framework::MemoryManager * m_pMemoryCrossVertexReal[2]; // 0x188
	RandomNumbers m_RandomNumbers; // 0x198
protected:
	EffectDataListManager * m_pEffectDataListManager; // 0xB68
	OGLModel * m_pBindModel; // 0xB70
	Effect * parent; // 0xB78
	Effect * siblingFront; // 0xB80
	Effect * siblingBack; // 0xB88
	Effect * child; // 0xB90
	EffectData * m_SettingData; // 0xB98
	float age; // 0xBA0
	bool m_mirrorFlag; // 0xBA4
	bool m_EffectDeleteFlag; // 0xBA5
	bool m_EmitFlag; // 0xBA6
	long jobNum; // 0xBA8
public:
	Effect & operator=(const Effect &);
};