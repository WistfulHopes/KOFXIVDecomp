#pragma once

enum MOVIE_ID
{
	MOVIE_OP = 0,
	MOVIE_PROLOGUE = 1,
	MOVIE_INTERLUDE = 2,
	MOVIE_ANTONOV = 3,
	MOVIE_VERSE_1_EDIT = 4,
	MOVIE_VERSE_1_JPN = 5,
	MOVIE_VERSE_1_ANOTHER = 6,
	MOVIE_VERSE_1_CHN = 7,
	MOVIE_VERSE_1_OFFCIAL = 8,
	MOVIE_VERSE_2 = 9,
	MOVIE_ED_JAPAN = 10,
	MOVIE_ED_ARTOFFIGHTING = 11,
	MOVIE_ED_FATALFURY = 12,
	MOVIE_ED_IKARIWARRIORS = 13,
	MOVIE_ED_YAGAMI = 14,
	MOVIE_ED_KDS = 15,
	MOVIE_ED_SOUTHOWN = 16,
	MOVIE_ED_WOMENFIGHTERS = 17,
	MOVIE_ED_KIM = 18,
	MOVIE_ED_PSYCHOSOLDIER = 19,
	MOVIE_ED_VILLAINS = 20,
	MOVIE_ED_ANOTHERWORLD = 21,
	MOVIE_ED_MEXICO = 22,
	MOVIE_ED_CHINA = 23,
	MOVIE_ED_SOUTHAMERICAN = 24,
	MOVIE_ED_OFFICIALINVITATION = 25,
	MOVIE_ED_ANTONOV = 26,
	MOVIE_ED_VERSE = 27,
	MOVIE_DEMO = 28,
	MOVIE_END_CREDIT = 29,
	MOVIE_SOUND_LOGO = 30,
	MOVIE_AG_LOGO = 31,
	MOVIE_ID_MAX = 32,
	MOVIE_ID_NONE = 255,
};
struct MovieDataInfo
{
	MOVIE_ID id; // 0x0
	const char * movieFileName; // 0x8
	const char * sbnakName; // 0x10
	const char * soundName; // 0x18
	const char * des; // 0x20
	const char * csv; // 0x28
	const char * gfxFileName; // 0x30
};
struct MovieTelopInfo
{
	unsigned long long time; // 0x0
	char key[256]; // 0x8
	long color; // 0x108
	long position; // 0x10C
	long mode; // 0x110
	long fade; // 0x114
	MovieTelopInfo();
};
MovieTelopInfo::MovieTelopInfo(); // 0x1400F8DF0