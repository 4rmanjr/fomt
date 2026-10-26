# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080124D0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080124D0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080124D0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080124D0/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080124D0/opencode/func.c" 2
s32 __builtin_new(s32);
s32 func_0800770C(s32 *);
s32 func_08007714(s32 *, s32);
s32 func_0800835C(s32 *);
s32 func_08008364(s32 *, s32);
s32 func_08050CC0(s32, s32, s32, s32, s32, s32 *, s32 *);
s32 func_08050D0C(s32, s32);
s32 func_08050D34(s32);
s32 func_08050D5C(s32);

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[148];
    struct GenObj *unk9C;
    u8 _padA0[12];
    struct GenObj *unkAC;
    u8 _padB0[4];
    struct GenObj *unkB4;
    struct GenObj *unkB8;
} GenObj;
void func_080124D0(GenObj *arg0) {
s32 spC;
s32 sp10;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    void *temp_r1;
    void *temp_r1_2;
    GenObj *temp_r7;

    temp_r7 = arg0->unk4;
    temp_r1 = temp_r7->unkB4;
    if ((temp_r1 != 0) && (temp_r1 != 0)) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    temp_r7->unkB4 = 0;
    temp_r1_2 = temp_r7->unkB8;
    if ((temp_r1_2 != 0) && (temp_r1_2 != 0)) {
        ((void (*)(void *,...))(temp_r1_2->unk4->unk8))(temp_r1_2, 3);
    }
    temp_r7->unkB8 = 0;
    temp_r5 = temp_r7->unkAC;
    if (temp_r5 == 0) {
        if (((GenObj *)((u8 *)temp_r7 + 0xAC))->unk3C == 0) {
            temp_r4 = __builtin_new(4);
            func_0800835C(&spC);
            func_0800770C(&sp10);
            temp_r0 = func_08050CC0(temp_r4, 0, 0x1F, 0, 1, &spC, &sp10);
            temp_r0_2 = temp_r7->unkAC;
            if ((temp_r0 != temp_r0_2) && (temp_r0_2 != 0)) {
                func_08050D0C(temp_r0_2, 3);
            }
            temp_r7->unkAC = temp_r0;
            func_08007714(&sp10, 2);
            func_08008364(&spC, 2);
        } else {
            temp_r4_2 = __builtin_new(4);
            func_0800835C(&spC);
            func_0800770C(&sp10);
            temp_r0_3 = func_08050CC0(temp_r4_2, 0, 0x1F, 0, temp_r5, &spC, &sp10);
            temp_r0_4 = temp_r7->unkAC;
            if ((temp_r0_3 != temp_r0_4) && (temp_r0_4 != 0)) {
                func_08050D0C(temp_r0_4, 3);
            }
            temp_r7->unkAC = temp_r0_3;
            func_08007714(&sp10, 2);
            func_08008364(&spC, 2);
        }
    }
    if (func_08050D34(temp_r7->unkAC) != 3) {
        func_08050D5C(temp_r7->unkAC);
        temp_r7->unk9C = 0xE;
    }
}
