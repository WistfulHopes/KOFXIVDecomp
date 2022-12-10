#pragma once

struct SteamUGCDetails_t
{
	unsigned long long m_nPublishedFileId; // 0x0
	EResult m_eResult; // 0x8
	EWorkshopFileType m_eFileType; // 0xC
	unsigned long m_nCreatorAppID; // 0x10
	unsigned long m_nConsumerAppID; // 0x14
	char m_rgchTitle[129]; // 0x18
	char m_rgchDescription[8000]; // 0x99
	unsigned long long m_ulSteamIDOwner; // 0x1FE0
	unsigned long m_rtimeCreated; // 0x1FE8
	unsigned long m_rtimeUpdated; // 0x1FEC
	unsigned long m_rtimeAddedToUserList; // 0x1FF0
	ERemoteStoragePublishedFileVisibility m_eVisibility; // 0x1FF4
	bool m_bBanned; // 0x1FF8
	bool m_bAcceptedForUse; // 0x1FF9
	bool m_bTagsTruncated; // 0x1FFA
	char m_rgchTags[1025]; // 0x1FFB
	unsigned long long m_hFile; // 0x2400
	unsigned long long m_hPreviewFile; // 0x2408
	char m_pchFileName[260]; // 0x2410
	long m_nFileSize; // 0x2514
	long m_nPreviewFileSize; // 0x2518
	char m_rgchURL[256]; // 0x251C
	unsigned long m_unVotesUp; // 0x261C
	unsigned long m_unVotesDown; // 0x2620
	float m_flScore; // 0x2624
	unsigned long m_unNumChildren; // 0x2628
};
class ISteamUGC
{
public:
	unsigned long long CreateQueryUserUGCRequest(unsigned long, EUserUGCList, EUGCMatchingUGCType, EUserUGCListSortOrder, unsigned long, unsigned long, unsigned long);
	unsigned long long CreateQueryAllUGCRequest(EUGCQuery, EUGCMatchingUGCType, unsigned long, unsigned long, unsigned long);
	unsigned long long CreateQueryUGCDetailsRequest(unsigned long long *, unsigned long);
	unsigned long long SendQueryUGCRequest(unsigned long long);
	bool GetQueryUGCResult(unsigned long long, unsigned long, SteamUGCDetails_t *);
	bool GetQueryUGCPreviewURL(unsigned long long, unsigned long, char *, unsigned long);
	bool GetQueryUGCMetadata(unsigned long long, unsigned long, char *, unsigned long);
	bool GetQueryUGCChildren(unsigned long long, unsigned long, unsigned long long *, unsigned long);
	bool GetQueryUGCStatistic(unsigned long long, unsigned long, EItemStatistic, unsigned long long *);
	unsigned long GetQueryUGCNumAdditionalPreviews(unsigned long long, unsigned long);
	bool GetQueryUGCAdditionalPreview(unsigned long long, unsigned long, unsigned long, char *, unsigned long, char *, unsigned long, EItemPreviewType *);
	unsigned long GetQueryUGCNumKeyValueTags(unsigned long long, unsigned long);
	bool GetQueryUGCKeyValueTag(unsigned long long, unsigned long, unsigned long, char *, unsigned long, char *, unsigned long);
	bool ReleaseQueryUGCRequest(unsigned long long);
	bool AddRequiredTag(unsigned long long, const char *);
	bool AddExcludedTag(unsigned long long, const char *);
	bool SetReturnOnlyIDs(unsigned long long, bool);
	bool SetReturnKeyValueTags(unsigned long long, bool);
	bool SetReturnLongDescription(unsigned long long, bool);
	bool SetReturnMetadata(unsigned long long, bool);
	bool SetReturnChildren(unsigned long long, bool);
	bool SetReturnAdditionalPreviews(unsigned long long, bool);
	bool SetReturnTotalOnly(unsigned long long, bool);
	bool SetLanguage(unsigned long long, const char *);
	bool SetAllowCachedResponse(unsigned long long, unsigned long);
	bool SetCloudFileNameFilter(unsigned long long, const char *);
	bool SetMatchAnyTag(unsigned long long, bool);
	bool SetSearchText(unsigned long long, const char *);
	bool SetRankedByTrendDays(unsigned long long, unsigned long);
	bool AddRequiredKeyValueTag(unsigned long long, const char *, const char *);
	unsigned long long RequestUGCDetails(unsigned long long, unsigned long);
	unsigned long long CreateItem(unsigned long, EWorkshopFileType);
	unsigned long long StartItemUpdate(unsigned long, unsigned long long);
	bool SetItemTitle(unsigned long long, const char *);
	bool SetItemDescription(unsigned long long, const char *);
	bool SetItemUpdateLanguage(unsigned long long, const char *);
	bool SetItemMetadata(unsigned long long, const char *);
	bool SetItemVisibility(unsigned long long, ERemoteStoragePublishedFileVisibility);
	bool SetItemTags(unsigned long long, const SteamParamStringArray_t *);
	bool SetItemContent(unsigned long long, const char *);
	bool SetItemPreview(unsigned long long, const char *);
	bool RemoveItemKeyValueTags(unsigned long long, const char *);
	bool AddItemKeyValueTag(unsigned long long, const char *, const char *);
	bool AddItemPreviewFile(unsigned long long, const char *, EItemPreviewType);
	bool AddItemPreviewVideo(unsigned long long, const char *);
	bool UpdateItemPreviewFile(unsigned long long, unsigned long, const char *);
	bool UpdateItemPreviewVideo(unsigned long long, unsigned long, const char *);
	bool RemoveItemPreview(unsigned long long, unsigned long);
	unsigned long long SubmitItemUpdate(unsigned long long, const char *);
	EItemUpdateStatus GetItemUpdateProgress(unsigned long long, unsigned long long *, unsigned long long *);
	unsigned long long SetUserItemVote(unsigned long long, bool);
	unsigned long long GetUserItemVote(unsigned long long);
	unsigned long long AddItemToFavorites(unsigned long, unsigned long long);
	unsigned long long RemoveItemFromFavorites(unsigned long, unsigned long long);
	unsigned long long SubscribeItem(unsigned long long);
	unsigned long long UnsubscribeItem(unsigned long long);
	unsigned long GetNumSubscribedItems();
	unsigned long GetSubscribedItems(unsigned long long *, unsigned long);
	unsigned long GetItemState(unsigned long long);
	bool GetItemInstallInfo(unsigned long long, unsigned long long *, char *, unsigned long, unsigned long *);
	bool GetItemDownloadInfo(unsigned long long, unsigned long long *, unsigned long long *);
	bool DownloadItem(unsigned long long, bool);
	bool BInitWorkshopForGameServer(unsigned long, const char *);
	void SuspendDownloads(bool);
	unsigned long long StartPlaytimeTracking(unsigned long long *, unsigned long);
	unsigned long long StopPlaytimeTracking(unsigned long long *, unsigned long);
	unsigned long long StopPlaytimeTrackingForAllItems();
	ISteamUGC(ISteamUGC &);
	ISteamUGC(const ISteamUGC &);
	ISteamUGC();
	ISteamUGC & operator=(ISteamUGC &);
	ISteamUGC & operator=(const ISteamUGC &);
};