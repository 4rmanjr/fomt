# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CAF6C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CAF6C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CAF6C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CAF6C/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CAF6C/opencode/func.c" 2
s32 free();

void func_080CAF6C(void *arg0) {
    void *sp0;
    void **sp4;
    void *sp8;
    void *spC;
    s32 temp_r1;
    s32 temp_r1_2;
    void **temp_r1_3;
    void **var_r0;
    void *temp_r3;
    void *temp_r4;
    void *var_r1;

    var_r0 = arg0->unk8;
    var_r1 = *var_r0;
    sp0 = var_r1;
    sp4 = var_r0;
loop_5:
    temp_r1 = (s32) var_r1 ^ (s32) var_r0;
    if ((s32) ((0 - temp_r1) | temp_r1) < 0) {
        temp_r3 = sp0->unk8;
        temp_r1_2 = temp_r3->unk0;
        if ((s32) ((0 - temp_r1_2) | temp_r1_2) >= 0) {
            temp_r3->unk8->unkC(temp_r3, 3);
            spC = sp0;
            temp_r4 = sp0->unk0;
            temp_r1_3 = sp0->unk4;
            *temp_r1_3 = temp_r4;
            temp_r4->unk4 = temp_r1_3;
            free();
            sp8 = temp_r4;
            sp0 = temp_r4;
        } else {
            sp0 = sp0->unk0;
        }
        var_r1 = sp0;
        var_r0 = sp4;
        goto loop_5;
    }
}
