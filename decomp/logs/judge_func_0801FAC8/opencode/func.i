# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801FAC8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801FAC8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801FAC8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801FAC8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801FAC8/opencode/func.c" 2
s32 __builtin_new(s32);
s32 func_0803AEA0(s32, void *, s32, s32, s32);
s32 func_0803B0A8(s32, s32);

void func_0801FAC8(void *arg0, s32 arg1) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r5;
    s32 var_r7;
    s32 var_r8;
    u32 var_r3;
    void **var_r1;
    void *temp_r0;
    void *temp_r2;

    var_r8 = 0;
    if (arg1 != 0) {
        if (arg1 == 1) {
            var_r8 = arg0 + 0xED4;
        }
    } else {
        var_r8 = arg0 + 0xEA4;
    }
    if (var_r8 != 0) {
        var_r7 = 0x20;
        temp_r5 = *arg0->unk4;
        if (temp_r5 == 2) {
            var_r3 = 0;
            var_r1 = arg0 + 8;
            temp_r2 = arg0 + 0x198;
            if (var_r1 != temp_r2) {
                do {
                    temp_r0 = *var_r1;
                    if ((temp_r0 != 0) && (temp_r0->unk4 == temp_r5)) {
                        var_r3 += 1;
                    }
                    var_r1 += 4;
                } while (var_r1 != temp_r2);
            }
            if ((u32) (var_r3 + 0xA) > 0xAU) {
                if (var_r3 <= 0x15U) {
                    var_r7 = 0x20 - var_r3;
                } else {
                    var_r7 = 0xA;
                }
            }
        }
        temp_r0_2 = func_0803AEA0(__builtin_new(0x46C), arg0, var_r8, arg1, var_r7);
        temp_r0_3 = arg0->unk107C;
        if ((temp_r0_2 != temp_r0_3) && (temp_r0_3 != 0)) {
            func_0803B0A8(temp_r0_3, 3);
        }
        arg0->unk107C = temp_r0_2;
    }
}
