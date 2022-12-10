#pragma once

enum ParticleStates
{
	STATE_PARTICLE_DELAY_KILL = 1,
};
struct ParticleDataForChild
{
	float accumulateEmitVolume; // 0x0
	float intervalTime; // 0x4
	long intervalLimitTime; // 0x8
};
enum EffectTextureType
{
	COLOR1_TEXTURE = 0,
	COLOR2_TEXTURE = 1,
	ALPHA1_TEXTURE = 2,
	ALPHA2_TEXTURE = 3,
	NORMAL_TEXTURE = 4,
	CHARAS_DEPTH_TEXTURE = 5,
	CHARA1_DEPTH_TEXTURE = 6,
	CHARA2_DEPTH_TEXTURE = 7,
	STAGE_DEPTH_TEXTURE = 8,
	DISTORTION_CHARA1_TEXTURE = 9,
	DISTORTION_CHARA2_TEXTURE = 10,
	DISTORTION_STAGE_TEXTURE = 11,
	CHARA_BLUR_TEXTURE = 12,
	ALL_EFFECT_TEXTURE_TYPE = 13,
};
struct ParticleData
{
	bool isUsed; // 0x0
	long jobNum; // 0x4
	long playerNum; // 0x8
	unsigned long parentID; // 0xC
	unsigned long ID; // 0x10
	float age; // 0x14
	long lifeLimit; // 0x18
	long Flags; // 0x1C
	OGLModel * Model; // 0x20
	OGLEffectMatrix WorldMat; // 0x28
	OGLEffectMatrix GlobalMat; // 0x70
	OGLEffectMatrix LocalMat; // 0xB8
	OGLEffectMatrix DefaultReferenceMat; // 0x100
	OGLEffectMatrix ReferenceMat; // 0x148
	OGLEffectMatrix DefaultActMat; // 0x190
	OGLEffectMatrix ActMat; // 0x1D8
	OGLEffectMatrix DefaultEmitterMat; // 0x220
	OGLEffectVec3 WorldPos; // 0x268
	OGLEffectVec3 PreWorldPos; // 0x280
	OGLEffectVec3 LocalPos; // 0x298
	OGLEffectVec3 PreLocalPos; // 0x2B0
	OGLEffectVec3 LocalVel; // 0x2C8
	OGLEffectQuat LocalRot; // 0x2E0
	OGLEffectQuat LocalRotVel; // 0x2F8
	OGLEffectVec3 LocalScale; // 0x310
	OGLEffectVec3 LocalScaleVel; // 0x328
	OGLEffectVec3 ForceFieldPos; // 0x340
	OGLEffectVec3 PreForceFieldPos; // 0x358
	OGLEffectVec3 ForceFieldVel; // 0x370
	OGLEffectVec3 GravityVel; // 0x388
	OGLEffectVec3 GravityPos; // 0x3A0
	OGLEffectVec3 DefaultPos; // 0x3B8
	OGLEffectVec3 DefaultDiffuseAll; // 0x3D0
	OGLEffectVec3 DefaultDiffuseAxis; // 0x3E8
	OGLEffectVec3 DefaultSpecifiedDir; // 0x400
	OGLEffectVec3 DefaultInheritanceVel; // 0x418
	OGLEffectVec3 DefaultAcc; // 0x430
	OGLEffectVec3 DefaultScale; // 0x448
	OGLEffectVec3 DefaultScaleVel; // 0x460
	OGLEffectVec3 DefaultScaleAcc; // 0x478
	OGLEffectQuat DefaultRotQ; // 0x490
	OGLEffectQuat DefaultRotQVel; // 0x4A8
	OGLEffectQuat DefaultRotQAcc; // 0x4C0
	OGLEffectVec4 Col; // 0x4D8
	float RatioToFollow; // 0x4F0
	float InheritanceVelocity; // 0x4F4
	long TexNum; // 0x4F8
	long m_AnimationNum[13]; // 0x4FC
	long m_OldAge[13]; // 0x530
	unsigned long m_shuffleFlag[4][13]; // 0x564
	std::vector<ParticleDataForChild,std::allocator<ParticleDataForChild> > particleDataForChild; // 0x638
	float zSortDistance; // 0x650
	bool mirrorFlag; // 0x654
	float distortionRatio; // 0x658
	float defaultCurveKnot; // 0x65C
	float currentCurveKnot; // 0x660
	float curveRatioToFollow; // 0x664
	long lightType; // 0x668
	long decayRate; // 0x66C
	float intensity; // 0x670
	float coneAngle; // 0x674
	float penumbra; // 0x678
	long emitSpecular; // 0x67C
	long emitDiffuse; // 0x680
	OGLEffectVec4 LightingCoefficientOfFake; // 0x688
	ParticleData(const ParticleData &);
	ParticleData();
	~ParticleData();
	void init();
	ParticleData & operator=(const ParticleData &);
};
class std::vector<ParticleDataForChild,std::allocator<ParticleDataForChild> > :
	std::_Vector_alloc<std::_Vec_base_types<ParticleDataForChild,std::allocator<ParticleDataForChild> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef ParticleDataForChild pointer;
	typedef const ParticleDataForChild const_pointer;
	typedef ParticleDataForChild reference;
	typedef const ParticleDataForChild const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<ParticleDataForChild,std::allocator<ParticleDataForChild> >(std::initializer_list<ParticleDataForChild>, const std::allocator<ParticleDataForChild> &);
	vector<ParticleDataForChild,std::allocator<ParticleDataForChild> >(std::vector<ParticleDataForChild,std::allocator<ParticleDataForChild> > &, const std::allocator<ParticleDataForChild> &);
	vector<ParticleDataForChild,std::allocator<ParticleDataForChild> >(std::vector<ParticleDataForChild,std::allocator<ParticleDataForChild> > &);
	vector<ParticleDataForChild,std::allocator<ParticleDataForChild> >(const std::vector<ParticleDataForChild,std::allocator<ParticleDataForChild> > &, const std::allocator<ParticleDataForChild> &);
	vector<ParticleDataForChild,std::allocator<ParticleDataForChild> >(const std::vector<ParticleDataForChild,std::allocator<ParticleDataForChild> > &);
	vector<ParticleDataForChild,std::allocator<ParticleDataForChild> >(unsigned long long, const ParticleDataForChild &, const std::allocator<ParticleDataForChild> &);
	vector<ParticleDataForChild,std::allocator<ParticleDataForChild> >(unsigned long long, const ParticleDataForChild &);
	vector<ParticleDataForChild,std::allocator<ParticleDataForChild> >(unsigned long long);
	vector<ParticleDataForChild,std::allocator<ParticleDataForChild> >(const std::allocator<ParticleDataForChild> &);
	vector<ParticleDataForChild,std::allocator<ParticleDataForChild> >();
	void _Construct_n(unsigned long long, const ParticleDataForChild *);
	std::vector<ParticleDataForChild,std::allocator<ParticleDataForChild> > & operator=(const std::vector<ParticleDataForChild,std::allocator<ParticleDataForChild> > &);
	std::vector<ParticleDataForChild,std::allocator<ParticleDataForChild> > & operator=(std::initializer_list<ParticleDataForChild>);
	std::vector<ParticleDataForChild,std::allocator<ParticleDataForChild> > & operator=(std::vector<ParticleDataForChild,std::allocator<ParticleDataForChild> > &);
	void _Assign_rv(std::vector<ParticleDataForChild,std::allocator<ParticleDataForChild> > &);
	void _Assign_rv(std::vector<ParticleDataForChild,std::allocator<ParticleDataForChild> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<ParticleDataForChild,std::allocator<ParticleDataForChild> > &, std::integral_constant<bool,1>);
	void push_back(const ParticleDataForChild &);
	void push_back(ParticleDataForChild &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > >, unsigned long long, const ParticleDataForChild &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > >, const ParticleDataForChild &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > >, std::initializer_list<ParticleDataForChild>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > >, ParticleDataForChild &);
	void assign(unsigned long long, const ParticleDataForChild &);
	void assign(std::initializer_list<ParticleDataForChild>);
	~vector<ParticleDataForChild,std::allocator<ParticleDataForChild> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const ParticleDataForChild &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<ParticleDataForChild> get_allocator();
	ParticleDataForChild & at(unsigned long long);
	const ParticleDataForChild & at(unsigned long long);
	ParticleDataForChild & operator[](unsigned long long);
	const ParticleDataForChild & operator[](unsigned long long);
	const ParticleDataForChild * data();
	ParticleDataForChild * data();
	const ParticleDataForChild & front();
	ParticleDataForChild & front();
	const ParticleDataForChild & back();
	ParticleDataForChild & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<ParticleDataForChild,std::allocator<ParticleDataForChild> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(ParticleDataForChild *, ParticleDataForChild *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const ParticleDataForChild *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ParticleDataForChild> > >, unsigned long long, const ParticleDataForChild &);
	ParticleDataForChild * _Ufill(ParticleDataForChild *, unsigned long long, const ParticleDataForChild *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(ParticleDataForChild *, ParticleDataForChild *);
};
ParticleData::ParticleData(); // 0x140132C70
ParticleData::~ParticleData(); // 0x14012E9E0
void ParticleData::init(); // 0x140133110
class GreaterParticleData
{
public:
	bool operator()(const ParticleData *, const ParticleData *);
};