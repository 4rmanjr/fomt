# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809FE74/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809FE74/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809FE74/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809FE74/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809FE74/kilo-1531/func.c" 2
s32 func_0809EAD0(s32);
extern ? gUnk_08104258;

s32 func_0809FE74(s32 arg0, u32 arg1, u8 *arg2) {
    u8 sp0;
    s32 temp_r3;
    s32 var_r0;
    s32 var_r5;
    u32 var_r0_2;
    u32 var_r0_3;
    u32 var_r1;
    u8 temp_r0;
    u8 temp_r0_3;
    u8 temp_r1;
    u8 temp_r2;
    void *temp_r0_2;

    var_r0 = 0;
    if (arg1 <= 0x2AU) {
        var_r0 = 1;
    }
    if (var_r0 == 0) {
        return (-4 & saved_reg_r9 & ~0x7C) | 0x3C;
    }
    switch (arg1) {
    case 3:
    case 12:
    case 19:
    case 21:
    case 25:
    case 31:
        temp_r0_2 = (arg1 * 8) + &gUnk_08104258;
        temp_r0_3 = temp_r0_2->unk4;
        var_r0_2 = ((u32) (temp_r0_3 << 0x19) >> 0x1B) - 1;
        if (var_r0_2 > 0x1DU) {
            var_r0_2 = var_r0_2 % 30U;
        }
        temp_r3 = (-0x7D & ((-4 & saved_reg_r8) | ((u32) (temp_r0_3 << 0x1E) >> 0x1E))) | ((var_r0_2 & 0x1F) * 4);
        var_r5 = temp_r3;
        temp_r2 = *arg2;
        if (((temp_r2 << 0x1E) == (temp_r3 << 0x1E)) && ((((u32) (temp_r2 << 0x19) >> 0x1B) + 1) == (((u32) (temp_r3 << 0x19) >> 0x1B) + 1))) {
            temp_r1 = temp_r0_2->unk5;
            var_r0_3 = ((u32) (temp_r1 << 0x19) >> 0x1B) - 1;
            if (var_r0_3 > 0x1DU) {
                var_r0_3 = var_r0_3 % 30U;
            }
            var_r5 = (((-4 & sp0) | (((u32) (temp_r1 << 0x1E) >> 0x1E) & 3)) & ~0x7C) | ((var_r0_3 & 0x1F) * 4);
        }
        return var_r5;
    case 35:
        return func_0809EAD0(arg0 + 4);
    default:
        temp_r0 = ((arg1 * 8) + &gUnk_08104258)->unk4;
        var_r1 = ((u32) (temp_r0 << 0x19) >> 0x1B) - 1;
        if (var_r1 > 0x1DU) {
            var_r1 = var_r1 % 30U;
        }
        return (((-4 & saved_reg_r10) | ((u32) (temp_r0 << 0x1E) >> 0x1E)) & ~0x7C) | ((var_r1 & 0x1F) * 4);
    }
}
