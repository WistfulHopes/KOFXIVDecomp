#pragma once

struct stringtable
{
	GCObject * * hash; // 0x0
	unsigned long nuse; // 0x8
	long size; // 0xC
};
struct CallInfo
{
	lua_TValue * func; // 0x0
	lua_TValue * top; // 0x8
	CallInfo * previous; // 0x10
	CallInfo * next; // 0x18
	short nresults; // 0x20
	unsigned char callstatus; // 0x22
	long long extra; // 0x28
	<unnamed-tag> u; // 0x30
};
struct global_State
{
	void *(*frealloc)(void *, void *, unsigned long long, unsigned long long); // 0x0
	void * ud; // 0x8
	unsigned long long totalbytes; // 0x10
	long long GCdebt; // 0x18
	unsigned long long GCmemtrav; // 0x20
	unsigned long long GCestimate; // 0x28
	stringtable strt; // 0x30
	lua_TValue l_registry; // 0x40
	unsigned long seed; // 0x50
	unsigned char currentwhite; // 0x54
	unsigned char gcstate; // 0x55
	unsigned char gckind; // 0x56
	unsigned char gcrunning; // 0x57
	long sweepstrgc; // 0x58
	GCObject * allgc; // 0x60
	GCObject * finobj; // 0x68
	GCObject * * sweepgc; // 0x70
	GCObject * * sweepfin; // 0x78
	GCObject * gray; // 0x80
	GCObject * grayagain; // 0x88
	GCObject * weak; // 0x90
	GCObject * ephemeron; // 0x98
	GCObject * allweak; // 0xA0
	GCObject * tobefnz; // 0xA8
	UpVal uvhead; // 0xB0
	Mbuffer buff; // 0xD8
	long gcpause; // 0xF0
	long gcmajorinc; // 0xF4
	long gcstepmul; // 0xF8
	long(*panic)(lua_State *); // 0x100
	lua_State * mainthread; // 0x108
	const float * version; // 0x110
	TString * memerrmsg; // 0x118
	TString * tmname[17]; // 0x120
	Table * mt[9]; // 0x1A8
};
struct lua_State
{
	GCObject * next; // 0x0
	unsigned char tt; // 0x8
	unsigned char marked; // 0x9
	unsigned char status; // 0xA
	lua_TValue * top; // 0x10
	global_State * l_G; // 0x18
	CallInfo * ci; // 0x20
	const unsigned long * oldpc; // 0x28
	lua_TValue * stack_last; // 0x30
	lua_TValue * stack; // 0x38
	long stacksize; // 0x40
	unsigned short nny; // 0x44
	unsigned short nCcalls; // 0x46
	unsigned char hookmask; // 0x48
	unsigned char allowhook; // 0x49
	long basehookcount; // 0x4C
	long hookcount; // 0x50
	void(*hook)(lua_State *, lua_Debug *); // 0x58
	GCObject * openupval; // 0x60
	GCObject * gclist; // 0x68
	lua_longjmp * errorJmp; // 0x70
	long long errfunc; // 0x78
	CallInfo base_ci; // 0x80
};
union GCObject
{
public:
	GCheader gch; // 0x0
	TString ts; // 0x0
	Udata u; // 0x0
	Closure cl; // 0x0
	Table h; // 0x0
	Proto p; // 0x0
	UpVal uv; // 0x0
	lua_State th; // 0x0
};