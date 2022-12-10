#pragma once

class ParticleTypeStateStripe :
	ParticleTypeState
{
public:
	ParticleTypeStateStripe(const ParticleTypeStateStripe &);
	ParticleTypeStateStripe();
	virtual ~ParticleTypeStateStripe();
	virtual void initialize();
	virtual void loadFigure(const char *);
	virtual void calcWorldMat(ParticleData *, EffectData *);
	virtual void calcWorldMatInBT(ParticleData *, EffectData *);
	virtual void UpdateParticleTypeState(EffectUpdateBufferArgument *);
	virtual void UpdateParticleTypeStateInBT(EffectUpdateBufferArgument *);
	virtual void UpdateVertexBuffer(EffectUpdateBufferArgument *);
	void UpdateInterpolationVertexBuffer(EffectUpdateBufferArgument *);
	virtual void Render(EffectRenderArgument *);
protected:
	long m_crossVertexMemoryCount[2]; // 0x488
	long m_crossIndexMemoryCount[2]; // 0x490
	unsigned long * crossIndex; // 0x498
	long m_InterpolationNum; // 0x4A0
	ParticleStripeType stripeType; // 0x4A4
	bool crossFlag; // 0x4A8
	std::vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> > InterpolationVertex; // 0x4B0
public:
	ParticleTypeStateStripe & operator=(const ParticleTypeStateStripe &);
};
class std::vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> > :
	std::_Vector_alloc<std::_Vec_base_types<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef ParticleVertexBuffer pointer;
	typedef const ParticleVertexBuffer const_pointer;
	typedef ParticleVertexBuffer reference;
	typedef const ParticleVertexBuffer const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> >(std::initializer_list<ParticleVertexBuffer>, const std::allocator<ParticleVertexBuffer> &);
	vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> >(std::vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> > &, const std::allocator<ParticleVertexBuffer> &);
	vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> >(std::vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> > &);
	vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> >(const std::vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> > &, const std::allocator<ParticleVertexBuffer> &);
	vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> >(const std::vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> > &);
	vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> >(unsigned long long, const ParticleVertexBuffer &, const std::allocator<ParticleVertexBuffer> &);
	vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> >(unsigned long long, const ParticleVertexBuffer &);
	vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> >(unsigned long long);
	vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> >(const std::allocator<ParticleVertexBuffer> &);
	vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> >();
	void _Construct_n(unsigned long long, const ParticleVertexBuffer *);
	std::vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> > & operator=(const std::vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> > &);
	std::vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> > & operator=(std::initializer_list<ParticleVertexBuffer>);
	std::vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> > & operator=(std::vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> > &);
	void _Assign_rv(std::vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> > &);
	void _Assign_rv(std::vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> > &, std::integral_constant<bool,1>);
	void push_back(const ParticleVertexBuffer &);
	void push_back(ParticleVertexBuffer &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > >, unsigned long long, const ParticleVertexBuffer &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > >, const ParticleVertexBuffer &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > >, std::initializer_list<ParticleVertexBuffer>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > >, ParticleVertexBuffer &);
	void assign(unsigned long long, const ParticleVertexBuffer &);
	void assign(std::initializer_list<ParticleVertexBuffer>);
	~vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const ParticleVertexBuffer &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<ParticleVertexBuffer> get_allocator();
	ParticleVertexBuffer & at(unsigned long long);
	const ParticleVertexBuffer & at(unsigned long long);
	ParticleVertexBuffer & operator[](unsigned long long);
	const ParticleVertexBuffer & operator[](unsigned long long);
	const ParticleVertexBuffer * data();
	ParticleVertexBuffer * data();
	const ParticleVertexBuffer & front();
	ParticleVertexBuffer & front();
	const ParticleVertexBuffer & back();
	ParticleVertexBuffer & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<ParticleVertexBuffer,std::allocator<ParticleVertexBuffer> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(ParticleVertexBuffer *, ParticleVertexBuffer *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const ParticleVertexBuffer *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleVertexBuffer> > >, unsigned long long, const ParticleVertexBuffer &);
	ParticleVertexBuffer * _Ufill(ParticleVertexBuffer *, unsigned long long, const ParticleVertexBuffer *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(ParticleVertexBuffer *, ParticleVertexBuffer *);
};