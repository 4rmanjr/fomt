# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038928/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038928/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038928/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038928/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038928/opencode/func.c" 2
s32 __builtin_delete(s32 *);
s32 func_0805E8F0(void *);

void func_08038928(void *arg0) {
    s32 sp0;
    s32 *temp_r0_3;
    s32 *temp_r6;
    s32 temp_r0_2;
    s32 temp_r0_4;
    s32 temp_r1;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r2;
    u32 *temp_r0;
    u32 var_r7;
    u32 var_r7_2;
    u8 *var_r5_2;
    u8 *var_r6;
    u8 temp_r1_3;
    void *temp_r1_2;
    void *temp_r5;
    void *var_r4;
    void *var_r4_2;
    void *var_r4_3;
    void *var_r5;

    temp_r0 = arg0->unk14;
    if (temp_r0 != 0) {
        var_r7 = 0;
        if ((u32) *temp_r0 > 0U) {
            var_r4 = temp_r0 + 0x40;
            var_r5 = temp_r0 + 0x2C;
            do {
                if (var_r4->unk3 == 0) {
                    if ((s32) (func_0805E8F0(var_r5) << 0x1E) < 0) {
                        var_r4->unk0 = 1;
                    }
                } else {
                    var_r4->unk3 = 0U;
                }
                temp_r1 = var_r4->unk4 - var_r4->unkC;
                var_r4->unk4 = temp_r1;
                if ((s64) (temp_r1 + (var_r4->unk10 << 0x10)) < 0) {
                    var_r4->unk4 = 0x01E00000;
                }
                var_r4 += 0x50;
                var_r5 += 0x50;
                var_r7 += 1;
            } while (var_r7 < (u32) *temp_r0);
        }
    }
    temp_r1_2 = arg0->unkC;
    if ((temp_r1_2 != 0) && (temp_r1_2->unk50 != 0)) {
        temp_r0_2 = temp_r1_2->unk4C + 0xFFFF8000;
        temp_r1_2->unk4C = temp_r0_2;
        if (temp_r0_2 <= 0xA80000) {
            temp_r1_2->unk4C = 0xA80000;
            temp_r1_2->unk50 = 0U;
        }
    }
    temp_r0_3 = arg0->unk10;
    if (temp_r0_3 != 0) {
        var_r2 = 0;
        var_r7_2 = 0;
        var_r5_2 = temp_r0_3 + 0x144;
        var_r4_2 = temp_r0_3 + 0x2C;
        var_r6 = temp_r0_3 + 0x43;
        do {
            temp_r1_3 = *var_r5_2;
            if (temp_r1_3 == 0) {
                if (var_r4_2->unk17 == 0) {
                    sp0 = var_r2;
                    temp_r0_4 = func_0805E8F0(var_r4_2);
                    if ((s32) (temp_r0_4 << 0x1E) < 0) {
                        var_r4_2->unk14 = 1;
                    }
                    var_r0 = temp_r0_4;
                } else {
                    *var_r6 = temp_r1_3;
                    var_r0 = 2;
                }
                if ((s32) (var_r0 << 0x1D) < 0) {
                    *var_r5_2 = 1;
                }
            } else {
                var_r2 += 1;
            }
            var_r5_2 += 1;
            var_r4_2 += 0x40;
            var_r6 += 0x40;
            var_r7_2 += 1;
        } while (var_r7_2 <= 4U);
        var_r0_2 = 0;
        if (var_r2 == 5) {
            var_r0_2 = 1;
        }
        if (var_r0_2 != 0) {
            temp_r6 = arg0->unk10;
            if ((temp_r6 != 0) && (temp_r6 != 0)) {
                temp_r5 = temp_r6 + ((*temp_r6 << 6) + 4);
                var_r4_3 = temp_r6 + 4;
                if (var_r4_3 != temp_r5) {
                    do {
                        var_r4_3->unk24->unk8(var_r4_3, 2);
                        var_r4_3 += 0x40;
                    } while (var_r4_3 != temp_r5);
                }
                __builtin_delete(temp_r6);
            }
            arg0->unk10 = 0;
        }
    }
}
