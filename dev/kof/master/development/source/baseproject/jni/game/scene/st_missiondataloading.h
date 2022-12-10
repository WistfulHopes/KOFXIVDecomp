#pragma once

class AsyncCharaFileLoad<ComboMissionData>
{
	class AsyncState;
	class AsyncLoadJob;
public:
	AsyncCharaFileLoad<ComboMissionData>(const AsyncCharaFileLoad<ComboMissionData> &);
	AsyncCharaFileLoad<ComboMissionData>();
	~AsyncCharaFileLoad<ComboMissionData>();
	void LoadCharaFile(std::string);
	bool IsLoaded();
	ComboMissionData * GetObj();
	bool IsWorking();
	void Release();
	extension::AsyncContentConstants::ErrorCode GetErrorCode();
private:
	extension::RefCountablePtr<extension::AsyncContent<ComboMissionData> > state; // 0x0
	bool bWorking; // 0x8
public:
	AsyncCharaFileLoad<ComboMissionData> & operator=(const AsyncCharaFileLoad<ComboMissionData> &);
};