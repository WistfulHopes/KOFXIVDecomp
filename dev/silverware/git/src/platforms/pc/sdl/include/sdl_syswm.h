#pragma once

struct SDL_SysWMmsg
{
	SDL_version version; // 0x0
	SDL_SYSWM_TYPE subsystem; // 0x4
	union <unnamed-type-msg>;
	SDL_SysWMmsg::<unnamed-type-msg> msg; // 0x8
};
union SDL_SysWMmsg::<unnamed-type-msg>
{
	struct <unnamed-type-win>;
public:
	SDL_SysWMmsg::<unnamed-type-msg>::<unnamed-type-win> win; // 0x0
	long dummy; // 0x0
};
struct SDL_SysWMmsg::<unnamed-type-msg>::<unnamed-type-win>
{
	HWND__ * hwnd; // 0x0
	unsigned long msg; // 0x8
	unsigned long long wParam; // 0x10
	long long lParam; // 0x18
};
union SDL_SysWMinfo::<unnamed-type-info>
{
	struct <unnamed-type-win>;
public:
	SDL_SysWMinfo::<unnamed-type-info>::<unnamed-type-win> win; // 0x0
	long dummy; // 0x0
};
struct SDL_SysWMinfo::<unnamed-type-info>::<unnamed-type-win>
{
	HWND__ * window; // 0x0
	HDC__ * hdc; // 0x8
};
struct SDL_SysWMinfo
{
	SDL_version version; // 0x0
	SDL_SYSWM_TYPE subsystem; // 0x4
	union <unnamed-type-info>;
	SDL_SysWMinfo::<unnamed-type-info> info; // 0x8
};