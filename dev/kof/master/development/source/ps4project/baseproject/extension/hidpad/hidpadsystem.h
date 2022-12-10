#pragma once

class HIDPadSystem
{
private:
	HIDPadSystem();
	static HIDPadSystem * instance__; // 0xFFFFFFFFFFFFFFFF
public:
	static HIDPadSystem * GetInstance();
	void Reset();
	long CheckDevice();
	long GetDevList(unsigned char *, long);
	void Read(unsigned char, unsigned long *);
	void Read(unsigned long *, long);
	bool IsEnable(unsigned char);
	static void * threadFunc(void *);
	void CheckFrame();
};