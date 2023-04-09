using r_taskdefer = uintptr_t(__cdecl*)(uintptr_t rl);
r_taskdefer lua_taskdefer = (r_taskdefer)(aslr(0x7D0ED0));

using r_print = uintptr_t(__cdecl*)(int type, const char* source);
r_print lua_print = (r_print)(aslr(0x10E4910));

using r_luavm_load = uintptr_t(__fastcall*)(uintptr_t rl, std::string* src, const char* chnk, int env);
r_luavm_load luavm_load = (r_luavm_load)(aslr(0x70E610));

