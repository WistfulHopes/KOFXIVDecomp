#pragma once

#include "agpointer.h"

template <typename T>
AgPointer<T>::AgPointer<T>()
{
    m_ref = nullptr;
    m_ptr = nullptr;
}
template <typename T>
AgPointer<T>::AgPointer<T>(T *t)
{
    m_ref = nullptr;
    m_ptr = nullptr;
    bool test;
    if (t)
    {
        AgReferenceCount count = new AgReferenceCount;
        if (static_cast<AgReferencedObject*>(t)->getReferenceCounter())
        {
            test = false;
        }
        else
        {
            test = true;
            count.incRef;
            count.incWeakRef;
            count.setObject(t);
            static_cast<AgReferencedObject*>(t)->createReferenceCounter(count);
        }
        count = static_cast<AgReferencedObject*>(t)->m_refCount;
        if (!test)
            count->incRef();
        m_ref = count;
        m_ptr = t;
    }
}
template <typename T>
AgPointer<T>::AgPointer<T>(const AgPointer<T> & rhs)
{
    int strongCount = rhs->m_ref->getRefCount();
    if (strongCount)
    {
        while (AgAtomicCompareExchange(&m_ref->getRefCount(), origCount, origCount + 1) != m_strongCount)
        {
            strongCount = rhs->m_ref->getRefCount();
            if (!rhs->m_ref->getRefCount())
                return;
        }
        if ( strongCount != -1 )
        {
            m_ref = rhs->m_ref;
            m_ptr = rhs->m_ptr;
        }  
    }
}

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