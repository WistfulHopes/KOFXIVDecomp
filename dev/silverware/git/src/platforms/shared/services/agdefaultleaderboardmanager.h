#pragma once

class AgDefaultLeaderboardManager :
	AgLeaderboardManager
{
public:
	static void * operator new(unsigned long long);
	static void operator delete(void *);
protected:
	virtual AgPointer<AgLeaderboard> _create(AgStringRef);
public:
	AgDefaultLeaderboardManager();
	virtual ~AgDefaultLeaderboardManager();
};
void AgDefaultLeaderboardManager::operator delete(void * data); // 0x140683DE0
AgPointer<AgLeaderboard> AgDefaultLeaderboardManager::_create(AgStringRef name); // 0x1406849F0