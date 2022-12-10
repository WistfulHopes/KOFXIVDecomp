#pragma once

class AgDefaultSessionManager :
	AgSessionManager
{
public:
	AgDefaultSessionManager();
	virtual ~AgDefaultSessionManager();
	virtual AgPointer<AgSession> createSession(const AgString &, long);
};