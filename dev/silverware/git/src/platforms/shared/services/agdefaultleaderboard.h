#pragma once

class AgDefaultLeaderboard :
	AgLeaderboard
{
public:
	AgDefaultLeaderboard(AgStringRef);
	virtual ~AgDefaultLeaderboard();
	long storeRanking(const AgLeaderboardRanking &, AgPointer<AgUser>);
	virtual long requestRankings(AgPointer<AgLeaderboardRankingList>, AgLeaderboard::Type, long, unsigned long, long, long);
	AgJobCompletion storeRankingAsync(const AgLeaderboardRanking &, AgPointer<AgUser>);
	virtual AgJobCompletion requestRankingsAsync(AgPointer<AgLeaderboardRankingList>, AgLeaderboard::Type, long, unsigned long, long, long);
protected:
	virtual AgJobCompletion _storeRankingAsync(long, const AgLeaderboardRanking &, AgPointer<AgUser>);
};
long AgDefaultLeaderboard::storeRanking(const AgLeaderboardRanking & score, AgPointer<AgUser> user); // 0x140686C50
long AgDefaultLeaderboard::requestRankings(AgPointer<AgLeaderboardRankingList> scores, AgLeaderboard::Type type, long start, unsigned long size, long readComments, long readData); // 0x140686880
AgJobCompletion AgDefaultLeaderboard::storeRankingAsync(const AgLeaderboardRanking & score, AgPointer<AgUser> user); // 0x140686C80
AgJobCompletion AgDefaultLeaderboard::requestRankingsAsync(AgPointer<AgLeaderboardRankingList> scores, AgLeaderboard::Type type, long start, unsigned long size, long readComments, long readData); // 0x1406868B0
AgJobCompletion AgDefaultLeaderboard::_storeRankingAsync(long requestId, const AgLeaderboardRanking & score, AgPointer<AgUser> user); // 0x140684D30