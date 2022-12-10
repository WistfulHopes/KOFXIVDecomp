#pragma once

#include "agreferencedobject.h"

long AgReferencedObject::createReferenceCounter(void * thing) // 0x140039260
{
    if ( m_refCount )
        return 0;
    m_refCount->incRef();
    m_refCount->incWeakRef();
    m_refCount->setObject(thing);
    return 1;
}