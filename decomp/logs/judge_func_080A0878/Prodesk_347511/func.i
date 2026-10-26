# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A0878/Prodesk_347511/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A0878/Prodesk_347511/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A0878/Prodesk_347511/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A0878/Prodesk_347511/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A0878/Prodesk_347511/func.c" 2
s32 func_080A0878(s32 arg0, s32 arg1) {
    s32 var_r1;
    u32 temp_r0;

    temp_r0 = arg1 - 3;
    switch (temp_r0) {
    default:
        return 0;
    case 0:
        return arg0 + 0x98;
    case 9:
        var_r1 = 0x154;
block_9:
        return arg0 + var_r1;
    case 16:
        var_r1 = 0x1E4;
        goto block_9;
    case 18:
        var_r1 = 0x210;
        goto block_9;
    case 22:
        var_r1 = 0x264;
        goto block_9;
    case 28:
        var_r1 = 0x2E4;
        goto block_9;
    }
}
