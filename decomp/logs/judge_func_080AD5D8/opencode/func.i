# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD5D8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD5D8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD5D8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD5D8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD5D8/opencode/func.c" 2
u32 func_080AD5D8(s32 arg0, u32 arg1) {
    u32 var_r2;
    u8 *var_r1;

    switch (arg1) {
    case 0:
        return 0U;
    case 1:
    case 2:
    case 4:
        return 1U;
    case 3:
    case 5:
        return 2U;
    case 14:
        return 3U;
    case 15:
    case 16:
    case 17:
    case 18:
        return 4U;
    case 6:
    case 7:
    case 8:
    case 26:
        return 5U;
    default:
        var_r2 = 6;
        var_r1 = arg0 + 0x555;
loop_10:
        if (*var_r1 != 0) {
            var_r1 += 0x84;
            var_r2 += 1;
            if (var_r2 >= 0x16U) {
                return 0x15U;
            }
            goto loop_10;
        }
        *var_r1 = 1;
        return var_r2;
    }
}
