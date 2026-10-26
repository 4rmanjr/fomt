# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080171F8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080171F8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080171F8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080171F8/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080171F8/opencode/func.c" 2
void *GetMapData(u32);
s32 GetUpgradeLevel__C4Barn(s32);
s32 GetUpgradeLevel__C4Coop(s32);
u32 GetUpgradeLevel__C9FarmHouse(s32);
s32 func_08017180(s32 *, u16, s32 *, s32, u32);
s32 method_0800A07C__C9FieldPlot(s32);
extern s32 gUnk_0810692C;
extern s32 gUnk_08106944;
extern s32 gUnk_0810695C;
extern s32 gUnk_08106974;
extern s32 gUnk_0810698C;
extern s32 gUnk_081069A4;
extern s32 gUnk_081069BC;
extern s32 gUnk_081069D4;
extern s32 gUnk_081069EC;
extern s32 gUnk_08106A04;
extern s32 gUnk_08106A1C;
extern s32 gUnk_08106A34;
extern s32 gUnk_08106A4C;
extern s32 gUnk_08106A64;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[16];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk22;
} GenObj;
void func_080171F8(s32 *arg0, s32 arg1, u8 arg2) {
    s32 *sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    u32 sp14;
    s32 *var_r2_2;
    s32 *var_r2_3;
    s32 *var_r2_4;
    s32 *var_r2_5;
    s32 *var_r2_6;
    s32 *var_r2_7;
    s32 *var_r2_8;
    s32 *temp_r3;
    s32 *temp_r4_3;
    s32 *var_r5;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r2_2;
    s32 temp_r4_2;
    s32 var_r5_2;
    s32 var_r6;
    u16 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r4;
    u32 var_r1;
    u32 var_r2;
    u32 var_r7;
    u8 temp_r2;
    GenObj *temp_r0;

    sp4 = arg0;
    sp8 = arg1;
    temp_r2 = arg2;
    spC = (s32) temp_r2;
    temp_r0 = GetMapData((u32) ((0 - temp_r2) | temp_r2) >> 0x1F);
    temp_r0_2 = temp_r0->unk20;
    var_r2 = 0;
    temp_r4 = temp_r0->unk22 * temp_r0_2;
    if (temp_r4 > 0U) {
        var_r5 = sp4;
        do {
            *var_r5 = *((*(temp_r0->unk1C + var_r2) * 4) + temp_r0->unk18);
            var_r5 += 4;
            var_r2 += 1;
        } while (var_r2 < temp_r4);
    }
    var_r1 = 0;
    sp10 = sp8 + 0x9C8;
    do {
        var_r7 = 0;
        sp14 = var_r1 + 1;
        var_r6 = 0x22;
        var_r5_2 = (var_r1 * 0xAC) + sp10;
loop_5:
        temp_r4_2 = var_r6 + (temp_r0_2 * ((var_r1 * 2) + 0x16));
        temp_r3 = &sp4[temp_r4_2];
        temp_r4_3 = &sp4[temp_r4_2 + temp_r0_2];
        temp_r2_2 = 1 & method_0800A07C__C9FieldPlot(var_r5_2);
        temp_r4_3->unk4 = (u8) ((-2 & temp_r4_3->unk4) | temp_r2_2);
        temp_r4_3->unk0 = (u8) ((-2 & temp_r4_3->unk0) | temp_r2_2);
        temp_r3->unk4 = (u8) ((-2 & temp_r3->unk4) | temp_r2_2);
        temp_r3->unk0 = (u8) ((-2 & temp_r3->unk0) | temp_r2_2);
        var_r6 += 2;
        var_r5_2 += 4;
        var_r7 += 1;
        if (var_r7 <= 0x2AU) {
            goto loop_5;
        }
        var_r1 = sp14;
    } while (var_r1 <= 0x18U);
    temp_r0_3 = GetUpgradeLevel__C9FarmHouse(sp8 + 0x1E0);
    switch (temp_r0_3) {
    default:
        var_r2_2 = &gUnk_0810692C;
        if (spC != 0) {
            var_r2_2 = &gUnk_08106944;
        }
        func_08017180(sp4, temp_r0_2, var_r2_2, 0x1A, 3U);
        break;
    case 1:
        var_r2_3 = &gUnk_0810695C;
        if (spC != 0) {
            var_r2_3 = &gUnk_08106974;
        }
        func_08017180(sp4, temp_r0_2, var_r2_3, 0x12, 3U);
        break;
    case 2:
        var_r2_4 = &gUnk_0810698C;
        if (spC != 0) {
            var_r2_4 = &gUnk_081069A4;
        }
        func_08017180(sp4, temp_r0_2, var_r2_4, 0xA, temp_r0_3);
        break;
    }
    temp_r0_4 = GetUpgradeLevel__C4Barn(sp8 + 0x5DC);
    switch (temp_r0_4) {
    case 0:
        var_r2_5 = &gUnk_081069BC;
        if (spC != 0) {
            var_r2_5 = &gUnk_081069D4;
        }
        func_08017180(sp4, temp_r0_2, var_r2_5, 0x3A, 2U);
        break;
    case 1:
        var_r2_6 = &gUnk_081069EC;
        if (spC != 0) {
            var_r2_6 = &gUnk_08106A04;
        }
        func_08017180(sp4, temp_r0_2, var_r2_6, 0x3A, 2U);
        break;
    }
    temp_r0_5 = GetUpgradeLevel__C4Coop(sp8 + 0x3FC);
    switch (temp_r0_5) {
    case 0:
        var_r2_7 = &gUnk_08106A1C;
        if (spC != 0) {
            var_r2_7 = &gUnk_08106A34;
        }
        func_08017180(sp4, temp_r0_2, var_r2_7, 0xE, 0x34U);
        return;
    case 1:
        var_r2_8 = &gUnk_08106A4C;
        if (spC != 0) {
            var_r2_8 = &gUnk_08106A64;
        }
        func_08017180(sp4, temp_r0_2, var_r2_8, 0xE, 0x34U);
        return;
    }
}
