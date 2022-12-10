#pragma once

class BattleCallAnimationPerfect :
	BattleCallAnimation
{
public:
	BattleCallAnimationPerfect(const BattleCallAnimationPerfect &);
	BattleCallAnimationPerfect();
	virtual ~BattleCallAnimationPerfect();
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
	BattleCallAnimationPerfect & operator=(const BattleCallAnimationPerfect &);
};