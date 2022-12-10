#pragma once

class AgSingleton<AgGalaxyManager>
{
protected:
	~AgSingleton<AgGalaxyManager>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgGalaxyManager & getInstance();
	static long hasInstance();
private:
	static AgGalaxyManager * createSingleton();
	static void destroySingleton(AgGalaxyManager *);
	static AgSingleton<AgGalaxyManager> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgGalaxyManager>(const AgSingleton<AgGalaxyManager> &);
	AgSingleton<AgGalaxyManager>();
	AgSingleton<AgGalaxyManager> & operator=(const AgSingleton<AgGalaxyManager> &);
};
class AgGalaxyManager :
	AgSingleton<AgGalaxyManager>
{
public:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
	static long isAvailable();
	void update();
protected:
	static long ms_isAvailable; // 0xFFFFFFFFFFFFFFFF
	void _createListeners();
public:
	AgGalaxyManager(AgGalaxyManager &);
	AgGalaxyManager(const AgGalaxyManager &);
	AgGalaxyManager();
	virtual ~AgGalaxyManager();
	AgGalaxyManager & operator=(AgGalaxyManager &);
	AgGalaxyManager & operator=(const AgGalaxyManager &);
};