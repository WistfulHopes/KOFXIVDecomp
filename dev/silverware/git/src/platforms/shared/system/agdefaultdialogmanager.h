#pragma once

class AgDefaultDialogManager :
	AgDialogManager
{
public:
	AgDefaultDialogManager();
	virtual ~AgDefaultDialogManager();
protected:
	virtual AgPointer<AgDialog> createSignInDialog(AgPointer<AgUser>, AgDelegate1<AgPointer<AgDialog>,void>);
	virtual AgPointer<AgDialog> createUserSelectDialog(AgPointer<AgController>, unsigned long, AgDelegate1<AgPointer<AgDialog>,void>);
	virtual AgPointer<AgDialog> createHelpDialog(AgPointer<AgUser>, AgDelegate1<AgPointer<AgDialog>,void>);
};