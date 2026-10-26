# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B9734/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B9734/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B9734/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B9734/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B9734/opencode/func.c" 2
s32 func_0805E860(s32, s32);
s32 rand();

void func_080B9734(void *arg0) {
    s32 *var_r1;
    s32 *var_r4;
    s32 var_r0;
    s32 var_r2;
    s8 *var_r1_2;
    u32 temp_r2;

    temp_r2 = (u32) (0x64 * (0xFFFF & rand())) >> 0x10;
    if ((u32) arg0->unk8E > (u32) arg0->unkCE) {
        if (temp_r2 <= 0x59U) {
            var_r4 = arg0 + 0x80;
            arg0->unk80 = 3;
            func_0805E860(arg0->unk920, 2);
            arg0->unkEB = 1;
            var_r1 = (arg0 + 0xEB) - 0x2B;
            var_r0 = 5;
        } else {
            goto block_5;
        }
    } else if (temp_r2 > 0x59U) {
        var_r4 = arg0 + 0x80;
        arg0->unk80 = 3;
        func_0805E860(arg0->unk920, 2);
        arg0->unkEB = 1;
        var_r1 = (arg0 + 0xEB) - 0x2B;
        var_r0 = 5;
    } else {
block_5:
        var_r4 = arg0 + 0x80;
        arg0->unk80 = 5;
        func_0805E860(arg0->unk91C, 2);
        arg0->unkAB = 1;
        var_r1 = arg0 + 0xAB + 0x15;
        var_r0 = 3;
    }
    *var_r1 = var_r0;
    var_r1_2 = arg0 + 0x9B;
    var_r2 = 1;
    do {
        if (*var_r4 == 5) {
            *var_r1_2 = 0;
        } else {
            *var_r1_2 = 1;
        }
        var_r1_2 += 0x40;
        var_r4 += 0x40;
        var_r2 -= 1;
    } while (var_r2 >= 0);
}
