#pragma once

class AgAudioChannel :
	AgReferencedObject
{
public:
	AgAudioChannel(const AgAudioChannel &);
	AgAudioChannel(const long, AgAudioSourceType);
	~AgAudioChannel();
	void play(unsigned long);
	void stop();
	void pause();
	void resume();
	void flushState();
	long getIsPlaying();
	long getIsFinished();
	long getIsPaused();
	void setVolume(const AgVolumeArray &);
	void setVolume(float);
	const float getVolume();
	void setPitch(float);
	void setDistanceSpread(float);
	void setPan(float);
	void setPosition(const AgVector3);
	void setElapsedTime(float);
	const long is3D();
	void set3D(long);
	const AgVector3 & getPosition();
	float getElapsedTime();
	const AgAudioSourceType getType();
	AgAudioChannelData & getInternalData();
	void update(AgAudioManager &);
	void addEffect(AgPointer<AgAudioEffect>);
	AgPointer<AgAudioEffect> getEffect(AgAudioEffectType);
protected:
	float update3DAudio(AgVolumeMatrix &, AgAudioManager &);
	void addAllEffects(AgAudioChannelData *);
	void updateAllEffects(AgAudioChannelData *);
	void removeAllEffects(AgAudioChannelData *);
	AgAudioChannelData * m_internalData; // 0x10
public:
	AgAudioChannel & operator=(const AgAudioChannel &);
};
class AgAudioManager :
	AgSingleton<AgAudioManager>
{
	class ChannelVector;
	enum Loop
	{
		Loop_Forever = 0,
	};
public:
	AgAudioManager();
	void update();
	AgPointer<AgAudioSource> createSource(AgPointer<AgFile>, AgAudioSourceType, const long, const float);
	AgPointer<AgAudioSource> createSource(const AgPath &, AgAudioSourceType, const long, const float);
	AgPointer<AgAudioSource> createRuntimeSource(const unsigned long, const long, const float);
	void destroySource(AgPointer<AgAudioSource>);
	AgPointer<AgAudioChannel> allocateChannel(const long, AgAudioSourceType);
	AgPointer<AgAudioEffect> createEffect(const AgAudioEffectType);
	void setListenerPosition(const AgVector3 &);
	const AgVector3 & getListenerPosition();
	const float getGlobalSampleVolume();
	const float getGlobalStreamVolume();
	void setGlobalSampleVolume(const float);
	void setGlobalStreamVolume(const float);
	std::vector<AgAudioChannel *,std::allocator<AgAudioChannel *> > systemPause();
	void systemResume(const std::vector<AgAudioChannel *,std::allocator<AgAudioChannel *> > &);
	void setDistanceAttenuationCurve(const AgCurve &);
	const AgCurve & getDistanceAttenuationCurve();
	void pauseAll(const AgAudioSourceType);
	void resumeAll(const AgAudioSourceType);
	void stopAll(const AgAudioSourceType);
	float getDriverSampleRate();
	static void setRequestedDriverSampleRate(float);
	static float getRequestedDriverSampleRate();
protected:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
public:
	static AgAudioManager * createSingleton();
	class ChannelDictionary;
protected:
	std::map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > m_channels; // 0x8
	AgMutex m_channelsLock; // 0x18
private:
	void dirtyChannels(const AgAudioSourceType);
	AgVector3 m_listenerPosition; // 0x40
	float m_globalSampleVolume; // 0x4C
	float m_globalStreamVolume; // 0x50
	AgCurve m_attenuationCurve; // 0x58
	static float ms_requestedDriverSampleRate; // 0xFFFFFFFFFFFFFFFF
public:
	virtual ~AgAudioManager();
};
class AgSingleton<AgAudioManager>
{
protected:
	~AgSingleton<AgAudioManager>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgAudioManager & getInstance();
	static long hasInstance();
private:
	static AgAudioManager * createSingleton();
	static void destroySingleton(AgAudioManager *);
	static AgSingleton<AgAudioManager> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgAudioManager>(const AgSingleton<AgAudioManager> &);
	AgSingleton<AgAudioManager>();
	AgSingleton<AgAudioManager> & operator=(const AgSingleton<AgAudioManager> &);
};
class std::vector<AgAudioChannel *,std::allocator<AgAudioChannel *> > :
	std::_Vector_alloc<std::_Vec_base_types<AgAudioChannel *,std::allocator<AgAudioChannel *> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef AgAudioChannel value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgAudioChannel * pointer;
	typedef AgAudioChannel * const_pointer;
	typedef AgAudioChannel * reference;
	typedef AgAudioChannel * const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<AgAudioChannel *,std::allocator<AgAudioChannel *> >(std::initializer_list<AgAudioChannel *>, const std::allocator<AgAudioChannel *> &);
	vector<AgAudioChannel *,std::allocator<AgAudioChannel *> >(std::vector<AgAudioChannel *,std::allocator<AgAudioChannel *> > &, const std::allocator<AgAudioChannel *> &);
	vector<AgAudioChannel *,std::allocator<AgAudioChannel *> >(std::vector<AgAudioChannel *,std::allocator<AgAudioChannel *> > &);
	vector<AgAudioChannel *,std::allocator<AgAudioChannel *> >(const std::vector<AgAudioChannel *,std::allocator<AgAudioChannel *> > &, const std::allocator<AgAudioChannel *> &);
	vector<AgAudioChannel *,std::allocator<AgAudioChannel *> >(const std::vector<AgAudioChannel *,std::allocator<AgAudioChannel *> > &);
	vector<AgAudioChannel *,std::allocator<AgAudioChannel *> >(unsigned long long, AgAudioChannel * &, const std::allocator<AgAudioChannel *> &);
	vector<AgAudioChannel *,std::allocator<AgAudioChannel *> >(unsigned long long, AgAudioChannel * &);
	vector<AgAudioChannel *,std::allocator<AgAudioChannel *> >(unsigned long long);
	vector<AgAudioChannel *,std::allocator<AgAudioChannel *> >(const std::allocator<AgAudioChannel *> &);
	vector<AgAudioChannel *,std::allocator<AgAudioChannel *> >();
	void _Construct_n(unsigned long long, AgAudioChannel * *);
	std::vector<AgAudioChannel *,std::allocator<AgAudioChannel *> > & operator=(const std::vector<AgAudioChannel *,std::allocator<AgAudioChannel *> > &);
	std::vector<AgAudioChannel *,std::allocator<AgAudioChannel *> > & operator=(std::initializer_list<AgAudioChannel *>);
	std::vector<AgAudioChannel *,std::allocator<AgAudioChannel *> > & operator=(std::vector<AgAudioChannel *,std::allocator<AgAudioChannel *> > &);
	void _Assign_rv(std::vector<AgAudioChannel *,std::allocator<AgAudioChannel *> > &);
	void _Assign_rv(std::vector<AgAudioChannel *,std::allocator<AgAudioChannel *> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<AgAudioChannel *,std::allocator<AgAudioChannel *> > &, std::integral_constant<bool,1>);
	void push_back(AgAudioChannel * &);
	void push_back(AgAudioChannel * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > >, unsigned long long, AgAudioChannel * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > >, AgAudioChannel * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > >, std::initializer_list<AgAudioChannel *>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > >, AgAudioChannel * &);
	void assign(unsigned long long, AgAudioChannel * &);
	void assign(std::initializer_list<AgAudioChannel *>);
	~vector<AgAudioChannel *,std::allocator<AgAudioChannel *> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, AgAudioChannel * &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<AgAudioChannel *> get_allocator();
	AgAudioChannel * & at(unsigned long long);
	AgAudioChannel * & at(unsigned long long);
	AgAudioChannel * & operator[](unsigned long long);
	AgAudioChannel * & operator[](unsigned long long);
	AgAudioChannel * * data();
	AgAudioChannel * * data();
	AgAudioChannel * & front();
	AgAudioChannel * & front();
	AgAudioChannel * & back();
	AgAudioChannel * & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<AgAudioChannel *,std::allocator<AgAudioChannel *> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgAudioChannel * *, AgAudioChannel * *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(AgAudioChannel * *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AgAudioChannel *> > >, unsigned long long, AgAudioChannel * &);
	AgAudioChannel * * _Ufill(AgAudioChannel * *, unsigned long long, AgAudioChannel * *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgAudioChannel * *, AgAudioChannel * *);
};
class AgPointer<AgAudioSource>
{
public:
	AgPointer<AgAudioSource>(const AgReference<AgAudioSource> &);
	AgPointer<AgAudioSource>(AgPointer<AgAudioSource> &);
	AgPointer<AgAudioSource>(const AgPointer<AgAudioSource> &);
	AgPointer<AgAudioSource>(AgAudioSource *);
	AgPointer<AgAudioSource>();
	~AgPointer<AgAudioSource>();
	AgPointer<AgAudioSource> & operator=(AgPointer<AgAudioSource> &);
	AgPointer<AgAudioSource> & operator=(const AgReference<AgAudioSource> &);
	AgPointer<AgAudioSource> & operator=(const AgPointer<AgAudioSource> &);
	AgPointer<AgAudioSource> & operator=(AgAudioSource *);
	bool operator<(const AgPointer<AgAudioSource> &);
	AgAudioSource * operator->();
	AgAudioSource & operator*();
	bool operator==(const AgPointer<AgAudioSource> &);
	bool operator==(AgAudioSource *);
	bool operator!=(const AgPointer<AgAudioSource> &);
	bool operator!=(AgAudioSource *);
	AgAudioSource * getObject();
	void swap(AgPointer<AgAudioSource> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgAudioSource * m_ptr; // 0x8
};
float AgAudioManager::getDriverSampleRate(); // 0x14065E0E0
class std::map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > :
	std::_Tree<std::_Tmap_traits<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > >,0> >
{
	class _Myt;
	class _Mybase;
	typedef AgAudioChannel key_type;
	class mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > pointer;
	typedef const std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > const_pointer;
	typedef std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > reference;
	typedef const std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > >(std::initializer_list<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > >, const std::less<AgAudioChannel *> &, const std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > &);
	map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > >(std::initializer_list<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > >, const std::less<AgAudioChannel *> &);
	map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > >(std::initializer_list<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > >);
	map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > >(std::map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > &, const std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > &);
	map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > >(std::map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > &);
	map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > >(const std::less<AgAudioChannel *> &, const std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > &);
	map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > >(const std::less<AgAudioChannel *> &);
	map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > >(const std::map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > &, const std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > &);
	map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > >(const std::map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > &);
	map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > >(const std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > &);
	map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > >();
	std::map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > & operator=(std::initializer_list<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > >);
	std::map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > & operator=(std::map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > &);
	std::map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > & operator=(const std::map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > &);
	AgPointer<AgAudioChannel> & operator[](AgAudioChannel * &);
	AgPointer<AgAudioChannel> & operator[](AgAudioChannel * &);
	void swap(std::map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > > &);
	const AgPointer<AgAudioChannel> & at(AgAudioChannel * &);
	AgPointer<AgAudioChannel> & at(AgAudioChannel * &);
	~map<AgAudioChannel *,AgPointer<AgAudioChannel>,std::less<AgAudioChannel *>,std::allocator<std::pair<AgAudioChannel * const,AgPointer<AgAudioChannel> > > >();
};