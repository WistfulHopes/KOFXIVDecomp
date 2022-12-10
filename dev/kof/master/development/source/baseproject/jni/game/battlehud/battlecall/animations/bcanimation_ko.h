#pragma once

class BattleCallAnimationKO :
	BattleCallAnimation,
	protected BattleCallAnimationCommons
{
private:
	SoundId m_koVoiceSoundID; // 0x5C
public:
	BattleCallAnimationKO(const BattleCallAnimationKO &);
	BattleCallAnimationKO(SoundId);
	virtual ~BattleCallAnimationKO();
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
	BattleCallAnimationKO & operator=(const BattleCallAnimationKO &);
};