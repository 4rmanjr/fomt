# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809C3E0/Prodesk_345484/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809C3E0/Prodesk_345484/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809C3E0/Prodesk_345484/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809C3E0/Prodesk_345484/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809C3E0/Prodesk_345484/func.c" 2
extern ? gUnk_081036C0;

s32 func_0809C3E0(s32 arg0, s32 arg1) {
    s32 var_r5;
    u8 *temp_r4;
    u8 *temp_r6;
    u8 temp_r3;

    var_r5 = 0;
    temp_r6 = arg0 + arg1;
    if (*temp_r6 != 0) {
        temp_r4 = arg0 + 0xC + arg1;
        temp_r3 = *temp_r4;
        if ((u32) temp_r3 < (u32) *(arg1 + &gUnk_081036C0)) {
            *temp_r4 = temp_r3 + 1;
        } else {
            *temp_r6 = 0;
            *(arg0 + 6 + arg1) = 1;
            var_r5 = 1;
        }
    }
    return var_r5;
}
