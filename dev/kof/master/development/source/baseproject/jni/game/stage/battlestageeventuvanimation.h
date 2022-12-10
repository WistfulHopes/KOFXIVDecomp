#pragma once

class BattleStageEventUVAnimation
{
	struct Params;
protected:
	bool m_bActive; // 0x8
	bool m_bEnableAnimations; // 0x9
	BattleStageEventUVAnimation::Params * m_pParams; // 0x10
	long m_paramCount; // 0x18
	bool m_bModelUVChanged; // 0x1C
public:
	BattleStageEventUVAnimation(const BattleStageEventUVAnimation &);
	BattleStageEventUVAnimation();
	~BattleStageEventUVAnimation();
	void setup(BattleStageEvent &);
	void update(BattleStageEvent &, float);
	void animation(BattleStageEvent &);
private:
	void release();
public:
	BattleStageEventUVAnimation & operator=(const BattleStageEventUVAnimation &);
};
struct BattleStageEventUVAnimation::Params
{
	float x; // 0x0
	float y; // 0x4
	float rot; // 0x8
	Params();
	void clear();
	void set(const BattleStageEventUVAnimation::Params &);
};