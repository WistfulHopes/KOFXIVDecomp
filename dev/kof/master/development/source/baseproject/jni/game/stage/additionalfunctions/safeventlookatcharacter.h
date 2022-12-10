#pragma once

class SAFEventLookAtCharacter
{
private:
	bool m_bEnable; // 0x8
public:
	SAFEventLookAtCharacter(const SAFEventLookAtCharacter &);
	SAFEventLookAtCharacter();
	~SAFEventLookAtCharacter();
	void release();
	bool isEnabled();
	void setup(BattleStageEvent &);
	void update(BattleStageEvent &);
	void animation(BattleStageEvent &);
	SAFEventLookAtCharacter & operator=(const SAFEventLookAtCharacter &);
};