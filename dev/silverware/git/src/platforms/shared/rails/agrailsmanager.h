#pragma once

class AgSingleton<AgRailsManager>
{
protected:
	~AgSingleton<AgRailsManager>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgRailsManager & getInstance();
	static long hasInstance();
private:
	static AgRailsManager * createSingleton();
	static void destroySingleton(AgRailsManager *);
	static AgSingleton<AgRailsManager> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgRailsManager>(const AgSingleton<AgRailsManager> &);
	AgSingleton<AgRailsManager>();
	AgSingleton<AgRailsManager> & operator=(const AgSingleton<AgRailsManager> &);
};
class AgRailsManager :
	AgSingleton<AgRailsManager>
{
public:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
	static long isAvailable();
	void update();
protected:
	static long ms_isAvailable; // 0xFFFFFFFFFFFFFFFF
public:
	AgRailsManager(AgRailsManager &);
	AgRailsManager(const AgRailsManager &);
	AgRailsManager();
	virtual ~AgRailsManager();
	AgRailsManager & operator=(AgRailsManager &);
	AgRailsManager & operator=(const AgRailsManager &);
};