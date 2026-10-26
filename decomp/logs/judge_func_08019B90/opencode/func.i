# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08019B90/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08019B90/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08019B90/opencode/common.h" 1
# 1 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h" 1
# 31 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h"
# 1 "/home/armanjr/gitproject/fomt/tools/agbcc/include/limits.h" 1
# 32 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h" 2



typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;



typedef signed char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef int int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int_fast64_t;
typedef unsigned int uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long long uint_fast64_t;



typedef int intptr_t;
typedef unsigned int uintptr_t;



typedef long long intmax_t;
typedef unsigned long long uintmax_t;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08019B90/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef struct { u8 pad[0x24]; u8 v; } S_AD0;typedef struct { u8 pad[0x25]; u8 v; } S_AD8;typedef struct { u8 pad[0x26]; u8 v; } S_AE0;typedef struct { u8 pad[0x14]; u8 v; } S_CD8;typedef struct { u8 pad[3]; u8 v; } S_39C;typedef struct { u8 pad[0x58]; u8 v; } S_601C;typedef struct { u8 pad[0x14]; u8 v; } S_B68;typedef struct { u8 pad[0x26]; u8 v; } S_AEC;typedef struct { u8 pad[0xB30]; u8 v; } S_44E0;typedef struct { u8 pad[0x92C]; u8 v; } S_4D8;typedef struct {
    s32 unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} Vtbl;typedef struct {
    Vtbl *vtbl;
} Obj;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08019B90/opencode/func.c" 2
void *GetMapData(s32);
s32 func_0801A13C(void *, u32, u32, s32);

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[12];
    struct GenObj *unk14;
    u8 _pad18[120];
    struct GenObj *unk90;
    u8 _pad94[4012];
    s32 unk1040;
    u8 _pad1044[4];
    s32 unk1048;
    s32 unk104C;
} GenObj;
void func_08019B90(GenObj *arg0) {
    s32 temp_r2_2;
    u8 temp_r2;
    GenObj *temp_r0;

    temp_r0 = arg0->unk4;
    temp_r2 = arg0->unk104C;
    ((void (*)(void *,...))(temp_r0->unk90->unk14))(temp_r0, arg0->unk1048, temp_r2, 0x1E - temp_r2);
    if (GetMapData(arg0->unk4->unk4)->unk24 == 0) {
        temp_r2_2 = *arg0->unk1040;
        func_0801A13C(arg0, (u32) (temp_r2_2 << 0xB) >> 0x1B, (u32) (temp_r2_2 << 5) >> 0x1A, 1);
    }
}
