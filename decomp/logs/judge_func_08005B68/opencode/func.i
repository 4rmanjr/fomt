# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005B68/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005B68/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005B68/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005B68/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005B68/opencode/func.c" 2
s32 func_08005CDC(void *);
s32 func_080061A0(void *, s32);
s32 func_08006334(void *);
s32 func_0800637C(void *);
s32 func_080064E8(void *);
s32 func_08006858(void *);
s32 func_080068CC(void *);
s32 func_08006CDC(void *);
s32 func_08006ED8(void *);
s32 func_08007874(s32 *);
s32 func_080079E8(s32 *, s32);
s32 func_08007B54(s32 *, s32);
s32 func_08007C28(s32 *, s32);
s32 func_08007D4C(s32 *);
s32 func_08008724(void *);
s32 func_080087C8(void *);
s32 func_080088B8(void *);
void *func_08008918(void *);
void *func_08008940(void *);
s32 func_08009300(s32 *, void *);
s32 func_0800934C(s32 *, s32, s32, s32);
s32 func_08009378(s32 *, s32, s32, s32);
s32 func_080094B8(s32 *, s32);
extern ? vtable_unk_080E5B80;

s32 *func_08005B68(s32 *arg0, void *arg1) {
s32 sp0;
    s32 sp4;
    s16 sp8;
    s32 spC;
    ? *sp14;
s32 sp18;
    void **sp1C;
    void ***sp20;
    s32 temp_r4;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r1;

    func_08008724(arg1);
    func_08007874(&sp0);
    sp4 = 0;
    func_08007C28(&sp0, 0);
    sp4 = func_08007B54(&sp0, 3);
    temp_r4 = func_08007D4C(&sp0);
    func_08005CDC(arg1);
    func_080061A0(arg1, temp_r4);
    func_08006334(arg1);
    func_0800637C(arg1);
    temp_r0 = func_08008918(arg1);
    sp8 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r1 = func_08008918(arg1);
    spC = 0;
    spC.unk4 = 0;
    sp14 = &vtable_unk_080E5B80;
    func_08009300(&sp18, temp_r1);
    func_0800934C(&sp18, 0x889, 1, 1);
    temp_r0_2 = func_08008940(arg1);
    temp_r0_2->unk8->unk10(temp_r0_2, &spC);
    if ((s32) ((0 - spC) | spC) < 0) {
        do {
            func_080087C8(arg1);
        } while ((s32) ((0 - spC) | spC) < 0);
    }
loop_4:
    if (arg1->unk4636 == 0) {
        func_080088B8(arg1);
        func_08006CDC(arg1);
        func_080068CC(arg1);
        func_0800637C(arg1);
        func_080064E8(arg1);
        func_08006858(arg1);
        func_08006ED8(arg1);
        func_080087C8(arg1);
        goto loop_4;
    }
    func_08009378(&sp18, 0x889, 1, 1);
    temp_r0_3 = func_08008940(arg1);
    temp_r0_3->unk8->unk10(temp_r0_3, &spC);
loop_7:
    if ((s32) ((0 - spC) | spC) < 0) {
        func_080087C8(arg1);
        goto loop_7;
    }
    sp1C = 0;
    sp20 = &sp1C;
    sp20.unk4 = 0;
    sp1C = 0;
    *arg0 = 0;
    if (sp1C != 0) {
        (*sp1C)->unk8(sp1C, 3);
    }
    func_080094B8(&spC, 2);
    func_08007C28(&sp0, sp4);
    func_080079E8(&sp0, 2);
    return arg0;
}
