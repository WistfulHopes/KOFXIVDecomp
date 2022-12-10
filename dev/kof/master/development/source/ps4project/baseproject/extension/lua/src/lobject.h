#pragma once

struct GCheader
{
	GCObject * next; // 0x0
	unsigned char tt; // 0x8
	unsigned char marked; // 0x9
};
union Value
{
public:
	GCObject * gc; // 0x0
	void * p; // 0x0
	long b; // 0x0
	long(*f)(lua_State *); // 0x0
	float n; // 0x0
};
struct lua_TValue
{
	Value value_; // 0x0
	long tt_; // 0x8
};
union TString
{
public:
	L_Umaxalign dummy; // 0x0
	<unnamed-tag> tsv; // 0x0
};
union Udata
{
public:
	L_Umaxalign dummy; // 0x0
	<unnamed-tag> uv; // 0x0
};
struct Upvaldesc
{
	TString * name; // 0x0
	unsigned char instack; // 0x8
	unsigned char idx; // 0x9
};
struct LocVar
{
	TString * varname; // 0x0
	long startpc; // 0x8
	long endpc; // 0xC
};
struct Proto
{
	GCObject * next; // 0x0
	unsigned char tt; // 0x8
	unsigned char marked; // 0x9
	lua_TValue * k; // 0x10
	unsigned long * code; // 0x18
	Proto * * p; // 0x20
	long * lineinfo; // 0x28
	LocVar * locvars; // 0x30
	Upvaldesc * upvalues; // 0x38
	Closure * cache; // 0x40
	TString * source; // 0x48
	long sizeupvalues; // 0x50
	long sizek; // 0x54
	long sizecode; // 0x58
	long sizelineinfo; // 0x5C
	long sizep; // 0x60
	long sizelocvars; // 0x64
	long linedefined; // 0x68
	long lastlinedefined; // 0x6C
	GCObject * gclist; // 0x70
	unsigned char numparams; // 0x78
	unsigned char is_vararg; // 0x79
	unsigned char maxstacksize; // 0x7A
};
struct UpVal
{
	GCObject * next; // 0x0
	unsigned char tt; // 0x8
	unsigned char marked; // 0x9
	lua_TValue * v; // 0x10
	<unnamed-tag> u; // 0x18
};
struct CClosure
{
	GCObject * next; // 0x0
	unsigned char tt; // 0x8
	unsigned char marked; // 0x9
	unsigned char nupvalues; // 0xA
	GCObject * gclist; // 0x10
	long(*f)(lua_State *); // 0x18
	lua_TValue upvalue[1]; // 0x20
};
struct LClosure
{
	GCObject * next; // 0x0
	unsigned char tt; // 0x8
	unsigned char marked; // 0x9
	unsigned char nupvalues; // 0xA
	GCObject * gclist; // 0x10
	Proto * p; // 0x18
	UpVal * upvals[1]; // 0x20
};
union Closure
{
public:
	CClosure c; // 0x0
	LClosure l; // 0x0
};
union TKey
{
public:
	<unnamed-tag> nk; // 0x0
	lua_TValue tvk; // 0x0
};
struct Node
{
	lua_TValue i_val; // 0x0
	TKey i_key; // 0x10
};
struct Table
{
	GCObject * next; // 0x0
	unsigned char tt; // 0x8
	unsigned char marked; // 0x9
	unsigned char flags; // 0xA
	unsigned char lsizenode; // 0xB
	Table * metatable; // 0x10
	lua_TValue * array; // 0x18
	Node * node; // 0x20
	Node * lastfree; // 0x28
	GCObject * gclist; // 0x30
	long sizearray; // 0x38
};