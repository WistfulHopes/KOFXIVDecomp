#pragma once

enum BMV_STATE
{
	BMV_INIT = 0,
	BMV_READY = 1,
	BMV_PLAY = 2,
	BMV_STOP = 3,
	BMV_PAUSE = 4,
	BMV_MAX = 5,
};
class OCMediaMovie
{
protected:
	unsigned char * bTexture; // 0x0
	unsigned char * bTexturesTmp[1]; // 0x8
	long iLoadedPointer; // 0x10
	long iUsedPointer; // 0x14
	OGLTexture * pTexture; // 0x18
	Image * pImage; // 0x20
	long iTexMax; // 0x28
	long iFileType; // 0x2C
	long iFileSize; // 0x30
	double startTime; // 0x38
	double pauseTime; // 0x40
	long iTexCount; // 0x48
	long iStateFlg; // 0x4C
	long iDefaultSize; // 0x50
	unsigned char bSound; // 0x54
	unsigned char * bHeaderData; // 0x58
	unsigned char * bWaveData; // 0x60
	char * filename; // 0x68
	long iWaveSndNo; // 0x70
	long iSystemFlg; // 0x74
	long iStartPointer; // 0x78
	unsigned char bEnableSound; // 0x7C
	unsigned char bLoop; // 0x7D
	unsigned char bNoSkipMode; // 0x7E
private:
	long getFileSizeF(long);
	long getFilePointerF(long);
	long getTexMax();
	unsigned char filestream();
public:
	OCMediaMovie();
	~OCMediaMovie();
	void initialize();
	void finalize();
	unsigned char fileload(const char *, long);
	unsigned char play();
	void stop();
	void pause();
	void resume();
	void suspend();
	unsigned char server();
	Image * getImagePlay();
	OGLTexture * getTexture();
	Image * getImage();
	long getState();
	void setMemory(unsigned char);
	void setLoop(unsigned char);
	long getTexCount();
	void setNoSkipMode(unsigned char);
	void setSoundPlay(unsigned char);
};
class OCMediaMovieLzss
{
protected:
	unsigned char * bTexture; // 0x0
	unsigned char * bTexturesTmp[1]; // 0x8
	long iLoadedPointer; // 0x10
	long iUsedPointer; // 0x14
	OGLTexture * pTexture; // 0x18
	Image * pImage; // 0x20
	long iTexMax; // 0x28
	long iFileType; // 0x2C
	long iFileSize; // 0x30
	double startTime; // 0x38
	double pauseTime; // 0x40
	long iTexCount; // 0x48
	long iStateFlg; // 0x4C
	long iDefaultSize; // 0x50
	long iSrcSize; // 0x54
	unsigned char bSound; // 0x58
	char cComp; // 0x59
	unsigned char * bHeaderData; // 0x60
	unsigned char * bWaveData; // 0x68
	char * filename; // 0x70
	long iWaveSndNo; // 0x78
	long iSystemFlg; // 0x7C
	long iStartPointer; // 0x80
	unsigned char bEnableSound; // 0x84
	unsigned char bLoop; // 0x85
	unsigned char bNoSkipMode; // 0x86
	unsigned char dstData[4194304]; // 0x87
	unsigned char srcData[2097152]; // 0x400087
private:
	long getFileSizeF(long);
	long getFilePointerF(long);
	long getFileSizeSrcF(long);
	long getTexMax();
	unsigned char filestream();
public:
	OCMediaMovieLzss();
	~OCMediaMovieLzss();
	void initialize();
	void finalize();
	unsigned char fileload(const char *, long);
	unsigned char play();
	void stop();
	void pause();
	void resume();
	void suspend();
	unsigned char server();
	Image * getImagePlay();
	OGLTexture * getTexture();
	Image * getImage();
	long getState();
	void setMemory(unsigned char);
	void setLoop(unsigned char);
	long getTexCount();
	void setNoSkipMode(unsigned char);
	void setSoundPlay(unsigned char);
};