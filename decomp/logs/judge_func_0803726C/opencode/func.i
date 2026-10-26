# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803726C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803726C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803726C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803726C/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803726C/opencode/func.c" 2
s32 func_08037118(void *, s32 *);
s32 func_080AB85C(s32 *);
s32 func_080AB8D0(s32 *);
s32 func_080AB948(s32 *);
s32 func_080AB9C4(s32 *);
s32 func_080ABA90(s32 *, ? *, s32);

void func_0803726C(void *arg0) {
s32 sp0;
    s32 spC;
s32 sp20;
    s32 sp2C;
    s32 sp30;
    s32 sp40;
s32 sp48;
s32 sp50;
    s32 sp58;
    s32 sp5C;
    ? *temp_r2;
    s32 temp_r5;
    s32 temp_r6;
    u16 temp_r0_5;
    u16 temp_r4_2;
    u16 temp_r8;
    u16 var_r0;
    u16 var_r4;
    void **temp_r0;
    void **temp_r0_3;
    void **temp_r4;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r2_2;

    temp_r4 = arg0->unk0;
    temp_r8 = arg0->unk4;
    if ((*temp_r4)->unk14(temp_r4) != temp_r8) {

    } else {
        (*temp_r4)->unk34(&sp0, temp_r4, temp_r8);
        arg0->unk14->unkC(&sp40, arg0);
        sp58 = sp40;
        sp5C = sp44;
        spC = 0x21;
        spC.unk4 = -0x21;
        spC.unk8 = -0x21;
        spC.unkC = 0x21;
        sp20.unk0 = (s32) sp0.unk0;
        sp20.unk4 = (s32) sp0.unk4;
        sp20.unk8 = (s32) sp0.unk8;
        sp2C = sp58;
        sp30 = sp5C;
        spC.unk28 = 0x20;
        spC.unk2C = 0;
        spC.unk30 = 0;
        temp_r0 = arg0->unk0;
        temp_r0_2 = (*temp_r0)->unk40(temp_r0, 0);
        if ((temp_r0_2 != 0) && (temp_r0_2->unk4 == temp_r8)) {
            temp_r0_2->unk14->unkC(&sp48, temp_r0_2);
            func_080ABA90(&spC, &sp48, 0);
        }
        temp_r0_3 = arg0->unk0;
        temp_r0_4 = (*temp_r0_3)->unk40(temp_r0_3, 0x4A);
        if ((temp_r0_4 != 0) && (temp_r0_4->unk4 == temp_r8)) {
            temp_r0_4->unk14->unkC(&sp50, temp_r0_4);
            func_080ABA90(&spC, &sp50, 0);
        }
        temp_r2 = arg0 + 0x34;
        if (((s32) (temp_r2->unk4 - arg0->unk34) > 0) && ((s32) (temp_r2->unk6 - temp_r2->unk2) > 0)) {
            func_080ABA90(&spC, temp_r2, 0);
        }
        temp_r4_2 = arg0->unk3E;
        if (temp_r4_2 != 0) {
            temp_r5 = arg0->unk18;
            temp_r6 = arg0->unk1C;
            if (temp_r5 < 0) {
                if ((s64) (sp14 + sp34) < 0) {
                    func_080AB948(&spC);
                }
                if (sp14 < 0) {
                    goto block_17;
                }
                goto block_32;
            }
block_17:
            if (temp_r5 > 0) {
                if (sp18 > sp34) {
                    func_080AB9C4(&spC);
                }
                if (sp18 > 0) {
                    goto block_22;
                }
                goto block_32;
            }
block_22:
            if (temp_r6 < 0) {
                if ((s64) (sp10 + sp34) < 0) {
                    func_080AB8D0(&spC);
                }
                if (sp10 < 0) {
                    goto block_27;
                }
                goto block_32;
            }
block_27:
            if (temp_r6 > 0) {
                if (spC > sp34) {
                    func_080AB85C(&spC);
                }
                if (spC <= 0) {
block_32:
                    var_r4 = 0;
                } else {
                    goto block_33;
                }
            } else {
block_33:
                var_r4 = temp_r4_2 - 1;
            }
        } else {
            var_r4 = arg0->unk14->unk40(arg0);
        }
        arg0->unk3E = var_r4;
        func_08037118(arg0, &spC);
    }
    temp_r0_5 = arg0->unk24;
    if (temp_r0_5 != 0) {
        var_r0 = temp_r0_5 - 1;
    } else {
        var_r0 = arg0->unk26;
    }
    arg0->unk24 = var_r0;
    temp_r2_2 = arg0->unk10;
    if (temp_r2_2 != 0) {
        temp_r2_2->unk4->unkC(temp_r2_2);
    }
}
