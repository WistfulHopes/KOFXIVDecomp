#pragma once

struct AgVertexDeclaration
{
	AgVertexDeclaration(const AgVertexDeclaration &);
	AgVertexDeclaration();
	~AgVertexDeclaration();
	enum ItemType
	{
		ItemType_Position = 0,
		ItemType_TextureCoordinate = 1,
		ItemType_Color = 2,
		ItemType_Normal = 3,
	};
	enum ComponentType
	{
		ComponentType_UInt8 = 0,
		ComponentType_Float32 = 1,
	};
	struct Item;
	void operator=(const AgVertexDeclaration &);
	void addItem(const AgVertexDeclaration::Item &);
	unsigned long getItemCount();
	const AgVertexDeclaration::Item & getItemAtIndex(unsigned long);
	const unsigned long getItemSizeAtIndex(unsigned long);
	unsigned long getVertexSizeBytes();
	unsigned long getFootprint();
	static const unsigned long calcItemSize(const AgVertexDeclaration::Item &);
	const AgVertexDeclarationInternalData & getInternalData();
private:
	AgVertexDeclarationInternalData * m_internalData; // 0x0
};
struct AgVertexDeclaration::Item
{
	Item(long, AgVertexDeclaration::ItemType, long, AgVertexDeclaration::ComponentType, long);
	Item(long, AgVertexDeclaration::ItemType, AgVertexDeclaration::ComponentType, long);
	Item();
	long m_index; // 0x0
	AgVertexDeclaration::ItemType m_itemType; // 0x4
	long m_itemIndex; // 0x8
	AgVertexDeclaration::ComponentType m_componentType; // 0xC
	long m_componentCount; // 0x10
};