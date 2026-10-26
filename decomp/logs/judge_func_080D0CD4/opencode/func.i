# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D0CD4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D0CD4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D0CD4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D0CD4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D0CD4/opencode/func.c" 2
s32 func_080D0CD4(u32 arg0) {
    s32 temp_r2;
    s32 temp_r3;
    s32 var_r2;

    if ((arg0 > 0xFFFFU) || (temp_r3 = 0xFF & arg0, temp_r2 = (s32) (0xFF00 & arg0) >> 8, ((u32) (temp_r3 - 0x40) > 0xBCU)) || ((u32) temp_r2 <= 0x80U) || ((u32) temp_r2 > 0xEAU) || ((u32) (temp_r2 - 0xA0) <= 0x3FU)) {
        return -1;
    }
    if ((u32) temp_r2 <= 0x9FU) {
        var_r2 = temp_r2 - 0x81;
    } else {
        var_r2 = temp_r2 - 0xC1;
    }
    return (var_r2 * 0xBD) + (temp_r3 - 0x40);
}
