#pragma once

#include "agsemaphore.h"
#include "Windows.h"

AgSemaphore::~AgSemaphore() // 0x140095070
{
    if (m_data.m_sem)
        CloseHandle(m_sem);
}