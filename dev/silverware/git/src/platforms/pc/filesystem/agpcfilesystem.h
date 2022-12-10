#pragma once

class AgPCFileSystem :
	AgFileSystem
{
protected:
	virtual AgPointer<AgMount> mount(AgMountPoint, AgMountType);
	virtual AgPointer<AgMount> mountUser(AgPointer<AgUser>);
public:
	AgPCFileSystem();
	AgPath getSystemSavePath();
	virtual ~AgPCFileSystem();
};