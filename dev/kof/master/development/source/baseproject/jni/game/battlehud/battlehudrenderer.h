#pragma once

struct BattleHudRenderer::RenderParams
{
	long positionPlusX; // 0x0
	long positionPlusY; // 0x4
	unsigned long gaugeRenderColor; // 0x8
	unsigned long barRenderColor; // 0xC
	float barLengthRate; // 0x10
	RenderParams();
	void setDefaultParam();
};