#pragma once

class BattleHudLocalize
{
	struct ERegion;
protected:
	BattleHudLocalize::ERegion::Type getRegion();
	LANGUAGE_MODE getLanguage();
};
struct BattleHudLocalize::ERegion
{
	enum Type
	{
		EN = 0,
		CN = 1,
	};
};