# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08032690/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08032690/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08032690/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08032690/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08032690/kilo-1531/func.c" 2
s32 func_030004DC(s32, s32, s32, s32, s32, ? *, s32, s32, void *);
s32 func_0803AE58(s32, s32, s32, s32, s32);
s32 func_080A480C(void *, s32, void *);
s32 func_080A4944(void *, void *, s32);
extern ? gUnk_080F1328;

void func_08032690(void *arg0, void *arg1) {
s32 sp14;
    s32 sp34;
    void **sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s16 temp_r1;
    s32 temp_r0_4;
    s32 temp_r1_5;
    s32 temp_r1_7;
    s32 temp_sb;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r4;
    s32 var_r4_2;
    u32 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_5;
    u8 temp_r1_2;
    void **temp_r1_4;
    void **temp_r1_6;
    void *temp_r0;
    void *temp_r1_3;
    void *temp_r5;
    void *temp_r5_2;

    temp_r0 = arg0->unk0;
    sp3C = temp_r0->unk0;
    sp40 = temp_r0->unkA - arg1->unkC;
    temp_r1 = temp_r0->unkE;
    sp44 = temp_r1 - arg1->unkE;
    sp48 = 0x8000 - temp_r1;
    sp34 = arg1->unk0;
    sp34.unk4 = (s32) arg1->unk8;
    temp_r1_2 = arg0->unk8A;
    temp_r0_2 = (u32) (temp_r1_2 << 0x1E) >> 0x1E;
    if ((temp_r0_2 != 0) && ((s32) temp_r0_2 >= 0) && ((s32) temp_r0_2 <= 2)) {
        temp_r1_3 = ((temp_r1_2 >> 2) * 0x10) + ((temp_r0->unk20 * 4) + &gUnk_080F1328);
        temp_r5 = arg0 + 0x48;
        sp4C = sp40 + temp_r1_3->unk0;
        temp_sb = sp44 + temp_r1_3->unk2;
        temp_r1_4 = arg0->unk70;
        (*temp_r1_4)->unk10(&sp14, temp_r1_4, *(arg0->unk74 + ((arg0 + 0x70)->unkC * 4)));
        temp_r1_5 = arg0->unk50;
        if ((s32) ((0 - temp_r1_5) | temp_r1_5) < 0) {
            var_r0 = func_030004DC(sp38, sp4C, temp_sb, 0x55, sp48, &sp14, arg0->unk48, (s32) temp_r5->unkC, arg0 + 0x58);
        } else {
            var_r0 = 0;
        }
        if ((var_r0 != 0) && (temp_r5->unk3C != 0)) {
            func_080A480C(temp_r5, sp34, &sp14 + 8);
            if (temp_r5->unk3D != 0) {
                func_080A4944(temp_r5, &sp14 + 0x10, 1);
            } else if (temp_r5->unk3E == 0) {
                func_080A4944(temp_r5, &sp14 + 0x10, 1);
                temp_r5->unk3E = 1U;
            }
            temp_r5->unk3C = 0U;
        }
    }
    temp_r0_3 = arg0->unk8B;
    switch (temp_r0_3) {
    default:
        temp_r0_4 = temp_r0->unk21 & 3;
        var_r4 = (temp_r0_4 * 4) | temp_r0_4 | (temp_r0_4 * 0x10) | (temp_r0_4 << 6);
        break;
    case 1:
        var_r4 = 0x19;
        break;
    case 2:
        var_r4 = 0x1A;
        break;
    }
    temp_r5_2 = arg0 + 8;
    temp_r1_6 = arg0->unk30;
    (*temp_r1_6)->unk10(&sp14, temp_r1_6, *(arg0->unk34 + (arg0->unk3C * 4)));
    temp_r1_7 = arg0->unk10;
    if ((s32) ((0 - temp_r1_7) | temp_r1_7) < 0) {
        var_r0_2 = func_030004DC(sp34.unk4, sp40, sp44, var_r4, sp48, &sp14, arg0->unk8, (s32) temp_r5_2->unkC, arg0 + 0x18);
    } else {
        var_r0_2 = 0;
    }
    if ((var_r0_2 != 0) && (temp_r5_2->unk3C != 0)) {
        func_080A480C(temp_r5_2, sp34.unk0, &sp14 + 8);
        if (temp_r5_2->unk3D != 0) {
            func_080A4944(temp_r5_2, &sp14 + 0x10, 1);
        } else if (temp_r5_2->unk3E == 0) {
            func_080A4944(temp_r5_2, &sp14 + 0x10, 1);
            temp_r5_2->unk3E = 1U;
        }
        temp_r5_2->unk3C = 0U;
    }
    temp_r0_5 = arg0->unk88;
    switch (temp_r0_5) {
    case 3:
        return;
    case 0:
        var_r4_2 = 0;
block_39:
        func_0803AE58((*sp3C)->unk58(sp3C), arg1->unk8, sp40, sp44 + arg0->unk89, var_r4_2);
        return;
    default:
    case 1:
        var_r4_2 = 1;
        goto block_39;
    case 2:
        var_r4_2 = 2;
        goto block_39;
    }
}
