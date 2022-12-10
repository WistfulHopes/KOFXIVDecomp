#pragma once

struct SDL_Keysym
{
	SDL_Scancode scancode; // 0x0
	long sym; // 0x4
	unsigned short mod; // 0x8
	unsigned long unused; // 0xC
};