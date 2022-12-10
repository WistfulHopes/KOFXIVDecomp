#pragma once

class extension::lockable_detail::LockableBase
{
public:
	LockableBase();
private:
	LockableBase(extension::lockable_detail::LockableBase &);
	extension::lockable_detail::LockableBase & operator=(const extension::lockable_detail::LockableBase &);
public:
	~LockableBase();
	void lock();
	void unlock();
	long recursiveLockCount();
private:
	long m_recursiveLockCount; // 0x0
	AgMutex m_agMutex; // 0x4
};
class extension::lockable_detail::SimpleLockableBase
{
public:
	SimpleLockableBase();
private:
	SimpleLockableBase(extension::lockable_detail::SimpleLockableBase &);
	extension::lockable_detail::SimpleLockableBase & operator=(const extension::lockable_detail::SimpleLockableBase &);
public:
	~SimpleLockableBase();
	void lock();
	void unlock();
private:
	AgMutex m_agMutex; // 0x0
};
class extension::ExLockableLock<extension::ExLockable<extension::ExMutex> >
{
public:
	ExLockableLock<extension::ExLockable<extension::ExMutex> >(extension::ExLockable<extension::ExMutex> &);
private:
	ExLockableLock<extension::ExLockable<extension::ExMutex> >(const extension::ExLockableLock<extension::ExLockable<extension::ExMutex> > &);
	extension::ExLockableLock<extension::ExLockable<extension::ExMutex> > & operator=(const extension::ExLockableLock<extension::ExLockable<extension::ExMutex> > &);
public:
	~ExLockableLock<extension::ExLockable<extension::ExMutex> >();
	bool isLocked();
	void unlockAll();
	void lock();
private:
	extension::ExLockable<extension::ExMutex> & m_associated; // 0x0
	long m_ownsLockCount; // 0x8
};
class extension::ExLockableLock<extension::ExLockable<extension::GFXIFontManager> >
{
public:
	ExLockableLock<extension::ExLockable<extension::GFXIFontManager> >(extension::ExLockable<extension::GFXIFontManager> &);
private:
	ExLockableLock<extension::ExLockable<extension::GFXIFontManager> >(const extension::ExLockableLock<extension::ExLockable<extension::GFXIFontManager> > &);
	extension::ExLockableLock<extension::ExLockable<extension::GFXIFontManager> > & operator=(const extension::ExLockableLock<extension::ExLockable<extension::GFXIFontManager> > &);
public:
	~ExLockableLock<extension::ExLockable<extension::GFXIFontManager> >();
	bool isLocked();
	void unlockAll();
	void lock();
private:
	extension::ExLockable<extension::GFXIFontManager> & m_associated; // 0x0
	long m_ownsLockCount; // 0x8
};
extension::ExLockable<extension::GFXIFontManager>::~ExLockable<extension::GFXIFontManager>(); // 0x140277040
class extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache> >
{
public:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache> >(extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache> &);
private:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache> >(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache> > &);
	extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache> > & operator=(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache> > &);
public:
	~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache> >();
	bool isLocked();
	void unlockAll();
	void lock();
private:
	extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache> & m_associated; // 0x0
	long m_ownsLockCount; // 0x8
};
class extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache> >
{
public:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache> >(extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache> &);
private:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache> >(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache> > &);
	extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache> > & operator=(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache> > &);
public:
	~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache> >();
	bool isLocked();
	void unlockAll();
	void lock();
private:
	extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache> & m_associated; // 0x0
	long m_ownsLockCount; // 0x8
};
class extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache> >
{
public:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache> >(extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache> &);
private:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache> >(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache> > &);
	extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache> > & operator=(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache> > &);
public:
	~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache> >();
	bool isLocked();
	void unlockAll();
	void lock();
private:
	extension::ExSimpleLockable<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache> & m_associated; // 0x0
	long m_ownsLockCount; // 0x8
};
class extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache> >
{
public:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache> >(extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache> &);
private:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache> >(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache> > &);
	extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache> > & operator=(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache> > &);
public:
	~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache> >();
	bool isLocked();
	void unlockAll();
	void lock();
private:
	extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache> & m_associated; // 0x0
	long m_ownsLockCount; // 0x8
};
class extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache> >
{
public:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache> >(extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache> &);
private:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache> >(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache> > &);
	extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache> > & operator=(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache> > &);
public:
	~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache> >();
	bool isLocked();
	void unlockAll();
	void lock();
private:
	extension::ExSimpleLockable<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache> & m_associated; // 0x0
	long m_ownsLockCount; // 0x8
};
class extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache> >
{
public:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache> >(extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache> &);
private:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache> >(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache> > &);
	extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache> > & operator=(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache> > &);
public:
	~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache> >();
	bool isLocked();
	void unlockAll();
	void lock();
private:
	extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache> & m_associated; // 0x0
	long m_ownsLockCount; // 0x8
};
class extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache> >
{
public:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache> >(extension::ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache> &);
private:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache> >(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache> > &);
	extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache> > & operator=(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache> > &);
public:
	~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache> >();
	bool isLocked();
	void unlockAll();
	void lock();
private:
	extension::ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache> & m_associated; // 0x0
	long m_ownsLockCount; // 0x8
};
class extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLMotion,void>::AssetCache> >
{
public:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLMotion,void>::AssetCache> >(extension::ExSimpleLockable<extension::BasicFutureObject<OGLMotion,void>::AssetCache> &);
private:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLMotion,void>::AssetCache> >(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLMotion,void>::AssetCache> > &);
	extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLMotion,void>::AssetCache> > & operator=(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLMotion,void>::AssetCache> > &);
public:
	~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLMotion,void>::AssetCache> >();
	bool isLocked();
	void unlockAll();
	void lock();
private:
	extension::ExSimpleLockable<extension::BasicFutureObject<OGLMotion,void>::AssetCache> & m_associated; // 0x0
	long m_ownsLockCount; // 0x8
};
class extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache> >
{
public:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache> >(extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache> &);
private:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache> >(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache> > &);
	extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache> > & operator=(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache> > &);
public:
	~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache> >();
	bool isLocked();
	void unlockAll();
	void lock();
private:
	extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache> & m_associated; // 0x0
	long m_ownsLockCount; // 0x8
};
class extension::ExLockableLock<extension::ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> > >
{
public:
	ExLockableLock<extension::ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> > >(extension::ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> > &);
private:
	ExLockableLock<extension::ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> > >(const extension::ExLockableLock<extension::ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> > > &);
	extension::ExLockableLock<extension::ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> > > & operator=(const extension::ExLockableLock<extension::ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> > > &);
public:
	~ExLockableLock<extension::ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> > >();
	bool isLocked();
	void unlockAll();
	void lock();
private:
	extension::ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> > & m_associated; // 0x0
	long m_ownsLockCount; // 0x8
};
class extension::ExLockableLock<extension::ExSimpleLockable<extension::ExSimpleMutex> >
{
public:
	ExLockableLock<extension::ExSimpleLockable<extension::ExSimpleMutex> >(extension::ExSimpleLockable<extension::ExSimpleMutex> &);
private:
	ExLockableLock<extension::ExSimpleLockable<extension::ExSimpleMutex> >(const extension::ExLockableLock<extension::ExSimpleLockable<extension::ExSimpleMutex> > &);
	extension::ExLockableLock<extension::ExSimpleLockable<extension::ExSimpleMutex> > & operator=(const extension::ExLockableLock<extension::ExSimpleLockable<extension::ExSimpleMutex> > &);
public:
	~ExLockableLock<extension::ExSimpleLockable<extension::ExSimpleMutex> >();
	bool isLocked();
	void unlockAll();
	void lock();
private:
	extension::ExSimpleLockable<extension::ExSimpleMutex> & m_associated; // 0x0
	long m_ownsLockCount; // 0x8
};
class extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache> >
{
public:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache> >(extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache> &);
private:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache> >(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache> > &);
	extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache> > & operator=(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache> > &);
public:
	~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache> >();
	bool isLocked();
	void unlockAll();
	void lock();
private:
	extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache> & m_associated; // 0x0
	long m_ownsLockCount; // 0x8
};
class extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache> >
{
public:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache> >(extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache> &);
private:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache> >(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache> > &);
	extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache> > & operator=(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache> > &);
public:
	~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache> >();
	bool isLocked();
	void unlockAll();
	void lock();
private:
	extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache> & m_associated; // 0x0
	long m_ownsLockCount; // 0x8
};
class extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache> >
{
public:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache> >(extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache> &);
private:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache> >(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache> > &);
	extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache> > & operator=(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache> > &);
public:
	~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache> >();
	bool isLocked();
	void unlockAll();
	void lock();
private:
	extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache> & m_associated; // 0x0
	long m_ownsLockCount; // 0x8
};
class extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache> >
{
public:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache> >(extension::ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache> &);
private:
	ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache> >(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache> > &);
	extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache> > & operator=(const extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache> > &);
public:
	~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache> >();
	bool isLocked();
	void unlockAll();
	void lock();
private:
	extension::ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache> & m_associated; // 0x0
	long m_ownsLockCount; // 0x8
};
extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache>::~ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache>(); // 0x14002F9D0
extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache>::~ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache>(); // 0x14002F9D0
extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache>::~ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache>(); // 0x14002F9D0
extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache>::~ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache>(); // 0x14002F9D0
extension::ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache>::~ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache>(); // 0x14002F9D0
extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache>::~ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache>(); // 0x14002F9D0
extension::ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> >::~ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> >(); // 0x14002F9D0
extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache>::~ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache>(); // 0x14002F9D0
extension::ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache>::~ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache>(); // 0x14002F9D0
extension::ExLockableLock<extension::ExLockable<extension::ExMutex> >::~ExLockableLock<extension::ExLockable<extension::ExMutex> >(); // 0x14009E090
extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache> >::~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache> >(); // 0x1400A2DD0
extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache> >::~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache> >(); // 0x1400A2DD0
extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache> >::~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCurve,void>::AssetCache> >(); // 0x1400A2DD0
extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache> >::~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache> >(); // 0x1400A2DD0
extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache> >::~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLMirror,void>::AssetCache> >(); // 0x1400A2DD0
extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache> >::~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache> >(); // 0x1400A2DD0
extension::ExLockableLock<extension::ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> > >::~ExLockableLock<extension::ExSimpleLockable<extension::SynchronizedQueue<extension::ExThread::Runnable> > >(); // 0x1400A2DD0
extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache> >::~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache> >(); // 0x1400A2DD0
extension::ExLockableLock<extension::ExLockable<extension::GFXIFontManager> >::~ExLockableLock<extension::ExLockable<extension::GFXIFontManager> >(); // 0x14009E090
extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache> >::~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::AssetCache> >(); // 0x1400A2DD0
class extension::ExLockable<extension::ExMutex> :
	protected extension::lockable_detail::LockableBase
{
public:
	ExLockable<extension::ExMutex>();
private:
	ExLockable<extension::ExMutex>(const extension::ExLockable<extension::ExMutex> &);
	extension::ExLockable<extension::ExMutex> & operator=(const extension::ExLockable<extension::ExMutex> &);
	class ScopedLock_t;
protected:
	~ExLockable<extension::ExMutex>();
};
class extension::ExMutex :
	extension::ExLockable<extension::ExMutex>
{
public:
	ExMutex();
	~ExMutex();
};
class extension::ExSimpleLockable<extension::ExSimpleMutex> :
	protected extension::lockable_detail::SimpleLockableBase
{
public:
	ExSimpleLockable<extension::ExSimpleMutex>();
private:
	ExSimpleLockable<extension::ExSimpleMutex>(const extension::ExSimpleLockable<extension::ExSimpleMutex> &);
	extension::ExSimpleLockable<extension::ExSimpleMutex> & operator=(const extension::ExSimpleLockable<extension::ExSimpleMutex> &);
	class ScopedLock_t;
protected:
	~ExSimpleLockable<extension::ExSimpleMutex>();
};
class extension::ExSimpleMutex :
	extension::ExSimpleLockable<extension::ExSimpleMutex>
{
public:
	ExSimpleMutex();
	~ExSimpleMutex();
};