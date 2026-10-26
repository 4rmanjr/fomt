# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EA94/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EA94/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EA94/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EA94/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EA94/opencode/func.c" 2
typedef struct GenObj {
    s32 unk0;
    s32 unk4;
} GenObj;
void func_0804EA94(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 sp0;
    s32 sp4;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r6_2;
    u32 temp_r3_2;

    sp0 = 0;
    sp4 = 0;
    temp_r6 = sp0 | 0x1000;
    sp0 = temp_r6;
    temp_r5 = (0xFFFFFF00 & temp_r6) | (u8) (sp0 + arg2);
    temp_r6_2 = (0xFE00FFFF & temp_r5) | (((((u32) (temp_r5 << 7) >> 0x17) + arg1) & 0x1FF) << 0x10);
    temp_r3 = (0xFFFFFC00 & sp4) | ((u32) ((((u32) (sp4 << 0x16) >> 0x16) + arg3) << 0x16) >> 0x16);
    temp_r4 = (0xFFFF0FFF & temp_r3) | (((u16) (((u32) (temp_r3 << 0x10) >> 0x1C) + arg4) & 0xF) << 0xC);
    temp_r2 = (0xFFFFF3FF & temp_r4) | (((u16) (((u32) (temp_r4 << 0x14) >> 0x1E) + arg5) & 3) << 0xA);
    sp4 = temp_r2;
    temp_r3_2 = (0xFFFF3FFF & temp_r6_2) | (((((u32) (temp_r6_2 << 0x10) >> 0x1E) + arg7) & 3) << 0xE);
    temp_r1 = (0x3FFFFFFF & temp_r3_2) | (((temp_r3_2 >> 0x1E) + arg6) << 0x1E);
    sp0 = temp_r1;
    arg0->unk0 = temp_r1;
    arg0->unk4 = temp_r2;
}
