#pragma once

class BattleHudCommonNumbers
{
	struct ESESelectorPage;
	struct ESESelectorSelectKey;
	struct EVoiceChat;
	struct EOperateDescription;
	struct EReplayIcon;
};
struct BattleHudCommonNumbers::ESESelectorPage
{
	enum Type
	{
		None = 0,
		Normal_1 = 1,
		Normal_2 = 2,
		Neta = 3,
		Music = 4,
	};
};
struct BattleHudCommonNumbers::ESESelectorSelectKey
{
	enum Type
	{
		None = 0,
		Up = 1,
		Down = 2,
		Left = 3,
		Right = 4,
	};
};
struct BattleHudCommonNumbers::EVoiceChat
{
	enum Type
	{
		ACTIVE = 0,
		ON = 1,
		OFF = 2,
		NONE = 3,
	};
};
struct BattleHudCommonNumbers::EOperateDescription
{
	enum Type
	{
		None = 0,
		Option = 1,
		MessageAndSESelect = 2,
		SESelect = 3,
	};
};
enum BattleHudCommonNumbers::EOperateDescription::Type
{
	None = 0,
	Option = 1,
	MessageAndSESelect = 2,
	SESelect = 3,
};
struct BattleHudCommonNumbers::EReplayIcon
{
	enum Type
	{
		STOP = 0,
		PLAY = 1,
		SKIP = 2,
	};
};
enum BattleHudCommonNumbers::EReplayIcon::Type
{
	STOP = 0,
	PLAY = 1,
	SKIP = 2,
};