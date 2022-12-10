#pragma once

class AgReference<AgService>
{
public:
	AgReference<AgService>(const AgPointer<AgService> &);
	AgReference<AgService>(const AgReference<AgService> &);
	AgReference<AgService>();
	~AgReference<AgService>();
	AgReference<AgService> operator=(const AgPointer<AgService> &);
	AgReference<AgService> operator=(const AgReference<AgService> &);
	bool operator!=(const AgReference<AgService> &);
	bool operator!=(AgService *);
	bool operator==(const AgReference<AgService> &);
	bool operator==(AgService *);
	AgPointer<AgService> getPtr();
	void swap(AgReference<AgService> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgService * m_ptr; // 0x10
};
class AgReference<AgController>
{
public:
	AgReference<AgController>(const AgPointer<AgController> &);
	AgReference<AgController>(const AgReference<AgController> &);
	AgReference<AgController>();
	~AgReference<AgController>();
	AgReference<AgController> operator=(const AgPointer<AgController> &);
	AgReference<AgController> operator=(const AgReference<AgController> &);
	bool operator!=(const AgReference<AgController> &);
	bool operator!=(AgController *);
	bool operator==(const AgReference<AgController> &);
	bool operator==(AgController *);
	AgPointer<AgController> getPtr();
	void swap(AgReference<AgController> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgController * m_ptr; // 0x10
};
class AgReference<AgStream>
{
public:
	AgReference<AgStream>(const AgPointer<AgStream> &);
	AgReference<AgStream>(const AgReference<AgStream> &);
	AgReference<AgStream>();
	~AgReference<AgStream>();
	AgReference<AgStream> operator=(const AgPointer<AgStream> &);
	AgReference<AgStream> operator=(const AgReference<AgStream> &);
	bool operator!=(const AgReference<AgStream> &);
	bool operator!=(AgStream *);
	bool operator==(const AgReference<AgStream> &);
	bool operator==(AgStream *);
	AgPointer<AgStream> getPtr();
	void swap(AgReference<AgStream> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgStream * m_ptr; // 0x10
};
class AgReference<AgSharedInstance<AgMutex> >
{
public:
	AgReference<AgSharedInstance<AgMutex> >(const AgPointer<AgSharedInstance<AgMutex> > &);
	AgReference<AgSharedInstance<AgMutex> >(const AgReference<AgSharedInstance<AgMutex> > &);
	AgReference<AgSharedInstance<AgMutex> >();
	~AgReference<AgSharedInstance<AgMutex> >();
	AgReference<AgSharedInstance<AgMutex> > operator=(const AgPointer<AgSharedInstance<AgMutex> > &);
	AgReference<AgSharedInstance<AgMutex> > operator=(const AgReference<AgSharedInstance<AgMutex> > &);
	bool operator!=(const AgReference<AgSharedInstance<AgMutex> > &);
	bool operator!=(AgSharedInstance<AgMutex> *);
	bool operator==(const AgReference<AgSharedInstance<AgMutex> > &);
	bool operator==(AgSharedInstance<AgMutex> *);
	AgPointer<AgSharedInstance<AgMutex> > getPtr();
	void swap(AgReference<AgSharedInstance<AgMutex> > &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgSharedInstance<AgMutex> * m_ptr; // 0x10
};
class AgReference<AgJsonNodeData>
{
public:
	AgReference<AgJsonNodeData>(const AgPointer<AgJsonNodeData> &);
	AgReference<AgJsonNodeData>(const AgReference<AgJsonNodeData> &);
	AgReference<AgJsonNodeData>();
	~AgReference<AgJsonNodeData>();
	AgReference<AgJsonNodeData> operator=(const AgPointer<AgJsonNodeData> &);
	AgReference<AgJsonNodeData> operator=(const AgReference<AgJsonNodeData> &);
	bool operator!=(const AgReference<AgJsonNodeData> &);
	bool operator!=(AgJsonNodeData *);
	bool operator==(const AgReference<AgJsonNodeData> &);
	bool operator==(AgJsonNodeData *);
	AgPointer<AgJsonNodeData> getPtr();
	void swap(AgReference<AgJsonNodeData> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgJsonNodeData * m_ptr; // 0x10
};
class AgReference<AgAudioSource>
{
public:
	AgReference<AgAudioSource>(const AgPointer<AgAudioSource> &);
	AgReference<AgAudioSource>(const AgReference<AgAudioSource> &);
	AgReference<AgAudioSource>();
	~AgReference<AgAudioSource>();
	AgReference<AgAudioSource> operator=(const AgPointer<AgAudioSource> &);
	AgReference<AgAudioSource> operator=(const AgReference<AgAudioSource> &);
	bool operator!=(const AgReference<AgAudioSource> &);
	bool operator!=(AgAudioSource *);
	bool operator==(const AgReference<AgAudioSource> &);
	bool operator==(AgAudioSource *);
	AgPointer<AgAudioSource> getPtr();
	void swap(AgReference<AgAudioSource> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgAudioSource * m_ptr; // 0x10
};
class AgReference<AgMemoryStream>
{
public:
	AgReference<AgMemoryStream>(const AgPointer<AgMemoryStream> &);
	AgReference<AgMemoryStream>(const AgReference<AgMemoryStream> &);
	AgReference<AgMemoryStream>();
	~AgReference<AgMemoryStream>();
	AgReference<AgMemoryStream> operator=(const AgPointer<AgMemoryStream> &);
	AgReference<AgMemoryStream> operator=(const AgReference<AgMemoryStream> &);
	bool operator!=(const AgReference<AgMemoryStream> &);
	bool operator!=(AgMemoryStream *);
	bool operator==(const AgReference<AgMemoryStream> &);
	bool operator==(AgMemoryStream *);
	AgPointer<AgMemoryStream> getPtr();
	void swap(AgReference<AgMemoryStream> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgMemoryStream * m_ptr; // 0x10
};
class AgReference<AgAudioChannel>
{
public:
	AgReference<AgAudioChannel>(const AgPointer<AgAudioChannel> &);
	AgReference<AgAudioChannel>(const AgReference<AgAudioChannel> &);
	AgReference<AgAudioChannel>();
	~AgReference<AgAudioChannel>();
	AgReference<AgAudioChannel> operator=(const AgPointer<AgAudioChannel> &);
	AgReference<AgAudioChannel> operator=(const AgReference<AgAudioChannel> &);
	bool operator!=(const AgReference<AgAudioChannel> &);
	bool operator!=(AgAudioChannel *);
	bool operator==(const AgReference<AgAudioChannel> &);
	bool operator==(AgAudioChannel *);
	AgPointer<AgAudioChannel> getPtr();
	void swap(AgReference<AgAudioChannel> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgAudioChannel * m_ptr; // 0x10
};
class AgReference<AgFile>
{
public:
	AgReference<AgFile>(const AgPointer<AgFile> &);
	AgReference<AgFile>(const AgReference<AgFile> &);
	AgReference<AgFile>();
	~AgReference<AgFile>();
	AgReference<AgFile> operator=(const AgPointer<AgFile> &);
	AgReference<AgFile> operator=(const AgReference<AgFile> &);
	bool operator!=(const AgReference<AgFile> &);
	bool operator!=(AgFile *);
	bool operator==(const AgReference<AgFile> &);
	bool operator==(AgFile *);
	AgPointer<AgFile> getPtr();
	void swap(AgReference<AgFile> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgFile * m_ptr; // 0x10
};
class AgReference<AgMoviePlayer>
{
public:
	AgReference<AgMoviePlayer>(const AgPointer<AgMoviePlayer> &);
	AgReference<AgMoviePlayer>(const AgReference<AgMoviePlayer> &);
	AgReference<AgMoviePlayer>();
	~AgReference<AgMoviePlayer>();
	AgReference<AgMoviePlayer> operator=(const AgPointer<AgMoviePlayer> &);
	AgReference<AgMoviePlayer> operator=(const AgReference<AgMoviePlayer> &);
	bool operator!=(const AgReference<AgMoviePlayer> &);
	bool operator!=(AgMoviePlayer *);
	bool operator==(const AgReference<AgMoviePlayer> &);
	bool operator==(AgMoviePlayer *);
	AgPointer<AgMoviePlayer> getPtr();
	void swap(AgReference<AgMoviePlayer> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgMoviePlayer * m_ptr; // 0x10
};
class AgReference<AgThread>
{
public:
	AgReference<AgThread>(const AgPointer<AgThread> &);
	AgReference<AgThread>(const AgReference<AgThread> &);
	AgReference<AgThread>();
	~AgReference<AgThread>();
	AgReference<AgThread> operator=(const AgPointer<AgThread> &);
	AgReference<AgThread> operator=(const AgReference<AgThread> &);
	bool operator!=(const AgReference<AgThread> &);
	bool operator!=(AgThread *);
	bool operator==(const AgReference<AgThread> &);
	bool operator==(AgThread *);
	AgPointer<AgThread> getPtr();
	void swap(AgReference<AgThread> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgThread * m_ptr; // 0x10
};
class AgReference<AgArchive>
{
public:
	AgReference<AgArchive>(const AgPointer<AgArchive> &);
	AgReference<AgArchive>(const AgReference<AgArchive> &);
	AgReference<AgArchive>();
	~AgReference<AgArchive>();
	AgReference<AgArchive> operator=(const AgPointer<AgArchive> &);
	AgReference<AgArchive> operator=(const AgReference<AgArchive> &);
	bool operator!=(const AgReference<AgArchive> &);
	bool operator!=(AgArchive *);
	bool operator==(const AgReference<AgArchive> &);
	bool operator==(AgArchive *);
	AgPointer<AgArchive> getPtr();
	void swap(AgReference<AgArchive> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgArchive * m_ptr; // 0x10
};
class AgReference<KOFApplication>
{
public:
	AgReference<KOFApplication>(const AgPointer<KOFApplication> &);
	AgReference<KOFApplication>(const AgReference<KOFApplication> &);
	AgReference<KOFApplication>();
	~AgReference<KOFApplication>();
	AgReference<KOFApplication> operator=(const AgPointer<KOFApplication> &);
	AgReference<KOFApplication> operator=(const AgReference<KOFApplication> &);
	bool operator!=(const AgReference<KOFApplication> &);
	bool operator!=(KOFApplication *);
	bool operator==(const AgReference<KOFApplication> &);
	bool operator==(KOFApplication *);
	AgPointer<KOFApplication> getPtr();
	void swap(AgReference<KOFApplication> &);
private:
	AgReferenceCount * m_ref; // 0x8
	KOFApplication * m_ptr; // 0x10
};
class AgReference<AgAsyncStreamReader>
{
public:
	AgReference<AgAsyncStreamReader>(const AgPointer<AgAsyncStreamReader> &);
	AgReference<AgAsyncStreamReader>(const AgReference<AgAsyncStreamReader> &);
	AgReference<AgAsyncStreamReader>();
	~AgReference<AgAsyncStreamReader>();
	AgReference<AgAsyncStreamReader> operator=(const AgPointer<AgAsyncStreamReader> &);
	AgReference<AgAsyncStreamReader> operator=(const AgReference<AgAsyncStreamReader> &);
	bool operator!=(const AgReference<AgAsyncStreamReader> &);
	bool operator!=(AgAsyncStreamReader *);
	bool operator==(const AgReference<AgAsyncStreamReader> &);
	bool operator==(AgAsyncStreamReader *);
	AgPointer<AgAsyncStreamReader> getPtr();
	void swap(AgReference<AgAsyncStreamReader> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgAsyncStreamReader * m_ptr; // 0x10
};
class AgReference<AgDirectory>
{
public:
	AgReference<AgDirectory>(const AgPointer<AgDirectory> &);
	AgReference<AgDirectory>(const AgReference<AgDirectory> &);
	AgReference<AgDirectory>();
	~AgReference<AgDirectory>();
	AgReference<AgDirectory> operator=(const AgPointer<AgDirectory> &);
	AgReference<AgDirectory> operator=(const AgReference<AgDirectory> &);
	bool operator!=(const AgReference<AgDirectory> &);
	bool operator!=(AgDirectory *);
	bool operator==(const AgReference<AgDirectory> &);
	bool operator==(AgDirectory *);
	AgPointer<AgDirectory> getPtr();
	void swap(AgReference<AgDirectory> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgDirectory * m_ptr; // 0x10
};
class AgReference<AgBlowfish>
{
public:
	AgReference<AgBlowfish>(const AgPointer<AgBlowfish> &);
	AgReference<AgBlowfish>(const AgReference<AgBlowfish> &);
	AgReference<AgBlowfish>();
	~AgReference<AgBlowfish>();
	AgReference<AgBlowfish> operator=(const AgPointer<AgBlowfish> &);
	AgReference<AgBlowfish> operator=(const AgReference<AgBlowfish> &);
	bool operator!=(const AgReference<AgBlowfish> &);
	bool operator!=(AgBlowfish *);
	bool operator==(const AgReference<AgBlowfish> &);
	bool operator==(AgBlowfish *);
	AgPointer<AgBlowfish> getPtr();
	void swap(AgReference<AgBlowfish> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgBlowfish * m_ptr; // 0x10
};
class AgReference<AgArchiveDirectory>
{
public:
	AgReference<AgArchiveDirectory>(const AgPointer<AgArchiveDirectory> &);
	AgReference<AgArchiveDirectory>(const AgReference<AgArchiveDirectory> &);
	AgReference<AgArchiveDirectory>();
	~AgReference<AgArchiveDirectory>();
	AgReference<AgArchiveDirectory> operator=(const AgPointer<AgArchiveDirectory> &);
	AgReference<AgArchiveDirectory> operator=(const AgReference<AgArchiveDirectory> &);
	bool operator!=(const AgReference<AgArchiveDirectory> &);
	bool operator!=(AgArchiveDirectory *);
	bool operator==(const AgReference<AgArchiveDirectory> &);
	bool operator==(AgArchiveDirectory *);
	AgPointer<AgArchiveDirectory> getPtr();
	void swap(AgReference<AgArchiveDirectory> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgArchiveDirectory * m_ptr; // 0x10
};
class AgReference<AgDisplay>
{
public:
	AgReference<AgDisplay>(const AgPointer<AgDisplay> &);
	AgReference<AgDisplay>(const AgReference<AgDisplay> &);
	AgReference<AgDisplay>();
	~AgReference<AgDisplay>();
	AgReference<AgDisplay> operator=(const AgPointer<AgDisplay> &);
	AgReference<AgDisplay> operator=(const AgReference<AgDisplay> &);
	bool operator!=(const AgReference<AgDisplay> &);
	bool operator!=(AgDisplay *);
	bool operator==(const AgReference<AgDisplay> &);
	bool operator==(AgDisplay *);
	AgPointer<AgDisplay> getPtr();
	void swap(AgReference<AgDisplay> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgDisplay * m_ptr; // 0x10
};
class AgReference<AgBuffer<AgAllocator<1> > >
{
public:
	AgReference<AgBuffer<AgAllocator<1> > >(const AgPointer<AgBuffer<AgAllocator<1> > > &);
	AgReference<AgBuffer<AgAllocator<1> > >(const AgReference<AgBuffer<AgAllocator<1> > > &);
	AgReference<AgBuffer<AgAllocator<1> > >();
	~AgReference<AgBuffer<AgAllocator<1> > >();
	AgReference<AgBuffer<AgAllocator<1> > > operator=(const AgPointer<AgBuffer<AgAllocator<1> > > &);
	AgReference<AgBuffer<AgAllocator<1> > > operator=(const AgReference<AgBuffer<AgAllocator<1> > > &);
	bool operator!=(const AgReference<AgBuffer<AgAllocator<1> > > &);
	bool operator!=(AgBuffer<AgAllocator<1> > *);
	bool operator==(const AgReference<AgBuffer<AgAllocator<1> > > &);
	bool operator==(AgBuffer<AgAllocator<1> > *);
	AgPointer<AgBuffer<AgAllocator<1> > > getPtr();
	void swap(AgReference<AgBuffer<AgAllocator<1> > > &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgBuffer<AgAllocator<1> > * m_ptr; // 0x10
};
class AgReference<AgDialog>
{
public:
	AgReference<AgDialog>(const AgPointer<AgDialog> &);
	AgReference<AgDialog>(const AgReference<AgDialog> &);
	AgReference<AgDialog>();
	~AgReference<AgDialog>();
	AgReference<AgDialog> operator=(const AgPointer<AgDialog> &);
	AgReference<AgDialog> operator=(const AgReference<AgDialog> &);
	bool operator!=(const AgReference<AgDialog> &);
	bool operator!=(AgDialog *);
	bool operator==(const AgReference<AgDialog> &);
	bool operator==(AgDialog *);
	AgPointer<AgDialog> getPtr();
	void swap(AgReference<AgDialog> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgDialog * m_ptr; // 0x10
};
class AgReference<AgUser>
{
public:
	AgReference<AgUser>(const AgPointer<AgUser> &);
	AgReference<AgUser>(const AgReference<AgUser> &);
	AgReference<AgUser>();
	~AgReference<AgUser>();
	AgReference<AgUser> operator=(const AgPointer<AgUser> &);
	AgReference<AgUser> operator=(const AgReference<AgUser> &);
	bool operator!=(const AgReference<AgUser> &);
	bool operator!=(AgUser *);
	bool operator==(const AgReference<AgUser> &);
	bool operator==(AgUser *);
	AgPointer<AgUser> getPtr();
	void swap(AgReference<AgUser> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgUser * m_ptr; // 0x10
};
class AgReference<AgAudioEffect>
{
public:
	AgReference<AgAudioEffect>(const AgPointer<AgAudioEffect> &);
	AgReference<AgAudioEffect>(const AgReference<AgAudioEffect> &);
	AgReference<AgAudioEffect>();
	~AgReference<AgAudioEffect>();
	AgReference<AgAudioEffect> operator=(const AgPointer<AgAudioEffect> &);
	AgReference<AgAudioEffect> operator=(const AgReference<AgAudioEffect> &);
	bool operator!=(const AgReference<AgAudioEffect> &);
	bool operator!=(AgAudioEffect *);
	bool operator==(const AgReference<AgAudioEffect> &);
	bool operator==(AgAudioEffect *);
	AgPointer<AgAudioEffect> getPtr();
	void swap(AgReference<AgAudioEffect> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgAudioEffect * m_ptr; // 0x10
};
class AgReference<AgSaveErrorDialog>
{
public:
	AgReference<AgSaveErrorDialog>(const AgPointer<AgSaveErrorDialog> &);
	AgReference<AgSaveErrorDialog>(const AgReference<AgSaveErrorDialog> &);
	AgReference<AgSaveErrorDialog>();
	~AgReference<AgSaveErrorDialog>();
	AgReference<AgSaveErrorDialog> operator=(const AgPointer<AgSaveErrorDialog> &);
	AgReference<AgSaveErrorDialog> operator=(const AgReference<AgSaveErrorDialog> &);
	bool operator!=(const AgReference<AgSaveErrorDialog> &);
	bool operator!=(AgSaveErrorDialog *);
	bool operator==(const AgReference<AgSaveErrorDialog> &);
	bool operator==(AgSaveErrorDialog *);
	AgPointer<AgSaveErrorDialog> getPtr();
	void swap(AgReference<AgSaveErrorDialog> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgSaveErrorDialog * m_ptr; // 0x10
};
class AgReference<AgStandardKeyboardController>
{
public:
	AgReference<AgStandardKeyboardController>(const AgPointer<AgStandardKeyboardController> &);
	AgReference<AgStandardKeyboardController>(const AgReference<AgStandardKeyboardController> &);
	AgReference<AgStandardKeyboardController>();
	~AgReference<AgStandardKeyboardController>();
	AgReference<AgStandardKeyboardController> operator=(const AgPointer<AgStandardKeyboardController> &);
	AgReference<AgStandardKeyboardController> operator=(const AgReference<AgStandardKeyboardController> &);
	bool operator!=(const AgReference<AgStandardKeyboardController> &);
	bool operator!=(AgStandardKeyboardController *);
	bool operator==(const AgReference<AgStandardKeyboardController> &);
	bool operator==(AgStandardKeyboardController *);
	AgPointer<AgStandardKeyboardController> getPtr();
	void swap(AgReference<AgStandardKeyboardController> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgStandardKeyboardController * m_ptr; // 0x10
};
class AgReference<AgStandardMouseController>
{
public:
	AgReference<AgStandardMouseController>(const AgPointer<AgStandardMouseController> &);
	AgReference<AgStandardMouseController>(const AgReference<AgStandardMouseController> &);
	AgReference<AgStandardMouseController>();
	~AgReference<AgStandardMouseController>();
	AgReference<AgStandardMouseController> operator=(const AgPointer<AgStandardMouseController> &);
	AgReference<AgStandardMouseController> operator=(const AgReference<AgStandardMouseController> &);
	bool operator!=(const AgReference<AgStandardMouseController> &);
	bool operator!=(AgStandardMouseController *);
	bool operator==(const AgReference<AgStandardMouseController> &);
	bool operator==(AgStandardMouseController *);
	AgPointer<AgStandardMouseController> getPtr();
	void swap(AgReference<AgStandardMouseController> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgStandardMouseController * m_ptr; // 0x10
};
class AgReference<AgStandardTouchController>
{
public:
	AgReference<AgStandardTouchController>(const AgPointer<AgStandardTouchController> &);
	AgReference<AgStandardTouchController>(const AgReference<AgStandardTouchController> &);
	AgReference<AgStandardTouchController>();
	~AgReference<AgStandardTouchController>();
	AgReference<AgStandardTouchController> operator=(const AgPointer<AgStandardTouchController> &);
	AgReference<AgStandardTouchController> operator=(const AgReference<AgStandardTouchController> &);
	bool operator!=(const AgReference<AgStandardTouchController> &);
	bool operator!=(AgStandardTouchController *);
	bool operator==(const AgReference<AgStandardTouchController> &);
	bool operator==(AgStandardTouchController *);
	AgPointer<AgStandardTouchController> getPtr();
	void swap(AgReference<AgStandardTouchController> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgStandardTouchController * m_ptr; // 0x10
};
class AgReference<AgBufferStream<AgBuffer<AgAllocator<1> > > >
{
public:
	AgReference<AgBufferStream<AgBuffer<AgAllocator<1> > > >(const AgPointer<AgBufferStream<AgBuffer<AgAllocator<1> > > > &);
	AgReference<AgBufferStream<AgBuffer<AgAllocator<1> > > >(const AgReference<AgBufferStream<AgBuffer<AgAllocator<1> > > > &);
	AgReference<AgBufferStream<AgBuffer<AgAllocator<1> > > >();
	~AgReference<AgBufferStream<AgBuffer<AgAllocator<1> > > >();
	AgReference<AgBufferStream<AgBuffer<AgAllocator<1> > > > operator=(const AgPointer<AgBufferStream<AgBuffer<AgAllocator<1> > > > &);
	AgReference<AgBufferStream<AgBuffer<AgAllocator<1> > > > operator=(const AgReference<AgBufferStream<AgBuffer<AgAllocator<1> > > > &);
	bool operator!=(const AgReference<AgBufferStream<AgBuffer<AgAllocator<1> > > > &);
	bool operator!=(AgBufferStream<AgBuffer<AgAllocator<1> > > *);
	bool operator==(const AgReference<AgBufferStream<AgBuffer<AgAllocator<1> > > > &);
	bool operator==(AgBufferStream<AgBuffer<AgAllocator<1> > > *);
	AgPointer<AgBufferStream<AgBuffer<AgAllocator<1> > > > getPtr();
	void swap(AgReference<AgBufferStream<AgBuffer<AgAllocator<1> > > > &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgBufferStream<AgBuffer<AgAllocator<1> > > * m_ptr; // 0x10
};
class AgReference<AgLeaderboard>
{
public:
	AgReference<AgLeaderboard>(const AgPointer<AgLeaderboard> &);
	AgReference<AgLeaderboard>(const AgReference<AgLeaderboard> &);
	AgReference<AgLeaderboard>();
	~AgReference<AgLeaderboard>();
	AgReference<AgLeaderboard> operator=(const AgPointer<AgLeaderboard> &);
	AgReference<AgLeaderboard> operator=(const AgReference<AgLeaderboard> &);
	bool operator!=(const AgReference<AgLeaderboard> &);
	bool operator!=(AgLeaderboard *);
	bool operator==(const AgReference<AgLeaderboard> &);
	bool operator==(AgLeaderboard *);
	AgPointer<AgLeaderboard> getPtr();
	void swap(AgReference<AgLeaderboard> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgLeaderboard * m_ptr; // 0x10
};
class AgReference<AgSession>
{
public:
	AgReference<AgSession>(const AgPointer<AgSession> &);
	AgReference<AgSession>(const AgReference<AgSession> &);
	AgReference<AgSession>();
	~AgReference<AgSession>();
	AgReference<AgSession> operator=(const AgPointer<AgSession> &);
	AgReference<AgSession> operator=(const AgReference<AgSession> &);
	bool operator!=(const AgReference<AgSession> &);
	bool operator!=(AgSession *);
	bool operator==(const AgReference<AgSession> &);
	bool operator==(AgSession *);
	AgPointer<AgSession> getPtr();
	void swap(AgReference<AgSession> &);
private:
	AgReferenceCount * m_ref; // 0x8
	AgSession * m_ptr; // 0x10
};
AgPointer<AgStream> AgPointer<AgMemoryStream>::operator<AgStream> AgPointer<AgStream>(); // 0x1400512E0
AgPointer<AgDirectory> AgPointer<AgArchiveDirectory>::operator<AgDirectory> AgPointer<AgDirectory>(); // 0x14066B5E0
AgPointer<AgStream> AgPointer<AgAsyncStreamReader>::operator<AgStream> AgPointer<AgStream>(); // 0x14066B620
AgPointer<AgMount> AgPointer<AgArchive>::operator<AgMount> AgPointer<AgMount>(); // 0x14068E6B0
AgPointer<AgStream> AgPointer<AgFile>::operator<AgStream> AgPointer<AgStream>(); // 0x14065C610
AgPointer<AgSaveErrorDialog> AgPointer<AgDialog>::operator<AgSaveErrorDialog> AgPointer<AgSaveErrorDialog>(); // 0x140660330
AgPointer<AgMount> AgPointer<AgPCStorageMount>::operator<AgMount> AgPointer<AgMount>(); // 0x14069FF80
AgPointer<AgController> AgPointer<AgStandardKeyboardController>::operator<AgController> AgPointer<AgController>(); // 0x140674260
AgPointer<AgController> AgPointer<AgStandardMouseController>::operator<AgController> AgPointer<AgController>(); // 0x1406742A0
AgPointer<AgController> AgPointer<AgStandardTouchController>::operator<AgController> AgPointer<AgController>(); // 0x1406742E0
AgPointer<AgStream> AgPointer<AgBufferStream<AgBuffer<AgAllocator<1> > > >::operator<AgStream> AgPointer<AgStream>(); // 0x14069CF40
AgPointer<AgMount> AgPointer<AgSteamRemoteMount>::operator<AgMount> AgPointer<AgMount>(); // 0x1406A1170