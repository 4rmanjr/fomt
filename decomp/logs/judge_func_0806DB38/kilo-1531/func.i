# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806DB38/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806DB38/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806DB38/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806DB38/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806DB38/kilo-1531/func.c" 2
void *__builtin_new(s32);
s32 func_08008724(void *);
s32 func_080087C8(void *);
s32 func_080088B8(void *);
void *func_08008918(void *);
void *func_08008940(void *);
s32 func_08009300(void *, void *);
s32 func_0800934C(void *, s32, s32, s32);
s32 func_08009378(void *, s32, s32, s32);
s32 func_0806DD9C(void *);
s32 func_0806DEC0(void *);
s32 func_0806E02C(void *);
s32 func_0806E164(void *);
s32 func_0806E1E8(void *);
s32 func_0806E234(void *);
s32 func_0806E43C(void *);
s32 func_0806E578(void *);
s32 func_0806E7E0(void *);
extern ? vtable_unk_080E5B80;

s32 *func_0806DB38(s32 *arg0, void *arg1) {
    s16 sp0;
    void *sp4;
    void **sp8;
    void ***spC;
    s16 *sp14;
    s16 temp_r0_3;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 var_r2;
    s32 var_r8;
    s8 temp_r0_4;
    s8 temp_r0_5;
    s8 var_r7;
    u32 var_r1;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_6;
    void *temp_r1;
    void *temp_r4;

    var_r7 = saved_reg_r10;
    func_08008724(arg1);
    temp_r0 = func_08008918(arg1);
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r4 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg1);
    temp_r4->unk0 = 0;
    temp_r4->unk4 = 0;
    temp_r4->unk8 = &vtable_unk_080E5B80;
    func_08009300(temp_r4 + 0xC, temp_r1);
    sp4 = temp_r4;
    func_0806E234(arg1);
    func_0806E43C(arg1);
    func_0806E578(arg1);
    func_0800934C(sp4 + 0xC, 0x889, 1, 1);
    temp_r0_2 = func_08008940(arg1);
    temp_r0_2->unk8->unk10(temp_r0_2, sp4);
    var_r8 = 0;
    sp14 = &sp0 + 0xC;
loop_1:
    func_080087C8(arg1);
    func_080088B8(arg1);
    temp_r0_3 = arg1->unk44C;
    switch ((u32) temp_r0_3) {
    case 0:
        temp_r1_2 = sp4->unk0;
        if ((s32) ((0 - temp_r1_2) | temp_r1_2) < 0) {

        } else {
            arg1->unk44 = 1;
block_27:
            arg1->unk44C = (s16) ((u16) arg1->unk44C + 1);
        }
        break;
    case 1:
        func_0806DEC0(arg1);
        func_0806E02C(arg1);
        if ((func_0806E164(arg1) << 0x18) != 0) {
            arg1->unk44E = 0;
            goto block_27;
        }
        func_0806E1E8(arg1);
        break;
    case 2:
        if (arg1->unk44E == 2) {
            if (arg1->unk450 == 0) {
                temp_r0_4 = (s8) arg1->unk449;
                switch (temp_r0_4) {
                case 0:
                    var_r2 = 0;
                    break;
                case 4:
                    var_r2 = 1;
                    break;
                case 8:
                    var_r2 = 2;
                    break;
                default:
                    var_r2 = 3;
                    break;
                }
                var_r1 = (s8) arg1->unk44A - 1;
                if (var_r1 > 0x1DU) {
                    var_r1 = var_r1 % 30U;
                }
                temp_r0_5 = (-0x7D & ((-4 & var_r7) | var_r2)) | ((var_r1 & 0x1F) * 4);
                var_r7 = temp_r0_5;
                arg1->unk448 = temp_r0_5;
                arg1->unk44 = 0;
                goto block_27;
            }
            arg1->unk44C = (s16) ((u16) arg1->unk44C - 1);
        }
        break;
    case 3:
        func_08009378(sp4 + 0xC, 0x889, 1, 1);
        temp_r0_6 = func_08008940(arg1);
        temp_r0_6->unk8->unk10(temp_r0_6, sp4);
        goto block_27;
    case 4:
        temp_r1_3 = sp4->unk0;
        if ((s32) ((0 - temp_r1_3) | temp_r1_3) >= 0) {
            var_r8 = 1;
        }
        break;
    }
    func_0806DD9C(arg1);
    func_0806E7E0(arg1);
    if (var_r8 == 0) {
        goto loop_1;
    }
    sp8 = 0;
    spC = &sp8;
    sp14->unk4 = 0;
    sp8 = 0;
    *arg0 = 0;
    if (sp8 != 0) {
        (*sp8)->unk8(sp8, 3);
    }
    if (sp4 != 0) {
        sp4->unk8->unkC(sp4, 3);
    }
    return arg0;
}
