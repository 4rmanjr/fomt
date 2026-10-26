# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809ABD8/Prodesk_344995/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809ABD8/Prodesk_344995/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809ABD8/Prodesk_344995/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809ABD8/Prodesk_344995/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809ABD8/Prodesk_344995/func.c" 2
void func_0809ABD8(void *arg0, u32 arg1) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 *temp_r1_4;
    s32 temp_r2_4;
    s32 var_r0;
    s32 var_r0_2;
    u32 *temp_r4_2;
    u32 temp_r0;
    u32 temp_r1;
    u32 temp_r1_2;
    u32 temp_r1_3;
    u32 temp_r2_3;
    u32 var_r0_3;
    u32 var_r0_4;
    u32 var_r0_5;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r4;

    var_r0 = 0;
    temp_r1 = arg0->unkFC;
    if (temp_r1 == 0) {
        var_r0 = 1;
    }
    if (var_r0 != 0) {
        sp0 = 0;
        sp4 = 0;
        if (temp_r1 <= 3U) {
            temp_r2 = arg0 + 0xFC + ((temp_r1 * 8) + 4);
            if (temp_r2 != 0) {
                temp_r2->unk0 = sp0;
                temp_r2->unk4 = sp4;
            }
            arg0->unkFC = (u32) (arg0->unkFC + 1);
        }
    }
    var_r0_2 = 0;
    temp_r1_2 = arg0->unk8;
    temp_r4 = arg0 + 8;
    if (temp_r1_2 == 0) {
        var_r0_2 = 1;
    }
    if (var_r0_2 != 0) {
        sp8 = 0;
        spC = 0;
        if (temp_r1_2 <= 0x1DU) {
            temp_r2_2 = temp_r4 + ((temp_r1_2 * 8) + 4);
            if (temp_r2_2 != 0) {
                temp_r2_2->unk0 = sp8;
                temp_r2_2->unk4 = spC;
            }
            arg0->unk8 = (u32) (arg0->unk8 + 1);
        }
    }
    temp_r0 = arg0->unk0;
    var_r0_3 = 0x3B9ACA00 - temp_r0;
    if (var_r0_3 > arg1) {
        var_r0_3 = arg1;
    }
    temp_r1_3 = temp_r0 + var_r0_3;
    arg0->unk0 = temp_r1_3;
    if (temp_r1_3 > 0x05F5E0FFU) {
        arg0->unk4 = (u8) (arg0->unk4 | 2);
    }
    temp_r4_2 = temp_r4 + (((arg0->unk8 - 1) * 8) + 4);
    temp_r1_4 = arg0 + 0xFC + (((arg0->unkFC - 1) * 8) + 4);
    temp_r2_3 = *temp_r4_2;
    var_r0_4 = 0x3B9ACA00 - temp_r2_3;
    if (var_r0_4 > arg1) {
        var_r0_4 = arg1;
    }
    *temp_r4_2 = temp_r2_3 + var_r0_4;
    temp_r2_4 = *temp_r1_4;
    var_r0_5 = 0x3B9ACA00 - temp_r2_4;
    if (var_r0_5 > arg1) {
        var_r0_5 = arg1;
    }
    *temp_r1_4 = temp_r2_4 + var_r0_5;
    if ((u32) *temp_r4_2 > 0x1869FU) {
        arg0->unk4 = (u8) (arg0->unk4 | 1);
    }
}
