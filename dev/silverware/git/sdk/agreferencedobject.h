#pragma once

class AgReferencedObject
{
public:
	AgReferencedObject(const AgReferencedObject &);
	AgReferencedObject();
	AgReferencedObject & operator=(const AgReferencedObject &);
	long createReferenceCounter(void *);
	AgReferenceCount * getReferenceCounter();
private:
	AgReferenceCount * m_refCount; // 0x0
};
void AgReferencedObject::dispose<AgLeaderboardRankingList>(AgLeaderboardRankingList * data); // 0x1406833C0