#pragma once

class Fw::TitleStorageCommon
{
public:
	static bool Startup();
	static void Shutdown();
	static bool CheckError(long);
	static bool TusCreateTitleContext();
	static bool TusDestroyTitleContext();
	static bool TssCreateTitleContext();
	static bool TssDestroyTitleContext();
	static const char * GetStatName(long);
	static const char * GetStatName2(long);
};