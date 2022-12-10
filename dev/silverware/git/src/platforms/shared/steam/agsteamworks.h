#pragma once

class AgSteamworks :
	AgSingleton<AgSteamworks>
{
public:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
	static long isAvailable();
	static void setOverlayPosition(AgSteamworksOverlayPosition);
protected:
	static long ms_isAvailable; // 0xFFFFFFFFFFFFFFFF
public:
	AgSteamworks(AgSteamworks &);
	AgSteamworks(const AgSteamworks &);
	AgSteamworks();
	virtual ~AgSteamworks();
	AgSteamworks & operator=(AgSteamworks &);
	AgSteamworks & operator=(const AgSteamworks &);
};
class AgSingleton<AgSteamworks>
{
protected:
	~AgSingleton<AgSteamworks>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgSteamworks & getInstance();
	static long hasInstance();
private:
	static AgSteamworks * createSingleton();
	static void destroySingleton(AgSteamworks *);
	static AgSingleton<AgSteamworks> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgSteamworks>(const AgSingleton<AgSteamworks> &);
	AgSingleton<AgSteamworks>();
	AgSingleton<AgSteamworks> & operator=(const AgSingleton<AgSteamworks> &);
};