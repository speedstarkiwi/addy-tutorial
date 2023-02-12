//addys posted for version-b467400c8f8e4097

#include <string>
int ASLR(uintptr_t addy) { return addy - 0x400000 + reinterpret_cast<uintptr_t>(GetModuleHandleA(NULL)); }
int RASLR(uintptr_t addy) { return addy + 0x400000; } 

uintptr_t luavmload_addy = ASLR(NULL);
#define luavmload_conv __fastcall

uintptr_t taskdefer_addy = ASLR(NULL);
#define taskdefer_conv __cdecl

uintptr_t getstate_addy = ASLR(NULL);
#define getstate_conv __thiscall

uintptr_t getscheduler_addy = ASLR(NULL);
#define getscheduler_conv __cdecl

uintptr_t typename_addy = ASLR(NULL);
#define typename_conv __cdecl

uintptr_t print_addy = ASLR(NULL);
#define print_conv __cdecl

uintptr_t pushvfstring_addy = ASLR(NULL);
#define pushvfstring_conv "none" 

using r_vm_load_t = uintptr_t(luavmload_conv*)(uintptr_t a1, std::string* a2, const char* a3, int a4);
r_vm_load_t r_vm_load = (r_vm_load_t)(luavmload_addy);

using r_taskdefer_t = uintptr_t(taskdefer_conv*)(uintptr_t a1);
r_taskdefer_t r_taskdefer = (r_taskdefer_t)(taskdefer_addy);

using r_getstate_t = uintptr_t(getstate_conv*)(uintptr_t a1, int* a2);
r_getstate_t r_getstate = (r_getstate_t)(state_addy);

using r_getscheduler_t = uintptr_t(getscheduler_conv*)();
r_getscheduler_t r_getscheduler = (r_getscheduler_t)(getscheduler_addy);

using r_typename_t = int(typename_conv*)(uintptr_t a1, int a2);
r_typename_t r_typename = (r_typename_t)(typename_addy);

using r_print_t = uintptr_t(print_conv*)(int a1, const char* a2);
r_print_t r_print = (r_print_t)(print_addy);

using r_pushvfstring_t = int(pushvfstring_conv*)(std::uintptr_t a1, const char* a2, ...);
r_pushvfstring_t r_pushvfstring = (r_pushvfstring_t)(pushvfstring_addy);
