#pragma once

class AgDefaultProfileManager :
	AgProfileManager
{
public:
	AgDefaultProfileManager(const AgDefaultProfileManager &);
	AgDefaultProfileManager();
	virtual ~AgDefaultProfileManager();
	AgDefaultProfileManager & operator=(const AgDefaultProfileManager &);
};
class AgDefaultProfile :
	AgProfile
{
public:
	AgDefaultProfile(AgDefaultProfile &);
	AgDefaultProfile(const AgDefaultProfile &);
	AgDefaultProfile();
	virtual ~AgDefaultProfile();
	AgDefaultProfile & operator=(AgDefaultProfile &);
	AgDefaultProfile & operator=(const AgDefaultProfile &);
};