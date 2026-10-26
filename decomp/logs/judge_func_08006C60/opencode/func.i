# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006C60/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006C60/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006C60/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006C60/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006C60/opencode/func.c" 2
s32 strcpy(s32, s32);

u32 func_08006C60(s32 arg0) {
    s32 temp_r4;
    s32 var_r0;
    s32 var_r1;
    s32 var_r2;
    s32 var_r5;
    s32 var_r6;
    u8 *temp_r1;
    u8 temp_r0;

    var_r6 = 0;
    var_r5 = 0;
    temp_r4 = arg0 + 0x4629;
    strcpy(temp_r4, arg0 + 0x461C);
    var_r1 = 0;
    do {
        temp_r0 = *(temp_r4 + var_r1);
        if (temp_r0 == 0x5F) {
            var_r5 += 1;
            var_r0 = var_r1 + 1;
        } else {
            if (temp_r0 == 0x20) {
                var_r5 += 1;
            }
            var_r6 = var_r1 + 1;
            var_r0 = var_r6;
        }
        var_r1 = var_r0;
    } while (var_r1 <= 0xB);
    if (var_r5 == 0xC) {
        var_r6 = 0;
    } else {
        var_r2 = 0;
        if (var_r6 > 0) {
            do {
                temp_r1 = arg0 + 0x4629 + var_r2;
                if (*temp_r1 == 0x5F) {
                    *temp_r1 = 0x20;
                }
                var_r2 += 1;
            } while (var_r2 < var_r6);
        }
    }
    *(arg0 + 0x4629 + var_r6) = 0;
    return (u32) ((0 - var_r6) | var_r6) >> 0x1F;
}
