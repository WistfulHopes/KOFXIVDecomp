#pragma once

struct AgWindowConfig
{
	long width; // 0x0
	long height; // 0x4
	AgWindowMode mode; // 0x8
	AgMultisampleType multisample; // 0xC
	long vsync; // 0x10
	AgString title; // 0x18
	AgWindowConfig(AgWindowConfig &);
	AgWindowConfig(const AgWindowConfig &);
	AgWindowConfig();
	~AgWindowConfig();
	AgWindowConfig & operator=(AgWindowConfig &);
	AgWindowConfig & operator=(const AgWindowConfig &);
};