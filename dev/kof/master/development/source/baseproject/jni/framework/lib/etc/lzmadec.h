#pragma once

struct _CLzmaProps
{
	unsigned long lc; // 0x0
	unsigned long lp; // 0x4
	unsigned long pb; // 0x8
	unsigned long dicSize; // 0xC
};
struct CLzmaDec
{
	_CLzmaProps prop; // 0x0
	unsigned short * probs; // 0x10
	unsigned char * dic; // 0x18
	const unsigned char * buf; // 0x20
	unsigned long range; // 0x28
	unsigned long code; // 0x2C
	unsigned long dicPos; // 0x30
	unsigned long dicBufSize; // 0x34
	unsigned long processedPos; // 0x38
	unsigned long checkDicSize; // 0x3C
	unsigned long state; // 0x40
	unsigned long reps[4]; // 0x44
	unsigned long remainLen; // 0x54
	long needFlush; // 0x58
	long needInitState; // 0x5C
	unsigned long numProbs; // 0x60
	unsigned long tempBufSize; // 0x64
	unsigned char tempBuf[20]; // 0x68
};
enum ELzmaFinishMode
{
	LZMA_FINISH_ANY = 0,
	LZMA_FINISH_END = 1,
};
enum ELzmaStatus
{
	LZMA_STATUS_NOT_SPECIFIED = 0,
	LZMA_STATUS_FINISHED_WITH_MARK = 1,
	LZMA_STATUS_NOT_FINISHED = 2,
	LZMA_STATUS_NEEDS_MORE_INPUT = 3,
	LZMA_STATUS_MAYBE_FINISHED_WITHOUT_MARK = 4,
};