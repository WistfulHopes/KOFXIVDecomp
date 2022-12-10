#pragma once

#include "agdisplay.h"
#include "agrectangle.h"
#include "agrendertypes.h"
#include <map>
#include <vector>

struct AgDisplayPlatformData;

class AgDisplayPlatformImplementation
{
public:
	AgDisplayPlatformImplementation(AgDisplayPlatformData *);
	~AgDisplayPlatformImplementation();
	void use();
	void lock();
	void unlock();
	void flush();
	void setCursor(long, long);
	void getDisplayModes(std::vector<AgDisplayMode> &);
	void getDisplayNativeMode(AgDisplayMode &);
	long setDisplayMode(AgDisplayMode, AgWindowMode, long);
	static long getNumScreens();
	static long getCurrentScreen();
	static AgRectangle getScreenBounds(long);
	static AgRectangle getCurrentScreenBounds();
	static AgRectangle getScreenSize();
	void loadingLock(unsigned long);
	void loadingUnlock(unsigned long);
	void loadingFlush();
	long IsMinimized();
	AgMultisampleType getMultisampleType();
	static AgMultisampleType getMaxMultisampleType();
	const AgDisplayPlatformData * getPlatformData();
private:
	AgDisplayPlatformData * m_platformData; // 0x0
	static std::map<int,AgRectangle> m_screenBounds; // 0xFFFFFFFFFFFFFFFF
};