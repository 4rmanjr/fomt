# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B94A8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B94A8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B94A8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B94A8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B94A8/opencode/func.c" 2
s32 func_08008B6C(void *, s32);
s32 func_0805E860(s32, s32);
s32 func_080B96AC(void *, u16, u16, s32, s32, s32, s32, s32);
s32 func_080B9734(void *);
s32 func_080B97FC(void *, s32);
s32 func_080B9828(void *, s32);

void func_080B94A8(void *arg0, u8 arg1, u8 arg2) {
    s32 sp10;
    u16 *sp14;
    u16 *sp18;
    void *sp1C;
    u8 *sp20;
    u16 *sp24;
    s32 temp_r1_2;
    s32 temp_r3;
    u8 temp_r0;
    u8 temp_r1;
    u8 temp_r2;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r1_3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r6;
    void *temp_r6_2;
    void *temp_r7;

    temp_r1 = arg1;
    sp10 = (s32) temp_r1;
    temp_r2 = arg2;
    temp_r1_2 = temp_r1 << 6;
    temp_r6 = arg0 + temp_r1_2;
    temp_r1_3 = temp_r6 + 0x88;
    temp_r6->unk88 = (u8) (temp_r6->unk88 + 1);
    temp_r0 = temp_r1_3->unk1 + 1;
    temp_r1_3->unk1 = temp_r0;
    if ((u32) temp_r0 < (u32) arg0->unkB5C) {
        temp_r3 = temp_r2 << 6;
        if (*(arg0 + 0x6C + temp_r3) != 5) {
            goto block_9;
        }
        temp_r4 = arg0 + temp_r3;
        sp14 = temp_r4 + 0x8A;
        sp18 = temp_r4 + 0x8C;
        temp_r7 = arg0 + 0x74;
        sp1C = temp_r7;
        sp24 = temp_r6 + 0x8C;
        sp20 = arg0 + 0xB5D;
        if ((func_080B96AC(arg0, temp_r4->unk8A, temp_r4->unk8C, *(temp_r7 + temp_r3), (s32) temp_r6->unk8A, (s32) temp_r6->unk8C, (s32) arg0->unkB5D, (s32) arg0->unkB72) << 0x18) == 0) {
            goto block_9;
        }
        if ((func_080B96AC(arg0, temp_r6->unk8A, *sp24, *(sp1C + temp_r1_2), (s32) *sp14, (s32) *sp18, (s32) *sp20, (s32) arg0->unkB72) << 0x18) != 0) {
            temp_r6->unk99 = 0;
            temp_r6->unk9A = 1;
            temp_r4->unk99 = 0;
            (temp_r4 + 0x99)->unk1 = 1;
            temp_r4->unk9C = 0;
            temp_r6->unk90 = 0;
            temp_r4->unk90 = 0;
            func_080B9734(arg0);
            return;
        }
        goto block_9;
    }
    temp_r4_2 = arg0 + (temp_r2 << 6);
    if ((func_080B96AC(arg0, temp_r6->unk8A, (temp_r6 + 0x8A)->unk2, *(arg0 + 0x74 + temp_r1_2), (s32) temp_r4_2->unk8A, (s32) temp_r4_2->unk8C, (s32) arg0->unkB5D, (s32) arg0->unkB72) << 0x18) != 0) {
        func_080B97FC(arg0, sp10);
        func_0805E860(((temp_r2 * 4) + arg0)->unk91C, 2);
        temp_r4_2->unkAB = 1;
        temp_r6->unk9B = 1;
        temp_r0_2 = (temp_r6 + 0x9B) - 2;
        temp_r0_2->unk0 = 0;
        temp_r0_2->unk1 = 1;
        temp_r0_3 = temp_r4_2 + 0x99;
        temp_r4_2->unk99 = 0;
        temp_r0_4 = temp_r0_3 + 1;
        temp_r0_3->unk1 = 1;
        temp_r0_4->unk2 = 0;
        *((temp_r0_4 + 2) - 0xC) = 0;
        return;
    }
block_9:
    temp_r6_2 = arg0 + (sp10 << 6);
    if ((u32) temp_r6_2->unk89 > 1U) {
        temp_r6_2->unk89 = 0U;
    }
    if ((u32) temp_r6_2->unk88 > 0x3BU) {
        temp_r6_2->unk88 = 0U;
        func_080B9828(arg0, sp10);
        temp_r6_2->unk9B = 0;
        *((temp_r6_2 + 0x9B) - 2) = 0;
        temp_r6_2->unk9A = 1;
        func_08008B6C(arg0 + 0x710, 0xB5);
    }
}
