# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCB7C/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCB7C/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCB7C/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCB7C/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCB7C/kilo-1531/func.c" 2
s32 func_080A47B4(s32 *, s32);
s32 func_080A4A00(s32 *, s32, u16, void **);
s32 func_080DCD2C(void *, ? *);
s32 rand();
extern ? gUnk_080F1672;
extern ? gUnk_080F1678;
extern ? gUnk_080F1684;

u32 *func_080DCB7C(u32 *arg0, void **arg1, u8 arg2) {
    s32 sp0;
    s32 sp4;
    s8 sp8;
s32 spC;
    s32 sp5C;
    u32 sp60;
    s8 *sp64;
    s8 *sp68;
    s32 temp_r1;
    s32 temp_r1_3;
    s32 temp_r6;
    s32 temp_sb;
    u16 var_r2;
    u16 var_r2_2;
    u32 temp_r1_2;
    u32 temp_r1_4;
    u32 temp_r2;
    u32 temp_r5;
    u8 temp_r4;
    void *temp_r0;
    void *temp_r0_2;

    sp5C = (s32) arg2;
    *arg0 = 0;
    temp_r1 = (*arg1)->unk7C(arg1);
    if (sp5C != 0) {
        var_r2 = gUnk_080F1684.unk2;
    } else {
        var_r2 = gUnk_080F1684.unk0;
    }
    sp0 = 6;
    sp4 = 0x1D;
    sp8 = 0;
    func_080A4A00(&spC, temp_r1, var_r2, arg1);
    spC.unk40 = 0x640000;
    spC.unk44 = 0x12C;
    spC.unk48 = 0x2666;
    spC.unk4C = (u8) gUnk_080F1684.unk4;
    spC.unk4D = 1;
    temp_r1_2 = *arg0;
    sp68 = &sp8;
    if (temp_r1_2 <= 4U) {
        temp_r0 = (temp_r1_2 * 0x50) + 4 + arg0;
        if (temp_r0 != 0) {
            func_080DCD2C(temp_r0, &spC);
        }
        *arg0 += 1;
    }
    func_080A47B4(&spC, 2);
    sp60 = 0;
    sp64 = &sp0 + 0x59;
    do {
        temp_r6 = rand() % 3;
        temp_r5 = (u32) rand() % 480U;
        temp_r4 = *((rand() % 3) + &gUnk_080F1672);
        temp_sb = *(((rand() % 3) * 4) + &gUnk_080F1678);
        temp_r1_3 = (*arg1)->unk7C(arg1);
        if (sp5C != 0) {
            var_r2_2 = ((temp_r6 * 8) + &gUnk_080F1684)->unk2;
        } else {
            var_r2_2 = *((temp_r6 * 8) + &gUnk_080F1684);
        }
        sp0 = 6;
        sp4 = 0x1D;
        *sp68 = 0;
        func_080A4A00(&spC, temp_r1_3, var_r2_2, arg1);
        spC.unk40 = (s32) (temp_r5 << 0x10);
        spC.unk44 = (s16) temp_r4;
        spC.unk48 = temp_sb;
        spC.unk4C = (u8) ((temp_r6 * 8) + &gUnk_080F1684)->unk4;
        *sp64 = 1;
        temp_r1_4 = *arg0;
        if (temp_r1_4 <= 4U) {
            temp_r0_2 = (temp_r1_4 * 0x50) + 4 + arg0;
            if (temp_r0_2 != 0) {
                func_080DCD2C(temp_r0_2, &spC);
            }
            *arg0 += 1;
        }
        func_080A47B4(&spC, 2);
        temp_r2 = sp60 + 1;
        sp60 = temp_r2;
    } while (temp_r2 <= 3U);
    return arg0;
}
