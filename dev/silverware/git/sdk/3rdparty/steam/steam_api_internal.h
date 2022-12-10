#pragma once

void SteamInternal_OnContextInit(void * p); // 0x14002DA00
bool CSteamAPIContext::Init(); // 0x14002DA90
CCallResult<Fw::cRankingReadWork,LeaderboardScoresDownloaded_t>::CCallResult<Fw::cRankingReadWork,LeaderboardScoresDownloaded_t>(); // 0x14004B710
void CCallResult<Fw::cRankingReadWork,LeaderboardScoresDownloaded_t>::Set(unsigned long long hAPICall, Fw::cRankingReadWork * p, void(*func)(LeaderboardScoresDownloaded_t *, bool)); // 0x14004D2D0
CCallResult<Fw::cRankingReadWork,LeaderboardScoresDownloaded_t>::~CCallResult<Fw::cRankingReadWork,LeaderboardScoresDownloaded_t>(); // 0x14004B740
void CCallResult<Fw::cRankingReadWork,LeaderboardScoresDownloaded_t>::Run(void * pvParam); // 0x14004B790
void CCallResult<Fw::cRankingWriteWork,LeaderboardUGCSet_t>::Run(void * pvParam); // 0x14004B790
void CCallResult<LeaderboardCallbackHandler,LeaderboardFindResult_t>::Run(void * pvParam); // 0x14004B790
void CCallResult<Fw::cRankingReadWork,LeaderboardScoresDownloaded_t>::Run(void * pvParam, bool bIOFailure, unsigned long long hSteamAPICall); // 0x14004B770
void CCallResult<Fw::cRankingWriteWork,LeaderboardUGCSet_t>::Run(void * pvParam, bool bIOFailure, unsigned long long hSteamAPICall); // 0x14004B770
void CCallResult<LeaderboardCallbackHandler,LeaderboardFindResult_t>::Run(void * pvParam, bool bIOFailure, unsigned long long hSteamAPICall); // 0x14004B770
void CCallback<Fw::MatchingTargetCallbackHandler,LobbyChatMsg_t,0>::Run(void * pvParam); // 0x14004A860
void CCallback<Fw::cTusReadWork,UserStatsReceived_t,0>::Run(void * pvParam); // 0x14004A860