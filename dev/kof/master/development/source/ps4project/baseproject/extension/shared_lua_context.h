#pragma once

class extension::SharedLuaContext
{
private:
	lua_State * m_Context; // 0x0
	extension::MemoryAllocator * m_pMemoryAllocator; // 0x8
	void * m_pAllocatorMemory; // 0x10
public:
	SharedLuaContext(const extension::SharedLuaContext &);
	SharedLuaContext();
	~SharedLuaContext();
	extension::SharedLuaContext & operator=(const extension::SharedLuaContext &);
	bool IsClosed();
	void Open();
	void Close();
	lua_State * Get();
	static extension::SharedLuaContext SharedFromBareContext(lua_State *);
	static long LuaErrorHandler(lua_State *);
private:
	static const void * RefCountRegKey();
	void Swap(extension::SharedLuaContext &);
	void AddRef();
	void Release();
};