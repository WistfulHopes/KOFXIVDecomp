#pragma once

class BattleCallAnimationDoubleKO :
	BattleCallAnimation,
	protected BattleCallAnimationCommons
{
public:
	BattleCallAnimationDoubleKO(const BattleCallAnimationDoubleKO &);
	BattleCallAnimationDoubleKO();
	virtual ~BattleCallAnimationDoubleKO();
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
	BattleCallAnimationDoubleKO & operator=(const BattleCallAnimationDoubleKO &);
};