# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D379C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D379C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D379C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D379C/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D379C/opencode/func.c" 2
extern ? func_080D3778;

void func_080D379C(s32 arg0, s32 arg1, s32 arg2) {
    u16 sp0;
    s32 var_r3;
    u16 *var_r2;
    u32 temp_r1;
    u32 var_r0;

    *(u16 *)0x04000204 = (*(u16 *)0x04000204 & 0xFFFC) | 3;
    var_r3 = (s32) &func_080D3778 & ~1;
    var_r2 = &sp0;
    var_r0 = (func_080D379C - &func_080D3778) << 0xF;
loop_2:
    temp_r1 = var_r0 >> 0x10;
    if (temp_r1 != 0) {
        *var_r2 = *var_r3;
        var_r3 += 2;
        var_r2 += 2;
        var_r0 = (temp_r1 - 1) << 0x10;
        goto loop_2;
    }
    (&sp0 + 1)(arg0, arg1, arg2);
}
