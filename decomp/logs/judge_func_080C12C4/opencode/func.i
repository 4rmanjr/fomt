# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C12C4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C12C4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C12C4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C12C4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C12C4/opencode/func.c" 2
s32 func_080087C8(void *);
s32 func_080088DC(void *);
void *func_08008918(void *);
s32 func_08008920(void *);
void *func_08008940(void *);
s32 func_0800894C(void *);
s32 func_08008B6C(void *, s32);
s32 func_0800934C(s32, s32, s32, s32);
s32 func_08009378(void *, s32, s32, s32);
s32 func_08050D3C(s32, s32, s32, void *);
s32 func_080C14BC(void *);
s32 func_080C160C(void *);
s32 func_080C16D4(void *);
s32 func_080C2D54(void *);
s32 func_080C3B18(void *);
s32 func_080C3C18(void *);
s32 func_080C3D04(void *);
s32 func_080C516C(void *);
s32 func_080C5378(void *);
s32 func_080C5648(void *);
s32 func_080C5710(void *);
s32 func_080C5A6C(void *);
s32 func_080C608C(void *);

s32 *func_080C12C4(s32 *arg0, void *arg1) {
    void *sp0;
    s32 sp4;
    void *sp8;
    s16 spC;
    void **sp10;
    void **sp14;
    s32 *sp1C;
    s32 *sp20;
    void **sp24;
    void **sp28;
    s32 *temp_r2;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r1_2;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;
    u32 temp_r0_3;
    void **temp_r1;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r4;
    void *temp_r5;

    sp1C = arg0;
    func_080C14BC(arg1);
    temp_r0 = func_08008918(arg1);
    spC = 0x3F;
    temp_r0->unk50 = 0x3F;
    func_0800934C(arg1->unk544 + 0xC, 0x889, 1, 1);
    temp_r0_2 = func_08008940(arg1);
    temp_r0_2->unk8->unk10(temp_r0_2, arg1->unk544);
    func_080C3B18(arg1);
    func_080C3C18(arg1);
    func_080C160C(arg1);
    func_080C16D4(arg1);
    func_08008B6C(arg1 + 0x810, 0x22);
    temp_r1 = &sp0 + 0x10;
    sp24 = temp_r1;
    sp28 = temp_r1 + 4;
    if (arg1->unk89C != 7) {
        do {
            func_080087C8(arg1);
            temp_r0_3 = arg1->unk89C;
            switch (temp_r0_3) {
            case 0:
                func_080C3D04(arg1);
                break;
            case 1:
                func_080C516C(arg1);
                break;
            case 2:
                func_080C5378(arg1);
                break;
            case 3:
                func_080C5648(arg1);
                break;
            case 4:
                func_080C5710(arg1);
                break;
            case 5:
                func_080C5A6C(arg1);
                break;
            case 6:
                func_080C608C(arg1);
                break;
            }
        } while (arg1->unk89C != 7);
    }
    temp_r2 = arg1->unk544;
    temp_r1_2 = *temp_r2;
    if ((s32) ((0 - temp_r1_2) | temp_r1_2) >= 0) {
        func_08009378(temp_r2 + 0xC, 0x889, 1, 1);
        temp_r0_4 = func_08008940(arg1);
        temp_r0_4->unk8->unk10(temp_r0_4, arg1->unk544);
    }
    temp_r0_5 = *arg1->unk544;
    if ((s32) ((0 - temp_r0_5) | temp_r0_5) < 0) {
        sp20 = arg1 + 0x51C;
        do {
            func_080087C8(arg1);
            temp_sb = *sp20;
            temp_r8 = func_080088DC(arg1);
            temp_r6 = func_08008920(arg1);
            temp_r5 = func_08008918(arg1);
            temp_r4 = func_08008940(arg1);
            temp_r0_7 = func_0800894C(arg1);
            sp0 = temp_r4;
            sp4 = temp_r0_7;
            sp8 = arg1 + 0x814;
            func_08050D3C(temp_sb, temp_r8, temp_r6, temp_r5);
            func_080C2D54(arg1);
            temp_r0_6 = *arg1->unk544;
        } while ((s32) ((0 - temp_r0_6) | temp_r0_6) < 0);
    }
    sp10 = 0;
    sp14 = sp24;
    sp28->unk4 = 0;
    *sp24 = 0;
    *sp1C = 0;
    if (sp10 != 0) {
        (*sp10)->unk8(sp10, 3);
    }
    return sp1C;
}
