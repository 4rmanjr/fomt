# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E8F0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E8F0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E8F0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E8F0/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E8F0/opencode/func.c" 2
u32 func_0804E4AC(s32, s32, u32, s32, s32);

void func_0804E8F0(s32 arg0, ? arg1, u32 arg2, ? arg3, u8 *arg4) {
    s32 var_r5;
    s32 var_r5_2;
    u32 temp_r0;
    u32 var_r4;
    u8 *var_r6;
    u8 var_r0;

    var_r4 = arg2;
    var_r6 = arg4;
    var_r5 = 0;
    var_r0 = *var_r6;
loop_8:
    if ((var_r0 == 0) || (var_r4 >= (u32) ((u32) (arg0 << 0x10) >> 0xD))) {
        return;
    }
    var_r5_2 = var_r5 | var_r0;
    temp_r0 = func_0804E4AC(arg0, arg1, var_r4, arg3, var_r5_2);
    switch (temp_r0) {
    case 1:
        var_r5_2 = 0;
        var_r4 += 8;
    default:
block_7:
        var_r6 += 1;
        var_r0 = *var_r6;
        var_r5 = var_r5_2 << 8;
        goto loop_8;
    case 2:
        var_r5_2 = 0;
        var_r4 += 0x10;
        goto block_7;
    }
}
