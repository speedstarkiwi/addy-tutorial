//these are the addys for this update!
//addys dumped at: Sat Feb 18 10:52:50 2023

#include <string>
int ASLR(uintptr_t addy) { return addy - 0x400000 + reinterpret_cast<uintptr_t>(GetModuleHandleA(NULL)); }
int RASLR(uintptr_t addy) { return addy + 0x400000; }

uintptr_t taskdefer_addy = ASLR(0x7E0790);
#define taskdefer_conv __cdecl

uintptr_t getstate_addy = ASLR(0x7A50C0);
#define getstate_conv __thiscall

uintptr_t getscheduler_addy = ASLR(0xB14E80);
#define getscheduler_addy __cdecl

uintptr_t print_addy = ASLR(0x1034AB0);
#define print_ccv __cdecl

uintptr_t pushvfstring_addy = ASLR(0x18A0070);
#define pushvfstring_ccv "none"

//successfully dumped 5 addys!
//dumped with speedstarsdumper by speedstarskiwi


//these arent addys, these are a base of your exploit!
//if u dont know what addys needed or forgot, enjoy!
#include <string>
int ASLR(uintptr_t addy) { return addy - 0x400000 + reinterpret_cast<uintptr_t>(GetModuleHandleA(NULL)); }
int RASLR(uintptr_t addy) { return addy + 0x400000; } 
int TOP = 0x0000, BASE = 0x0000;

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

uintptr_t pseudo2_addy = ASLR(NULL);
#define pseudo2_ccv __fastcall
#define pseudo2_aob "8B C1 81 FA ?? ?? ?? ?? 74 ?? 56"

uintptr_t spawn_addy = ASLR(NULL);
#define spawn_ccv __cdecl 

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

using r_pseudo2_t = uintptr_t*(pseudo2_ccv*)(uintptr_t a1, int a2);
r_pseudo2_t r_pseudo2 = (r_pseudo2_t)(pseudo2_addy);

using r_spawn_t = int(spawn_ccv*)(uintptr_t a1);
r_spawn_t r_spawn = (r_spawn_t)(spawn_addy);

int r_gettop(uintptr_t a1)
{
  return (*(uintptr_t*)(a1 + TOP) - *(uintptr_t*)(a1 + BASE)) >> (int)4;
}

