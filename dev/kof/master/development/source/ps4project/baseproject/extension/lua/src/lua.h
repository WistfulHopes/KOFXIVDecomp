#pragma once

struct lua_Debug
{
	long event; // 0x0
	const char * name; // 0x8
	const char * namewhat; // 0x10
	const char * what; // 0x18
	const char * source; // 0x20
	long currentline; // 0x28
	long linedefined; // 0x2C
	long lastlinedefined; // 0x30
	unsigned char nups; // 0x34
	unsigned char nparams; // 0x35
	char isvararg; // 0x36
	char istailcall; // 0x37
	char short_src[60]; // 0x38
	CallInfo * i_ci; // 0x78
};