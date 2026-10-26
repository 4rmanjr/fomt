# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809CF34/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809CF34/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809CF34/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809CF34/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809CF34/kilo-1531/func.c" 2
s32 func_0809D168(u32 *, u32, s32, s32 *);
s32 func_0809D500(u32 *, u32, s32, s32 *);
s32 func_0809D8A4(u32 *);
s32 func_0809D8B8(u32 *);
s32 rand();

s32 *func_0809CF34(s32 *arg0, u32 *arg1, s32 arg2, u32 arg3, s32 *arg4, u32 arg5) {
    s32 sp0;
s32 sp2C;
    s32 sp30;
    s32 *sp34;
    s32 sp38;
    s32 *var_r0;
    s32 *var_r1_2;
    s32 *var_r2_3;
    s32 *var_r3_2;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r2;
    s32 var_sl;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 var_r0_2;
    u32 var_r1;
    u32 var_r3;
    u32 var_r4;
    u32 var_r5;
    u8 temp_r2;
    u8 temp_r2_2;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r2_3;
    void *var_r2_2;

    sp34 = arg0;
    sp38 = arg2;
    sp30.unk0 = 0U;
    sp30.unk1 = 0U;
    var_r0 = &sp0;
    var_r2 = 0xB;
    do {
        var_r0->unk0 = 0;
        var_r0->unk1 = 0;
        var_r0 += 4;
        var_r2 -= 1;
    } while (var_r2 != -1);
    var_r0_2 = 0;
    do {
        var_r3 = 0;
        var_r2_2 = (var_r0_2 * 0x38) + (arg1 + 4);
loop_4:
        var_r2_2->unk0 = (u8) (-0x10 & var_r2_2->unk0);
        var_r2_2->unk0 = (s16) (0xFFFFFC0F & (u16) var_r2_2->unk0);
        var_r2_2->unk1 = (u8) (3 & var_r2_2->unk1);
        var_r2_2 += 2;
        var_r3 += 1;
        if (var_r3 <= 0x1BU) {
            goto loop_4;
        }
        var_r0_2 += 1;
    } while (var_r0_2 <= 0x1BU);
    if (arg4 != 0) {
        var_r1 = 0;
        if (arg5 > 0U) {
            var_r3_2 = arg4;
            var_r2_3 = &sp0;
            do {
                temp_r0 = *var_r3_2;
                var_r3_2 += 4;
                *var_r2_3 = temp_r0;
                var_r2_3 += 4;
                var_r1 += 1;
            } while (var_r1 < arg5);
        }
    }
    var_r1_2 = &sp0;
    do {
        temp_r2 = var_r1_2->unk0;
        if ((u32) (u8) (temp_r2 - 2) > 0x37U) {
            var_r0_3 = temp_r2 | 0xFF;
        } else {
            var_r0_3 = (s32) (var_r1_2->unk0 - 2) >> 1;
        }
        var_r1_2->unk0 = (u8) var_r0_3;
        temp_r2_2 = var_r1_2->unk1;
        if ((u32) (u8) (temp_r2_2 - 7) > 0x37U) {
            var_r0_4 = temp_r2_2 | 0xFF;
        } else {
            var_r0_4 = (s32) (var_r1_2->unk1 - 7) >> 1;
        }
        var_r1_2->unk1 = (u8) var_r0_4;
        var_r1_2 += 4;
    } while ((s32) var_r1_2 <= (s32) &sp2C);
    if (arg3 == 0) {
        *arg1 = arg3;
        var_r0_5 = 0x14;
        goto block_28;
    }
    if ((arg3 == 9) && (sp38 == 1)) {
        *arg1 = 4;
        var_sl = 0x28;
    } else {
        if ((arg3 % 5U) == 0) {
            *arg1 = 1;
            var_r0_5 = 0x12C;
            goto block_28;
        }
        if ((arg3 % 3U) == 0) {
            *arg1 = 2;
            var_sl = 0x64;
        } else {
            *arg1 = 3;
            var_r0_5 = 0x1E;
block_28:
            var_sl = var_r0_5;
        }
    }
    if (arg3 != 0) {
        temp_r4 = rand();
        temp_r0_2 = (u32) (temp_r4 >> 8) % (u32) (func_0809D8A4(arg1) - 2);
        var_r5 = temp_r0_2 + 1;
        temp_r4_2 = rand();
        temp_r0_3 = (u32) (temp_r4_2 >> 8) % (u32) (func_0809D8B8(arg1) - 2);
        var_r4 = temp_r0_3 + 1;
        temp_r2_3 = arg1 + ((var_r5 * 2) + (var_r4 * 0x38));
        temp_r2_3->unk4 = (u8) ((-0x10 & temp_r2_3->unk4) | 3);
        temp_r1 = (rand() >> 8) & 3;
        if (2 & temp_r1) {
            if (temp_r1 & 1) {
                var_r5 = temp_r0_2;
            } else {
                var_r5 += 1;
            }
        } else if (temp_r1 & 1) {
            var_r4 = temp_r0_3;
        } else {
            var_r4 += 1;
        }
        sp30.unk0 = (u8) var_r5;
        sp30.unk1 = (u8) var_r4;
        temp_r1_2 = arg1 + ((sp30.unk0 * 2) + (sp30.unk1 * 0x38));
        temp_r1_2->unk4 = (u8) ((-0x10 & temp_r1_2->unk4) | 1);
    }
    if (sp38 == 0) {
        func_0809D168(arg1, arg3, var_sl, &sp0);
    } else {
        func_0809D500(arg1, arg3, var_sl, &sp0);
    }
    if (arg3 != 0) {
        temp_r1_3 = arg1 + ((sp30.unk0 * 2) + (sp30.unk1 * 0x38));
        temp_r1_3->unk4 = (u8) (-0x10 & temp_r1_3->unk4);
    }
    *sp34 = sp30;
    return sp34;
}
