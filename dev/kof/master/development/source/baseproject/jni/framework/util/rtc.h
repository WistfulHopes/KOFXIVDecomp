#pragma once

struct Fw::RtcTick
{
	unsigned long long tick; // 0x0
};
struct Fw::RtcDateTime
{
};
class Fw::Rtc
{
public:
	static void GetCurrentTick(Fw::RtcDateTime *, long);
	static void GetCurrentTick(Fw::RtcTick *);
	static unsigned long long GetCurrentTick();
	static void GetCurrentClockLocalTime(Fw::RtcDateTime *);
	static void GetCurrentNetworkTick(Fw::RtcTick *);
	static void FormatRFC2822(char *, const Fw::RtcTick *, long);
	static void FormatRFC2822LocalTime(char *, const Fw::RtcTick *);
	static void FormatRFC3339(char *, const Fw::RtcTick *, long);
	static void FormatRFC3339LocalTime(char *, const Fw::RtcTick *);
	static void ParseDateTime(Fw::RtcTick *, const char *);
	static void ParseRFC3339(Fw::RtcTick *, const char *);
	static void RtcGetTick(const Fw::RtcDateTime *, Fw::RtcTick *);
	static void RtcSetTick(Fw::RtcDateTime *, const Fw::RtcTick *);
	static long GetMicrosecond(const Fw::RtcDateTime *);
	static long GetSecond(const Fw::RtcDateTime *);
	static long GetMinute(const Fw::RtcDateTime *);
	static long GetHour(const Fw::RtcDateTime *);
	static long GetDay(const Fw::RtcDateTime *);
	static long GetMonth(const Fw::RtcDateTime *);
	static long GetYear(const Fw::RtcDateTime *);
	static void SetMicrosecond(Fw::RtcDateTime *, long);
	static void SetSecond(Fw::RtcDateTime *, long);
	static void SetMinute(Fw::RtcDateTime *, long);
	static void SetHour(Fw::RtcDateTime *, long);
	static void SetDay(Fw::RtcDateTime *, long);
	static void SetMonth(Fw::RtcDateTime *, long);
	static void SetYear(Fw::RtcDateTime *, long);
};