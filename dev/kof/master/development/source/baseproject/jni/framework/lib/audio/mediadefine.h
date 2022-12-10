#pragma once

struct _SND_BANK_DATA
{
	float start; // 0x0
	float end; // 0x4
	char loop; // 0x8
	char vol; // 0x9
};
struct _SND_BANK_INFO
{
	char * filePath; // 0x0
	short * bufferPtr; // 0x8
	unsigned char * originPtr; // 0x10
	unsigned long bufferID; // 0x18
	long bufferSize; // 0x1C
	long introSize; // 0x20
	long loopSize; // 0x24
	long channel; // 0x28
	float freq; // 0x2C
	float start; // 0x30
	float end; // 0x34
	char loop; // 0x38
	char vol; // 0x39
	float total; // 0x3C
	float offset; // 0x40
	long sizeofsecond; // 0x44
};
struct _SND_PLAYER_INFO
{
	long Flg; // 0x0
	long loopCount; // 0x4
	long loopCountUp; // 0x8
	long vol; // 0xC
	long prio; // 0x10
	long port; // 0x14
	float pausePos; // 0x18
	float pausePosB; // 0x1C
	long suspend; // 0x20
	long introFlg; // 0x24
	long introSuspendFlg; // 0x28
	long pauseFlg; // 0x2C
	unsigned char bLoop; // 0x30
	float offset; // 0x34
	long deley; // 0x38
};
struct _WAV_HEADER
{
	short wFormatTag; // 0x0
	short nChannels; // 0x2
	long nSamplesPerSec; // 0x4
	long nAvgBytesPerSec; // 0x8
	short nBlockAlign; // 0xC
	short wBitsPerSample; // 0xE
};