#pragma once

struct AgAudioChannelBaseData
{
	enum Command
	{
		Command_Play = 0,
		Command_Pause = 1,
		Command_Resume = 2,
		Command_Stop = 3,
	};
	enum State
	{
		State_None = 0,
		State_Playing = 1,
		State_Paused = 2,
		State_Error = 4,
		State_ActiveMask = 3,
	};
	enum DirtyFlags
	{
		DirtyFlags_None = 0,
		DirtyFlags_Volume = 1,
		DirtyFlags_Pitch = 2,
		DirtyFlags_Position = 4,
		DirtyFlags_Is3D = 8,
		DirtyFlags_DistanceSpread = 16,
		DirtyFlags_PlayCount = 32,
		DirtyFlags_ElapsedTime = 64,
		DirtyFlags_ChannelVolume = 128,
		DirtyFlags_3DPositioningMask = 28,
	};
	AgAudioChannelBaseData();
	AgAudioSourceType m_type; // 0x0
	long m_is3D; // 0x4
	unsigned char m_state; // 0x8
	unsigned char m_internalState; // 0x9
	unsigned char m_dirtyFlags; // 0xA
	unsigned long m_playCount; // 0xC
	AgVector3 m_position; // 0x10
	float m_pitch; // 0x1C
	float m_distanceSpread; // 0x20
	float m_volume; // 0x24
	float m_elapsedTime; // 0x28
	AgVolumeArray m_channelVolume; // 0x2C
	AgMutex m_lock; // 0x4C
	class CommandList;
	std::vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> > m_commands; // 0x78
	unsigned long m_commandCursor; // 0x90
	class EffectList;
	std::vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > > m_effects; // 0x98
	~AgAudioChannelBaseData();
};
AgAudioChannelBaseData::AgAudioChannelBaseData(); // 0x14065E830
class std::vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> > :
	std::_Vector_alloc<std::_Vec_base_types<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	enum value_type
	{
		Command_Play = 0,
		Command_Pause = 1,
		Command_Resume = 2,
		Command_Stop = 3,
	};
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgAudioChannelBaseData::Command pointer;
	typedef const AgAudioChannelBaseData::Command const_pointer;
	typedef AgAudioChannelBaseData::Command reference;
	typedef const AgAudioChannelBaseData::Command const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> >(std::initializer_list<enum AgAudioChannelBaseData::Command>, const std::allocator<enum AgAudioChannelBaseData::Command> &);
	vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> >(std::vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> > &, const std::allocator<enum AgAudioChannelBaseData::Command> &);
	vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> >(std::vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> > &);
	vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> >(const std::vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> > &, const std::allocator<enum AgAudioChannelBaseData::Command> &);
	vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> >(const std::vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> > &);
	vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> >(unsigned long long, const AgAudioChannelBaseData::Command &, const std::allocator<enum AgAudioChannelBaseData::Command> &);
	vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> >(unsigned long long, const AgAudioChannelBaseData::Command &);
	vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> >(unsigned long long);
	vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> >(const std::allocator<enum AgAudioChannelBaseData::Command> &);
	vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> >();
	void _Construct_n(unsigned long long, const AgAudioChannelBaseData::Command *);
	std::vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> > & operator=(const std::vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> > &);
	std::vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> > & operator=(std::initializer_list<enum AgAudioChannelBaseData::Command>);
	std::vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> > & operator=(std::vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> > &);
	void _Assign_rv(std::vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> > &);
	void _Assign_rv(std::vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> > &, std::integral_constant<bool,1>);
	void push_back(const AgAudioChannelBaseData::Command &);
	void push_back(AgAudioChannelBaseData::Command &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > >, unsigned long long, const AgAudioChannelBaseData::Command &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > >, const AgAudioChannelBaseData::Command &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > >, std::initializer_list<enum AgAudioChannelBaseData::Command>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > >, AgAudioChannelBaseData::Command &);
	void assign(unsigned long long, const AgAudioChannelBaseData::Command &);
	void assign(std::initializer_list<enum AgAudioChannelBaseData::Command>);
	~vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgAudioChannelBaseData::Command &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<enum AgAudioChannelBaseData::Command> get_allocator();
	AgAudioChannelBaseData::Command & at(unsigned long long);
	const AgAudioChannelBaseData::Command & at(unsigned long long);
	AgAudioChannelBaseData::Command & operator[](unsigned long long);
	const AgAudioChannelBaseData::Command & operator[](unsigned long long);
	const AgAudioChannelBaseData::Command * data();
	AgAudioChannelBaseData::Command * data();
	const AgAudioChannelBaseData::Command & front();
	AgAudioChannelBaseData::Command & front();
	const AgAudioChannelBaseData::Command & back();
	AgAudioChannelBaseData::Command & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<enum AgAudioChannelBaseData::Command,std::allocator<enum AgAudioChannelBaseData::Command> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgAudioChannelBaseData::Command *, AgAudioChannelBaseData::Command *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgAudioChannelBaseData::Command *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgAudioChannelBaseData::Command> > >, unsigned long long, const AgAudioChannelBaseData::Command &);
	AgAudioChannelBaseData::Command * _Ufill(AgAudioChannelBaseData::Command *, unsigned long long, const AgAudioChannelBaseData::Command *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgAudioChannelBaseData::Command *, AgAudioChannelBaseData::Command *);
};
class std::vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > > :
	std::_Vector_alloc<std::_Vec_base_types<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgPointer<AgAudioEffect> pointer;
	typedef const AgPointer<AgAudioEffect> const_pointer;
	typedef AgPointer<AgAudioEffect> reference;
	typedef const AgPointer<AgAudioEffect> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > >(std::initializer_list<AgPointer<AgAudioEffect> >, const std::allocator<AgPointer<AgAudioEffect> > &);
	vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > >(std::vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > > &, const std::allocator<AgPointer<AgAudioEffect> > &);
	vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > >(std::vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > > &);
	vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > >(const std::vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > > &, const std::allocator<AgPointer<AgAudioEffect> > &);
	vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > >(const std::vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > > &);
	vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > >(unsigned long long, const AgPointer<AgAudioEffect> &, const std::allocator<AgPointer<AgAudioEffect> > &);
	vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > >(unsigned long long, const AgPointer<AgAudioEffect> &);
	vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > >(unsigned long long);
	vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > >(const std::allocator<AgPointer<AgAudioEffect> > &);
	vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > >();
	void _Construct_n(unsigned long long, const AgPointer<AgAudioEffect> *);
	std::vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > > & operator=(const std::vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > > &);
	std::vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > > & operator=(std::initializer_list<AgPointer<AgAudioEffect> >);
	std::vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > > & operator=(std::vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > > &);
	void _Assign_rv(std::vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > > &);
	void _Assign_rv(std::vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > > &, std::integral_constant<bool,1>);
	void push_back(const AgPointer<AgAudioEffect> &);
	void push_back(AgPointer<AgAudioEffect> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > >, unsigned long long, const AgPointer<AgAudioEffect> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > >, const AgPointer<AgAudioEffect> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > >, std::initializer_list<AgPointer<AgAudioEffect> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > >, AgPointer<AgAudioEffect> &);
	void assign(unsigned long long, const AgPointer<AgAudioEffect> &);
	void assign(std::initializer_list<AgPointer<AgAudioEffect> >);
	~vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgPointer<AgAudioEffect> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgPointer<AgAudioEffect> > get_allocator();
	AgPointer<AgAudioEffect> & at(unsigned long long);
	const AgPointer<AgAudioEffect> & at(unsigned long long);
	AgPointer<AgAudioEffect> & operator[](unsigned long long);
	const AgPointer<AgAudioEffect> & operator[](unsigned long long);
	const AgPointer<AgAudioEffect> * data();
	AgPointer<AgAudioEffect> * data();
	const AgPointer<AgAudioEffect> & front();
	AgPointer<AgAudioEffect> & front();
	const AgPointer<AgAudioEffect> & back();
	AgPointer<AgAudioEffect> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgPointer<AgAudioEffect>,std::allocator<AgPointer<AgAudioEffect> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgPointer<AgAudioEffect> *, AgPointer<AgAudioEffect> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgPointer<AgAudioEffect> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgPointer<AgAudioEffect> > > >, unsigned long long, const AgPointer<AgAudioEffect> &);
	AgPointer<AgAudioEffect> * _Ufill(AgPointer<AgAudioEffect> *, unsigned long long, const AgPointer<AgAudioEffect> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgPointer<AgAudioEffect> *, AgPointer<AgAudioEffect> *);
};