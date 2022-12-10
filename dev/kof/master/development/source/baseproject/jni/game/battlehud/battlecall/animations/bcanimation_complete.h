#pragma once

class BattleCallAnimationComplete :
	BattleCallAnimation
{
public:
	BattleCallAnimationComplete(const BattleCallAnimationComplete &);
	BattleCallAnimationComplete();
	virtual ~BattleCallAnimationComplete();
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
	BattleCallAnimationComplete & operator=(const BattleCallAnimationComplete &);
};