#pragma once

class MovieData
{
private:
	static MovieData * movieData; // 0xFFFFFFFFFFFFFFFF
public:
	MovieData(const MovieData &);
	MovieData();
	~MovieData();
	static MovieData & getInstance();
	enum PLAY_STATUS
	{
		BLANK = 0,
		REQUESTED = 1,
		LOAD = 2,
		PLAY = 3,
		STOP = 4,
	};
	void Initialize();
	void Finalize(bool);
	void SetMovieID(MOVIE_ID);
	MOVIE_ID GetMovieID();
	void LoadCSV(MOVIE_ID);
	void LoadCSV();
	void LoadGFX(MOVIE_ID);
	void LoadGFX();
	void UpdateGFX();
	void UpdateTelop();
	void SetTelopMode(long);
	void SetTelop(const char *, bool);
	void RemoveTelop(bool);
	void LoadBank(MOVIE_ID);
	void LoadBank();
	bool HasSoundBank(MOVIE_ID);
	bool HasSoundBank();
	void SoundPlayImpl(unsigned long long);
	void PlayRequest(MOVIE_ID, long);
	void ClearRequest();
	void PlayRequestImpl();
	bool Play(MOVIE_ID);
	bool Play();
	void Update();
	void Skip();
	void Draw(OGLRender *, long, long, long, long, bool);
	bool IsPlayEnd();
	bool IsPlaying();
	void Stop(bool);
	void SetStatus(MovieData::PLAY_STATUS);
	MovieData::PLAY_STATUS GetStatus();
	static const MovieDataInfo * GetDataInfo(MOVIE_ID);
	static const char * GetMovieDescription(MOVIE_ID);
	const char * GetMovieDescription();
	void setViewport(Scaleform::GFx::Viewport &);
private:
	MovieData::PLAY_STATUS m_bPlay; // 0x0
	bool m_Audio; // 0x4
	bool m_Video; // 0x5
	bool m_Telop; // 0x6
	MOVIE_ID m_requestMovie; // 0x8
	MOVIE_ID m_currentMovie; // 0xC
	static CMediaPlayer * mvplayer; // 0xFFFFFFFFFFFFFFFF
	long m_waitFrame; // 0x10
	MovieTelopInfo * m_TelopInfo; // 0x18
	long m_TelopNum; // 0x20
	long m_TelopStep; // 0x24
	long m_TelopCurrent; // 0x28
	long m_timeOut; // 0x2C
	extension::GFXIMovie m_GFXMovie; // 0x30
	extension::BasicFutureObject<extension::GFXIMovieData,void> m_FutureGFXMovie; // 0x38
public:
	MovieData & operator=(const MovieData &);
};
MovieData & MovieData::getInstance(); // 0x140098920