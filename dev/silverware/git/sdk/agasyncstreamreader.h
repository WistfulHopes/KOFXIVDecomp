#pragma once

class AgAsyncStreamReader :
	AgStream,
	protected AgIThreadHost
{
public:
	AgAsyncStreamReader(AgPointer<AgStream>, unsigned long, unsigned long long, unsigned long long, unsigned long long);
	virtual ~AgAsyncStreamReader();
	virtual unsigned long read(unsigned char *, unsigned long);
	virtual unsigned long write(const unsigned char *, unsigned long);
	virtual unsigned long long getSize();
	virtual void setPosition(unsigned long long);
	virtual unsigned long long getPosition();
	virtual void onExecuteThread();
	virtual void onJoinThread();
	virtual long getThreadIsRunning();
protected:
	void handleEndOfStreamWrite();
	void handleEndOfStreamRead();
	AgMutex m_mutex; // 0x18
	unsigned long m_numBlocks; // 0x40
	unsigned long m_blockSize; // 0x44
	unsigned long long m_streamOffset; // 0x48
	unsigned long long m_streamSize; // 0x50
	unsigned long m_writeCursor; // 0x58
	unsigned long m_readCursor; // 0x5C
	unsigned long long m_readPosition; // 0x60
	AgPointer<AgStream> m_stream; // 0x68
	struct Block;
private:
	AgAsyncStreamReader::Block * getReadBlock();
	void pushReadBlock();
	AgAsyncStreamReader::Block * getWriteBlock();
	void pushWriteBlock();
	AgPointer<AgThread> m_loadingThread; // 0x78
	AgAsyncStreamReader::Block * m_blocks; // 0x88
	unsigned char * m_workingBuffer; // 0x90
	AgMutex m_shutdownMutex; // 0x98
	AgCondition m_condition; // 0xC0
	volatile long m_shutdownThread; // 0xF8
	volatile long m_seeking; // 0xFC
};
struct AgAsyncStreamReader::Block
{
	unsigned long long m_positionInStream; // 0x0
	unsigned long long m_size; // 0x8
	unsigned long long m_cursor; // 0x10
	unsigned char * m_data; // 0x18
};
class AgPointer<AgThread>
{
public:
	AgPointer<AgThread>(const AgReference<AgThread> &);
	AgPointer<AgThread>(AgPointer<AgThread> &);
	AgPointer<AgThread>(const AgPointer<AgThread> &);
	AgPointer<AgThread>(AgThread *);
	AgPointer<AgThread>();
	~AgPointer<AgThread>();
	AgPointer<AgThread> & operator=(AgPointer<AgThread> &);
	AgPointer<AgThread> & operator=(const AgReference<AgThread> &);
	AgPointer<AgThread> & operator=(const AgPointer<AgThread> &);
	AgPointer<AgThread> & operator=(AgThread *);
	bool operator<(const AgPointer<AgThread> &);
	AgThread * operator->();
	AgThread & operator*();
	bool operator==(const AgPointer<AgThread> &);
	bool operator==(AgThread *);
	bool operator!=(const AgPointer<AgThread> &);
	bool operator!=(AgThread *);
	AgThread * getObject();
	void swap(AgPointer<AgThread> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgThread * m_ptr; // 0x8
};