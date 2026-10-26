# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057CB0/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057CB0/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057CB0/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057CB0/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057CB0/kilo-1531/func.c" 2
s32 func_08057D34(s32, s32, s32, s32);

void func_08057CB0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    s32 temp_r0;
    s32 var_r0;
    s32 var_r3;
    s32 var_r5;
    s32 var_r6;
    s32 var_sb;

    sp0 = arg0;
    var_r5 = arg1;
    var_sb = arg3;
    var_r6 = 0x64;
    var_r3 = 0;
    if (arg4 != 0) {
        var_r3 = 0xC;
    }
    var_r0 = 8;
    if (arg4 == 0) {
        var_r0 = 0x10;
    }
    do {
        temp_r0 = var_sb / var_r6;
        func_08057D34(sp0, var_r5, arg2, temp_r0 + var_r3);
        var_r5 += var_r0;
        var_sb -= var_r6 * temp_r0;
        var_r6 = var_r6 / 10;
        if (var_r6 == 1) {
            func_08057D34(sp0, var_r5, arg2 + var_r0, var_r3 + 0xA);
            var_r5 += 8;
        }
    } while (var_r6 > 0);
}
