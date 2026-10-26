# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E55B0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E55B0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E55B0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E55B0/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E55B0/opencode/func.c" 2
void *func_080E2354(void *);
s32 func_080E54F0(void **, void *, void *, void *, u32 *, s32);

void *func_080E55B0(void *arg0, void *arg1, u32 *arg2) {
    void *sp8;
    void *spC;
    void *sp10;
    s32 var_r0;
    s32 var_r1;
    s32 var_r1_2;
    s8 var_r3;
    void *temp_r0;
    void *var_r0_2;
    void *var_r4;
    void *var_r5;

    var_r4 = arg1->unk4;
    var_r5 = var_r4->unk4;
    var_r0 = 1;
    if (var_r5 != 0) {
        do {
            var_r4 = var_r5;
            var_r1 = 0;
            if ((u32) *arg2 < (u32) var_r4->unk10) {
                var_r1 = 1;
            }
            var_r0 = var_r1;
            if (var_r0 != 0) {
                var_r5 = var_r4->unk8;
            } else {
                var_r5 = var_r4->unkC;
            }
        } while (var_r5 != 0);
    }
    sp8 = var_r4;
    if (var_r0 != 0) {
        temp_r0 = arg1->unk4->unk8;
        spC = temp_r0;
        var_r1_2 = 0;
        if (var_r4 == temp_r0) {
            var_r1_2 = 1;
        }
        if (var_r1_2 != 0) {
            func_080E54F0(&sp10, arg1, var_r5, var_r4, arg2, 0);
            var_r0_2 = sp10;
            goto block_18;
        }
        sp8 = func_080E2354(var_r4);
        goto block_14;
    }
block_14:
    var_r3 = 0;
    if ((u32) sp8->unk10 < (u32) *arg2) {
        var_r3 = 1;
    }
    if (var_r3 != 0) {
        func_080E54F0(&spC, arg1, var_r5, var_r4, arg2, 0);
        var_r0_2 = spC;
block_18:
        arg0->unk0 = var_r0_2;
        arg0->unk4 = 1;
    } else {
        arg0->unk0 = sp8;
        arg0->unk4 = var_r3;
    }
    return arg0;
}
