# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E0A08/Prodesk_354734/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E0A08/Prodesk_354734/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E0A08/Prodesk_354734/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E0A08/Prodesk_354734/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E0A08/Prodesk_354734/func.c" 2
s32 CpuFastSet(void *, void *, s32);

s32 func_080E0A08(void *arg0) {
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r5;
    u8 temp_r0;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *var_r3;
    void *var_r4;

    var_r4 = arg0->unkC;
    var_r3 = arg0->unk10;
    if (arg0->unk15 != 0) {
        temp_r5 = var_r3 + (arg0->unk14 << 5);
        temp_r0 = arg0->unk16 ^ 1;
        arg0->unk16 = temp_r0;
        temp_r2 = 0x0F0F0F0F << (temp_r0 * 4);
        temp_r1 = ~temp_r2;
        do {
            temp_r4 = var_r4 + 4;
            var_r3->unk0 = (s32) (var_r4->unk0 & temp_r2);
            temp_r3 = var_r3 + 4;
            temp_r4_2 = temp_r4 + 4;
            var_r3->unk4 = (s32) (var_r4->unk4 & temp_r1);
            temp_r3_2 = temp_r3 + 4;
            temp_r4_3 = temp_r4_2 + 4;
            temp_r3->unk4 = (s32) (temp_r4->unk4 & temp_r2);
            temp_r3_3 = temp_r3_2 + 4;
            temp_r4_4 = temp_r4_3 + 4;
            temp_r3_2->unk4 = (s32) (temp_r4_2->unk4 & temp_r1);
            temp_r3_4 = temp_r3_3 + 4;
            temp_r4_5 = temp_r4_4 + 4;
            temp_r3_3->unk4 = (s32) (temp_r4_3->unk4 & temp_r2);
            temp_r3_5 = temp_r3_4 + 4;
            temp_r4_6 = temp_r4_5 + 4;
            temp_r3_4->unk4 = (s32) (temp_r4_4->unk4 & temp_r1);
            temp_r3_6 = temp_r3_5 + 4;
            temp_r3_5->unk4 = (s32) (temp_r4_5->unk4 & temp_r2);
            var_r4 = temp_r4_6 + 4 + 4;
            temp_r3_6->unk4 = (s32) (temp_r4_6->unk4 & temp_r1);
            var_r3 = temp_r3_6 + 4 + 4;
        } while (var_r3 != temp_r5);
        return 1;
    }
    CpuFastSet(var_r4, var_r3, arg0->unk14 * 8);
    return 0;
}
