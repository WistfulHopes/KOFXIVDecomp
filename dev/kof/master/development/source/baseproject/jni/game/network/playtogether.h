#pragma once

enum <unnamed-enum-PLAY_TOGETHER_STATE_DEFAULT>
{
	PLAY_TOGETHER_STATE_DEFAULT = 0,
	PLAY_TOGETHER_STATE_LEAVE_ROOM = 1,
	PLAY_TOGETHER_STATE_HOST_DIALOG = 2,
	PLAY_TOGETHER_STATE_HOST_DIALOG_WAIT = 3,
};
class cPlayTogether
{
private:
	static cPlayTogether * instance_; // 0xFFFFFFFFFFFFFFFF
	cPlayTogether();
	bool f_enable; // 0x0
	bool f_wait_gui; // 0x1
public:
	static cPlayTogether * getinstance();
	bool IsEnable();
	void SetEnable();
	void Clear();
	bool IsWaitGUI();
	void SetWaitGUI();
	void ClearWaitGUI();
	long GetCnttMember();
};