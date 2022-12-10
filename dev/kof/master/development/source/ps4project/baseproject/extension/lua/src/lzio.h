#pragma once

struct Mbuffer
{
	char * buffer; // 0x0
	unsigned long long n; // 0x8
	unsigned long long buffsize; // 0x10
};
struct Zio
{
	unsigned long long n; // 0x0
	const char * p; // 0x8
	const char *(*reader)(lua_State *, void *, unsigned long long *); // 0x10
	void * data; // 0x18
	lua_State * L; // 0x20
};