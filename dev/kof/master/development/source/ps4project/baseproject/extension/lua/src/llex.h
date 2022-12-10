#pragma once

enum RESERVED
{
	TK_AND = 257,
	TK_BREAK = 258,
	TK_DO = 259,
	TK_ELSE = 260,
	TK_ELSEIF = 261,
	TK_END = 262,
	TK_FALSE = 263,
	TK_FOR = 264,
	TK_FUNCTION = 265,
	TK_GOTO = 266,
	TK_IF = 267,
	TK_IN = 268,
	TK_LOCAL = 269,
	TK_NIL = 270,
	TK_NOT = 271,
	TK_OR = 272,
	TK_REPEAT = 273,
	TK_RETURN = 274,
	TK_THEN = 275,
	TK_TRUE = 276,
	TK_UNTIL = 277,
	TK_WHILE = 278,
	TK_CONCAT = 279,
	TK_DOTS = 280,
	TK_EQ = 281,
	TK_GE = 282,
	TK_LE = 283,
	TK_NE = 284,
	TK_DBCOLON = 285,
	TK_EOS = 286,
	TK_NUMBER = 287,
	TK_NAME = 288,
	TK_STRING = 289,
};
union SemInfo
{
public:
	float r; // 0x0
	TString * ts; // 0x0
};
struct Token
{
	long token; // 0x0
	SemInfo seminfo; // 0x8
};
struct LexState
{
	long current; // 0x0
	long linenumber; // 0x4
	long lastline; // 0x8
	Token t; // 0x10
	Token lookahead; // 0x20
	FuncState * fs; // 0x30
	lua_State * L; // 0x38
	Zio * z; // 0x40
	Mbuffer * buff; // 0x48
	Dyndata * dyd; // 0x50
	TString * source; // 0x58
	TString * envn; // 0x60
	char decpoint; // 0x68
};