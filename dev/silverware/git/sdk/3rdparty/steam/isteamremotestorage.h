#pragma once

struct SteamParamStringArray_t
{
	const char * * m_ppStrings; // 0x0
	long m_nNumStrings; // 0x8
};
enum EUGCReadAction
{
	k_EUGCRead_ContinueReadingUntilFinished = 0,
	k_EUGCRead_ContinueReading = 1,
	k_EUGCRead_Close = 2,
};
class ISteamRemoteStorage
{
public:
	bool FileWrite(const char *, const void *, long);
	long FileRead(const char *, void *, long);
	unsigned long long FileWriteAsync(const char *, const void *, unsigned long);
	unsigned long long FileReadAsync(const char *, unsigned long, unsigned long);
	bool FileReadAsyncComplete(unsigned long long, void *, unsigned long);
	bool FileForget(const char *);
	bool FileDelete(const char *);
	unsigned long long FileShare(const char *);
	bool SetSyncPlatforms(const char *, ERemoteStoragePlatform);
	unsigned long long FileWriteStreamOpen(const char *);
	bool FileWriteStreamWriteChunk(unsigned long long, const void *, long);
	bool FileWriteStreamClose(unsigned long long);
	bool FileWriteStreamCancel(unsigned long long);
	bool FileExists(const char *);
	bool FilePersisted(const char *);
	long GetFileSize(const char *);
	long long GetFileTimestamp(const char *);
	ERemoteStoragePlatform GetSyncPlatforms(const char *);
	long GetFileCount();
	const char * GetFileNameAndSize(long, long *);
	bool GetQuota(unsigned long long *, unsigned long long *);
	bool IsCloudEnabledForAccount();
	bool IsCloudEnabledForApp();
	void SetCloudEnabledForApp(bool);
	unsigned long long UGCDownload(unsigned long long, unsigned long);
	bool GetUGCDownloadProgress(unsigned long long, long *, long *);
	bool GetUGCDetails(unsigned long long, unsigned long *, char * *, long *, CSteamID *);
	long UGCRead(unsigned long long, void *, long, unsigned long, EUGCReadAction);
	long GetCachedUGCCount();
	unsigned long long GetCachedUGCHandle(long);
	unsigned long long PublishWorkshopFile(const char *, const char *, unsigned long, const char *, const char *, ERemoteStoragePublishedFileVisibility, SteamParamStringArray_t *, EWorkshopFileType);
	unsigned long long CreatePublishedFileUpdateRequest(unsigned long long);
	bool UpdatePublishedFileFile(unsigned long long, const char *);
	bool UpdatePublishedFilePreviewFile(unsigned long long, const char *);
	bool UpdatePublishedFileTitle(unsigned long long, const char *);
	bool UpdatePublishedFileDescription(unsigned long long, const char *);
	bool UpdatePublishedFileVisibility(unsigned long long, ERemoteStoragePublishedFileVisibility);
	bool UpdatePublishedFileTags(unsigned long long, SteamParamStringArray_t *);
	unsigned long long CommitPublishedFileUpdate(unsigned long long);
	unsigned long long GetPublishedFileDetails(unsigned long long, unsigned long);
	unsigned long long DeletePublishedFile(unsigned long long);
	unsigned long long EnumerateUserPublishedFiles(unsigned long);
	unsigned long long SubscribePublishedFile(unsigned long long);
	unsigned long long EnumerateUserSubscribedFiles(unsigned long);
	unsigned long long UnsubscribePublishedFile(unsigned long long);
	bool UpdatePublishedFileSetChangeDescription(unsigned long long, const char *);
	unsigned long long GetPublishedItemVoteDetails(unsigned long long);
	unsigned long long UpdateUserPublishedItemVote(unsigned long long, bool);
	unsigned long long GetUserPublishedItemVoteDetails(unsigned long long);
	unsigned long long EnumerateUserSharedWorkshopFiles(CSteamID, unsigned long, SteamParamStringArray_t *, SteamParamStringArray_t *);
	unsigned long long PublishVideo(EWorkshopVideoProvider, const char *, const char *, const char *, unsigned long, const char *, const char *, ERemoteStoragePublishedFileVisibility, SteamParamStringArray_t *);
	unsigned long long SetUserPublishedFileAction(unsigned long long, EWorkshopFileAction);
	unsigned long long EnumeratePublishedFilesByUserAction(EWorkshopFileAction, unsigned long);
	unsigned long long EnumeratePublishedWorkshopFiles(EWorkshopEnumerationType, unsigned long, unsigned long, unsigned long, SteamParamStringArray_t *, SteamParamStringArray_t *);
	unsigned long long UGCDownloadToLocation(unsigned long long, const char *, unsigned long);
	ISteamRemoteStorage(ISteamRemoteStorage &);
	ISteamRemoteStorage(const ISteamRemoteStorage &);
	ISteamRemoteStorage();
	ISteamRemoteStorage & operator=(ISteamRemoteStorage &);
	ISteamRemoteStorage & operator=(const ISteamRemoteStorage &);
};
struct RemoteStorageFileShareResult_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 1307,
	};
	EResult m_eResult; // 0x0
	unsigned long long m_hFile; // 0x8
	char m_rgchFilename[260]; // 0x10
};
struct RemoteStorageDownloadUGCResult_t
{
	enum <unnamed-enum-k_iCallback>
	{
		k_iCallback = 1317,
	};
	EResult m_eResult; // 0x0
	unsigned long long m_hFile; // 0x8
	unsigned long m_nAppID; // 0x10
	long m_nSizeInBytes; // 0x14
	char m_pchFileName[260]; // 0x18
	unsigned long long m_ulSteamIDOwner; // 0x120
};