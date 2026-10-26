# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E5AC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E5AC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E5AC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E5AC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E5AC/opencode/func.c" 2
s32 func_0804E9CC(u16, s32, u32, u32, u32 *, s32, s32);
u32 func_080D0D28(u32 *, s32);

u32 func_0804E5AC(u16 arg0, s32 arg1, u32 arg2, u32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    u32 spC;
    u32 sp2C;
    u32 sp4C;
    u32 sp6C;
    u32 sp8C;
    s32 sp90;
    s32 sp94;
    u32 sp98;
    s32 sp9C;
    s32 *var_r6;
    s32 *var_r6_2;
    s32 *var_r6_3;
    s32 *var_r7;
    s32 temp_r0_10;
    s32 temp_r0_11;
    s32 temp_r0_12;
    s32 temp_r0_13;
    s32 temp_r0_15;
    s32 temp_r0_16;
    s32 temp_r0_17;
    s32 temp_r0_18;
    s32 temp_r0_20;
    s32 temp_r0_21;
    s32 temp_r0_22;
    s32 temp_r0_23;
    s32 temp_r0_25;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r0_8;
    s32 temp_r6;
    s32 var_r0;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    u16 temp_r0_3;
    u32 *temp_r4;
    u32 *var_r2;
    u32 *var_r3;
    u32 *var_r4;
    u32 *var_r5;
    u32 temp_r0;
    u32 temp_r0_14;
    u32 temp_r0_19;
    u32 temp_r0_24;
    u32 temp_r0_2;
    u32 temp_r0_4;
    u32 temp_r0_9;
    u32 temp_r1;
    u32 temp_r3;

    temp_r0 = func_080D0D28(&spC, arg4);
    sp8C = temp_r0;
    if ((u32) (temp_r0 - 1) > 1U) {
        return 0U;
    }
    temp_r0_2 = arg2 >> 3;
    temp_r3 = arg3 >> 3;
    temp_r0_3 = arg0;
    temp_r0_4 = arg0 >> 0x10;
    if (temp_r0_2 >= (u32) temp_r0_3) {

    } else if (temp_r3 >= temp_r0_4) {

    } else {
        var_r1 = 0;
        if (!(arg2 & 7)) {
            var_r1 = 1;
        }
        if (var_r1 == 0) {
            goto block_35;
        }
        var_r1_2 = 0;
        if (!(arg3 & 7)) {
            var_r1_2 = 1;
        }
        if (var_r1_2 == 0) {
block_35:
            func_0804E9CC(arg0, arg1, arg2, arg3, &spC, arg5, arg6);
        } else {
            var_r1_3 = 0;
            if ((u32) (temp_r0_2 + 1) < (u32) temp_r0_3) {
                var_r1_3 = 1;
            }
            sp90 = var_r1_3;
            var_r0 = 0;
            temp_r1 = temp_r3 + 1;
            sp98 = temp_r1;
            if (temp_r1 < temp_r0_4) {
                var_r0 = 1;
            }
            sp94 = var_r0;
            temp_r0_5 = temp_r3 * temp_r0_3;
            temp_r6 = arg6 - arg5;
            temp_r0_6 = 0xF & arg5;
            temp_r0_7 = temp_r0_6 | (temp_r0_6 * 0x10);
            temp_r0_8 = temp_r0_7 | (temp_r0_7 << 8);
            var_r7 = ((temp_r0_5 + temp_r0_2) << 5) + arg1;
            var_r4 = &spC;
            sp9C = temp_r0_5;
            if (var_r4 != &sp2C) {
                do {
                    temp_r0_9 = *var_r4;
                    var_r4 += 4;
                    temp_r0_10 = (temp_r0_9 >> 1) & 0x11111111;
                    *var_r7 = ((temp_r0_8 << 0x10) | temp_r0_8) + (temp_r6 * ((temp_r0_9 & 0x11111111) | temp_r0_10)) + temp_r0_10;
                    var_r7 += 4;
                } while (var_r4 != &sp2C);
            }
            if (sp94 != 0) {
                temp_r0_11 = 0xF & arg5;
                temp_r0_12 = temp_r0_11 | (temp_r0_11 * 0x10);
                temp_r0_13 = temp_r0_12 | (temp_r0_12 << 8);
                var_r6 = (((sp98 * temp_r0_3) + temp_r0_2) << 5) + arg1;
                var_r2 = &sp4C;
                if (var_r2 != &sp6C) {
                    do {
                        temp_r0_14 = *var_r2;
                        var_r2 += 4;
                        temp_r0_15 = (temp_r0_14 >> 1) & 0x11111111;
                        *var_r6 = ((temp_r0_13 << 0x10) | temp_r0_13) + (temp_r6 * ((temp_r0_14 & 0x11111111) | temp_r0_15)) + temp_r0_15;
                        var_r6 += 4;
                    } while (var_r2 != &sp6C);
                }
            }
            if ((sp90 != 0) && (sp8C > 1U)) {
                temp_r0_16 = 0xF & arg5;
                temp_r0_17 = temp_r0_16 | (temp_r0_16 * 0x10);
                temp_r0_18 = temp_r0_17 | (temp_r0_17 << 8);
                var_r6_2 = ((sp9C + temp_r0_2) << 5) + arg1 + 0x20;
                var_r5 = &sp2C;
                temp_r4 = var_r5 + 0x20;
                if (var_r5 != temp_r4) {
                    do {
                        temp_r0_19 = *var_r5;
                        var_r5 += 4;
                        temp_r0_20 = (temp_r0_19 >> 1) & 0x11111111;
                        *var_r6_2 = ((temp_r0_18 << 0x10) | temp_r0_18) + (temp_r6 * ((temp_r0_19 & 0x11111111) | temp_r0_20)) + temp_r0_20;
                        var_r6_2 += 4;
                    } while (var_r5 != temp_r4);
                }
                if (sp94 != 0) {
                    temp_r0_21 = 0xF & arg5;
                    temp_r0_22 = temp_r0_21 | (temp_r0_21 * 0x10);
                    temp_r0_23 = temp_r0_22 | (temp_r0_22 << 8);
                    var_r6_3 = ((temp_r0_2 + (sp98 * temp_r0_3)) << 5) + arg1 + 0x20;
                    var_r3 = &sp6C;
                    if (var_r3 != &sp8C) {
                        do {
                            temp_r0_24 = *var_r3;
                            var_r3 += 4;
                            temp_r0_25 = (temp_r0_24 >> 1) & 0x11111111;
                            *var_r6_3 = ((temp_r0_23 << 0x10) | temp_r0_23) + (temp_r6 * ((temp_r0_24 & 0x11111111) | temp_r0_25)) + temp_r0_25;
                            var_r6_3 += 4;
                        } while (var_r3 != &sp8C);
                    }
                }
            }
        }
    }
    return sp8C;
}
