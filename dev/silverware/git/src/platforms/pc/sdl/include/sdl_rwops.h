#pragma once

struct SDL_RWops
{
	long long(*size)(SDL_RWops *); // 0x0
	long long(*seek)(SDL_RWops *, long long, long); // 0x8
	unsigned long long(*read)(SDL_RWops *, void *, unsigned long long, unsigned long long); // 0x10
	unsigned long long(*write)(SDL_RWops *, const void *, unsigned long long, unsigned long long); // 0x18
	long(*close)(SDL_RWops *); // 0x20
	unsigned long type; // 0x28
	union <unnamed-type-hidden>;
	SDL_RWops::<unnamed-type-hidden> hidden; // 0x30
};
union SDL_RWops::<unnamed-type-hidden>
{
	struct <unnamed-type-windowsio>;
	struct
	{
		SDL_RWops::<unnamed-type-hidden>::<unnamed-type-windowsio> windowsio; // 0x0
		struct <unnamed-type-mem>;
	};
	struct
	{
		SDL_RWops::<unnamed-type-hidden>::<unnamed-type-mem> mem; // 0x0
		struct <unnamed-type-unknown>;
	};
public:
	SDL_RWops::<unnamed-type-hidden>::<unnamed-type-unknown> unknown; // 0x0
};
struct SDL_RWops::<unnamed-type-hidden>::<unnamed-type-windowsio>
{
	SDL_bool append; // 0x0
	void * h; // 0x8
	struct <unnamed-type-buffer>;
	SDL_RWops::<unnamed-type-hidden>::<unnamed-type-windowsio>::<unnamed-type-buffer> buffer; // 0x10
};
struct SDL_RWops::<unnamed-type-hidden>::<unnamed-type-windowsio>::<unnamed-type-buffer>
{
	void * data; // 0x0
	unsigned long long size; // 0x8
	unsigned long long left; // 0x10
};
struct SDL_RWops::<unnamed-type-hidden>::<unnamed-type-mem>
{
	unsigned char * base; // 0x0
	unsigned char * here; // 0x8
	unsigned char * stop; // 0x10
};
struct SDL_RWops::<unnamed-type-hidden>::<unnamed-type-unknown>
{
	void * data1; // 0x0
	void * data2; // 0x8
};