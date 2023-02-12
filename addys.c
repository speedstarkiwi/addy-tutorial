//addys posted for version-b467400c8f8e4097

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
#define typename_conv "none"

uintptr_t print_addy = ASLR(NULL);
#define print_conv __cdecl

uintptr_t pushvfstring_addy = ASLR(NULL);
#define pushvfstring_conv "none" 
