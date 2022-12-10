#pragma once

struct AgSuspendingEvent
{
};
struct AgResumingEvent
{
};
class std::map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > > :
	std::_Tree<std::_Tmap_traits<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > >,0> >
{
	class _Myt;
	class _Mybase;
	typedef unsigned long key_type;
	class mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<unsigned int const ,AgPointer<AgController> > pointer;
	typedef const std::pair<unsigned int const ,AgPointer<AgController> > const_pointer;
	typedef std::pair<unsigned int const ,AgPointer<AgController> > reference;
	typedef const std::pair<unsigned int const ,AgPointer<AgController> > const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > >(std::initializer_list<std::pair<unsigned int const ,AgPointer<AgController> > >, const std::less<unsigned int> &, const std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > &);
	map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > >(std::initializer_list<std::pair<unsigned int const ,AgPointer<AgController> > >, const std::less<unsigned int> &);
	map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > >(std::initializer_list<std::pair<unsigned int const ,AgPointer<AgController> > >);
	map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > >(std::map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > > &, const std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > &);
	map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > >(std::map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > > &);
	map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > >(const std::less<unsigned int> &, const std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > &);
	map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > >(const std::less<unsigned int> &);
	map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > >(const std::map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > > &, const std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > &);
	map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > >(const std::map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > > &);
	map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > >(const std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > &);
	map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > >();
	std::map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > > & operator=(std::initializer_list<std::pair<unsigned int const ,AgPointer<AgController> > >);
	std::map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > > & operator=(std::map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > > &);
	std::map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > > & operator=(const std::map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > > &);
	AgPointer<AgController> & operator[](const unsigned long &);
	AgPointer<AgController> & operator[](unsigned long &);
	void swap(std::map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > > &);
	const AgPointer<AgController> & at(const unsigned long &);
	AgPointer<AgController> & at(const unsigned long &);
	~map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > >();
};
class std::vector<unsigned int,std::allocator<unsigned int> > :
	std::_Vector_alloc<std::_Vec_base_types<unsigned int,std::allocator<unsigned int> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef unsigned long value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef unsigned long *pointer;
	typedef const unsigned long const_pointer;
	typedef unsigned long reference;
	typedef const unsigned long const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<unsigned int,std::allocator<unsigned int> >(std::initializer_list<unsigned int>, const std::allocator<unsigned int> &);
	vector<unsigned int,std::allocator<unsigned int> >(std::vector<unsigned int,std::allocator<unsigned int> > &, const std::allocator<unsigned int> &);
	vector<unsigned int,std::allocator<unsigned int> >(std::vector<unsigned int,std::allocator<unsigned int> > &);
	vector<unsigned int,std::allocator<unsigned int> >(const std::vector<unsigned int,std::allocator<unsigned int> > &, const std::allocator<unsigned int> &);
	vector<unsigned int,std::allocator<unsigned int> >(const std::vector<unsigned int,std::allocator<unsigned int> > &);
	vector<unsigned int,std::allocator<unsigned int> >(unsigned long long, const unsigned long &, const std::allocator<unsigned int> &);
	vector<unsigned int,std::allocator<unsigned int> >(unsigned long long, const unsigned long &);
	vector<unsigned int,std::allocator<unsigned int> >(unsigned long long);
	vector<unsigned int,std::allocator<unsigned int> >(const std::allocator<unsigned int> &);
	vector<unsigned int,std::allocator<unsigned int> >();
	void _Construct_n(unsigned long long, const unsigned long *);
	std::vector<unsigned int,std::allocator<unsigned int> > & operator=(const std::vector<unsigned int,std::allocator<unsigned int> > &);
	std::vector<unsigned int,std::allocator<unsigned int> > & operator=(std::initializer_list<unsigned int>);
	std::vector<unsigned int,std::allocator<unsigned int> > & operator=(std::vector<unsigned int,std::allocator<unsigned int> > &);
	void _Assign_rv(std::vector<unsigned int,std::allocator<unsigned int> > &);
	void _Assign_rv(std::vector<unsigned int,std::allocator<unsigned int> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<unsigned int,std::allocator<unsigned int> > &, std::integral_constant<bool,1>);
	void push_back(const unsigned long &);
	void push_back(unsigned long &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > >, unsigned long long, const unsigned long &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > >, const unsigned long &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > >, std::initializer_list<unsigned int>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > >, unsigned long &);
	void assign(unsigned long long, const unsigned long &);
	void assign(std::initializer_list<unsigned int>);
	~vector<unsigned int,std::allocator<unsigned int> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const unsigned long &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<unsigned int> get_allocator();
	unsigned long & at(unsigned long long);
	const unsigned long & at(unsigned long long);
	unsigned long & operator[](unsigned long long);
	const unsigned long & operator[](unsigned long long);
	const unsigned long * data();
	unsigned long * data();
	const unsigned long & front();
	unsigned long & front();
	const unsigned long & back();
	unsigned long & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<unsigned int,std::allocator<unsigned int> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(unsigned long *, unsigned long *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const unsigned long *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned int> > >, unsigned long long, const unsigned long &);
	unsigned long * _Ufill(unsigned long *, unsigned long long, const unsigned long *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(unsigned long *, unsigned long *);
};
struct AgControllerEvent
{
	AgPointer<AgController> controller; // 0x0
	const AgPointer<AgController> & operator const class AgPointer<class AgController> &();
	AgControllerEvent(AgControllerEvent &);
	AgControllerEvent(const AgControllerEvent &);
	AgControllerEvent();
	~AgControllerEvent();
	AgControllerEvent & operator=(AgControllerEvent &);
	AgControllerEvent & operator=(const AgControllerEvent &);
};
struct AgControllerAddedEvent :
	AgControllerEvent
{
	long long pairedId; // 0x10
	AgControllerAddedEvent(AgControllerAddedEvent &);
	AgControllerAddedEvent(const AgControllerAddedEvent &);
	AgControllerAddedEvent();
	~AgControllerAddedEvent();
	AgControllerAddedEvent & operator=(AgControllerAddedEvent &);
	AgControllerAddedEvent & operator=(const AgControllerAddedEvent &);
};
struct AgControllerRemovedEvent :
	AgControllerEvent
{
	long long pairedId; // 0x10
	AgControllerRemovedEvent(AgControllerRemovedEvent &);
	AgControllerRemovedEvent(const AgControllerRemovedEvent &);
	AgControllerRemovedEvent();
	~AgControllerRemovedEvent();
	AgControllerRemovedEvent & operator=(AgControllerRemovedEvent &);
	AgControllerRemovedEvent & operator=(const AgControllerRemovedEvent &);
};
struct AgControllerPairingChangedEvent :
	AgControllerEvent
{
	AgPointer<AgUser> newUser; // 0x10
	AgPointer<AgUser> oldUser; // 0x20
	AgControllerPairingChangedEvent(AgControllerPairingChangedEvent &);
	AgControllerPairingChangedEvent(const AgControllerPairingChangedEvent &);
	AgControllerPairingChangedEvent();
	~AgControllerPairingChangedEvent();
	AgControllerPairingChangedEvent & operator=(AgControllerPairingChangedEvent &);
	AgControllerPairingChangedEvent & operator=(const AgControllerPairingChangedEvent &);
};
struct AgTypingInputEvent
{
	AgString string; // 0x0
	AgTypingInputEvent(AgTypingInputEvent &);
	AgTypingInputEvent(const AgTypingInputEvent &);
	AgTypingInputEvent();
	~AgTypingInputEvent();
	AgTypingInputEvent & operator=(AgTypingInputEvent &);
	AgTypingInputEvent & operator=(const AgTypingInputEvent &);
};
struct AgEditedInputEvent
{
	AgString string; // 0x0
	long start; // 0x10
	long length; // 0x14
	AgEditedInputEvent(AgEditedInputEvent &);
	AgEditedInputEvent(const AgEditedInputEvent &);
	AgEditedInputEvent();
	~AgEditedInputEvent();
	AgEditedInputEvent & operator=(AgEditedInputEvent &);
	AgEditedInputEvent & operator=(const AgEditedInputEvent &);
};
class AgInputManager :
	AgSingleton<AgInputManager>
{
public:
	AgInputManager();
	class NameLookupMap;
	class ControllerUserPairingMap;
	class UserControllerPairingMap;
	AgControllerComponentIndex getComponentIndexByName(AgStringRef);
	AgPointer<AgController> getController(unsigned long);
	unsigned long getControllers(std::vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > &);
	unsigned long getControllersByType(AgControllerType, std::vector<AgPointer<AgController>,std::allocator<AgPointer<AgController> > > &);
	AgPointer<AgController> getFirstController(AgControllerType);
	unsigned long getPairedControllerIds(long long, std::vector<unsigned int,std::allocator<unsigned int> > &);
	long long getPairedUserId(unsigned long);
	AgPointer<AgController> getLastUsedController();
	AgPointer<AgController> getControllerByIndex(long);
	void addKeyToLastUsedIgnores(AgKeyboardButton);
	long isKeyLastUsedIgnored(AgKeyboardButton);
	void clearControls();
	unsigned long long controllerHasBeenUsed();
protected:
	unsigned long getUniqueControllerId();
private:
	AgMutex m_mutex; // 0x8
	std::map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > > m_componentLookup; // 0x30
	unsigned long m_nextControllerId; // 0x40
	std::map<unsigned int,AgPointer<AgController>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,AgPointer<AgController> > > > m_controllers; // 0x48
	std::map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > > m_controllerUserPairings; // 0x58
	std::multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > > m_userControllerPairings; // 0x68
	unsigned long long m_lastUsedTick; // 0x78
	std::vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> > m_ignoredLastUsed; // 0x80
	long m_startingTextInput; // 0x98
	long m_stoppingTextInput; // 0x9C
public:
	static AgInputManager * createSingleton();
	void update();
	void postUpdate();
	AgString getPhysicalKeyName(unsigned short);
	long getRealKey(long);
protected:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
	void onSuspending(const AgSuspendingEvent &);
	void onResuming(const AgResumingEvent &);
public:
	AgAsyncEventDispatcher<AgControllerAddedEvent> ControllerAdded; // 0xA0
	AgAsyncEventDispatcher<AgControllerRemovedEvent> ControllerRemoved; // 0x120
	AgAsyncEventDispatcher<AgControllerPairingChangedEvent> ControllerPairingChanged; // 0x1A0
	AgAsyncEventDispatcher<AgTypingInputEvent> TypedText; // 0x220
	AgAsyncEventDispatcher<AgEditedInputEvent> EditedText; // 0x2A0
protected:
	void addController(AgPointer<AgController>, long long);
	void addController(AgPointer<AgController>);
	void removeController(AgPointer<AgController>);
	void updateControllerPairing(AgPointer<AgController>, AgPointer<AgUser>, AgPointer<AgUser>);
public:
	void replayInputs();
	void recordInputs();
	void recordInputsLive(AgString);
	void stopPlayer();
	void saveInputs(AgPointer<AgStream>);
	void loadInputs(AgPointer<AgStream>);
	void configureScreenshots(AgString, AgGamepadButton);
	void disableScreenshots();
	void startTextInput();
	void stopTextInput();
	void updateTextInput();
	AgTime getInputFileTimestamp();
	enum PlayerState
	{
		AgPlayerState_Disabled = 0,
		AgPlayerState_Recording = 1,
		AgPlayerState_Replaying = 2,
	};
	AgInputManager::PlayerState getPlayerState();
	struct InputEntry;
private:
	AgInputManager::InputEntry m_lastRecorded; // 0x320
	AgInputManager::InputEntry m_nextRecorded; // 0x370
	AgTime m_inputFileTimestamp; // 0x3C0
	AgPointer<AgMemoryStream> m_recordedInputs; // 0x3D0
	AgInputManager::PlayerState m_playerState; // 0x3E0
	unsigned long m_replayingPos; // 0x3E4
	AgString m_liveSavingPath; // 0x3E8
	long m_liveSavingEnabled; // 0x3F8
	AgString m_screenshotDirectory; // 0x400
	AgGamepadButton m_screenshotGamepadButton; // 0x410
	void saveData(unsigned char *, unsigned long);
public:
	virtual ~AgInputManager();
};
class AgSingleton<AgInputManager>
{
protected:
	~AgSingleton<AgInputManager>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgInputManager & getInstance();
	static long hasInstance();
private:
	static AgInputManager * createSingleton();
	static void destroySingleton(AgInputManager *);
	static AgSingleton<AgInputManager> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgInputManager>(const AgSingleton<AgInputManager> &);
	AgSingleton<AgInputManager>();
	AgSingleton<AgInputManager> & operator=(const AgSingleton<AgInputManager> &);
};
class std::map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > > :
	std::_Tree<std::_Tmap_traits<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> >,0> >
{
	class _Myt;
	class _Mybase;
	class key_type;
	struct mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<AgStringKey const ,AgControllerComponentIndex> pointer;
	typedef const std::pair<AgStringKey const ,AgControllerComponentIndex> const_pointer;
	typedef std::pair<AgStringKey const ,AgControllerComponentIndex> reference;
	typedef const std::pair<AgStringKey const ,AgControllerComponentIndex> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > >(std::initializer_list<std::pair<AgStringKey const ,AgControllerComponentIndex> >, const std::less<AgStringKey> &, const std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > &);
	map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > >(std::initializer_list<std::pair<AgStringKey const ,AgControllerComponentIndex> >, const std::less<AgStringKey> &);
	map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > >(std::initializer_list<std::pair<AgStringKey const ,AgControllerComponentIndex> >);
	map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > >(std::map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > > &, const std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > &);
	map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > >(std::map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > > &);
	map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > >(const std::less<AgStringKey> &, const std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > &);
	map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > >(const std::less<AgStringKey> &);
	map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > >(const std::map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > > &, const std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > &);
	map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > >(const std::map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > > &);
	map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > >(const std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > &);
	map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > >();
	std::map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > > & operator=(std::initializer_list<std::pair<AgStringKey const ,AgControllerComponentIndex> >);
	std::map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > > & operator=(std::map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > > &);
	std::map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > > & operator=(const std::map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > > &);
	AgControllerComponentIndex & operator[](const AgStringKey &);
	AgControllerComponentIndex & operator[](AgStringKey &);
	void swap(std::map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > > &);
	const AgControllerComponentIndex & at(const AgStringKey &);
	AgControllerComponentIndex & at(const AgStringKey &);
	~map<AgStringKey,AgControllerComponentIndex,std::less<AgStringKey>,std::allocator<std::pair<AgStringKey const ,AgControllerComponentIndex> > >();
};
class std::map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > > :
	std::_Tree<std::_Tmap_traits<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> >,0> >
{
	class _Myt;
	class _Mybase;
	typedef unsigned long key_type;
	typedef long long mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<unsigned int const ,__int64> pointer;
	typedef const std::pair<unsigned int const ,__int64> const_pointer;
	typedef std::pair<unsigned int const ,__int64> reference;
	typedef const std::pair<unsigned int const ,__int64> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > >(std::initializer_list<std::pair<unsigned int const ,__int64> >, const std::less<unsigned int> &, const std::allocator<std::pair<unsigned int const ,__int64> > &);
	map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > >(std::initializer_list<std::pair<unsigned int const ,__int64> >, const std::less<unsigned int> &);
	map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > >(std::initializer_list<std::pair<unsigned int const ,__int64> >);
	map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > >(std::map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > > &, const std::allocator<std::pair<unsigned int const ,__int64> > &);
	map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > >(std::map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > > &);
	map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > >(const std::less<unsigned int> &, const std::allocator<std::pair<unsigned int const ,__int64> > &);
	map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > >(const std::less<unsigned int> &);
	map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > >(const std::map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > > &, const std::allocator<std::pair<unsigned int const ,__int64> > &);
	map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > >(const std::map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > > &);
	map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > >(const std::allocator<std::pair<unsigned int const ,__int64> > &);
	map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > >();
	std::map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > > & operator=(std::initializer_list<std::pair<unsigned int const ,__int64> >);
	std::map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > > & operator=(std::map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > > &);
	std::map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > > & operator=(const std::map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > > &);
	long long & operator[](const unsigned long &);
	long long & operator[](unsigned long &);
	void swap(std::map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > > &);
	const long long & at(const unsigned long &);
	long long & at(const unsigned long &);
	~map<unsigned int,__int64,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,__int64> > >();
};
class std::multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > > :
	std::_Tree<std::_Tmap_traits<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> >,1> >
{
	class _Myt;
	class _Mybase;
	typedef long long key_type;
	typedef unsigned long mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<__int64 const ,unsigned int> pointer;
	typedef const std::pair<__int64 const ,unsigned int> const_pointer;
	typedef std::pair<__int64 const ,unsigned int> reference;
	typedef const std::pair<__int64 const ,unsigned int> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
public:
	multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > >(std::initializer_list<std::pair<__int64 const ,unsigned int> >, const std::less<__int64> &, const std::allocator<std::pair<__int64 const ,unsigned int> > &);
	multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > >(std::initializer_list<std::pair<__int64 const ,unsigned int> >, const std::less<__int64> &);
	multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > >(std::initializer_list<std::pair<__int64 const ,unsigned int> >);
	multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > >(std::multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > > &, const std::allocator<std::pair<__int64 const ,unsigned int> > &);
	multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > >(std::multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > > &);
	multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > >(const std::less<__int64> &, const std::allocator<std::pair<__int64 const ,unsigned int> > &);
	multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > >(const std::less<__int64> &);
	multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > >(const std::multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > > &, const std::allocator<std::pair<__int64 const ,unsigned int> > &);
	multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > >(const std::multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > > &);
	multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > >(const std::allocator<std::pair<__int64 const ,unsigned int> > &);
	multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > >();
	std::multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > > & operator=(std::initializer_list<std::pair<__int64 const ,unsigned int> >);
	std::multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > > & operator=(std::multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > > &);
	std::multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > > & operator=(const std::multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > > &);
	void swap(std::multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > > &);
	~multimap<__int64,unsigned int,std::less<__int64>,std::allocator<std::pair<__int64 const ,unsigned int> > >();
};
class std::vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> > :
	std::_Vector_alloc<std::_Vec_base_types<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	enum value_type
	{
		AgKeyboardButton_Termination = 0,
		AgKeyboardButton_Backspace = 8,
		AgKeyboardButton_Tab = 9,
		AgKeyboardButton_Newline = 13,
		AgKeyboardButton_Capital = 20,
		AgKeyboardButton_Escape = 27,
		AgKeyboardButton_Space = 32,
		AgKeyboardButton_PageUp = 33,
		AgKeyboardButton_PageDown = 34,
		AgKeyboardButton_End = 35,
		AgKeyboardButton_Home = 36,
		AgKeyboardButton_ArrowLeft = 37,
		AgKeyboardButton_ArrowUp = 38,
		AgKeyboardButton_ArrowRight = 39,
		AgKeyboardButton_ArrowDown = 40,
		AgKeyboardButton_Insert = 45,
		AgKeyboardButton_Delete = 46,
		AgKeyboardButton_0 = 48,
		AgKeyboardButton_1 = 49,
		AgKeyboardButton_2 = 50,
		AgKeyboardButton_3 = 51,
		AgKeyboardButton_4 = 52,
		AgKeyboardButton_5 = 53,
		AgKeyboardButton_6 = 54,
		AgKeyboardButton_7 = 55,
		AgKeyboardButton_8 = 56,
		AgKeyboardButton_9 = 57,
		AgKeyboardButton_A = 65,
		AgKeyboardButton_B = 66,
		AgKeyboardButton_C = 67,
		AgKeyboardButton_D = 68,
		AgKeyboardButton_E = 69,
		AgKeyboardButton_F = 70,
		AgKeyboardButton_G = 71,
		AgKeyboardButton_H = 72,
		AgKeyboardButton_I = 73,
		AgKeyboardButton_J = 74,
		AgKeyboardButton_K = 75,
		AgKeyboardButton_L = 76,
		AgKeyboardButton_M = 77,
		AgKeyboardButton_N = 78,
		AgKeyboardButton_O = 79,
		AgKeyboardButton_P = 80,
		AgKeyboardButton_Q = 81,
		AgKeyboardButton_R = 82,
		AgKeyboardButton_S = 83,
		AgKeyboardButton_T = 84,
		AgKeyboardButton_U = 85,
		AgKeyboardButton_V = 86,
		AgKeyboardButton_W = 87,
		AgKeyboardButton_X = 88,
		AgKeyboardButton_Y = 89,
		AgKeyboardButton_Z = 90,
		AgKeyboardButton_Numpad_0 = 96,
		AgKeyboardButton_Numpad_1 = 97,
		AgKeyboardButton_Numpad_2 = 98,
		AgKeyboardButton_Numpad_3 = 99,
		AgKeyboardButton_Numpad_4 = 100,
		AgKeyboardButton_Numpad_5 = 101,
		AgKeyboardButton_Numpad_6 = 102,
		AgKeyboardButton_Numpad_7 = 103,
		AgKeyboardButton_Numpad_8 = 104,
		AgKeyboardButton_Numpad_9 = 105,
		AgKeyboardButton_Numpad_Multiply = 106,
		AgKeyboardButton_Numpad_Add = 107,
		AgKeyboardButton_Numpad_Decimal = 108,
		AgKeyboardButton_Numpad_Subtract = 109,
		AgKeyboardButton_Numpad_Divide = 111,
		AgKeyboardButton_F1 = 112,
		AgKeyboardButton_F2 = 113,
		AgKeyboardButton_F3 = 114,
		AgKeyboardButton_F4 = 115,
		AgKeyboardButton_F5 = 116,
		AgKeyboardButton_F6 = 117,
		AgKeyboardButton_F7 = 118,
		AgKeyboardButton_F8 = 119,
		AgKeyboardButton_F9 = 120,
		AgKeyboardButton_F10 = 121,
		AgKeyboardButton_F11 = 122,
		AgKeyboardButton_F12 = 123,
		AgKeyboardButton_F13 = 124,
		AgKeyboardButton_F14 = 125,
		AgKeyboardButton_F15 = 126,
		AgKeyboardButton_F16 = 127,
		AgKeyboardButton_F17 = 128,
		AgKeyboardButton_F18 = 129,
		AgKeyboardButton_F19 = 130,
		AgKeyboardButton_F20 = 131,
		AgKeyboardButton_F21 = 132,
		AgKeyboardButton_F22 = 133,
		AgKeyboardButton_F23 = 134,
		AgKeyboardButton_F24 = 135,
		AgKeyboardButton_Equal = 136,
		AgKeyboardButton_Subtract = 137,
		AgKeyboardButton_Numpad_Enter = 138,
		AgKeyboardButton_NumLock = 144,
		AgKeyboardButton_Scroll = 145,
		AgKeyboardButton_ShiftLeft = 160,
		AgKeyboardButton_ShiftRight = 161,
		AgKeyboardButton_ControlLeft = 162,
		AgKeyboardButton_ControlRight = 163,
		AgKeyboardButton_AltLeft = 164,
		AgKeyboardButton_AltRight = 165,
		AgKeyboardButton_SuperLeft = 166,
		AgKeyboardButton_SuperRight = 167,
		AgKeyboardButton_Menu = 168,
		AgKeyboardButton_Semicolon = 186,
		AgKeyboardButton_Comma = 188,
		AgKeyboardButton_Period = 190,
		AgKeyboardButton_Slash = 191,
		AgKeyboardButton_AccentGrave = 192,
		AgKeyboardButton_BracketLeft = 219,
		AgKeyboardButton_Backslash = 220,
		AgKeyboardButton_BracketRight = 221,
		AgKeyboardButton_Apostrophe = 222,
		AgKeyboardButton_Count = 256,
	};
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef AgKeyboardButton pointer;
	typedef const AgKeyboardButton const_pointer;
	typedef AgKeyboardButton reference;
	typedef const AgKeyboardButton const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> >(std::initializer_list<enum AgKeyboardButton>, const std::allocator<enum AgKeyboardButton> &);
	vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> >(std::vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> > &, const std::allocator<enum AgKeyboardButton> &);
	vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> >(std::vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> > &);
	vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> >(const std::vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> > &, const std::allocator<enum AgKeyboardButton> &);
	vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> >(const std::vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> > &);
	vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> >(unsigned long long, const AgKeyboardButton &, const std::allocator<enum AgKeyboardButton> &);
	vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> >(unsigned long long, const AgKeyboardButton &);
	vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> >(unsigned long long);
	vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> >(const std::allocator<enum AgKeyboardButton> &);
	vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> >();
	void _Construct_n(unsigned long long, const AgKeyboardButton *);
	std::vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> > & operator=(const std::vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> > &);
	std::vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> > & operator=(std::initializer_list<enum AgKeyboardButton>);
	std::vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> > & operator=(std::vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> > &);
	void _Assign_rv(std::vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> > &);
	void _Assign_rv(std::vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> > &, std::integral_constant<bool,1>);
	void push_back(const AgKeyboardButton &);
	void push_back(AgKeyboardButton &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > >, unsigned long long, const AgKeyboardButton &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > >, const AgKeyboardButton &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > >, std::initializer_list<enum AgKeyboardButton>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > >, AgKeyboardButton &);
	void assign(unsigned long long, const AgKeyboardButton &);
	void assign(std::initializer_list<enum AgKeyboardButton>);
	~vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const AgKeyboardButton &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<enum AgKeyboardButton> get_allocator();
	AgKeyboardButton & at(unsigned long long);
	const AgKeyboardButton & at(unsigned long long);
	AgKeyboardButton & operator[](unsigned long long);
	const AgKeyboardButton & operator[](unsigned long long);
	const AgKeyboardButton * data();
	AgKeyboardButton * data();
	const AgKeyboardButton & front();
	AgKeyboardButton & front();
	const AgKeyboardButton & back();
	AgKeyboardButton & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<enum AgKeyboardButton,std::allocator<enum AgKeyboardButton> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(AgKeyboardButton *, AgKeyboardButton *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const AgKeyboardButton *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum AgKeyboardButton> > >, unsigned long long, const AgKeyboardButton &);
	AgKeyboardButton * _Ufill(AgKeyboardButton *, unsigned long long, const AgKeyboardButton *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(AgKeyboardButton *, AgKeyboardButton *);
};
AgString AgInputManager::getPhysicalKeyName(unsigned short __formal); // 0x140653DA0
long AgInputManager::getRealKey(long button); // 0x140319C80
void std::_Wrap_alloc<std::allocator<std::_List_node<AgControllerComponent * __ptr64,void * __ptr64> > >::destroy<std::_List_node<AgControllerComponent * __ptr64,void * __ptr64> * __ptr64>(std::_List_node<AgControllerComponent *,void *> * * _Ptr); // 0x14002E7C0
class AgAsyncEventDispatcher<AgControllerAddedEvent> :
	AgEventDispatcherBase<AgControllerAddedEvent>
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgControllerAddedEvent &);
	void invoke(const AgControllerAddedEvent &);
	void operator()(AgControllerAddedEvent &);
	void operator()(const AgControllerAddedEvent &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgControllerAddedEvent,std::allocator<AgControllerAddedEvent> > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgControllerAddedEvent>();
	~AgAsyncEventDispatcher<AgControllerAddedEvent>();
};
class AgAsyncEventDispatcher<AgControllerRemovedEvent> :
	AgEventDispatcherBase<AgControllerRemovedEvent>
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgControllerRemovedEvent &);
	void invoke(const AgControllerRemovedEvent &);
	void operator()(AgControllerRemovedEvent &);
	void operator()(const AgControllerRemovedEvent &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgControllerRemovedEvent,std::allocator<AgControllerRemovedEvent> > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgControllerRemovedEvent>();
	~AgAsyncEventDispatcher<AgControllerRemovedEvent>();
};
class AgAsyncEventDispatcher<AgControllerPairingChangedEvent> :
	AgEventDispatcherBase<AgControllerPairingChangedEvent>
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgControllerPairingChangedEvent &);
	void invoke(const AgControllerPairingChangedEvent &);
	void operator()(AgControllerPairingChangedEvent &);
	void operator()(const AgControllerPairingChangedEvent &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgControllerPairingChangedEvent,std::allocator<AgControllerPairingChangedEvent> > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgControllerPairingChangedEvent>();
	~AgAsyncEventDispatcher<AgControllerPairingChangedEvent>();
};
class AgAsyncEventDispatcher<AgTypingInputEvent> :
	AgEventDispatcherBase<AgTypingInputEvent>
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgTypingInputEvent &);
	void invoke(const AgTypingInputEvent &);
	void operator()(AgTypingInputEvent &);
	void operator()(const AgTypingInputEvent &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgTypingInputEvent,std::allocator<AgTypingInputEvent> > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgTypingInputEvent>();
	~AgAsyncEventDispatcher<AgTypingInputEvent>();
};
class AgAsyncEventDispatcher<AgEditedInputEvent> :
	AgEventDispatcherBase<AgEditedInputEvent>
{
	class EventQueue;
public:
	void reserve(unsigned long);
	void run();
	void invoke(AgEditedInputEvent &);
	void invoke(const AgEditedInputEvent &);
	void operator()(AgEditedInputEvent &);
	void operator()(const AgEditedInputEvent &);
private:
	AgMutex m_queueMutex; // 0x40
	std::vector<AgEditedInputEvent,std::allocator<AgEditedInputEvent> > m_eventQueue; // 0x68
public:
	AgAsyncEventDispatcher<AgEditedInputEvent>();
	~AgAsyncEventDispatcher<AgEditedInputEvent>();
};
struct AgInputManager::InputEntry
{
	InputEntry(AgInputManager::InputEntry &);
	InputEntry(const AgInputManager::InputEntry &);
	InputEntry();
	double m_timeOccured; // 0x0
	AgControllerButtonComponent m_state; // 0x8
	bool operator==(const AgInputManager::InputEntry &);
	void serialize(AgPointer<AgStream>);
	long deserialize(AgPointer<AgStream>);
	~InputEntry();
	AgInputManager::InputEntry & operator=(AgInputManager::InputEntry &);
	AgInputManager::InputEntry & operator=(const AgInputManager::InputEntry &);
};
class AgPointer<AgMemoryStream>
{
public:
	AgPointer<AgMemoryStream>(const AgReference<AgMemoryStream> &);
	AgPointer<AgMemoryStream>(AgPointer<AgMemoryStream> &);
	AgPointer<AgMemoryStream>(const AgPointer<AgMemoryStream> &);
	AgPointer<AgMemoryStream>(AgMemoryStream *);
	AgPointer<AgMemoryStream>();
	~AgPointer<AgMemoryStream>();
	AgPointer<AgMemoryStream> & operator=(AgPointer<AgMemoryStream> &);
	AgPointer<AgMemoryStream> & operator=(const AgReference<AgMemoryStream> &);
	AgPointer<AgMemoryStream> & operator=(const AgPointer<AgMemoryStream> &);
	AgPointer<AgMemoryStream> & operator=(AgMemoryStream *);
	bool operator<(const AgPointer<AgMemoryStream> &);
	AgMemoryStream * operator->();
	AgMemoryStream & operator*();
	bool operator==(const AgPointer<AgMemoryStream> &);
	bool operator==(AgMemoryStream *);
	bool operator!=(const AgPointer<AgMemoryStream> &);
	bool operator!=(AgMemoryStream *);
	AgMemoryStream * getObject();
	void swap(AgPointer<AgMemoryStream> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgMemoryStream * m_ptr; // 0x8
};
class AgPointer<AgMemoryStream>
{
public:
	AgPointer<AgMemoryStream>(const AgReference<AgMemoryStream> &);
	AgPointer<AgMemoryStream>(AgPointer<AgMemoryStream> &);
	AgPointer<AgMemoryStream>(const AgPointer<AgMemoryStream> &);
	AgPointer<AgMemoryStream>(AgMemoryStream *);
	AgPointer<AgMemoryStream>();
	~AgPointer<AgMemoryStream>();
	AgPointer<AgMemoryStream> & operator=(AgPointer<AgMemoryStream> &);
	AgPointer<AgMemoryStream> & operator=(const AgReference<AgMemoryStream> &);
	AgPointer<AgMemoryStream> & operator=(const AgPointer<AgMemoryStream> &);
	AgPointer<AgMemoryStream> & operator=(AgMemoryStream *);
	bool operator<(const AgPointer<AgMemoryStream> &);
	AgMemoryStream * operator->();
	AgMemoryStream & operator*();
	bool operator==(const AgPointer<AgMemoryStream> &);
	bool operator==(AgMemoryStream *);
	bool operator!=(const AgPointer<AgMemoryStream> &);
	bool operator!=(AgMemoryStream *);
	AgMemoryStream * getObject();
	void swap(AgPointer<AgMemoryStream> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgMemoryStream * m_ptr; // 0x8
public:
	AgPointer<AgStream> operator class AgPointer<class AgStream>();
};