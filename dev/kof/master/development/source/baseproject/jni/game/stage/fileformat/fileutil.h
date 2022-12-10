#pragma once

enum FileUtil::<unnamed-enum-FILE_INDENTIFIER_COUNT>
{
	FILE_INDENTIFIER_COUNT = 4,
};
struct FileUtil::Header
{
	char fileIdentifier[4]; // 0x0
	unsigned long uiFormatVersion; // 0x4
};