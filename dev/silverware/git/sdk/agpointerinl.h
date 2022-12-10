#pragma once

AgPointer<AgThread>::AgPointer<AgThread>(); // 0x14005DEC0
AgPointer<AgController>::AgPointer<AgController>(); // 0x14005DEC0
AgPointer<AgMemoryStream>::AgPointer<AgMemoryStream>(); // 0x14005DEC0
AgPointer<AgAudioChannel>::AgPointer<AgAudioChannel>(AgAudioChannel * t); // 0x140051130
AgPointer<AgFile>::AgPointer<AgFile>(AgFile * t); // 0x140051130
AgPointer<AgController>::AgPointer<AgController>(AgController * t); // 0x140051130
AgPointer<AgUser>::AgPointer<AgUser>(AgUser * t); // 0x140051130
AgPointer<AgMount>::AgPointer<AgMount>(AgMount * t); // 0x14066C330
AgPointer<AgService>::AgPointer<AgService>(AgService * t); // 0x140658DB0
AgPointer<AgPCStorageMount>::AgPointer<AgPCStorageMount>(AgPCStorageMount * t); // 0x1406996A0
AgPointer<AgDirectory>::AgPointer<AgDirectory>(AgDirectory * t); // 0x140699730
AgPointer<AgBuffer<AgAllocator<1> > >::AgPointer<AgBuffer<AgAllocator<1> > >(AgBuffer<AgAllocator<1> > * t); // 0x14069D0C0
AgPointer<AgStream>::AgPointer<AgStream>(AgStream * t); // 0x14069D150
AgPointer<AgSteamRemoteMount>::AgPointer<AgSteamRemoteMount>(AgSteamRemoteMount * t); // 0x14069E9E0
AgPointer<AgLeaderboard>::AgPointer<AgLeaderboard>(AgLeaderboard * t); // 0x140683430
AgPointer<AgPlayer>::AgPointer<AgPlayer>(AgPlayer * t); // 0x140671960
AgPointer<AgJsonNodeData>::AgPointer<AgJsonNodeData>(AgJsonNodeData * t); // 0x140692C90
AgPointer<AgSession>::AgPointer<AgSession>(AgSession * t); // 0x140696300
AgPointer<AgSharedInstance<AgMutex> >::AgPointer<AgSharedInstance<AgMutex> >(const AgPointer<AgSharedInstance<AgMutex> > & rhs); // 0x140039920
AgPointer<AgStream>::AgPointer<AgStream><AgMemoryStream>(const AgPointer<AgMemoryStream> & rhs); // 0x140051190
AgPointer<AgController>::AgPointer<AgController>(const AgPointer<AgController> & rhs); // 0x140051190
AgPointer<AgMount>::AgPointer<AgMount>(const AgPointer<AgMount> & rhs); // 0x140051190
AgPointer<AgService>::AgPointer<AgService>(const AgPointer<AgService> & rhs); // 0x140051190
AgPointer<AgDisplay>::AgPointer<AgDisplay>(const AgPointer<AgDisplay> & rhs); // 0x140051190
AgPointer<AgMemoryStream>::AgPointer<AgMemoryStream>(const AgPointer<AgMemoryStream> & rhs); // 0x140051190
AgPointer<AgFile>::AgPointer<AgFile>(const AgPointer<AgFile> & rhs); // 0x140051190
AgPointer<AgStream>::AgPointer<AgStream>(const AgPointer<AgStream> & rhs); // 0x140051190
AgPointer<AgJsonNodeData>::AgPointer<AgJsonNodeData>(const AgPointer<AgJsonNodeData> & rhs); // 0x140051190
AgPointer<AgStandardKeyboardController>::AgPointer<AgStandardKeyboardController>(const AgPointer<AgStandardKeyboardController> & rhs); // 0x140051190
AgPointer<AgLeaderboard>::AgPointer<AgLeaderboard>(const AgPointer<AgLeaderboard> & rhs); // 0x140051190
AgPointer<AgDialog>::AgPointer<AgDialog>(const AgPointer<AgDialog> & rhs); // 0x140051190
AgPointer<AgPlayer>::AgPointer<AgPlayer>(const AgPointer<AgPlayer> & rhs); // 0x140051190
AgPointer<AgArchive>::AgPointer<AgArchive>(const AgReference<AgArchive> & rhs); // 0x14068E6F0
AgPointer<AgDirectory>::AgPointer<AgDirectory><AgArchiveDirectory>(const AgPointer<AgArchiveDirectory> & rhs); // 0x140051190
AgPointer<AgMount>::AgPointer<AgMount><AgArchive>(const AgPointer<AgArchive> & rhs); // 0x140051190
AgPointer<AgStream>::AgPointer<AgStream><AgFile>(const AgPointer<AgFile> & rhs); // 0x140051190
AgPointer<AgSaveErrorDialog>::AgPointer<AgSaveErrorDialog><AgDialog>(const AgPointer<AgDialog> & rhs); // 0x140051190
AgPointer<AgMount>::AgPointer<AgMount><AgPCStorageMount>(const AgPointer<AgPCStorageMount> & rhs); // 0x140051190
AgPointer<AgController>::AgPointer<AgController><AgStandardKeyboardController>(const AgPointer<AgStandardKeyboardController> & rhs); // 0x140051190
AgPointer<AgStream>::AgPointer<AgStream><AgBufferStream<AgBuffer<AgAllocator<1> > > >(const AgPointer<AgBufferStream<AgBuffer<AgAllocator<1> > > > & rhs); // 0x140051190
AgPointer<AgMount>::AgPointer<AgMount><AgSteamRemoteMount>(const AgPointer<AgSteamRemoteMount> & rhs); // 0x140051190
AgPointer<AgController>::~AgPointer<AgController>(); // 0x14002F6B0
AgPointer<AgSharedInstance<AgMutex> >::~AgPointer<AgSharedInstance<AgMutex> >(); // 0x1400399A0
AgPointer<AgAudioChannel>::~AgPointer<AgAudioChannel>(); // 0x14002F6B0
AgPointer<AgThread>::~AgPointer<AgThread>(); // 0x14002F6B0
AgPointer<AgFile>::~AgPointer<AgFile>(); // 0x14002F6B0
AgPointer<AgMoviePlayer>::~AgPointer<AgMoviePlayer>(); // 0x1400977A0
AgPointer<AgDisplay>::~AgPointer<AgDisplay>(); // 0x14009F4F0
AgPointer<AgArchive>::~AgPointer<AgArchive>(); // 0x14002F6B0
AgPointer<KOFApplication>::~AgPointer<KOFApplication>(); // 0x14002F6B0
AgPointer<AgService>::~AgPointer<AgService>(); // 0x140658030
AgPointer<AgArchiveDirectory>::~AgPointer<AgArchiveDirectory>(); // 0x14066C680
AgPointer<AgAsyncStreamReader>::~AgPointer<AgAsyncStreamReader>(); // 0x14066C720
AgPointer<AgBlowfish>::~AgPointer<AgBlowfish>(); // 0x14066C7C0
AgPointer<AgAudioEffect>::~AgPointer<AgAudioEffect>(); // 0x14065D340
AgPointer<AgBuffer<AgAllocator<1> > >::~AgPointer<AgBuffer<AgAllocator<1> > >(); // 0x140661680
AgPointer<AgDialog>::~AgPointer<AgDialog>(); // 0x140661720
AgPointer<AgDirectory>::~AgPointer<AgDirectory>(); // 0x1406617C0
AgPointer<AgSaveErrorDialog>::~AgPointer<AgSaveErrorDialog>(); // 0x140661860
AgPointer<AgPlayer>::~AgPointer<AgPlayer>(); // 0x14064E560
AgPointer<AgPCStorageMount>::~AgPointer<AgPCStorageMount>(); // 0x1406997C0
AgPointer<AgStandardKeyboardController>::~AgPointer<AgStandardKeyboardController>(); // 0x140674FD0
AgPointer<AgStandardMouseController>::~AgPointer<AgStandardMouseController>(); // 0x140675070
AgPointer<AgStandardTouchController>::~AgPointer<AgStandardTouchController>(); // 0x140675110
AgPointer<AgBufferStream<AgBuffer<AgAllocator<1> > > >::~AgPointer<AgBufferStream<AgBuffer<AgAllocator<1> > > >(); // 0x14069D450
AgPointer<AgSteamRemoteMount>::~AgPointer<AgSteamRemoteMount>(); // 0x14069EA70
AgPointer<AgLeaderboard>::~AgPointer<AgLeaderboard>(); // 0x140683700
AgPointer<AgLeaderboardRankingList>::~AgPointer<AgLeaderboardRankingList>(); // 0x1406837A0
AgPointer<AgSession>::~AgPointer<AgSession>(); // 0x140681D60
AgPointer<AgProfile>::~AgPointer<AgProfile>(); // 0x140680550
AgPointer<AgJsonNodeData>::~AgPointer<AgJsonNodeData>(); // 0x14065A610
AgPointer<AgServiceEvent>::~AgPointer<AgServiceEvent>(); // 0x140696100
AgPointer<AgSharedInstance<AgMutex> > & AgPointer<AgSharedInstance<AgMutex> >::operator=(AgSharedInstance<AgMutex> * t); // 0x140039A50
AgPointer<AgAudioChannel> & AgPointer<AgAudioChannel>::operator=(AgAudioChannel * t); // 0x140051260
AgPointer<AgThread> & AgPointer<AgThread>::operator=(AgThread * t); // 0x140051260
AgPointer<AgFile> & AgPointer<AgFile>::operator=(AgFile * t); // 0x140051260
AgPointer<AgMoviePlayer> & AgPointer<AgMoviePlayer>::operator=(AgMoviePlayer * t); // 0x140097850
AgPointer<AgController> & AgPointer<AgController>::operator=(AgController * t); // 0x140051260
AgPointer<KOFApplication> & AgPointer<KOFApplication>::operator=(KOFApplication * t); // 0x1402A7A90
AgPointer<AgArchiveDirectory> & AgPointer<AgArchiveDirectory>::operator=(AgArchiveDirectory * t); // 0x14066CC80
AgPointer<AgStream> & AgPointer<AgStream>::operator=(AgStream * t); // 0x14066CED0
AgPointer<AgDisplay> & AgPointer<AgDisplay>::operator=(AgDisplay * t); // 0x140668EA0
AgPointer<AgMemoryStream> & AgPointer<AgMemoryStream>::operator=(AgMemoryStream * t); // 0x1406659F0
AgPointer<AgMount> & AgPointer<AgMount>::operator=(AgMount * t); // 0x140661FD0
AgPointer<AgStandardKeyboardController> & AgPointer<AgStandardKeyboardController>::operator=(AgStandardKeyboardController * t); // 0x140675420
AgPointer<AgStandardMouseController> & AgPointer<AgStandardMouseController>::operator=(AgStandardMouseController * t); // 0x140675550
AgPointer<AgStandardTouchController> & AgPointer<AgStandardTouchController>::operator=(AgStandardTouchController * t); // 0x140675680
AgPointer<AgBuffer<AgAllocator<1> > > & AgPointer<AgBuffer<AgAllocator<1> > >::operator=(AgBuffer<AgAllocator<1> > * t); // 0x140683F20
AgPointer<AgSharedInstance<AgMutex> > & AgPointer<AgSharedInstance<AgMutex> >::operator=(const AgPointer<AgSharedInstance<AgMutex> > & rhs); // 0x140043C90
AgPointer<AgController> & AgPointer<AgController>::operator=(const AgPointer<AgController> & rhs); // 0x1402C8F90
AgPointer<AgStream> & AgPointer<AgStream>::operator=(const AgPointer<AgStream> & rhs); // 0x14066CDB0
AgPointer<AgDisplay> & AgPointer<AgDisplay>::operator=(const AgPointer<AgDisplay> & rhs); // 0x140667420
AgPointer<AgAudioChannel> & AgPointer<AgAudioChannel>::operator=(const AgPointer<AgAudioChannel> & rhs); // 0x14065D520
AgPointer<AgMount> & AgPointer<AgMount>::operator=(const AgPointer<AgMount> & rhs); // 0x140661EB0
AgPointer<AgUser> & AgPointer<AgUser>::operator=(const AgPointer<AgUser> & rhs); // 0x14064F100
AgPointer<AgJsonNodeData> & AgPointer<AgJsonNodeData>::operator=(const AgPointer<AgJsonNodeData> & rhs); // 0x14067B370
AgPointer<AgBuffer<AgAllocator<1> > > & AgPointer<AgBuffer<AgAllocator<1> > >::operator=(const AgPointer<AgBuffer<AgAllocator<1> > > & rhs); // 0x140683E00
AgPointer<AgLeaderboard> & AgPointer<AgLeaderboard>::operator=(const AgPointer<AgLeaderboard> & rhs); // 0x140684120
AgPointer<AgSession> & AgPointer<AgSession>::operator=(const AgPointer<AgSession> & rhs); // 0x140696400
AgPointer<AgAudioChannel> & AgPointer<AgAudioChannel>::operator=(AgPointer<AgAudioChannel> & rhs); // 0x140051210
AgPointer<AgFile> & AgPointer<AgFile>::operator=(AgPointer<AgFile> & rhs); // 0x140051210
AgPointer<AgStream> & AgPointer<AgStream>::operator=(AgPointer<AgStream> & rhs); // 0x14068EE50
AgPointer<AgBuffer<AgAllocator<1> > > & AgPointer<AgBuffer<AgAllocator<1> > >::operator=(AgPointer<AgBuffer<AgAllocator<1> > > & rhs); // 0x140661D10
AgPointer<AgMount> & AgPointer<AgMount>::operator=(AgPointer<AgMount> & rhs); // 0x140661DE0
AgPointer<AgLeaderboard> & AgPointer<AgLeaderboard>::operator=(AgPointer<AgLeaderboard> & rhs); // 0x140684050