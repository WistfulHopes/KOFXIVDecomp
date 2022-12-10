#pragma once

enum OpMode
{
	iABC = 0,
	iABx = 1,
	iAsBx = 2,
	iAx = 3,
};
enum OpCode
{
	OP_MOVE = 0,
	OP_LOADK = 1,
	OP_LOADKX = 2,
	OP_LOADBOOL = 3,
	OP_LOADNIL = 4,
	OP_GETUPVAL = 5,
	OP_GETTABUP = 6,
	OP_GETTABLE = 7,
	OP_SETTABUP = 8,
	OP_SETUPVAL = 9,
	OP_SETTABLE = 10,
	OP_NEWTABLE = 11,
	OP_SELF = 12,
	OP_ADD = 13,
	OP_SUB = 14,
	OP_MUL = 15,
	OP_DIV = 16,
	OP_MOD = 17,
	OP_POW = 18,
	OP_UNM = 19,
	OP_NOT = 20,
	OP_LEN = 21,
	OP_CONCAT = 22,
	OP_JMP = 23,
	OP_EQ = 24,
	OP_LT = 25,
	OP_LE = 26,
	OP_TEST = 27,
	OP_TESTSET = 28,
	OP_CALL = 29,
	OP_TAILCALL = 30,
	OP_RETURN = 31,
	OP_FORLOOP = 32,
	OP_FORPREP = 33,
	OP_TFORCALL = 34,
	OP_TFORLOOP = 35,
	OP_SETLIST = 36,
	OP_CLOSURE = 37,
	OP_VARARG = 38,
	OP_EXTRAARG = 39,
};
enum OpArgMask
{
	OpArgN = 0,
	OpArgU = 1,
	OpArgR = 2,
	OpArgK = 3,
};