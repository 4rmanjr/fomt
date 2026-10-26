# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A63C/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A63C/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A63C/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A63C/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A63C/kilo-1531/func.c" 2
s32 func_0805A6E4(?, s32, s32, s32, s32);

void func_0805A63C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 sp4;
    s32 temp_r0;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    s32 var_r8;

    var_r6 = arg1;
    sp4 = arg2;
    var_r8 = arg4;
    if (arg5 > 1) {
        var_r4 = arg5 - 1;
        var_r5 = 0xA;
        if (var_r4 > 1) {
            do {
                var_r5 *= 0xA;
                var_r4 -= 1;
            } while (var_r4 > 1);
        }
        var_r4_2 = var_r5;
    } else {
        var_r4_2 = 1;
    }
    var_r7 = 0;
    if (var_r4_2 > 0) {
        do {
            if (var_r4_2 == 1) {
                var_r7 = 1;
            }
            temp_r0 = var_r8 / var_r4_2;
            if ((temp_r0 != 0) || (var_r7 != 0)) {
                func_0805A6E4(arg0, var_r6, sp4, temp_r0, arg3);
                var_r7 = 1;
            }
            var_r6 += 8;
            var_r8 -= var_r4_2 * temp_r0;
            var_r4_2 = var_r4_2 / 10;
        } while (var_r4_2 > 0);
    }
    if (arg6 != 0) {
        func_0805A6E4(arg0, var_r6, sp4, arg6, arg3);
    }
}
