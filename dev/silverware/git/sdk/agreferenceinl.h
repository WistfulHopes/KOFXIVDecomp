#pragma once

#include "agreference.h"
#include "agpointer.h"
#include "Windows.h"

unsigned int AgAtomicDecrement(volatile int *value)
{
  return (unsigned int)_InterlockedDecrement(value);
}

template <typename T>
AgReference<T>::AgReference<T>(const AgReference<T> & rhs) // 0x14068E770
{
    auto ptr = rhs.getPtr();
    if (ptr.m_ref && ptr.m_ref.incWeakRef())
        (AgPointer<T>)&m_ref = ptr;
    m_ptr = ptr.m_ptr;
    ptr.m_ptr = nullptr;
    m_ref = ptr.m_ref;
    if (ptr.m_ref)
    {
        ptr.m_ref = 0;
        bool test = false;
        if (!AgAtomicDecrement(&m_ref->m_strongCount))
        {
            if (!AgAtomicDecrement(&m_ref->m_weakCount))
                test = true;
            m_ref->m_data = nullptr;
            if (m_ptr)
                delete m_ptr;
            if (test)
                delete m_ref;
        }
    }
}

//AgReference<AgArchive>::~AgReference<AgArchive>(); // 0x14066C860
//AgReference<AgMount>::~AgReference<AgMount>(); // 0x14066FDC0
//AgPointer<AgArchive> AgReference<AgArchive>::getPtr(); // 0x14068EFC0