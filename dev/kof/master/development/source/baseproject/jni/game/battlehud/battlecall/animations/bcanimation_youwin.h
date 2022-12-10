#pragma once

class BattleCallAnimationYouWin :
	BattleCallAnimation,
	protected BattleCallAnimationCommons
{
public:
	BattleCallAnimationYouWin(const BattleCallAnimationYouWin &);
	BattleCallAnimationYouWin();
	virtual ~BattleCallAnimationYouWin();
private:
	SoundId getAnnouncerVoiceSoundID();
	long getTotalFrame();
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
	BattleCallAnimationYouWin & operator=(const BattleCallAnimationYouWin &);
};