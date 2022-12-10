#pragma once

enum expkind
{
	VVOID = 0,
	VNIL = 1,
	VTRUE = 2,
	VFALSE = 3,
	VK = 4,
	VKNUM = 5,
	VNONRELOC = 6,
	VLOCAL = 7,
	VUPVAL = 8,
	VINDEXED = 9,
	VJMP = 10,
	VRELOCABLE = 11,
	VCALL = 12,
	VVARARG = 13,
};
struct expdesc
{
	expkind k; // 0x0
	<unnamed-tag> u; // 0x4
	long t; // 0x8
	long f; // 0xC
};
struct Vardesc
{
	short idx; // 0x0
};
struct Labeldesc
{
	TString * name; // 0x0
	long pc; // 0x8
	long line; // 0xC
	unsigned char nactvar; // 0x10
};
struct Labellist
{
	Labeldesc * arr; // 0x0
	long n; // 0x8
	long size; // 0xC
};
struct Dyndata
{
	<unnamed-tag> actvar; // 0x0
	Labellist gt; // 0x10
	Labellist label; // 0x20
};
struct FuncState
{
	Proto * f; // 0x0
	Table * h; // 0x8
	FuncState * prev; // 0x10
	LexState * ls; // 0x18
	BlockCnt * bl; // 0x20
	long pc; // 0x28
	long lasttarget; // 0x2C
	long jpc; // 0x30
	long nk; // 0x34
	long np; // 0x38
	long firstlocal; // 0x3C
	short nlocvars; // 0x40
	unsigned char nactvar; // 0x42
	unsigned char nups; // 0x43
	unsigned char freereg; // 0x44
};