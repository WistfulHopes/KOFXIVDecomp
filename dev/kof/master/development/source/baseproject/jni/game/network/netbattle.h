#pragma once

enum BT_NET_PHASE
{
	BT_NET_PHASE_NONE = 255,
	BT_NET_PHASE_STANDALONE = 0,
	BT_NET_PHASE_SETUP = 1,
	BT_NET_PHASE_WAIT = 2,
	BT_NET_PHASE_SYNC = 3,
	BT_NET_PHASE_IDLE = 4,
};
class NetBattleCommandManager
{
public:
	NetBattleCommandManager();
	~NetBattleCommandManager();
	void setPauseFlag(bool);
private:
	NET_KEYLOG_MANAGER keyLogMan[2]; // 0x0
	long seqTime; // 0x30
	long seqTime2; // 0x34
	long sendTime; // 0x38
	long PauseTime; // 0x3C
	unsigned char sendKeyBuffer[2]; // 0x40
	unsigned char recvKeyBuffer[2]; // 0x42
	BT_NET_PHASE phase; // 0x44
	long phaseCount; // 0x48
	bool setupFlag; // 0x4C
	bool pauseFlag; // 0x4D
	unsigned long m_nKeyReqTime; // 0x50
	unsigned long long lastRecvTime[2]; // 0x58
	unsigned long long lastRecvTimeForTimeout; // 0x68
	struct LOG_BUFFER;
	NetBattleCommandManager::LOG_BUFFER logBuffer[100]; // 0x70
	long tcp_send_time; // 0x390
	unsigned short tcp_send_time_crc; // 0x394
	void resetKeyLog(NET_KEYLOG_MANAGER *);
	bool parse();
	void checkWaitKey(unsigned long);
	unsigned char * searchKeyLog(NET_KEYLOG_MANAGER *, long);
	void margeKeyBuffer(unsigned char *, const unsigned char *);
	void copyKeyBuffer(unsigned char *, const unsigned char *);
	void setSendKeyLog(long, unsigned char, long);
	void setPhase(BT_NET_PHASE);
	void cleanKeyLog();
public:
	void updateKeyLog(long, unsigned char *, long);
	void btlnt_Phase_Init(BT_NET_PHASE);
	bool btlnt_Phase_Update(BT_NET_PHASE);
	bool getSetupFlag();
	void StandAlone_Init();
	bool StandAlone_Update();
	void Setup_Init();
	bool Setup_Update();
	void Wait_Init();
	bool Wait_Update();
	void Sync_Init();
	bool Sync_Update();
	void Idle_Init();
	bool Idle_Update();
	bool getPauseFlag();
	void setLastRecvTime(long, unsigned long long);
	const unsigned long getKeyRepuestTime();
	void setKeyRepuestTime(const unsigned long);
	void getSendKeyData(long, long *);
	void Initialize(bool, bool);
	void Update();
	void Cleanup();
	bool getLostKey(long, BATTLE_COMMAND_PACKET *);
	bool getKey(long, BATTLE_COMMAND_PACKET *, long);
	void sendKeyData(long, unsigned char *);
	void recvKeyData(long, unsigned char *);
	bool setReplayKeyData(long, unsigned char *, NET_PACKET_KEY *, unsigned long long);
	unsigned char getReplayKeyData(long, unsigned char *);
	void SetReplayDataInfo(long long, NET_USER_DATA *);
	void SetReplayRoundCommandBuffer(long, BATTLE_RESULT_TYPE);
	void SetReplayRoundInfo(long, const BattleSystem::BattleRoundInfo &);
	void SetReplayRoundEndParam(long, long, BattleSystem::BattlePlayerRoundEndInfo &);
	void ReleaseBuffer(bool);
	void SetSetTimeSendTCP_Time(long);
	long GetSetTimeSendTCP_Time();
	void SetSetTimeSendTCP_Crc(long);
	long GetSetTimeSendTCP_Crc();
	unsigned short tcp_send_crc; // 0x396
	void SetLastRecvTimeForTimeout(unsigned long long);
	unsigned long long GetLastRecvTimeForTimeout();
	unsigned long long GetLastRecvTime(long);
	long getSeqTime();
	long getSeqTime2();
};
struct NetBattleCommandManager::LOG_BUFFER
{
	long time_buf_log; // 0x0
	char playerId_buf_log; // 0x4
	unsigned char key_buf_log; // 0x5
	bool flag; // 0x6
};