#pragma once

enum AppMain::ONLINEPROFILE_LOAD_STATE
{
	ONLINEPROFILE_LOAD_STATE_NONE = 0,
	ONLINEPROFILE_LOAD_STATE_LOAD = 1,
	ONLINEPROFILE_LOAD_STATE_LOADCOMPLETE = 2,
};
struct AppMain::RANK_MATCH_GRADE_RANGE
{
	long worldIdIndex; // 0x0
	RANKMATCH_RANK start; // 0x4
	RANKMATCH_RANK end; // 0x8
	long gradeSelect; // 0xC
};