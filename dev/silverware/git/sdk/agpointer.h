#pragma once

#include "agreference.h"

template <typename T>
class AgPointer
{
public:
	AgPointer<T>(const AgReference<T> &);
	AgPointer<T>(AgPointer<T> &);
	AgPointer<T>(const AgPointer<T> &);
	AgPointer<T>(T *);
	AgPointer<T>();
	~AgPointer<T>();
	AgPointer<T> & operator=(AgPointer<T> &);
	AgPointer<T> & operator=(const AgReference<T> &);
	AgPointer<T> & operator=(const AgPointer<T> &);
	AgPointer<T> & operator=(T *);
	bool operator<(const AgPointer<T> &);
	T * operator->();
	T & operator*();
	bool operator==(const AgPointer<T> &);
	bool operator==(T *);
	bool operator!=(const AgPointer<T> &);
	bool operator!=(T *);
	T * getObject();
	void swap(AgPointer<T> &);
private:
	AgReferenceCount * m_ref; // 0x0
	T * m_ptr; // 0x8
};

/*
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
AgPointer<AgMount> AgPointer<AgSteamRemoteMount>::operator<AgMount> AgPointer<AgMount>(); // 0x1406A1170 */