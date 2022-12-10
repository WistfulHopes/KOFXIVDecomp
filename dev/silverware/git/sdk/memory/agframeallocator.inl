#pragma once

AgFrameAllocator<AgAllocator<1> >::AgFrameAllocator<AgAllocator<1> >(unsigned long blockSize, unsigned long blockCount, unsigned long frameCount); // 0x1402C7850
void * AgFrameAllocator<AgAllocator<1> >::allocate(unsigned long long size, unsigned long long align); // 0x14008C620
void AgFrameAllocator<AgAllocator<1> >::_allocateBlock(); // 0x14008C760