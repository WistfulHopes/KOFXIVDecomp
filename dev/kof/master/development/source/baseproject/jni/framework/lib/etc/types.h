#pragma once

struct ISzAlloc
{
	void *(*Alloc)(void *, unsigned long long); // 0x0
	void(*Free)(void *, void *); // 0x8
};