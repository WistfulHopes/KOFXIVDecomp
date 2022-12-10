#pragma once

class AgDefaultServiceEventManager :
	AgServiceEventManager
{
public:
	AgDefaultServiceEventManager(const AgDefaultServiceEventManager &);
	AgDefaultServiceEventManager();
	virtual ~AgDefaultServiceEventManager();
	virtual AgPointer<AgServiceEvent> createStatEvent(const AgString &, AgPointer<AgUser>);
	virtual AgPointer<AgServiceEvent> createPresenceEvent(AgStringRef, AgPointer<AgUser>);
	virtual AgPointer<AgServiceEvent> createActivityEvent(AgStringRef, AgPointer<AgUser>);
	AgDefaultServiceEventManager & operator=(const AgDefaultServiceEventManager &);
};