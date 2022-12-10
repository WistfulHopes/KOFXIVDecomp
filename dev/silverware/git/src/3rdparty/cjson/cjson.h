#pragma once

struct cJSON
{
	cJSON * next; // 0x0
	cJSON * prev; // 0x8
	cJSON * child; // 0x10
	long type; // 0x18
	char * valuestring; // 0x20
	long valueint; // 0x28
	double valuedouble; // 0x30
	char * string; // 0x38
};
struct cJSON_Hooks
{
	void *(*malloc_fn)(unsigned long long); // 0x0
	void(*free_fn)(void *); // 0x8
};