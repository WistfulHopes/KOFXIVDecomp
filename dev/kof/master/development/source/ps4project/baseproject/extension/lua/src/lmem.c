
void * luaM_growaux_(lua_State * L, void * block, long * size, unsigned long long size_elems, long limit, const char * what); // 0x140295E50
void * luaM_realloc_(lua_State * L, void * block, unsigned long long osize, unsigned long long nsize); // 0x140295F10void *__fastcall luaM_growaux_(
        lua_State *L,
        void *block,
        int *size,
        unsigned __int64 size_elems,
        int limit,
        const char *what)
{
  int v6; // ebx
  __int64 v7; // r11
  void *result; // rax

  v6 = limit;
  v7 = *size;
  if ( (int)v7 < limit / 2 )
  {
    v6 = 2 * v7;
    if ( 2 * (int)v7 < 4 )
      v6 = 4;
  }
  else if ( (int)v7 >= limit )
  {
    luaG_runerror(L, "too many %s (limit is %d)", what, (unsigned int)limit);
  }
  if ( v6 + 1 > 0xFFFFFFFFFFFFFFFDui64 / size_elems )
    luaG_runerror(L, "memory allocation error: block too big");
  result = luaM_realloc_(L, block, size_elems * v7, size_elems * v6);
  *size = v6;
  return result;
}

void *__fastcall luaM_realloc_(lua_State *L, void *block, unsigned __int64 osize, unsigned __int64 nsize)
{
  global_State *l_G; // rdi
  unsigned __int64 v5; // rbp
  void *result; // rax

  l_G = L->l_G;
  v5 = 0i64;
  if ( block )
    v5 = osize;
  result = (void *)((__int64 (__fastcall *)(void *))l_G->frealloc)(l_G->ud);
  if ( !result )
  {
    if ( nsize )
    {
      if ( !l_G->gcrunning || (luaC_fullgc(L, 1), (result = l_G->frealloc(l_G->ud, block, osize, nsize)) == 0i64) )
        luaD_throw(L, 4);
    }
  }
  l_G->GCdebt += nsize - v5;
  return result;
}

