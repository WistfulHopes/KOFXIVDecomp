#pragma once

struct AgUserAddedEvent :
	AgUserEvent
{
	AgUserAddedEvent(AgUserAddedEvent &);
	AgUserAddedEvent(const AgUserAddedEvent &);
	AgUserAddedEvent();
	~AgUserAddedEvent();
	AgUserAddedEvent & operator=(AgUserAddedEvent &);
	AgUserAddedEvent & operator=(const AgUserAddedEvent &);
};
struct AgUserRemovedEvent :
	AgUserEvent
{
	AgUserRemovedEvent(AgUserRemovedEvent &);
	AgUserRemovedEvent(const AgUserRemovedEvent &);
	AgUserRemovedEvent();
	~AgUserRemovedEvent();
	AgUserRemovedEvent & operator=(AgUserRemovedEvent &);
	AgUserRemovedEvent & operator=(const AgUserRemovedEvent &);
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
struct AgPlayerEvent
{
	AgPointer<AgPlayer> user; // 0x0
	AgPointer<AgPlayer> operator class AgPointer<class AgPlayer>();
	AgPlayerEvent(AgPlayerEvent &);
	AgPlayerEvent(const AgPlayerEvent &);
	AgPlayerEvent();
	~AgPlayerEvent();
	AgPlayerEvent & operator=(AgPlayerEvent &);
	AgPlayerEvent & operator=(const AgPlayerEvent &);
};
struct AgPlayerAddedEvent :
	AgPlayerEvent
{
	AgPlayerAddedEvent(AgPlayerAddedEvent &);
	AgPlayerAddedEvent(const AgPlayerAddedEvent &);
	AgPlayerAddedEvent();
	~AgPlayerAddedEvent();
	AgPlayerAddedEvent & operator=(AgPlayerAddedEvent &);
	AgPlayerAddedEvent & operator=(const AgPlayerAddedEvent &);
};
struct AgPlayerRemovedEvent :
	AgPlayerEvent
{
	AgPlayerRemovedEvent(AgPlayerRemovedEvent &);
	AgPlayerRemovedEvent(const AgPlayerRemovedEvent &);
	AgPlayerRemovedEvent();
	~AgPlayerRemovedEvent();
	AgPlayerRemovedEvent & operator=(AgPlayerRemovedEvent &);
	AgPlayerRemovedEvent & operator=(const AgPlayerRemovedEvent &);
};
struct AgPlayerUpdatedEvent :
	AgPlayerEvent
{
	AgPlayerUpdatedEvent(AgPlayerUpdatedEvent &);
	AgPlayerUpdatedEvent(const AgPlayerUpdatedEvent &);
	AgPlayerUpdatedEvent();
	~AgPlayerUpdatedEvent();
	AgPlayerUpdatedEvent & operator=(AgPlayerUpdatedEvent &);
	AgPlayerUpdatedEvent & operator=(const AgPlayerUpdatedEvent &);
};
class AgSingleton<AgPlayerManager>
{
protected:
	~AgSingleton<AgPlayerManager>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgPlayerManager & getInstance();
	static long hasInstance();
private:
	static AgPlayerManager * createSingleton();
	static void destroySingleton(AgPlayerManager *);
	static AgSingleton<AgPlayerManager> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgPlayerManager>(const AgSingleton<AgPlayerManager> &);
	AgSingleton<AgPlayerManager>();
	AgSingleton<AgPlayerManager> & operator=(const AgSingleton<AgPlayerManager> &);
};
class AgPlayerManager :
	AgSingleton<AgPlayerManager>
{
public:
	AgPlayerManager();
	virtual ~AgPlayerManager();
	AgPointer<AgPlayer> getPlayer(long);
	const std::vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > > & getPlayers();
	AgPointer<AgPlayer> getPlayerForUser(long long);
	AgPointer<AgPlayer> getPlayerForController(unsigned long);
	AgPointer<AgPlayer> getPrimaryPlayer();
	long getPrimaryPlayerId();
	void setPrimaryPlayer(long);
	long engagePlayer(AgGamepadButton);
	long disengagePlayer(AgPointer<AgPlayer>);
	long disengagePlayer(AgPointer<AgController>);
	void flagPlayersDirty();
protected:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
	void initializePrimaryPlayer();
private:
	AgPointer<AgPlayer> createPlayer();
	void updateUsers();
	void updateControllers();
	void cleanupPlayers();
	void onUserAdded(const AgUserAddedEvent &);
	void onUserRemoved(const AgUserRemovedEvent &);
	void onControllerAdded(const AgControllerAddedEvent &);
	AgMutex m_mutex; // 0x8
	std::vector<AgPointer<AgPlayer>,std::allocator<AgPointer<AgPlayer> > > m_players; // 0x30
	long m_primaryPlayerId; // 0x48
	AgPointer<AgPlayer> m_invalidPlayer; // 0x50
public:
	void update();
	AgEventDispatcher<AgPlayerAddedEvent> PlayerAdded; // 0x60
	AgEventDispatcher<AgPlayerRemovedEvent> PlayerRemoved; // 0xA0
	AgEventDispatcher<AgPlayerUpdatedEvent> PlayerUpdated; // 0xE0
protected:
	void addPlayer(AgPointer<AgPlayer>);
	void removePlayer(AgPointer<AgPlayer>);
	void updatePlayer(AgPointer<AgPlayer>);
};
class AgEventDispatcher<AgPlayerAddedEvent> :
	AgEventDispatcherBase<AgPlayerAddedEvent>
{
public:
	void invoke(const AgPlayerAddedEvent &);
	void operator()(const AgPlayerAddedEvent &);
	AgEventDispatcher<AgPlayerAddedEvent>();
	~AgEventDispatcher<AgPlayerAddedEvent>();
};
class AgEventDispatcher<AgPlayerRemovedEvent> :
	AgEventDispatcherBase<AgPlayerRemovedEvent>
{
public:
	void invoke(const AgPlayerRemovedEvent &);
	void operator()(const AgPlayerRemovedEvent &);
	AgEventDispatcher<AgPlayerRemovedEvent>();
	~AgEventDispatcher<AgPlayerRemovedEvent>();
};
class AgEventDispatcher<AgPlayerUpdatedEvent> :
	AgEventDispatcherBase<AgPlayerUpdatedEvent>
{
public:
	void invoke(const AgPlayerUpdatedEvent &);
	void operator()(const AgPlayerUpdatedEvent &);
	AgEventDispatcher<AgPlayerUpdatedEvent>();
	~AgEventDispatcher<AgPlayerUpdatedEvent>();
};