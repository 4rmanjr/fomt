# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803CD4C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803CD4C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803CD4C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803CD4C/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803CD4C/opencode/func.c" 2
s32 memcpy(void *, s32 *, s32);
s32 memset(s32 *, s32, s32);
extern s32 gUnk_0875A440;

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    u8 _pad5[391];
    s32 unk18C;
    u8 _pad190[288];
    s32 unk2B0;
} GenObj;
void func_0803CD4C(void **arg0, GenObj *arg1, u8 arg2) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    GenObj *sp20;
    s32 sp24;
    s8 *sp2C;
    s32 *var_r1_3;
    s32 var_r0;
    s32 var_r1_2;
    s32 var_r5;
    s32 var_r6;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r4;
    u32 temp_r6;
    u32 var_r1;
    u32 var_r4;
    u8 temp_r3;
    void *temp_r6_2;
    GenObj *temp_r7;
    void *var_r0_2;

    sp20 = arg1;
    sp24 = (s32) arg2;
    temp_r7 = *arg0;
    temp_r0 = (u32) (arg1->unk1 << 0x1E) >> 0x1E;
    switch (temp_r0) {
    default:
        var_r5 = 0xB;
        var_r6 = 0xC;
        break;
    case 1:
        var_r5 = 0xD;
        var_r6 = 0xE;
        break;
    case 2:
        var_r5 = 0xF;
        var_r6 = 0x10;
        break;
    case 3:
        var_r5 = 0x11;
        var_r6 = 0x12;
        break;
    }
    memcpy((GenObj *)((u8 *)temp_r7 + 0x84), (var_r5 << 5) + &gUnk_0875A440, 0x20);
    temp_r7->unk18C = 1;
    memcpy((GenObj *)((u8 *)temp_r7 + 0xA4), (var_r6 << 5) + &gUnk_0875A440, 0x20);
    temp_r7->unk18C = 1;
    temp_r3 = sp20->unk1;
    temp_r0_2 = ((u32) (temp_r3 << 0x19) >> 0x1B) + 1;
    var_r1 = ((((u32) (temp_r3 << 0x1E) >> 0x1E) * 0x1E) + ((((u32) (sp20->unk0 << 0x1D) >> 0x1D) + 6) * 0x78) + temp_r0_2) - 1;
    if (var_r1 > 6U) {
        var_r1 = var_r1 % 7U;
    }
    temp_r6 = 7 & var_r1;
    temp_r0_3 = temp_r0_2 / 10U;
    if ((s32) temp_r0_3 > 0) {
        memcpy((GenObj *)((u8 *)temp_r7 + 0xC4), (temp_r0_3 << 5) + &gUnk_0875A440, 0x20);
        temp_r7->unk18C = 1;
    } else {
        memset(&sp0, 0, 0x20);
        memcpy((GenObj *)((u8 *)temp_r7 + 0xC4), &sp0, 0x20);
        temp_r7->unk18C = 1;
    }
    memcpy((GenObj *)((u8 *)temp_r7 + 0xE4), ((temp_r0_2 % 10U) << 5) + &gUnk_0875A440, 0x20);
    temp_r7->unk18C = 1;
    switch (temp_r6) {
    default:
        sp0 = 0x60;
        sp4 = 0x61;
        var_r0 = 0x62;
        break;
    case 1:
        sp0 = 0x63;
        sp4 = 0x64;
        var_r0 = 0x65;
        break;
    case 2:
        sp0 = 0x66;
        sp4 = 0x67;
        var_r0 = 0x68;
        break;
    case 3:
        sp0 = 0x69;
        sp4 = 0x6A;
        var_r0 = 0x6B;
        break;
    case 4:
        sp0 = 0x6C;
        sp4 = 0x6D;
        var_r0 = 0x6E;
        break;
    case 5:
        sp0 = 0x6F;
        sp4 = 0x70;
        var_r0 = 0x71;
        break;
    case 6:
        sp0 = 0x72;
        sp4 = 0x73;
        var_r0 = 0x74;
        break;
    }
    sp8 = var_r0;
    memcpy((GenObj *)((u8 *)temp_r7 + 0x1A8), (sp0 << 5) + &gUnk_0875A440, 0x20);
    temp_r7->unk2B0 = 1;
    memcpy((GenObj *)((u8 *)temp_r7 + 0x1C8), (sp4 << 5) + &gUnk_0875A440, 0x20);
    temp_r7->unk2B0 = 1;
    memcpy((GenObj *)((u8 *)temp_r7 + 0x1E8), (sp8 << 5) + &gUnk_0875A440, 0x20);
    temp_r7->unk2B0 = 1;
    temp_r0_4 = (u32) ((s32) sp20->unk0 << 0xB) >> 0x1B;
    var_r1_2 = 0x1E;
    sp2C = (GenObj *)((u8 *)temp_r7 + 0x2B0);
    if (temp_r0_4 <= 0xBU) {
        var_r1_2 = 0x1C;
    }
    memcpy((GenObj *)((u8 *)temp_r7 + 0x104), (var_r1_2 << 5) + &gUnk_0875A440, 0x20);
    temp_r7->unk18C = 1;
    var_r4 = 0xC;
    if (temp_r0_4 != 0xC) {
        var_r4 = temp_r0_4;
        if (var_r4 > 0xBU) {
            var_r4 -= 0xC;
        }
    }
    temp_r0_5 = var_r4 / 10U;
    if ((s32) temp_r0_5 > 0) {
        var_r1_3 = (temp_r0_5 << 5) + &gUnk_0875A440;
        var_r0_2 = (GenObj *)((u8 *)temp_r7 + 0x144);
    } else {
        memset(&sp0, 0, 0x20);
        var_r0_2 = (GenObj *)((u8 *)temp_r7 + 0x144);
        var_r1_3 = &sp0;
    }
    memcpy(var_r0_2, var_r1_3, 0x20);
    temp_r7->unk18C = 1;
    memcpy((GenObj *)((u8 *)temp_r7 + 0x164), ((var_r4 % 10U) << 5) + &gUnk_0875A440, 0x20);
    temp_r7->unk18C = 1;
    temp_r4 = (u8) ((u32) ((u32) ((s32) sp20->unk0 << 5) >> 0x1A) / 10U) * 0xA;
    temp_r6_2 = (GenObj *)((u8 *)temp_r7 + 0x228);
    memcpy((GenObj *)((u8 *)temp_r7 + 0x248), ((temp_r4 / 10U) << 5) + &gUnk_0875A440, 0x20);
    *sp2C = 1;
    memcpy((GenObj *)((u8 *)temp_r7 + 0x268), ((temp_r4 % 10U) << 5) + &gUnk_0875A440, 0x20);
    *sp2C = 1;
    if (sp24 != 0) {
        memcpy(temp_r6_2, &gUnk_0875A440 + 0x140, 0x20);
        *sp2C = 1;
        return;
    }
    memset(&sp0, 0, 0x20);
    memcpy(temp_r6_2, &sp0, 0x20);
    *sp2C = 1;
}
