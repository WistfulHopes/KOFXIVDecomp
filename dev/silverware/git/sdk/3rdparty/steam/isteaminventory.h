#pragma once

struct SteamItemDetails_t
{
	unsigned long long m_itemId; // 0x0
	long m_iDefinition; // 0x8
	unsigned short m_unQuantity; // 0xC
	unsigned short m_unFlags; // 0xE
};
class ISteamInventory
{
public:
	EResult GetResultStatus(long);
	bool GetResultItems(long, SteamItemDetails_t *, unsigned long *);
	unsigned long GetResultTimestamp(long);
	bool CheckResultSteamID(long, CSteamID);
	void DestroyResult(long);
	bool GetAllItems(long *);
	bool GetItemsByID(long *, const unsigned long long *, unsigned long);
	bool SerializeResult(long, void *, unsigned long *);
	bool DeserializeResult(long *, const void *, unsigned long, bool);
	bool GenerateItems(long *, const long *, const unsigned long *, unsigned long);
	bool GrantPromoItems(long *);
	bool AddPromoItem(long *, long);
	bool AddPromoItems(long *, const long *, unsigned long);
	bool ConsumeItem(long *, unsigned long long, unsigned long);
	bool ExchangeItems(long *, const long *, const unsigned long *, unsigned long, const unsigned long long *, const unsigned long *, unsigned long);
	bool TransferItemQuantity(long *, unsigned long long, unsigned long, unsigned long long);
	void SendItemDropHeartbeat();
	bool TriggerItemDrop(long *, long);
	bool TradeItems(long *, CSteamID, const unsigned long long *, const unsigned long *, unsigned long, const unsigned long long *, const unsigned long *, unsigned long);
	bool LoadItemDefinitions();
	bool GetItemDefinitionIDs(long *, unsigned long *);
	bool GetItemDefinitionProperty(long, const char *, char *, unsigned long *);
	ISteamInventory(ISteamInventory &);
	ISteamInventory(const ISteamInventory &);
	ISteamInventory();
	ISteamInventory & operator=(ISteamInventory &);
	ISteamInventory & operator=(const ISteamInventory &);
};