# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA270/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA270/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA270/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA270/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA270/kilo-1531/func.c" 2
void *GetMapData(s32);
s32 func_03000C2C(s32, s16 *, s32, s32);
s32 func_0800E324(s32);

void func_080AA270(void *arg0, s32 arg1, s32 arg2) {
    s16 sp0;
    u8 sp20;
    s32 sp24;
    u8 sp28;
    s32 sp2C;
    u8 sp30;
    s32 sp34;
    u8 sp38;
    s32 sp3C;
    u8 sp40;
    s32 sp44;
    s32 sp48;
    s16 *var_r0;
    s16 *var_r1;
    s16 *var_r1_2;
    s16 *var_r1_3;
    s16 *var_r1_4;
    s32 temp_r1;
    s32 temp_r8;
    s32 temp_sl;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r4_3;
    s32 var_r4_4;
    s32 var_r4_5;
    s32 var_r4_6;
    s32 var_r7;
    u32 var_r5;
    u32 var_r5_2;
    u32 var_r5_3;
    u32 var_r5_4;
    u32 var_r5_5;

    temp_sl = func_0800E324(arg0->unk94 + 0x10);
    temp_r1 = arg0->unk0;
    if (temp_r1 != 0x2E) {
        if (temp_r1 > 0x2E) {
            if (temp_r1 != 0x2F) {
                goto block_8;
            }
            var_r7 = 2;
        } else if (temp_r1 >= 0x2C) {
            var_r7 = 0;
        } else {
block_8:
            var_r7 = arg0->unk94->unk8;
        }
    } else {
        var_r7 = 1;
    }
    temp_r8 = 1 ^ GetMapData(arg0->unk4)->unk24;
    sp48 = 1 ^ GetMapData(arg0->unk4)->unk24;
    var_r4 = 0;
    if ((GetMapData(arg0->unk4)->unk24 == 0) && ((u32) (var_r7 - 1) <= 1U)) {
        var_r4 = 1;
    }
    if (var_r4 != 0) {
        sp20 = (-0x20 & sp20) | 0xA;
        sp20 = (s16) ((0xFFFFFC1F & (u16) sp20) | 0x280);
        sp24 = 0x31AE;
        var_r1 = &sp0;
        if (sp != &sp20) {
            do {
                *var_r1 = 0x31AE;
                var_r1 += 2;
            } while (var_r1 != &sp20);
        }
        var_r5 = 0;
        var_r4_2 = *(arg0 + 0x1C + (arg2 * 4));
        do {
            func_03000C2C(var_r4_2, &sp0, var_r4_2, (s32) sp20);
            var_r4_2 += 0x20;
            var_r5 += 1;
        } while (var_r5 < 0xFU);
        return;
    }
    if ((temp_r8 != 0) && (arg1 != 1)) {
        switch (arg1) {
        case 0:
            sp28 = (-0x20 & sp28) | 9;
            sp28 = (s16) ((0xFFFFFC1F & (u16) sp28) | 0x2A0);
            sp2C = 0x2C3;
            var_r1_2 = &sp0;
            if (sp != &sp20) {
                do {
                    *var_r1_2 = 0x2C3;
                    var_r1_2 += 2;
                } while (var_r1_2 != &sp20);
            }
            var_r5_2 = 0;
            var_r4_3 = *(arg0 + 0x1C + (arg2 * 4));
            do {
                func_03000C2C(var_r4_3, &sp0, var_r4_3, (s32) sp28);
                var_r4_3 += 0x20;
                var_r5_2 += 1;
            } while (var_r5_2 < 0xFU);
            break;
        case 2:
            sp30 = (-0x20 & sp30) | 3;
            sp30 = (s16) ((0xFFFFFC1F & (u16) sp30) | 0x360);
            sp34 = 0x1F;
            var_r0 = &sp0;
            if (sp != &sp20) {
                do {
                    *var_r0 = 0x1F;
                    var_r0 += 2;
                } while (var_r0 != &sp20);
            }
            var_r5_3 = 0;
            var_r4_4 = *(arg0 + 0x1C + (arg2 * 4));
            do {
                func_03000C2C(var_r4_4, &sp0, var_r4_4, (s32) sp30);
                var_r4_4 += 0x20;
                var_r5_3 += 1;
            } while (var_r5_3 < 0xFU);
            break;
        }
    }
    if ((sp48 != 0) && (temp_sl != 1)) {
        switch (temp_sl) {
        case 0:
            sp38 = (-0x20 & sp38) | 4;
            sp38 = (s16) ((0xFFFFFC1F & (u16) sp38) | 0x340);
            sp3C = 0x3DF;
            var_r1_3 = &sp0;
            if (sp != &sp20) {
                do {
                    *var_r1_3 = 0x3DF;
                    var_r1_3 += 2;
                } while (var_r1_3 != &sp20);
            }
            var_r5_4 = 0;
            var_r4_5 = *(arg0 + 0x1C + (arg2 * 4));
            do {
                func_03000C2C(var_r4_5, &sp0, var_r4_5, (s32) sp38);
                var_r4_5 += 0x20;
                var_r5_4 += 1;
            } while (var_r5_4 < 0xFU);
            return;
        case 2:
            sp40 = (-0x20 & sp40) | 4;
            sp40 = (s16) ((0xFFFFFC1F & (u16) sp40) | 0x340);
            sp44 = 0x559F;
            var_r1_4 = &sp0;
            if (sp != &sp20) {
                do {
                    *var_r1_4 = 0x559F;
                    var_r1_4 += 2;
                } while (var_r1_4 != &sp20);
            }
            var_r5_5 = 0;
            var_r4_6 = *(arg0 + 0x1C + (arg2 * 4));
            do {
                func_03000C2C(var_r4_6, &sp0, var_r4_6, (s32) sp40);
                var_r4_6 += 0x20;
                var_r5_5 += 1;
            } while (var_r5_5 < 0xFU);
            break;
        }
    }
}
