#pragma once

class BattleCallAnimationPlayerWin :
	BattleCallAnimation,
	protected BattleCallAnimationCommons
{
private:
	PLAYER_ID m_playerID; // 0x5C
public:
	BattleCallAnimationPlayerWin(const BattleCallAnimationPlayerWin &);
	BattleCallAnimationPlayerWin(PLAYER_ID);
	virtual ~BattleCallAnimationPlayerWin();
private:
	SoundId getAnnouncerVoiceSoundID();
protected:
	virtual void readResources();
	virtual bool updateAnimations(float);
	virtual void drawAnimations(float);
private:
	void readResources_EN();
	void drawAnimations_EN(float);
	void readResources_CN();
	void drawAnimations_CN(float);
public:
	BattleCallAnimationPlayerWin & operator=(const BattleCallAnimationPlayerWin &);
};