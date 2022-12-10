#pragma once

class CMediaSound
{
public:
	CMediaSound(const CMediaSound &);
	CMediaSound();
	~CMediaSound();
	void initialize();
	void finalize();
	void clear();
	unsigned char loadData(const _SND_BANK_DATA *, const char *, long, unsigned char);
	void Use(CAudioPresenter *);
	void Unuse(CAudioPresenter *);
	unsigned char useCheck(CAudioPresenter *);
	unsigned char CreatePlayerFromFile(const _SND_BANK_DATA *, const char *, long, unsigned char);
	void * getPCMData(long);
	void * getPCMData();
	long getPCMLoopDataSize();
	long getPCMIntroDataSize();
	long getPCMDataSize();
	long getLoadCount();
	unsigned char isBufferData();
private:
	CAudioPresenter * m_pRef[32]; // 0x0
public:
	AgPointer<AgSharedInstance<AgMutex> > m_ThreadMutex; // 0x100
	long * m_ThreadState; // 0x110
	long m_LoadCount; // 0x118
	_SND_BANK_INFO m_BankInfo; // 0x120
	unsigned char m_oggFlg; // 0x168
	const _SND_BANK_INFO * Info();
	CMediaSound & operator=(const CMediaSound &);
};