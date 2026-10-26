# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E99C/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E99C/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E99C/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E99C/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E99C/kilo-1531/func.c" 2
s32 func_0805EC24(s32 *, s32 *, u32, u32);

void func_0805E99C(u8 *arg0, void *arg1, s32 arg2, void *arg3) {
    s32 *sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    u32 sp1C;
    s32 sp20;
    u8 *sp24;
    s32 sp28;
    s32 temp_r0_2;
    s32 temp_r1_2;
    s32 temp_r2;
    s32 temp_r2_3;
    s32 temp_r2_5;
    s32 temp_r3_3;
    s32 temp_r5;
    u32 temp_r0;
    u32 temp_r1;
    u32 temp_r2_2;
    u32 var_r0;
    u32 var_r6;
    u32 var_sb;
    u8 temp_r2_4;
    u8 temp_r2_6;
    u8 temp_r3;
    void *temp_r1_3;
    void *temp_r3_2;
    void *var_sl;

    sp24 = arg0;
    var_sl = arg1;
    temp_r2 = (arg2 * 8) + var_sl;
    sp28 = temp_r2;
    if (var_sl == temp_r2) {
        return;
    }
loop_2:
    sp1C = var_sl->unk0;
    sp20 = var_sl->unk4;
    temp_r0 = (u32) (sp1C << 0x10) >> 0x1E;
    temp_r1 = sp1C >> 0x1E;
    if (temp_r0 == 0) {
        var_sb = 8 << temp_r1;
        var_r6 = var_sb;
    } else {
        temp_r2_2 = 8 << (((u32) (temp_r1 + 1) >> 1) + 1);
        var_r0 = 8;
        if (temp_r1 != 1) {
            var_r0 = temp_r2_2 >> 1;
        }
        if (temp_r0 != 1) {
            var_sb = temp_r2_2;
            var_r6 = var_r0;
        } else {
            var_sb = var_r0;
            var_r6 = temp_r2_2;
        }
    }
    temp_r5 = (s32) (sp1C << 7) >> 0x17;
    spC = temp_r5;
    sp10 = (s32) sp1C;
    temp_r2_3 = arg3->unk14;
    if (temp_r2_3 == 0) {
        temp_r2_4 = arg3->unk10;
        if (1 & temp_r2_4) {
            spC = 0 - (temp_r5 + var_r6);
            sp1C = (0xEFFFFFFF & sp1C) | (((((u32) (sp1C * 8) >> 0x1F) ^ 1) & 1) << 0x1C);
        }
        if (2 & temp_r2_4) {
            sp10 = 0 - (sp10 + var_sb);
            sp1C = (0xDFFFFFFF & sp1C) | (((((u32) (sp1C * 4) >> 0x1F) ^ 1) & 1) << 0x1D);
        }
    } else {
        temp_r3 = arg3->unk11;
        sp1C = (((((0xF1FFFFFF & sp1C) | ((7 & temp_r3) << 0x19)) & 0xEFFFFFFF) | ((((u32) (8 & temp_r3) >> 3) & 1) << 0x1C)) & 0xDFFFFFFF) | ((((u32) (0x10 & temp_r3) >> 4) & 1) << 0x1D);
        temp_r3_2 = sp24 + (((temp_r3 & 0x1F) << 5) + 4);
        temp_r0_2 = temp_r3_2->unk6 | (temp_r3_2->unkE << 0x10);
        sp4 = temp_r0_2;
        sp8 = (u16) ((sp8 & 0xFFFF0000) | temp_r3_2->unk16) | (temp_r3_2->unk1E << 0x10);
        sp14 = temp_r0_2;
        sp18 = sp8;
        sp0 = &sp14;
        func_0805EC24(&spC, &sp10, var_r6, var_sb);
        if (temp_r2_3 == 3) {
            spC -= (s32) (var_r6 + (var_r6 >> 0x1F)) >> 1;
            sp10 -= (s32) ((var_sb >> 0x1F) + var_sb) >> 1;
        }
    }
    temp_r3_3 = spC + arg3->unk0;
    spC = temp_r3_3;
    temp_r1_2 = sp10 + arg3->unk2;
    sp10 = temp_r1_2;
    if ((temp_r2_3 != 0) || (((s32) (temp_r3_3 + var_r6) > 0) && (temp_r3_3 <= 0xEF) && ((s32) (temp_r1_2 + var_sb) > 0) && (temp_r1_2 <= 0x9F))) {
        sp1C = (((((((((sp1C & 0xFFFFFF00) | (u8) temp_r1_2) & 0xFFFFFCFF) | ((temp_r2_3 & 3) << 8)) & 0xFFFFF3FF) | ((arg3->unkC & 3) << 0xA)) & 0xFFFFEFFF) | ((arg3->unk18 & 1) << 0xC)) & 0xFE00FFFF) | ((temp_r3_3 & 0x1FF) << 0x10);
        temp_r2_5 = (((0xFFFFFC00 & sp20) | ((u32) ((((u32) (sp20 << 0x16) >> 0x16) + arg3->unk6) << 0x16) >> 0x16)) & 0xFFFFF3FF) | ((arg3->unk8 & 3) << 0xA);
        sp20 = (0xFFFF0FFF & temp_r2_5) | (((u16) (((u32) (temp_r2_5 << 0x10) >> 0x1C) + arg3->unk4) & 0xF) << 0xC);
        temp_r2_6 = *sp24;
        if ((u32) temp_r2_6 <= 0x7FU) {
            temp_r1_3 = sp24 + ((temp_r2_6 * 8) + 4);
            temp_r1_3->unk0 = sp1C;
            temp_r1_3->unk4 = (u16) sp0.unk20;
            *sp24 = temp_r2_6 + 1;
        }
    }
    var_sl += 8;
    if (var_sl != sp28) {
        goto loop_2;
    }
}
