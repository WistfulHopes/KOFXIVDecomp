#pragma once

class Scene_RoomMember :
	ErrorChecker
{
private:
	RoomMembers * m_pRoomMembers; // 0x10
	bool m_bBattleMode; // 0x18
public:
	Scene_RoomMember(const Scene_RoomMember &);
	Scene_RoomMember();
	virtual ~Scene_RoomMember();
	void dispose();
	void setup();
	void update(float);
	void draw();
	void setBattleMode(bool);
	void setVisible(bool);
	void switchingVisible(bool);
	void switchingVisible();
	RoomMembers * getRoomMembers();
private:
	void setupRoomMembers();
	void refreshRoomMembersState();
	long getUsersData(NET_USER_DATA *, NET_USER_DATA_SUB *);
	void setVoiceChatState(NET_USER_DATA *, long);
public:
	Scene_RoomMember & operator=(const Scene_RoomMember &);
};