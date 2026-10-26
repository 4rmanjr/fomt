# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA6D0/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA6D0/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA6D0/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA6D0/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA6D0/kilo-1531/func.c" 2
void *GetMapData(s32);
s32 memcpy(s32, s32, s32);
s32 method_0800A07C__C9FieldPlot(s32);
s32 method_0800A0A4__C9FieldPlot(s32);
s32 method_0800AF20__C9FieldPlot(s32);

void func_080AA6D0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r1;
    s32 temp_r1_3;
    s32 temp_r2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r5;
    s32 temp_r5_2;
    u16 temp_sl;
    void *temp_r1_2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r3;
    void *temp_r4_4;
    void *temp_r8;

    sp0 = arg1;
    sp4 = arg3;
    temp_sl = GetMapData(arg0->unk4)->unk20;
    temp_r0 = method_0800AF20__C9FieldPlot(sp4);
    if (temp_r0 != 0) {
        temp_r4 = sp0 * 2;
        memcpy((arg2 * temp_sl * 2) + (temp_r4 + arg0->unk10), temp_r0, 4);
        memcpy(((arg2 + 1) * temp_sl * 2) + (temp_r4 + arg0->unk10), temp_r0 + 4, 4);
        arg0->unk29 = 1;
    }
    temp_r5 = arg2 * temp_sl;
    sp8 = arg2 + 1;
    if (arg4 != 0) {
        temp_r4_2 = sp0 * 2;
        memcpy(((arg2 - 1) * temp_sl * 2) + (temp_r4_2 + arg0->unk18), arg4, 4);
        memcpy((temp_r5 * 2) + (temp_r4_2 + arg0->unk14), arg4 + 4, 4);
        memcpy((sp8 * temp_sl * 2) + (temp_r4_2 + arg0->unk14), arg4 + 8, 4);
        arg0->unk29 = 1;
    }
    temp_r2 = arg0->unk2C;
    temp_r1 = (sp0 + temp_r5) * 4;
    temp_r1_2 = temp_r1 + temp_r2;
    temp_r4_3 = (sp0 + (sp8 * temp_sl)) * 4;
    temp_r2_2 = temp_r4_3 + temp_r2;
    temp_r5_2 = 1 & method_0800A07C__C9FieldPlot(sp4);
    temp_r2_2->unk4 = (u8) ((-2 & temp_r2_2->unk4) | temp_r5_2);
    temp_r2_2->unk0 = (u8) ((-2 & temp_r2_2->unk0) | temp_r5_2);
    temp_r1_2->unk4 = (u8) ((-2 & temp_r1_2->unk4) | temp_r5_2);
    temp_r1_2->unk0 = (u8) ((-2 & temp_r1_2->unk0) | temp_r5_2);
    temp_r0_2 = method_0800A0A4__C9FieldPlot(sp4);
    temp_r1_3 = arg0->unk2C;
    temp_r8 = temp_r1 + temp_r1_3;
    temp_r2_3 = temp_r8 + 4;
    temp_r4_4 = temp_r4_3 + temp_r1_3;
    temp_r3 = temp_r4_4 + 4;
    temp_r3->unk2 = (u16) ((1 & temp_r3->unk2) | (temp_r0_2 * 2));
    temp_r0_3 = temp_r0_2 & 0x7FFF;
    temp_r4_4->unk2 = (u16) ((1 & temp_r4_4->unk2) | (temp_r0_3 * 2));
    temp_r0_4 = temp_r0_3 & 0x7FFF;
    temp_r2_3->unk2 = (u16) ((1 & temp_r2_3->unk2) | (temp_r0_4 * 2));
    temp_r8->unk2 = (u16) ((1 & temp_r8->unk2) | ((temp_r0_4 & 0x7FFF) * 2));
}
