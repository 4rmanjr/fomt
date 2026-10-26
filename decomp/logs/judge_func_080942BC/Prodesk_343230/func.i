# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080942BC/Prodesk_343230/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080942BC/Prodesk_343230/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080942BC/Prodesk_343230/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080942BC/Prodesk_343230/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080942BC/Prodesk_343230/func.c" 2
void func_080942BC(void *arg0) {
    ? (*var_r1)(void *);
    ? (*var_r1_2)(void *);
    ? (*var_r2)(void *, s32);
    s16 temp_r2;
    s16 temp_r2_2;
    s16 temp_r2_3;
    s16 temp_r2_4;
    s32 (*var_r1_3)(void *);
    s32 temp_r3;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r1;

    arg0->unk0->unk24(arg0);
    temp_r1 = arg0->unk8;
    if (temp_r1 != 0) {
        arg0->unk4 = temp_r1;
        arg0->unk8 = 0;
        temp_r2 = temp_r1->unk12;
        if ((s32) temp_r2 > 0) {
            var_r1 = *(((temp_r2 * 4) + *(arg0 + temp_r1->unk14)) - 4);
        } else {
            var_r1 = (s32 (*)(void *)) temp_r1->unk14;
        }
        var_r1(arg0 + arg0->unk4->unk10);
        temp_r0 = arg0->unk4;
        temp_r2_2 = temp_r0->unk2;
        if ((s32) temp_r2_2 > 0) {
            var_r1_2 = *(((temp_r2_2 * 4) + *(arg0 + temp_r0->unk4)) - 4);
        } else {
            var_r1_2 = (s32 (*)(void *)) temp_r0->unk4;
        }
        var_r1_2(arg0 + arg0->unk4->unk0);
    }
    temp_r0_2 = arg0->unk4;
    temp_r2_3 = temp_r0_2->unk1A;
    if ((s32) temp_r2_3 > 0) {
        var_r1_3 = *(((temp_r2_3 * 4) + *(arg0 + temp_r0_2->unk1C)) - 4);
    } else {
        var_r1_3 = (s32 (*)(void *)) temp_r0_2->unk1C;
    }
    temp_r3 = var_r1_3(arg0 + arg0->unk4->unk18);
    temp_r0_3 = arg0->unk4;
    temp_r2_4 = temp_r0_3->unkA;
    if ((s32) temp_r2_4 > 0) {
        var_r2 = *(((temp_r2_4 * 4) + *(arg0 + temp_r0_3->unkC)) - 4);
    } else {
        var_r2 = (s32 (*)(void *, s32)) temp_r0_3->unkC;
    }
    var_r2(arg0 + arg0->unk4->unk8, temp_r3);
}
