#pragma once

class BattleSystem::ComboMissionAttackEventListener
{
public:
	ComboMissionAttackEventListener(const BattleSystem::ComboMissionAttackEventListener &);
	ComboMissionAttackEventListener();
	~ComboMissionAttackEventListener();
	void RecvAttackHitEvent(long, bool);
	BattleSystem::ComboMissionAttackEventListener & operator=(const BattleSystem::ComboMissionAttackEventListener &);
};