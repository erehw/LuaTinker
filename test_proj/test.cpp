// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int sample1 ( );
int sample2 ( );
int sample3 ( );
int sample4 ( );
int sample5 ( );
int sample6 ( );

#include <lua.hpp>
#include "lua_tinker.h"
int _tmain ( int argc, _TCHAR* argv[] )
{


   lua_State* L = luaL_newstate();

   luaopen_base(L);
   lua_tinker::def(L,"sample1",sample1);
   lua_tinker::def(L,"sample2",sample2);
   lua_tinker::def(L,"sample3",sample3);
   lua_tinker::def(L,"sample4",sample4);
   lua_tinker::def(L,"sample5",sample5);
   lua_tinker::def(L,"sample6",sample6);

   // 设置全局变量

   // 执行脚本
   lua_tinker::dofile ( L, "samples.lua" );

   lua_tinker::call<int> ( L, "run" );

   lua_close ( L );

   return 0;
}

