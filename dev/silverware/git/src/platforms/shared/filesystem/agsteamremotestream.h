#pragma once

class AgSteamRemoteStream :
	AgVirtualFileStream
{
public:
	AgSteamRemoteStream(const AgSteamRemoteStream &);
	AgSteamRemoteStream(AgPointer<AgSteamRemoteMount>, const AgPath &, unsigned long);
	virtual ~AgSteamRemoteStream();
	virtual void close();
protected:
	virtual void _store();
};