#pragma once

struct GENERAL_TASK_BASE
{
	void onInit();
	void onRelease();
	long(*pFunc)(GENERAL_TASK_BASE *); // 0x0
	long(*pBeforeFunc)(GENERAL_TASK_BASE *); // 0x8
	GENERAL_TASK_BASE * pBefore; // 0x10
	GENERAL_TASK_BASE * pNext; // 0x18
	GENERAL_TASK_BASE * pParent; // 0x20
	long iChildNum; // 0x28
	long iPriority; // 0x2C
	long iStat; // 0x30
	long iTaskID; // 0x34
	long(*pPreFunc)(GENERAL_TASK_BASE *); // 0x38
	long(*pLateFunc)(GENERAL_TASK_BASE *); // 0x40
	void * pOptParam; // 0x48
	void(*pReleaseFunc)(GENERAL_TASK_BASE *); // 0x50
	void(*pDrawFunc)(GENERAL_TASK_BASE *); // 0x58
	long iTaskCategory; // 0x60
	long iActCategory; // 0x64
	long iChNo; // 0x68
	long iCharNo; // 0x6C
	long iActNo; // 0x70
	long iActNoC; // 0x74
	long iActTimer; // 0x78
	long iActPointer; // 0x7C
	long iPatternNo; // 0x80
	long iPatternNoTmp; // 0x84
	long iPatternNoR; // 0x88
	long iTexOffset; // 0x8C
	long iDrawPri; // 0x90
	long iWork0; // 0x94
	long iWork1; // 0x98
	long iWork2; // 0x9C
	long iWork3; // 0xA0
	long iFlg1; // 0xA4
	long iFlg1a; // 0xA8
	long iFlg2; // 0xAC
	long iFlg2a; // 0xB0
	long iFlg3; // 0xB4
	OGLVec3 vPos; // 0xB8
	OGLVec3 vPosS; // 0xC4
	OGLVec3 vPosE; // 0xD0
	OGLVec3 vMov; // 0xDC
	OGLVec3 vAdd; // 0xE8
	OGLVec3 vOff; // 0xF4
	OGLVec3 vScale; // 0x100
	OGLVec3 vScaleEx; // 0x10C
	OGLVec3 vAngle; // 0x118
	float iFogColor[4]; // 0x124
	long iRenderMode; // 0x134
	long iRenderAlpha; // 0x138
	long iRenderAlphaS; // 0x13C
	long iRenderAlphaE; // 0x140
	long iRenderColor; // 0x144
	long iPlayCount; // 0x148
	long iTimeCount; // 0x14C
	long iWaitCount; // 0x150
	long iMoveType; // 0x154
	long iMoveCount; // 0x158
	long iMoveCountStart; // 0x15C
	long iMotionIndex; // 0x160
	long iMotionFrame; // 0x164
	float fAngle; // 0x168
	long iCFlg; // 0x16C
	GENERAL_TASK_BASE * pWorkTask; // 0x170
	GENERAL_TASK_BASE * pWorkTask2; // 0x178
	GENERAL_TASK_BASE(GENERAL_TASK_BASE &);
	GENERAL_TASK_BASE(const GENERAL_TASK_BASE &);
	GENERAL_TASK_BASE();
};
struct GENERAL_TASK
{
	void * GetTaskWork(unsigned long long);
	long(*pFunc)(GENERAL_TASK *); // 0x0
	long(*pBeforeFunc)(GENERAL_TASK *); // 0x8
	GENERAL_TASK * pBefore; // 0x10
	GENERAL_TASK * pNext; // 0x18
	GENERAL_TASK * pParent; // 0x20
	long iChildNum; // 0x28
	long iPriority; // 0x2C
	long iStat; // 0x30
	long iTaskID; // 0x34
	long(*pPreFunc)(GENERAL_TASK *); // 0x38
	long(*pLateFunc)(GENERAL_TASK *); // 0x40
	long iTaskCategory; // 0x48
	void * pBuffer; // 0x50
};