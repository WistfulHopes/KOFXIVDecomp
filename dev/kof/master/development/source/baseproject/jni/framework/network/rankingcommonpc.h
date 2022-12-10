#pragma once

class Fw::RankingCommon
{
public:
	static bool Startup();
	static void Shutdown();
	static long CreateRequestId(Fw::sContextId &);
	static bool DestroyRequestId(Fw::sContextId &);
	static bool CheckError(long);
	static bool createTitleContext();
	static bool destroyTitleContext();
	static bool GetNpIdFlag();
	static long m_TitleContextId; // 0xFFFFFFFFFFFFFFFF
	static bool m_NpIdFlag; // 0xFFFFFFFFFFFFFFFF
};