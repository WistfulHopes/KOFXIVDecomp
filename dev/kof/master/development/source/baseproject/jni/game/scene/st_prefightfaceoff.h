#pragma once

struct AppMain::PreFightFaceOffParams
{
	AppMain::Scene_PreFightFaceOff * pScene; // 0x0
	long nextFuncST; // 0x8
	long nextFuncBT; // 0xC
	PreFightFaceOffParams();
};