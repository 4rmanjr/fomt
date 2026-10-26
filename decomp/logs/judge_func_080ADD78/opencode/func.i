# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080ADD78/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080ADD78/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080ADD78/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080ADD78/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080ADD78/opencode/func.c" 2
s32 func_080ADF40(void *);
s32 strcpy(u8 *, ? *);

u8 *func_080ADD78(void *arg0, void **arg1, void **arg2) {
    u8 sp0;
s32 sp4;
    s32 sp24;
    ? (*var_r1_2)(void **);
    s32 temp_r1;
    s32 var_r4;
    s32 var_r6;
    s32 var_sb;
    u8 *temp_r4;
    u8 *var_r5;
    u8 temp_r2;
    u8 var_r1;
    void **temp_r2_2;

    sp24 = 0;
    var_r6 = func_080ADF40(arg0);
    if (arg0->unk0 == (u8 *)2) {
        if (((*arg2)->unk14(arg2) << 0x18) == 0) {
            var_r6 = 0;
        } else {
            arg0->unk0 = (u8 *)1;
        }
    } else {
        var_r4 = 0;
        var_r1 = (*arg2)->unkC(arg2);
        if (arg0->unk4 == 0) {
            var_r1 |= 1;
        }
        if (var_r1 != 0) {
            var_r4 = 1;
        }
        sp24 = var_r4;
    }
    var_r5 = arg0->unk10;
    if (var_r5 == 0) {
        var_r5 = arg0->unk8;
    }
    var_sb = 0;
loop_35:
    if ((var_r5 != 0) && ((sp24 != 0) || (var_r6 != 0)) && (((*arg1)->unk1C(arg1) << 0x18) == 0)) {
        temp_r2 = *var_r5;
        var_r5 += 1;
        switch (temp_r2) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 6:
        case 7:
        case 8:
        case 9:
        case 11:
            if ((u32) temp_r2 > 0x1FU) {
            default:
                temp_r1 = var_sb | temp_r2;
                if (((*arg1)->unkC(arg1, temp_r1) << 0x18) != 0) {
                    var_sb = 0;
block_31:
                    if (var_r6 != 0) {
                        var_r6 -= 1;
                    }
                } else {
                    temp_r2_2 = arg0->unkC;
                    if ((temp_r2_2 != 0) && (arg0->unk10 == 0)) {
                        (*temp_r2_2)->unkC(&sp0, temp_r2_2, temp_r1);
                        if (sp0 != 0) {
                            var_sb = 0;
                            temp_r4 = arg0 + 0x14;
                            strcpy(temp_r4, &sp4);
                            arg0->unk8 = var_r5;
                            arg0->unk10 = temp_r4;
                            var_r5 = temp_r4;
                        } else {
                            var_sb = temp_r1 << 8;
                        }
                    } else {
                        var_sb = temp_r1 << 8;
                    }
                }
            }
            goto loop_35;
        case 0:
            if (arg0->unk10 != 0) {
                arg0->unk10 = 0;
                var_r5 = arg0->unk8;
                goto loop_35;
            }
            var_r5 = 0;
            break;
        case 13:
            var_r1_2 = (*arg1)->unk10;
block_30:
            var_r1_2(arg1);
            goto block_31;
        case 10:
            var_r1_2 = (*arg1)->unk14;
            goto block_30;
        case 12:
            var_r1_2 = (*arg1)->unk18;
            goto block_30;
        case 5:
            if (((*arg2)->unk10(arg2) << 0x18) != 0) {
                arg0->unk0 = (u8 *)2;
            } else {
                goto loop_35;
            }
            break;
        }
    }
    if (arg0->unk10 != 0) {
        arg0->unk10 = var_r5;
    } else {
        arg0->unk8 = var_r5;
        if (var_r5 == 0) {
            arg0->unk0 = var_r5;
        }
    }
    return arg0->unk0;
}
