#pragma once

enum LineDataType
{
	BASE_ANIME = 0,
	FACE_ANIME_UPPER = 1,
	FACE_ANIME_LOWER = 2,
	COLLISION = 3,
	HIT = 4,
	ATTACK = 5,
	CANCEL = 6,
	BRANCH = 7,
	MOVE = 8,
	OFFSET = 9,
	SPEED = 10,
	ACTIONFLG_0 = 11,
	ACTIONFLG_1 = 12,
	ACTIONFLG_2 = 13,
	EFFECT = 14,
	SOUND = 15,
	CAMERA = 16,
	ETC = 17,
	POSITION = 18,
	BLACKOUT = 19,
	T_ATTACH = 20,
	SHOT = 21,
	EFFECT_ANIME = 22,
	EFFECT_MOVE = 23,
	EFFECT_SCALE = 24,
	EFFECT_ANGLE = 25,
	ALL_LINE_DATA_TYPE = 26,
};
enum speedFlag
{
	VEL_SET_X = 1,
	VEL_ADD_X = 2,
	VEL_DIRECT_SET_X = 3,
	VEL_DIRECT_ADD_X = 4,
	VEL_SET_Y = 256,
	VEL_ADD_Y = 512,
	VEL_DIRECT_SET_Y = 768,
	VEL_DIRECT_ADD_Y = 1024,
	ACC_SET_X = 65536,
	ACC_ADD_X = 131072,
	ACC_DIRECT_SET_X = 196608,
	ACC_DIRECT_ADD_X = 262144,
	ACC_SET_Y = 16777216,
	ACC_ADD_Y = 33554432,
	ACC_DIRECT_SET_Y = 50331648,
	ACC_DIRECT_ADD_Y = 67108864,
};
struct ActionSettingData
{
	long endFrame; // 0x0
	long roopBackFrame; // 0x4
};
struct EffectAnimeLineData
{
	long key; // 0x0
	long fileID; // 0x4
	long EffectID; // 0x8
	float frame; // 0xC
};
struct EffectMoveLineData
{
	long key; // 0x0
	float move[3]; // 0x4
};
struct EffectScaleLineData
{
	long key; // 0x0
	float scale[3]; // 0x4
};
struct EffectAngleLineData
{
	long key; // 0x0
	float angle[3]; // 0x4
};
struct OffsetLineData
{
	long key; // 0x0
	float offset[3]; // 0x4
};
struct SpeedLineData
{
	long key; // 0x0
	long setting; // 0x4
	float speed[4]; // 0x8
	long option; // 0x18
};
struct EffectFlgLineData
{
	long key; // 0x0
	long flag; // 0x4
};
struct PositionLineData
{
	long key; // 0x0
	long baseCoordX; // 0x4
	long baseCoordY; // 0x8
	float pos[2]; // 0xC
	long baseCoordZ; // 0x14
	float z; // 0x18
};
struct LineData
{
	ActionSettingData actionSettingData; // 0x0
	EffectAnimeLineData effectAnimeLineData; // 0x8
	EffectMoveLineData effectMoveLineData; // 0x18
	EffectScaleLineData effectScaleLineData; // 0x28
	EffectAngleLineData effectAngleLineData; // 0x38
	OffsetLineData offsetLineData; // 0x48
	SpeedLineData speedLineData; // 0x58
	EffectFlgLineData effectFlg0LineData; // 0x74
	EffectFlgLineData effectFlg1LineData; // 0x7C
	EffectFlgLineData effectFlg2LineData; // 0x84
	PositionLineData positionLineData; // 0x8C
};
struct EffectListNodeTask
{
	long effectID; // 0x0
	bool beingUsed; // 0x4
	long rootFrame; // 0x8
	long currentFrame; // 0xC
	long actId; // 0x10
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > id; // 0x18
	Effect * pEffect; // 0x38
	float * posRecord; // 0x40
	long posRecordSize; // 0x48
	bool parentBindFlag; // 0x4C
	bool emitStopFlag; // 0x4D
	OGLVec3 defaultPos; // 0x50
	EffectListNodeTask(EffectListNodeTask &);
	EffectListNodeTask(const EffectListNodeTask &);
	EffectListNodeTask();
	~EffectListNodeTask();
	EffectListNodeTask & operator=(EffectListNodeTask &);
	EffectListNodeTask & operator=(const EffectListNodeTask &);
};
class EffectTaskSystem
{
public:
	EffectTaskSystem(const EffectTaskSystem &);
	EffectTaskSystem();
	~EffectTaskSystem();
	void initialize(std::string);
	void terminate();
	void cleanup();
	void clearStack();
	void loadEffectData(std::string);
	void clearEffect();
	float * drawStack(long, long, long, unsigned char *, const OGLVec3 &, float *, long);
	void drawExe();
	static void searchKeyData(long, LineData *, long, unsigned char *, long *, long *, long, long);
	EffectTaskSystem * getDrawEffectTaskSytem(long);
	static void resetLineKeyData(LineData *);
	void setPlayerNum(long);
	long getIndex(std::string);
	long getIndexSize();
	long getIdSize(long);
	char * getId(long);
	long getDeleteTime(long);
	bool isSuccess();
	std::vector<EffectListNodeTask,std::allocator<EffectListNodeTask> > m_EffectList; // 0x8
	EffectDataListManager m_EffectDataListManager; // 0x20
	std::vector<Effect *,std::allocator<Effect *> > m_RenderEffectList; // 0x188
protected:
	long m_PrevRootFrame; // 0x1A0
	bool m_RenderFlag; // 0x1A4
	bool m_LoadSuccessFlag; // 0x1A5
	bool m_ReversePlayFlag; // 0x1A6
	long m_PlayerNum; // 0x1A8
public:
	EffectTaskSystem & operator=(const EffectTaskSystem &);
};
class std::vector<EffectListNodeTask,std::allocator<EffectListNodeTask> > :
	std::_Vector_alloc<std::_Vec_base_types<EffectListNodeTask,std::allocator<EffectListNodeTask> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef EffectListNodeTask pointer;
	typedef const EffectListNodeTask const_pointer;
	typedef EffectListNodeTask reference;
	typedef const EffectListNodeTask const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<EffectListNodeTask,std::allocator<EffectListNodeTask> >(std::initializer_list<EffectListNodeTask>, const std::allocator<EffectListNodeTask> &);
	vector<EffectListNodeTask,std::allocator<EffectListNodeTask> >(std::vector<EffectListNodeTask,std::allocator<EffectListNodeTask> > &, const std::allocator<EffectListNodeTask> &);
	vector<EffectListNodeTask,std::allocator<EffectListNodeTask> >(std::vector<EffectListNodeTask,std::allocator<EffectListNodeTask> > &);
	vector<EffectListNodeTask,std::allocator<EffectListNodeTask> >(const std::vector<EffectListNodeTask,std::allocator<EffectListNodeTask> > &, const std::allocator<EffectListNodeTask> &);
	vector<EffectListNodeTask,std::allocator<EffectListNodeTask> >(const std::vector<EffectListNodeTask,std::allocator<EffectListNodeTask> > &);
	vector<EffectListNodeTask,std::allocator<EffectListNodeTask> >(unsigned long long, const EffectListNodeTask &, const std::allocator<EffectListNodeTask> &);
	vector<EffectListNodeTask,std::allocator<EffectListNodeTask> >(unsigned long long, const EffectListNodeTask &);
	vector<EffectListNodeTask,std::allocator<EffectListNodeTask> >(unsigned long long);
	vector<EffectListNodeTask,std::allocator<EffectListNodeTask> >(const std::allocator<EffectListNodeTask> &);
	vector<EffectListNodeTask,std::allocator<EffectListNodeTask> >();
	void _Construct_n(unsigned long long, const EffectListNodeTask *);
	std::vector<EffectListNodeTask,std::allocator<EffectListNodeTask> > & operator=(const std::vector<EffectListNodeTask,std::allocator<EffectListNodeTask> > &);
	std::vector<EffectListNodeTask,std::allocator<EffectListNodeTask> > & operator=(std::initializer_list<EffectListNodeTask>);
	std::vector<EffectListNodeTask,std::allocator<EffectListNodeTask> > & operator=(std::vector<EffectListNodeTask,std::allocator<EffectListNodeTask> > &);
	void _Assign_rv(std::vector<EffectListNodeTask,std::allocator<EffectListNodeTask> > &);
	void _Assign_rv(std::vector<EffectListNodeTask,std::allocator<EffectListNodeTask> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<EffectListNodeTask,std::allocator<EffectListNodeTask> > &, std::integral_constant<bool,1>);
	void push_back(const EffectListNodeTask &);
	void push_back(EffectListNodeTask &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > >, unsigned long long, const EffectListNodeTask &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > >, const EffectListNodeTask &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > >, std::initializer_list<EffectListNodeTask>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > >, EffectListNodeTask &);
	void assign(unsigned long long, const EffectListNodeTask &);
	void assign(std::initializer_list<EffectListNodeTask>);
	~vector<EffectListNodeTask,std::allocator<EffectListNodeTask> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const EffectListNodeTask &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<EffectListNodeTask> get_allocator();
	EffectListNodeTask & at(unsigned long long);
	const EffectListNodeTask & at(unsigned long long);
	EffectListNodeTask & operator[](unsigned long long);
	const EffectListNodeTask & operator[](unsigned long long);
	const EffectListNodeTask * data();
	EffectListNodeTask * data();
	const EffectListNodeTask & front();
	EffectListNodeTask & front();
	const EffectListNodeTask & back();
	EffectListNodeTask & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<EffectListNodeTask,std::allocator<EffectListNodeTask> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(EffectListNodeTask *, EffectListNodeTask *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const EffectListNodeTask *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectListNodeTask> > >, unsigned long long, const EffectListNodeTask &);
	EffectListNodeTask * _Ufill(EffectListNodeTask *, unsigned long long, const EffectListNodeTask *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(EffectListNodeTask *, EffectListNodeTask *);
};
class CommonEffectTaskSystem :
	EffectTaskSystem
{
public:
	CommonEffectTaskSystem(const CommonEffectTaskSystem &);
	CommonEffectTaskSystem();
	virtual ~CommonEffectTaskSystem();
	virtual void clearEffect();
	virtual void cleanup();
	virtual void clearStack();
	virtual EffectTaskSystem * getDrawEffectTaskSytem(long);
	void setPlayerNum(long);
	void setEffectTaskSystem(EffectTaskSystem *);
	EffectTaskSystem * m_EffectTaskSystem; // 0x1B0
	CommonEffectTaskSystem & operator=(const CommonEffectTaskSystem &);
};