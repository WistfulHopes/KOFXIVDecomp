#pragma once

class BattleCallAnimationTimeUp :
	BattleCallAnimation
{
public:
	BattleCallAnimationTimeUp(const BattleCallAnimationTimeUp &);
	BattleCallAnimationTimeUp();
	virtual ~BattleCallAnimationTimeUp();
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
	BattleCallAnimationTimeUp & operator=(const BattleCallAnimationTimeUp &);
};