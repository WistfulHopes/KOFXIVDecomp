#pragma once

class CTaskSystem
{
private:
	GENERAL_TASK * pRealiz; // 0x0
	GENERAL_TASK * * ppPriStart; // 0x8
	GENERAL_TASK * * ppPriEnd; // 0x10
	GENERAL_TASK * pEmpty; // 0x18
	long iTaskMax; // 0x20
	long iMaxPriority; // 0x24
	long * pAliveNum; // 0x28
	long iAliveTotal; // 0x30
	long iTaskID; // 0x34
	char * pBuffer; // 0x38
	enum GT_STAT
	{
		GT_STAT_ALIVE = 1,
		GT_STAT_MY_DIE = 2,
		GT_STAT_CHILD_DIE = 4,
		GT_STAT_AFTER_DIE = 8,
		GT_STAT_SHIFT = 8,
		GT_STAT_MASK = 15,
		GT_STAT_MAIN_THROW = 16,
		GT_STAT_EXE = 256,
	};
	enum GT_RET
	{
		GT_RET_ALIVE = 0,
		GT_RET_MY_DIE = 2,
		GT_RET_CHILD_DIE = 4,
		GT_RET_AFTER_DIE = 8,
		GT_RET_ALIVE_THROW = 16,
		GT_RET_MY_DIE_THROW = 18,
	};
public:
	unsigned char initialize(long, long);
	void finalize();
	GENERAL_TASK * Entry(long(*)(GENERAL_TASK *), long, long, GENERAL_TASK *);
	void Caller(long);
	void Caller(long, long);
	void Caller();
	static void Change(long(*)(GENERAL_TASK *), GENERAL_TASK *);
	static void ChangeBeforeFunc(GENERAL_TASK *);
	unsigned char Delete(GENERAL_TASK *);
	void AllDelete(long);
	void AllDelete();
	unsigned char Kill(GENERAL_TASK *);
	void AllKill(long);
	void AllKill();
	void Apart(GENERAL_TASK *);
	long GetTotalTask();
	long GetPriTask(long);
	GENERAL_TASK * GetPriStart(long);
	GENERAL_TASK * GetTask();
};
class CTaskSystem2D
{
private:
	GENERAL_TASK_BASE * pRealiz; // 0x0
	GENERAL_TASK_BASE * * ppPriStart; // 0x8
	GENERAL_TASK_BASE * * ppPriEnd; // 0x10
	GENERAL_TASK_BASE * pEmpty; // 0x18
	long iTaskMax; // 0x20
	long iMaxPriority; // 0x24
	long * pAliveNum; // 0x28
	long iAliveTotal; // 0x30
	long iTaskID; // 0x34
	enum GT_STAT
	{
		GT_STAT_ALIVE = 1,
		GT_STAT_MY_DIE = 2,
		GT_STAT_CHILD_DIE = 4,
		GT_STAT_AFTER_DIE = 8,
		GT_STAT_SHIFT = 8,
		GT_STAT_MASK = 15,
		GT_STAT_MAIN_THROW = 16,
		GT_STAT_EXE = 256,
	};
	enum GT_RET
	{
		GT_RET_ALIVE = 0,
		GT_RET_MY_DIE = 2,
		GT_RET_CHILD_DIE = 4,
		GT_RET_AFTER_DIE = 8,
		GT_RET_ALIVE_THROW = 16,
		GT_RET_MY_DIE_THROW = 18,
	};
public:
	unsigned char initialize(long, long);
	void finalize();
	GENERAL_TASK_BASE * Entry(long(*)(GENERAL_TASK_BASE *), long, long, GENERAL_TASK_BASE *);
	void Caller(long);
	void Caller(long, long);
	void Caller();
	static void Change(long(*)(GENERAL_TASK_BASE *), GENERAL_TASK_BASE *);
	static void ChangeBeforeFunc(GENERAL_TASK_BASE *);
	unsigned char Delete(GENERAL_TASK_BASE *);
	void AllDelete(long);
	void AllDelete();
	unsigned char Kill(GENERAL_TASK_BASE *);
	void AllKill(long);
	void AllKill();
	void Apart(GENERAL_TASK_BASE *);
	long GetTotalTask();
	long GetPriTask(long);
	GENERAL_TASK_BASE * GetPriStart(long);
	GENERAL_TASK_BASE * GetTask();
};