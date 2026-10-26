# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803BAAC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803BAAC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803BAAC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803BAAC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803BAAC/opencode/func.c" 2
s32 func_0803BAAC(void *arg0, void *arg1, void *arg2, void *arg3) {
s32 sp0;
    s16 temp_r0_4;
    s16 temp_r0_8;
    s16 temp_r1_2;
    s16 temp_r1_3;
    s16 temp_r1_4;
    s16 temp_r1_5;
    s16 temp_r2_4;
    s16 temp_r2_5;
    s16 temp_r5_2;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r1_6;
    s32 temp_r2_3;
    s32 temp_r2_7;
    s32 temp_r4_4;
    s32 temp_r5_4;
    s32 var_r2;
    u16 temp_r0_5;
    u16 temp_r4_2;
    u16 temp_r4_3;
    u16 temp_r5;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u32 temp_r2_2;
    u32 temp_r2_6;
    u32 temp_r2_8;
    u32 temp_r5_3;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r2;
    u8 temp_r4;
    u8 temp_r6;
    u8 var_r0;
    void *temp_r3;

    temp_r2 = arg0->unkB;
    temp_r0 = ((arg0->unkC & 0x7F) * 2) | (temp_r2 >> 7);
    switch (temp_r0) {
    case 1:
        temp_r0_2 = arg0->unkD;
        if ((u32) temp_r0_2 > 8U) {
            arg0->unkB = (u8) (0x80 | temp_r2);
            arg0->unkC = (u8) ((-0x80 & arg0->unkC) | 1);
        } else {
            var_r0 = temp_r0_2 + 1;
block_10:
            arg0->unkD = var_r0;
        }
        break;
    case 2:
        temp_r0_3 = arg0->unkD;
        if (temp_r0_3 == 0) {
            arg0->unkB = (u8) (0x7F & temp_r2);
            arg0->unkC = (u8) (-0x80 & arg0->unkC);
        } else {
            var_r0 = temp_r0_3 - 1;
            goto block_10;
        }
        break;
    }
    temp_r3 = arg0 + 0x10;
    var_r2 = 0;
    if (temp_r3->unkC == (temp_r3 + 0x10)) {
        var_r2 = 1;
    }
    if (var_r2 == 0) {
        arg2->unk8->unk1C(arg2, temp_r3);
    }
    if ((((arg0->unkC & 0x7F) * 2) | ((u8) arg0->unkB >> 7)) == 0) {
        arg1->unk0 = (u16) (arg1->unk0 & ~(0x100 << ((u32) (arg0->unk8 << 0x1E) >> 0x1E)));
        temp_r1 = arg0->unk2C;
        if ((s32) ((0 - temp_r1) | temp_r1) < 0) {
            arg3->unk8->unk14(arg3, arg0 + 0x2C);
        }
    } else {
        temp_r4 = arg0->unk8;
        temp_r2_2 = (u32) (temp_r4 << 0x1E) >> 0x1E;
        arg1->unk0 = (u16) ((0x100 << temp_r2_2) | 0x2000 | arg1->unk0);
        temp_r2_3 = temp_r2_2 * 4;
        temp_r1_2 = (((u32) ((u16) arg0->unk8 << 0x17) >> 0x1E) * 4) | (((u32) (temp_r4 << 0x19) >> 0x1B) << 8) | 0x40;
        sp0.unk0 = temp_r1_2;
        *((temp_r2_2 * 2) + 8 + arg1) = temp_r1_2;
        sp0.unk0 = 0;
        *(temp_r2_3 + 0x10 + arg1) = 0;
        temp_r5 = arg0->unk2;
        temp_r0_4 = 0 - temp_r5;
        sp0.unk0 = temp_r0_4;
        *(temp_r2_3 + 0x12 + arg1) = temp_r0_4;
        temp_r6 = arg0->unkD;
        sp0.unk4 = temp_r4;
        if ((u32) temp_r6 > 8U) {
            temp_r0_5 = arg0->unk0;
            temp_r2_4 = (temp_r0_5 << 8) | (temp_r0_5 + arg0->unk4);
            sp0.unk0 = temp_r2_4;
            arg1->unk40 = temp_r2_4;
            temp_r1_3 = (temp_r5 << 8) | (temp_r5 + arg0->unk6);
            sp0.unk0 = temp_r1_3;
            arg1->unk44 = temp_r1_3;
        } else {
            temp_r4_2 = arg0->unk6;
            temp_r0_6 = (u32) (temp_r6 * temp_r4_2) / 9U;
            temp_r5_2 = (s16) arg0->unk2;
            temp_r5_3 = temp_r5_2 + (temp_r5_2 + temp_r4_2);
            temp_r5_4 = ((s32) (temp_r5_3 + (temp_r5_3 >> 0x1F)) >> 1) - ((s32) ((temp_r0_6 >> 0x1F) + temp_r0_6) >> 1);
            temp_r4_3 = arg0->unk4;
            temp_r0_7 = temp_r6 * temp_r4_3;
            temp_r2_5 = (s16) arg0->unk0;
            temp_r2_6 = temp_r2_5 + (temp_r2_5 + temp_r4_3);
            temp_r2_7 = ((s32) (temp_r2_6 + (temp_r2_6 >> 0x1F)) >> 1) - (temp_r0_7 / 18);
            temp_r1_4 = (temp_r2_7 << 8) | (temp_r2_7 + (temp_r0_7 / 9U));
            sp0.unk0 = temp_r1_4;
            arg1->unk40 = temp_r1_4;
            temp_r0_8 = (temp_r5_4 << 8) | (temp_r5_4 + temp_r0_6);
            sp0.unk0 = temp_r0_8;
            arg1->unk44 = temp_r0_8;
        }
        sp0.unk0 = 0x3F;
        arg1->unk48 = 0x3FU;
        temp_r4_4 = 1 << ((u32) (sp0.unk4 << 0x1E) >> 0x1E);
        temp_r1_5 = 0x3F & ~temp_r4_4;
        sp0.unk0 = temp_r1_5;
        arg1->unk4A = temp_r1_5;
        temp_r2_8 = (u32) (arg0->unkA << 0x11) >> 0x18;
        if (temp_r2_8 == 2) {
            arg1->unk48 = (u16) (arg1->unk48 | 0x20);
            arg1->unk50 = (s32) (temp_r4_4 | 0x08083F40);
        }
        if (temp_r2_8 == 1) {
            temp_r1_6 = arg0->unk2C;
            if ((s32) ((0 - temp_r1_6) | temp_r1_6) >= 0) {
                arg3->unk8->unk10(arg3, arg0 + 0x2C);
            }
        }
    }
    return ((arg0->unkC & 0x7F) * 2) | ((u8) arg0->unkB >> 7);
}
