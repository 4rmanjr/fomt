# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E3054/looptest2/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E3054/looptest2/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E3054/looptest2/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E3054/looptest2/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E3054/looptest2/func.c" 2
void *func_080E2354(void *);
void *func_080E2B28(void *);
s32 func_080E2EA4(void **, void *, void *, void *);
s32 func_080E2F74(void **, void *, void *);

void **func_080E3054(void **arg0, void *arg1, void **arg2, void *arg3) {
    void *sp0;
    void *sp4;
    void *sp8;
    void *spC;
    void *sp10;
    s32 var_r1;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_sb;
    u8 temp_r0;
    u8 temp_r0_3;
    u8 temp_r0_5;
    u8 temp_r0_7;
    u8 temp_r1_2;
    u8 temp_r1_3;
    u8 temp_r1_4;
    u8 temp_r1_5;
    u8 temp_r1_6;
    u8 temp_r1_7;
    u8 temp_r2_2;
    u8 temp_r2_3;
    u8 temp_r2_4;
    u8 temp_r3;
    u8 var_r1_2;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r0_6;
    void *temp_r0_8;
    void *temp_r1;
    void *temp_r2;
    void *var_r0;
    void *var_r2;
    void *var_r3;
    void *var_r3_4;
    void *var_r5;

    temp_r1 = arg1->unk4;
    temp_r2 = *arg2;
    if (temp_r2 == temp_r1->unk8) {
        if (arg1->unk8 == 0) {
            func_080E2F74(&sp8, arg1, arg3);
            var_r0 = sp8;
            goto block_67;
        }
        var_sb = 0;
        temp_r0 = arg3->unk0;
        temp_r1_2 = temp_r2->unk10;
        var_r5 = temp_r2;
        if (((u32) temp_r0 < (u32) temp_r1_2) || (((u32) temp_r1_2 >= (u32) temp_r0) && ((u32) arg3->unk1 < (u32) (temp_r2 + 0x10)->unk1))) {
            var_sb = 1;
        }
        if (var_sb != 0) {
            sp0 = arg3;
            sp4 = 0;
            var_r2 = var_r5;
            goto block_62;
        }
        var_r1 = 0;
        temp_r2_2 = var_r5->unk10;
        if (((u32) temp_r2_2 < (u32) temp_r0) || (((u32) temp_r0 >= (u32) temp_r2_2) && ((u32) (var_r5 + 0x10)->unk1 < (u32) arg3->unk1))) {
            var_r1 = 1;
        }
        if (var_r1 == 0) {
            *arg0 = var_r5;
        } else {
            sp8 = var_r5;
            temp_r0_2 = func_080E2B28(var_r5);
            sp8 = temp_r0_2;
            if (temp_r0_2 == arg1->unk4) {
                var_r3 = *arg2;
                sp0 = arg3;
                sp4 = var_r3;
                goto block_33;
            }
            var_r8 = 0;
            temp_r1_3 = arg3->unk0;
            temp_r0_3 = temp_r0_2->unk10;
            var_r5 = temp_r0_2;
            if (((u32) temp_r1_3 < (u32) temp_r0_3) || (((u32) temp_r0_3 >= (u32) temp_r1_3) && ((u32) arg3->unk1 < (u32) (temp_r0_2 + 0x10)->unk1))) {
                var_r8 = 1;
            }
            if (var_r8 == 0) {
                goto block_66;
            }
            var_r3 = *arg2;
            if (var_r3->unkC == 0) {
                sp0 = arg3;
                sp4 = var_r3;
                goto block_33;
            }
            sp0 = arg3;
            sp4 = 0;
            var_r2 = var_r5;
            goto block_62;
        }
    } else if (temp_r2 == temp_r1) {
        temp_r0_4 = temp_r2->unkC;
        var_r3_2 = 0;
        temp_r0_5 = temp_r0_4->unk10;
        temp_r1_4 = arg3->unk0;
        if (((u32) temp_r0_5 < (u32) temp_r1_4) || (((u32) temp_r1_4 >= (u32) temp_r0_5) && ((u32) (temp_r0_4 + 0x10)->unk1 < (u32) arg3->unk1))) {
            var_r3_2 = 1;
        }
        if (var_r3_2 != 0) {
            var_r3 = arg1->unk4->unkC;
            sp0 = arg3;
            sp4 = *arg2;
block_33:
            func_080E2EA4(arg0, arg1, 0, var_r3);
        } else {
            func_080E2F74(&sp8, arg1, arg3);
            var_r0 = sp8;
            goto block_67;
        }
    } else {
        sp8 = temp_r2;
        sp8 = func_080E2354(temp_r2);
        temp_r0_6 = *arg2;
        var_r3_3 = 0;
        temp_r1_5 = arg3->unk0;
        temp_r0_7 = temp_r0_6->unk10;
        if (((u32) temp_r1_5 < (u32) temp_r0_7) || (((u32) temp_r0_7 >= (u32) temp_r1_5) && ((u32) arg3->unk1 < (u32) (temp_r0_6 + 0x10)->unk1))) {
            var_r3_3 = 1;
        }
        if (var_r3_3 != 0) {
            var_r8_2 = 0;
            temp_r2_3 = sp8->unk10;
            temp_r1_6 = arg3->unk0;
            var_r5 = sp8;
            if (((u32) temp_r2_3 < (u32) temp_r1_6) || (((u32) temp_r1_6 >= (u32) temp_r2_3) && ((u32) (sp8 + 0x10)->unk1 < (u32) arg3->unk1))) {
                var_r8_2 = 1;
            }
            if (var_r8_2 != 0) {
                if (var_r5->unkC != 0) {
                    var_r3_4 = *arg2;
                    goto block_63;
                }
                goto block_61;
            }
            goto block_47;
        }
block_47:
        spC = *arg2;
        spC = func_080E2B28();
        var_r1_2 = var_r3_3 ^ 1;
        if (var_r3_3 == 0) {
            temp_r0_8 = *arg2;
            sp0.unk18 = 0U;
            temp_r1_7 = arg3->unk0;
            temp_r3 = temp_r0_8->unk10;
            var_r5 = temp_r0_8;
            if (((u32) temp_r3 < (u32) temp_r1_7) || (((u32) temp_r1_7 >= (u32) temp_r3) && ((u32) (temp_r0_8 + 0x10)->unk1 < (u32) arg3->unk1))) {
                sp0.unk18 = 1U;
            }
            var_r1_2 = sp0.unk18;
            if ((var_r3_3 == 0) && (var_r1_2 != 0)) {
                var_r3_4 = spC;
                if (var_r3_4 != arg1->unk4) {
                    sp0.unk1C = 0U;
                    temp_r2_4 = var_r3_4->unk10;
                    if (((u32) temp_r1_7 < (u32) temp_r2_4) || (((u32) temp_r2_4 >= (u32) temp_r1_7) && ((u32) arg3->unk1 < (u32) (var_r3_4 + 0x10)->unk1))) {
                        sp0.unk1C = 1U;
                    }
                    if (sp0.unk1C != 0) {
                        goto block_60;
                    }
                    goto block_64;
                }
block_60:
                if (var_r5->unkC == 0) {
block_61:
                    sp0 = arg3;
                    sp4 = var_r5;
                    var_r2 = 0;
block_62:
                    func_080E2EA4(arg0, arg1, var_r2, var_r5);
                } else {
block_63:
                    sp0 = arg3;
                    sp4 = 0;
                    func_080E2EA4(arg0, arg1, var_r3_4);
                }
            } else {
                goto block_64;
            }
        } else {
block_64:
            if (var_r3_3 == var_r1_2) {
                var_r0 = *arg2;
            } else {
block_66:
                func_080E2F74(&sp10, arg1, arg3);
                var_r0 = sp10;
            }
block_67:
            *arg0 = var_r0;
        }
    }
    return arg0;
}
