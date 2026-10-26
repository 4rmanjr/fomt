# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039F90/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039F90/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039F90/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039F90/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039F90/opencode/func.c" 2
s32 func_030004DC(s32, s32, s32, s32, s32, ? *, s32, s32, void *);
s32 func_080A480C(void *, s32, void *);
s32 func_080A4944(void *, void *, s32);

void func_08039F90(void *arg0, void **arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
s32 sp14;
    s32 sp34;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    ? *temp_r7;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r7;
    void **temp_r1;
    void *temp_r0_2;
    void *temp_r6;

    var_r7 = arg6;
    sp3C = arg4 - (*arg1)->unk18(arg1);
    sp40 = arg5 - (*arg1)->unk1C(arg1);
    sp44 = 0x8000 - arg5;
    sp34 = arg3;
    sp34.unk4 = arg2;
    temp_r5 = var_r7;
    if (temp_r5 < 0) {
        var_r7 = 0 - temp_r5;
    }
    temp_r6 = arg0 + 8;
    temp_r0 = 3 & arg7;
    temp_r1 = arg0->unk30;
    (*temp_r1)->unk10(&sp14, temp_r1, *(arg0->unk34 + (arg0->unk3C * 4)));
    temp_r1_2 = arg0->unk10;
    if ((s32) ((0 - temp_r1_2) | temp_r1_2) < 0) {
        var_r0 = func_030004DC(sp34.unk4, sp3C, sp40 - var_r7, (temp_r0 * 4) | temp_r0 | (temp_r0 * 0x10) | (temp_r0 << 6), sp44, &sp14, arg0->unk8, (s32) temp_r6->unkC, arg0 + 0x18);
    } else {
        var_r0 = 0;
    }
    if ((var_r0 != 0) && (temp_r6->unk3C != 0)) {
        func_080A480C(temp_r6, sp34, &sp14 + 8);
        if (temp_r6->unk3D != 0) {
            func_080A4944(temp_r6, &sp14 + 0x10, 1);
        } else if (temp_r6->unk3E == 0) {
            func_080A4944(temp_r6, &sp14 + 0x10, 1);
            temp_r6->unk3E = 1U;
        }
        temp_r6->unk3C = 0U;
    }
    temp_r0_2 = arg0->unk48;
    if ((temp_r0_2 != 0) && (temp_r5 >= 0)) {
        temp_r0_3 = 3 & arg7;
        temp_r7 = temp_r0_2 + 0x28;
        temp_r1_3 = (temp_r0_2 + 4)->unk4;
        if ((s32) ((0 - temp_r1_3) | temp_r1_3) < 0) {
            var_r0_2 = func_030004DC(sp34.unk4, sp3C, sp40, (temp_r0_3 * 4) | temp_r0_3 | (temp_r0_3 * 0x10) | (temp_r0_3 << 6), sp44, temp_r7, temp_r0_2->unk0, (s32) temp_r0_2->unkC, temp_r0_2 + 0x10);
        } else {
            var_r0_2 = 0;
        }
        if ((var_r0_2 != 0) && (temp_r0_2->unk48 != 0)) {
            func_080A480C(temp_r0_2, sp34.unk0, temp_r7 + 8);
            func_080A4944(temp_r0_2, temp_r7 + 0x10, 1);
            temp_r0_2->unk48 = 0U;
        }
    }
}
