#pragma once

class BattleCallAnimationDraw :
	BattleCallAnimation
{
public:
	BattleCallAnimationDraw(const BattleCallAnimationDraw &);
	BattleCallAnimationDraw();
	virtual ~BattleCallAnimationDraw();
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
	BattleCallAnimationDraw & operator=(const BattleCallAnimationDraw &);
};