#pragma once

class CMediaPlayer
{
private:
	AgPointer<AgMoviePlayer> m_currentMovie; // 0x0
	AgPath m_moviePath; // 0x10
	Image * m_movieTex[3]; // 0x20
	float m_fVolume; // 0x38
	bool m_audioStarted; // 0x3C
	AgString _getMovieFileName(const char *);
public:
	CMediaPlayer(const CMediaPlayer &);
	CMediaPlayer();
	~CMediaPlayer();
	void play(const char *, long, long, float, CAudioPresenter *);
	void stop(unsigned char);
	void exe();
	void close();
	void draw(OGLRender *, float, float, float, float, float, float);
	unsigned char isFinished();
	long getCurrentTime();
	void setCurrentTime(long);
	void setPlayAudioFunc(void(*)(unsigned long long));
	void(*m_PlayAudioFunc)(unsigned long long); // 0x40
	CMediaPlayer & operator=(const CMediaPlayer &);
};
class AgPointer<AgMoviePlayer>
{
public:
	AgPointer<AgMoviePlayer>(const AgReference<AgMoviePlayer> &);
	AgPointer<AgMoviePlayer>(AgPointer<AgMoviePlayer> &);
	AgPointer<AgMoviePlayer>(const AgPointer<AgMoviePlayer> &);
	AgPointer<AgMoviePlayer>(AgMoviePlayer *);
	AgPointer<AgMoviePlayer>();
	~AgPointer<AgMoviePlayer>();
	AgPointer<AgMoviePlayer> & operator=(AgPointer<AgMoviePlayer> &);
	AgPointer<AgMoviePlayer> & operator=(const AgReference<AgMoviePlayer> &);
	AgPointer<AgMoviePlayer> & operator=(const AgPointer<AgMoviePlayer> &);
	AgPointer<AgMoviePlayer> & operator=(AgMoviePlayer *);
	bool operator<(const AgPointer<AgMoviePlayer> &);
	AgMoviePlayer * operator->();
	AgMoviePlayer & operator*();
	bool operator==(const AgPointer<AgMoviePlayer> &);
	bool operator==(AgMoviePlayer *);
	bool operator!=(const AgPointer<AgMoviePlayer> &);
	bool operator!=(AgMoviePlayer *);
	AgMoviePlayer * getObject();
	void swap(AgPointer<AgMoviePlayer> &);
private:
	AgReferenceCount * m_ref; // 0x0
	AgMoviePlayer * m_ptr; // 0x8
};