#pragma once

struct AgSuspendingEvent
{
};
struct AgResumingEvent
{
};
class AgDefaultUserManager :
	AgUserManager
{
public:
	AgDefaultUserManager();
	virtual ~AgDefaultUserManager();
protected:
	virtual void onSuspending(const AgSuspendingEvent &);
	virtual void onResuming(const AgResumingEvent &);
};
class AgDefaultUser :
	AgUser
{
public:
	AgDefaultUser(AgDefaultUser &);
	AgDefaultUser(const AgDefaultUser &);
	AgDefaultUser();
	virtual long isGuest();
	virtual long isSignedIn();
	virtual ~AgDefaultUser();
	AgDefaultUser & operator=(AgDefaultUser &);
	AgDefaultUser & operator=(const AgDefaultUser &);
};
long AgUser::isAgeRestricted(); // 0x1400470F0