#pragma once

class extension::BasicLuaFuncs
{
public:
	static long Lfn_CallIfCallable(lua_State *);
	static long Lfn_Yield(lua_State *);
	static long Lfn_MakeClosure(lua_State *);
	static long Lfn_WaitFor(lua_State *);
	static void AuxSetFuncs(lua_State *);
};
class extension::GameScript
{
public:
	GameScript();
private:
	GameScript(extension::GameScript &);
	extension::GameScript & operator=(const extension::GameScript &);
public:
	~GameScript();
	void FrameUpdate();
	void RenderScene();
private:
	void InitGameThread(lua_State *);
	class LuaLib;
	extension::SharedLuaContext m_ScriptContext; // 0x0
	long m_CoroutineRefIndex; // 0x18
};