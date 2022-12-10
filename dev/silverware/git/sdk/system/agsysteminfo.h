#pragma once

class AgSystemInfo
{
public:
	static AgSystemInfo & getInstance();
private:
	void onInit();
	long m_initialized; // 0x0
};