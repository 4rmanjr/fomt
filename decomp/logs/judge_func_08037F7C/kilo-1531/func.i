# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037F7C/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037F7C/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037F7C/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037F7C/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037F7C/kilo-1531/func.c" 2
s32 func_030004DC(s32, s32, s32, s32, s32, void *, s32, s32, void *);
s32 func_080A480C(void *, s32, void *);
s32 func_080A4944(void *, void *, s32);

void func_08037F7C(void *arg0, void *arg1) {
    s32 sp14;
    s32 sp18;
    s16 temp_r3_2;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r0;
    s32 var_r2;
    void *temp_r3;
    void *temp_r5;
    void *temp_r6;

    temp_r3 = arg0->unk0;
    temp_r3_2 = temp_r3->unkE;
    var_r2 = temp_r3_2 - arg1->unkE;
    temp_r1 = arg1->unk8;
    sp14 = arg1->unk0;
    sp18 = temp_r1;
    if (arg0->unk54 != 0) {
        var_r2 -= 2;
    }
    temp_r5 = arg0 + 8;
    temp_r6 = arg0 + 0x30;
    temp_r1_2 = arg0->unk10;
    if ((s32) ((0 - temp_r1_2) | temp_r1_2) < 0) {
        var_r0 = func_030004DC(temp_r1, temp_r3->unkA - arg1->unkC, var_r2, 0xAA, 0x8000 - temp_r3_2, temp_r6, arg0->unk8, (s32) temp_r5->unkC, arg0 + 0x18);
    } else {
        var_r0 = 0;
    }
    if ((var_r0 != 0) && (temp_r5->unk48 != 0)) {
        func_080A480C(temp_r5, sp14, temp_r6 + 8);
        func_080A4944(temp_r5, temp_r6 + 0x10, 1);
        temp_r5->unk48 = 0U;
    }
}
