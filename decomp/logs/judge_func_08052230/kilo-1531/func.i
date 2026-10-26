# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08052230/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08052230/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08052230/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08052230/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08052230/kilo-1531/func.c" 2
s32 rand();
extern ? gUnk_080FA174;

void func_08052230(u8 *arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    u8 *sp8;
    s32 temp_r6;
    s32 var_r2;
    s32 var_r3;
    s32 var_r4;
    u32 var_r0;
    u8 *temp_r5;
    u8 *var_r1;

    if (arg1 != 0) {
        var_r0 = (u32) (arg1 - 1) / 25U;
    } else {
        var_r0 = 0;
    }
    var_r4 = 0;
    sp0 = var_r0 * 4;
    do {
        temp_r6 = var_r4 * 4;
        sp4 = var_r4 + 1;
        temp_r5 = arg0 + temp_r6;
        sp8 = temp_r5;
loop_5:
        *temp_r5 = ((s32) (rand() >> 8) % 30) + 1;
        var_r3 = 1;
        var_r2 = 0;
        var_r1 = arg0;
loop_6:
        if ((var_r4 != var_r2) && (*sp8 == *var_r1)) {
            var_r3 = 0;
        }
        var_r1 += 4;
        var_r2 += 1;
        if (var_r2 <= 9) {
            goto loop_6;
        }
        if (var_r3 == 0) {
            goto loop_5;
        }
        (arg0 + temp_r6)->unk2 = (s16) (*(((sp0 + var_r0) * 4) + (var_r4 * 2) + &gUnk_080FA174) + ((s32) (rand() >> 8) % 10));
        var_r4 = sp4;
    } while (var_r4 <= 9);
}
