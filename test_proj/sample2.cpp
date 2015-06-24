#include <lua.hpp>
#include "lua_tinker.h"

static int cpp_int = 100;

int sample2()
{
    lua_State* L = luaL_newstate();

    luaopen_base(L);

    // 设置全局变量
    lua_tinker::set(L, "cpp_int", cpp_int);

    // 执行脚本
    lua_tinker::dofile(L, "sample2.lua");

    // 获取lua变量值
    auto lua_int = lua_tinker::get<long long>(L, "lua_int");

    printf("lua_int = %lld\n", lua_int);

    lua_close(L);

    return 0;
}
