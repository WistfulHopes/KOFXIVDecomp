#pragma once

struct luaL_Reg
{
	const char * name; // 0x0
	long(*func)(lua_State *); // 0x8
};
struct luaL_Buffer
{
	char * b; // 0x0
	unsigned long long size; // 0x8
	unsigned long long n; // 0x10
	lua_State * L; // 0x18
	char initb[512]; // 0x20
};