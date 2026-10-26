# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094994/Prodesk_343690/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094994/Prodesk_343690/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094994/Prodesk_343690/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094994/Prodesk_343690/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094994/Prodesk_343690/func.c" 2
extern u8 gUnk_08100A36;

void func_08094994(s8 *arg1, u8 *arg2) {
    s8 *var_r2;
    u32 var_r5;
    u8 *var_r4;
    u8 temp_r1;
    u8 var_r3;

    var_r4 = arg2;
    var_r5 = 0;
    if (*var_r4 != 0) {
        var_r2 = arg1;
loop_2:
        temp_r1 = *var_r4;
        var_r4 += 1;
        var_r3 = 0;
        if (temp_r1 != gUnk_08100A36) {
loop_4:
            var_r3 += 1;
            if ((u32) var_r3 <= 0x60U) {
                if (temp_r1 == (&gUnk_08100A36)[var_r3]) {
                    goto block_6;
                }
                goto loop_4;
            }
            goto block_7;
        }
block_6:
        if ((u32) var_r3 > 0x60U) {
block_7:
            *var_r2 = 0;
        } else {
            *var_r2 = var_r3 + 1;
            var_r2 += 1;
            var_r5 += 1;
            if ((var_r5 <= 0xBU) && (*var_r4 != 0)) {
                goto loop_2;
            }
        }
    }
    if (var_r5 <= 0xCU) {
        do {
            *(arg1 + var_r5) = 0;
            var_r5 += 1;
        } while (var_r5 <= 0xCU);
    }
}
