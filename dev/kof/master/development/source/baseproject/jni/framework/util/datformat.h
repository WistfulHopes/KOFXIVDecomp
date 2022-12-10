#pragma once

struct _DAT_HEADER
{
	char fileId[4]; // 0x0
	unsigned long version; // 0x4
	unsigned long fileNum; // 0x8
	unsigned long dataOffsetTableOffset; // 0xC
	unsigned long sizeOffsetTablleOffset; // 0x10
	unsigned long fileNameTableOffset; // 0x14
	unsigned long padding[2]; // 0x18
};
struct _DAT_FILENAME_HEADER
{
	unsigned long lenght; // 0x0
};