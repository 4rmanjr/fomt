# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08045638/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08045638/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08045638/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08045638/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08045638/opencode/func.c" 2
u32 GetPlayerEventCount__C12Bachelorette(s32);
u32 GetRivalEventCount__C12Bachelorette(s32);
s32 PlayerEventUpdate__12Bachelorette(s32);
s32 RivalEventUpdate__12Bachelorette(s32);
u8 func_0800E4E8(void *);
s32 func_0809C694(s32, u16);
s32 func_0809C6AC(s32, u16);
s32 func_0809C6B0(s32, u16);
s32 func_0809FE74(void *, s32, void *);
s32 func_080A0878(s32, s32);
s32 func_080A1478(void *, void *);
s32 func_080ADBB4(void *);

void func_08045638(void *arg0, u16 arg1, s32 arg2, s32 arg3, u32 arg4, u8 arg5) {
s32 sp0;
    u8 sp4;
    s32 sp8;
    void *sp18;
    s32 temp_r0_2;
    s32 temp_r2_3;
    s32 temp_r7;
    s32 temp_sb;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r3_2;
    s32 var_r6;
    u16 temp_r1;
    u32 temp_r0_3;
    u32 temp_r0_6;
    u32 temp_r1_2;
    u32 var_r0;
    u32 var_r0_2;
    u32 var_r2;
    u32 var_r2_4;
    u32 var_r3;
    u8 temp_r0_4;
    u8 temp_r0_5;
    u8 temp_r2_2;
    u8 temp_r3;
    u8 temp_r3_2;
    u8 temp_r4;
    u8 temp_r5;
    u8 temp_r6;
    void *temp_r0;
    void *temp_r2;

    sp8 = arg2;
    temp_r1 = arg1;
    temp_r6 = arg5;
    temp_r0 = arg0->unk350;
    temp_r7 = temp_r0 + 0x214C;
    temp_r0_2 = func_080A0878(temp_r0 + 0x1CD4, sp8);
    if (temp_r0_2 == 0) {
        return;
    }
    switch (arg3) {
    case 0:
        if ((func_0809C694(temp_r7, temp_r1) << 0x18) == 0) {
            return;
        }
        func_0809C6B0(temp_r7, temp_r1);
        return;
    case 1:
        if (temp_r6 == 0) {
            var_r0 = GetPlayerEventCount__C12Bachelorette(temp_r0_2);
        } else {
            var_r0 = GetRivalEventCount__C12Bachelorette(temp_r0_2);
        }
        if (var_r0 >= arg4) {
            return;
        }
        func_0809C6AC(temp_r7, temp_r1);
        return;
    case 2:
loop_20:
        if (temp_r6 == 0) {
            var_r0_2 = GetPlayerEventCount__C12Bachelorette(temp_r0_2);
        } else {
            var_r0_2 = GetRivalEventCount__C12Bachelorette(temp_r0_2);
        }
        if (var_r0_2 < arg4) {
            if (temp_r6 == 0) {
                PlayerEventUpdate__12Bachelorette(temp_r0_2);
            } else {
                RivalEventUpdate__12Bachelorette(temp_r0_2);
            }
            goto loop_20;
        }
        if ((func_0809C694(temp_r7, temp_r1) << 0x18) != 0) {
            func_0809C6B0(temp_r7, temp_r1);
        }
        if (temp_r6 != 0) {
            return;
        }
        if (GetPlayerEventCount__C12Bachelorette(temp_r0_2) != 5) {
            return;
        }
        temp_r2 = arg0->unk350;
        sp0.unk0 = (u8) temp_r2->unk10;
        temp_r4 = temp_r2->unk11;
        var_r1 = 0;
        var_r3 = ((u32) (temp_r4 << 0x19) >> 0x1B) + 7;
        if (var_r3 > 0x1DU) {
            var_r1 = 1;
            var_r3 -= 0x1E;
        }
        temp_r2_2 = (((-4 & temp_r4) | ((((u32) (temp_r4 << 0x1E) >> 0x1E) + var_r1) & 3)) & ~0x7C) | ((var_r3 & 0x1F) * 4);
        sp0.unk2 = temp_r2_2;
        if (((temp_r2_2 << 0x1E) == 0) && ((u32) (((u32) (temp_r2_2 << 0x19) >> 0x1B) + 1) <= 7U)) {
            temp_r3 = sp0.unk0;
            var_r2 = ((u32) (temp_r3 << 0x1D) >> 0x1D) + 1;
            if (var_r2 > 6U) {
                var_r2 = 0;
                temp_r0_3 = temp_r3 >> 3;
                if (temp_r0_3 <= 0x1CU) {
                    sp0.unk0 = (u8) ((7 & temp_r3) | ((temp_r0_3 + 1) * 8));
                }
            }
            sp0.unk0 = (u8) ((-8 & sp0.unk0) | (var_r2 & 7));
        }
        sp0.unk1 = func_0800E4E8(arg0->unk350 + 0x1BD8);
        temp_sb = func_0809FE74(arg0->unk350 + 0x1CD4, sp8, &sp0 + 1);
        sp0.unk10 = (u8) (-4 & sp0.unk10 & ~0x7C);
        sp18 = &sp0 + 4;
loop_48:
        var_r6 = 0;
        var_r1_2 = 0;
        temp_r2_3 = 0x7F & sp0.unk2;
        if (temp_r2_3 == (0x7F & temp_sb)) {
            var_r1_2 = 1;
        }
        if (var_r1_2 == 0) {
            var_r3_2 = 0;
            if (temp_r2_3 == (0x7F & sp0.unk1)) {
                var_r3_2 = 1;
            }
            if ((var_r3_2 != 0) || ((func_080ADBB4(&sp0 + 2) << 0x18) != 0)) {
                goto block_55;
            }
        } else {
block_55:
            var_r6 = 1;
        }
        if (var_r6 != 0) {
            temp_r5 = sp0.unk2;
            var_r2_2 = ((u32) (temp_r5 << 0x19) >> 0x1B) + 1;
            if (var_r2_2 == 0x1E) {
                temp_r1_2 = (u32) (temp_r5 << 0x1E) >> 0x1E;
                temp_r0_4 = (((-4 & sp0.unk14) | temp_r1_2) & ~3) | ((temp_r1_2 + 1) & 3);
                sp0.unk14 = temp_r0_4;
                sp0.unk2 = (u8) ((-4 & temp_r5) | (((u32) (temp_r0_4 << 0x1E) >> 0x1E) & 3));
                var_r2_2 = 0;
            }
            temp_r0_5 = (-0x7D & sp0.unk2) | ((var_r2_2 & 0x1F) * 4);
            sp0.unk2 = temp_r0_5;
            var_r2_3 = 0;
            if (!(temp_r0_5 & 0x7F)) {
                var_r2_3 = 1;
            }
            if (var_r2_3 != 0) {
                temp_r3_2 = sp0.unk0;
                var_r2_4 = ((u32) (temp_r3_2 << 0x1D) >> 0x1D) + 1;
                if (var_r2_4 > 6U) {
                    var_r2_4 = 0;
                    temp_r0_6 = temp_r3_2 >> 3;
                    if (temp_r0_6 <= 0x1CU) {
                        sp0.unk0 = (u8) ((7 & temp_r3_2) | ((temp_r0_6 + 1) * 8));
                    }
                }
                sp0.unk0 = (u8) ((-8 & sp0.unk0) | (var_r2_4 & 7));
            }
            goto loop_48;
        }
        sp4 = sp0.unk0;
        sp18->unk1 = (u8) sp0.unk2;
        func_080A1478(arg0->unk350 + 0x1CD4, sp18);
        return;
    }
}
