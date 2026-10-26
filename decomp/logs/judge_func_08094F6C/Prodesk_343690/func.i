# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094F6C/Prodesk_343690/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094F6C/Prodesk_343690/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094F6C/Prodesk_343690/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094F6C/Prodesk_343690/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094F6C/Prodesk_343690/func.c" 2
s32 func_08008724(void *);
s16 func_080951B4(void *);
s16 func_080958C0(void *);
s16 func_08095D80(void *);
s16 func_080962F0(void *);
s16 func_080972AC(void *);
s16 func_08097AE4(void *, u32);

s32 *func_08094F6C(s32 *arg0, void *arg1) {
    void **sp0;
    void ***sp4;
    s16 *var_r1;
    s16 temp_r0;
    s16 temp_r1;
    s16 temp_r1_2;
    s16 temp_r2;
    s16 temp_r2_2;
    s16 temp_r2_3;
    s16 temp_r2_4;
    s32 temp_r0_2;
    s32 var_r7;
    u32 temp_r3;

    func_08008724(arg1);
    var_r7 = 0;
loop_1:
    temp_r0 = arg1->unk33D0;
    switch ((u32) temp_r0) {
    case 0:
        if (arg1->unk35E == 0) {
block_35:
            arg1->unk33D0 = 3;
        } else {
            arg1->unk366 = 0;
            temp_r3 = (u8) arg1->unk368 >> 3;
            arg1->unk367 = (s8) temp_r3;
            if (!(arg1->unk368 & 7)) {
                arg1->unk367 = (s8) (temp_r3 - 1);
            }
            arg1->unk364 = 0;
            arg1->unk365 = 7;
            var_r1 = arg1 + 0x33D0;
block_29:
            *var_r1 = 1;
        }
        break;
    case 1:
        temp_r1 = func_080951B4(arg1);
        if (temp_r1 == -1) {
            var_r7 = 1;
        }
        if (temp_r1 != 1) {

        } else {
            arg1->unk33D0 = 2;
        }
        break;
    case 2:
        temp_r2 = func_080958C0(arg1);
        if (temp_r2 == -1) {
            var_r7 = 1;
        }
        if (temp_r2 == 1) {
            arg1->unk33D0 = 3;
        }
        if (temp_r2 != 2) {

        } else {
block_28:
            var_r1 = arg1 + 0x33D0;
            goto block_29;
        }
        break;
    case 3:
        temp_r2_2 = func_08095D80(arg1);
        if (temp_r2_2 == -1) {
            var_r7 = 1;
        }
        if (temp_r2_2 == 1) {
            arg1->unk33D0 = 4;
        }
        if (temp_r2_2 == 2) {
            if (arg1->unk35E == 0) {
                var_r7 = 1;
            } else {
                goto block_28;
            }
        }
        break;
    case 4:
        temp_r2_3 = func_080962F0(arg1);
        if (temp_r2_3 == -1) {
            var_r7 = 1;
        }
        if (temp_r2_3 == 1) {
            arg1->unk33D0 = 5;
        }
        if (temp_r2_3 == 2) {
            goto block_35;
        }
        break;
    case 5:
        temp_r2_4 = func_080972AC(arg1);
        if (temp_r2_4 == -1) {
            var_r7 = 1;
        }
        if (temp_r2_4 == 1) {
            arg1->unk33D0 = 4;
        }
        if (temp_r2_4 == 2) {
            arg1->unk33D0 = 3;
        }
        if (temp_r2_4 == 3) {
            var_r7 = 1;
        }
        if (temp_r2_4 == 4) {
            arg1->unk33D0 = 6;
        }
        break;
    case 6:
    case 7:
        temp_r0_2 = arg1->unk33D0 ^ 6;
        temp_r1_2 = func_08097AE4(arg1, (u32) ((0 - temp_r0_2) | temp_r0_2) >> 0x1F);
        if (temp_r1_2 == -1) {
            var_r7 = 1;
        }
        if (temp_r1_2 == 1) {
            if (arg1->unk33D0 == 6) {
                arg1->unk33D0 = 7;
            } else {
                arg1->unk33D0 = 6;
            }
        }
        break;
    }
    if (var_r7 != 1) {
        goto loop_1;
    }
    sp0 = 0;
    sp4 = &sp0;
    sp4.unk4 = 0;
    sp0 = 0;
    *arg0 = 0;
    if (0 != 0) {
        (*0)->unk8(0, 3);
    }
    return arg0;
}
