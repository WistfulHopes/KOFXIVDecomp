#pragma once

#include "agreferencecount.h"

long AgReferenceCount::incRef() // 0x140039200
{
    if ( !m_strongCount )
        return 0;
    while ( AgAtomicCompareExchange((volatile int*)&m_strongCount, m_strongCount, m_strongCount + 1) != m_strongCount )
    {
        m_strongCount = m_strongCount;
        if ( !m_strongCount )
        return 0;
    }
    return (unsigned int)(m_strongCount + 1); 
}
long AgReferenceCount::incWeakRef() // 0x14066EEB0
{
    if ( m_weakCount )
    {
        while ( m_strongCount )
        {
            if ( AgAtomicCompareExchange((volatile int*)&m_weakCount, m_weakCount, m_weakCount + 1) == m_weakCount )
                return (unsigned int)(m_weakCount + 1);
            m_weakCount = m_weakCount;
            if ( !m_weakCount )
                return 0;
        }
    }
    return 0;
}