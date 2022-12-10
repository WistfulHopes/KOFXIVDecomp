#pragma once

class BattleCallAnimationYouLose :
	BattleCallAnimation
{
public:
	BattleCallAnimationYouLose(const BattleCallAnimationYouLose &);
	BattleCallAnimationYouLose();
	virtual ~BattleCallAnimationYouLose();
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
	BattleCallAnimationYouLose & operator=(const BattleCallAnimationYouLose &);
};