#pragma once

enum PreFightFaceOff::SPEAK_PLAYER
{
	SPEAK_PLAYER_1 = 2,
	SPEAK_PLAYER_2 = 4,
	SPEAK_PLAYER_ALL = 6,
};
struct PreFightFaceOff::MessageInfo
{
	PreFightFaceOff::SPEAK_PLAYER speakPlayer; // 0x0
	const char * pMessage1; // 0x8
	const char * pMessage2; // 0x10
	MessageInfo();
};