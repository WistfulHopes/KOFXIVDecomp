#pragma once

class AgMoviePlayer :
	AgReferencedObject
{
public:
	AgMoviePlayer(const AgMoviePlayer &);
	AgMoviePlayer();
	~AgMoviePlayer();
	long start(const AgString &, long);
	void stop();
	AgPointer<AgMemoryStream> getFrame(long);
	long getWidth();
	long getStride();
	long getHeight();
	long isStarted();
	long isFinished();
	void setVolume(float);
	long getElapsedTimeMS();
	void setElapsedTimeMS();
	struct InternalData;
protected:
	AgMoviePlayer::InternalData * m_internalData; // 0x8
public:
	AgMoviePlayer & operator=(const AgMoviePlayer &);
};
class AgPointer<AgMemoryStream>
{
public:
	AgPointer<AgMemoryStream>(const AgReference<AgMemoryStream> &);
	AgPointer<AgMemoryStream>(AgPointer<AgMemoryStream> &);
	AgPointer<AgMemoryStream>(const AgPointer<AgMemoryStream> &);
	AgPointer<AgMemoryStream>(AgMemoryStream *);
	AgPointer<AgMemoryStream>();
	~AgPointer<AgMemoryStream>();
	AgPointer<AgMemoryStream> & operator=(AgPointer<AgMemoryStream> &);
	AgPointer<AgMemoryStream> & operator=(const AgReference<AgMemoryStream> &);
	AgPointer<AgMemoryStream> & operator=(const AgPointer<AgMemoryStream> &);
	AgPointer<AgMemoryStream> & operator=(AgMemoryStream *);
	bool operator<(const AgPointer<AgMemoryStream> &);
	AgMemoryStream * operator->();
	AgMemoryStream & operator*();
	bool operator==(const AgPointer<AgMemoryStream> &);
	bool operator==(AgMemoryStream *);
	bool operator!=(const AgPointer<AgMemoryStream> &);
	bool operator!=(AgMemoryStream *);
	AgMemoryStream * getObject();
	void swap(AgPointer<AgMemoryStream> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgMemoryStream * m_ptr; // 0x8
};
class AgMoviePlayerPlaybackThreadHost :
	AgIThreadHost
{
public:
	AgMoviePlayerPlaybackThreadHost(AgMoviePlayerPlaybackThreadHost &);
	AgMoviePlayerPlaybackThreadHost(const AgMoviePlayerPlaybackThreadHost &);
	AgMoviePlayerPlaybackThreadHost(AgMoviePlayer *, AgMoviePlayer::InternalData *);
	virtual void onExecuteThread();
	virtual void onJoinThread();
	virtual long getThreadIsRunning();
private:
	AgMoviePlayer * m_moviePlayer; // 0x8
	AgMoviePlayer::InternalData * m_internalData; // 0x10
public:
	virtual ~AgMoviePlayerPlaybackThreadHost();
	AgMoviePlayerPlaybackThreadHost & operator=(AgMoviePlayerPlaybackThreadHost &);
	AgMoviePlayerPlaybackThreadHost & operator=(const AgMoviePlayerPlaybackThreadHost &);
};
class AgMoviePlayerDecodeThreadHost :
	AgIThreadHost
{
public:
	AgMoviePlayerDecodeThreadHost(AgMoviePlayerDecodeThreadHost &);
	AgMoviePlayerDecodeThreadHost(const AgMoviePlayerDecodeThreadHost &);
	AgMoviePlayerDecodeThreadHost(AgMoviePlayer *, AgMoviePlayer::InternalData *);
	virtual void onExecuteThread();
	virtual void onJoinThread();
	virtual long getThreadIsRunning();
private:
	AgMoviePlayer * m_moviePlayer; // 0x8
	AgMoviePlayer::InternalData * m_internalData; // 0x10
public:
	virtual ~AgMoviePlayerDecodeThreadHost();
	AgMoviePlayerDecodeThreadHost & operator=(AgMoviePlayerDecodeThreadHost &);
	AgMoviePlayerDecodeThreadHost & operator=(const AgMoviePlayerDecodeThreadHost &);
};