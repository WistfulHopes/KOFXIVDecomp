#pragma once

struct Scaleform::AllocInfo
{
	unsigned long StatId; // 0x0
	AllocInfo(unsigned long, const char *, unsigned long);
	AllocInfo();
};