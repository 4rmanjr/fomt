# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809ADA8/Prodesk_344995/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809ADA8/Prodesk_344995/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809ADA8/Prodesk_344995/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809ADA8/Prodesk_344995/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809ADA8/Prodesk_344995/func.c" 2
void func_0809ADA8(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 temp_r0_5;
    s32 temp_r1_2;
    s32 temp_r3;
    s32 var_r1;
    s32 var_r2;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 var_r1_2;
    void *temp_r0_4;
    void *temp_r1;
    void *temp_r2;
    void *temp_r6;
    void *var_r3;
    void *var_r4;

    temp_r3 = arg0 + 8;
    var_r1 = 0;
    temp_r0 = arg0->unk8;
    if (temp_r0 == 0) {
        var_r1 = 1;
    }
    if (var_r1 == 0) {
        temp_r0_2 = *(temp_r3 + (((temp_r0 - 1) * 8) + 4));
        if ((u32) arg0->unk120 < temp_r0_2) {
            arg0->unk120 = temp_r0_2;
        }
        temp_r0_3 = (temp_r3 + (((arg0->unk8 - 1) * 8) + 4))->unk4;
        if ((u32) arg0->unk124 < temp_r0_3) {
            arg0->unk124 = temp_r0_3;
        }
    }
    temp_r6 = arg0 + 8;
    var_r1_2 = arg0->unk8;
    if (var_r1_2 > 0x1DU) {
        do {
            if (var_r1_2 != 0) {
                temp_r0_4 = temp_r6 + ((var_r1_2 * 8) + 4);
                temp_r1 = arg0 + 0x14;
                if (temp_r1 != temp_r0_4) {
                    var_r3 = temp_r1;
                    var_r4 = arg0 + 0xC;
                    var_r2 = (s32) (temp_r0_4 - var_r3) >> 3;
                    if (var_r2 > 0) {
                        do {
                            temp_r0_5 = var_r3->unk0;
                            temp_r1_2 = var_r3->unk4;
                            var_r3 += 8;
                            var_r4->unk0 = temp_r0_5;
                            var_r4->unk4 = temp_r1_2;
                            var_r4 += 8;
                            var_r2 -= 1;
                        } while (var_r2 > 0);
                    }
                }
                arg0->unk8 = (u32) (arg0->unk8 - 1);
            }
            var_r1_2 = arg0->unk8;
        } while (var_r1_2 > 0x1DU);
    }
    sp0 = 0;
    sp4 = 0;
    if (var_r1_2 <= 0x1DU) {
        temp_r2 = temp_r6 + ((var_r1_2 * 8) + 4);
        if (temp_r2 != 0) {
            temp_r2->unk0 = sp0;
            temp_r2->unk4 = sp4;
        }
        arg0->unk8 = (u32) (arg0->unk8 + 1);
    }
}
