#pragma once

struct AgTime
{
	unsigned short year; // 0x0
	unsigned short month; // 0x2
	unsigned short dayOfWeek; // 0x4
	unsigned short day; // 0x6
	unsigned short hour; // 0x8
	unsigned short minute; // 0xA
	unsigned short second; // 0xC
	unsigned short milliseconds; // 0xE
};
class AgDateTime
{
public:
	static unsigned long long getUTCTick();
	static AgTime getLocalTime();
	enum TimestampFormat
	{
		AgTimestampFormat_DDMMYYYYHHMMSS = 0,
	};
	static AgString formatTimestamp(AgTime, AgDateTime::TimestampFormat);
	static AgString formatCurrentDateTime();
private:
	static AgString leadingZero(AgString);
};