#pragma once

struct AgAchievementPlatformData
{
	AgString m_achievementId; // 0x0
	AgAchievementPlatformData(AgAchievementPlatformData &);
	AgAchievementPlatformData(const AgAchievementPlatformData &);
	AgAchievementPlatformData();
	~AgAchievementPlatformData();
	AgAchievementPlatformData & operator=(AgAchievementPlatformData &);
	AgAchievementPlatformData & operator=(const AgAchievementPlatformData &);
};