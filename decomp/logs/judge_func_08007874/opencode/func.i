# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007874/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007874/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007874/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007874/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007874/opencode/func.c" 2
? *__builtin_new(s32);
s32 func_08007EC8(s32 *);
s32 func_080D770C(s32 *, s32, s32);
extern ? *gUnk_03000408;

s32 func_08007874(s32 arg0) {
    ? *sp0;
    s32 sp4;
    s32 sp8;
    ? *spC;
    s16 *sp10;
    ? **sp14;
    s16 *sp18;
    s16 *sp1C;
    ? *sp20;
    s32 sp24;
    ? *sp28;
    ? **sp2C;
    ? *temp_r1;
    ? *temp_r1_2;
    ? *temp_r4;
    ? *temp_r8;
    ? *var_r0;
    ? *var_r0_2;
    ? *var_r0_3;
    ? *var_r0_4;
    ? *var_r1_2;
    ? *var_r2;
    ? *var_r2_2;
    s32 var_r1;
    s32 var_r2_3;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r4;

    sp8 = arg0;
    temp_r4 = gUnk_03000408;
    if (temp_r4 != 0) {

    } else {
        var_r0 = __builtin_new(0x92C);
        temp_r8 = var_r0;
        sp0 = temp_r4;
        temp_r1 = temp_r8 + 0x20;
        sp2C = &sp0 + 4;
        if (temp_r8 != temp_r1) {
            do {
                *var_r0 = 0;
                var_r0 += 4;
            } while (var_r0 != temp_r1);
        }
        temp_r8->unk20 = func_080D770C(temp_r8 + 0x24, 0x100, 0);
        temp_r1_2 = temp_r8 + 0x824;
        temp_r8->unk824 = 0;
        temp_r1_2->unk1 = 1;
        var_r2 = temp_r8 + 0x828;
        var_r4 = 1;
        sp20 = temp_r8 + 0x20;
        spC = temp_r1_2;
        sp10 = (s16 *) (temp_r8 + 0x920);
        sp14 = &*(temp_r8 + 0x924);
        sp18 = (s16 *) (temp_r8 + 0x928);
        sp1C = temp_r8 + 0x92A;
        do {
            var_r2->unk0 = 0;
            var_r2->unk1 = 1;
            var_r0_2 = var_r2 + 4;
            var_r3 = 1;
            sp28 = var_r2 + 0x7C;
            sp24 = var_r4 - 1;
loop_7:
            var_r0_2->unk0 = 0;
            var_r0_2->unk1 = 1;
            var_r2_2 = var_r0_2 + 4;
            var_r1 = 1;
loop_8:
            var_r2_2->unk0 = 0;
            var_r2_2->unk1 = 1;
            var_r0_3 = var_r2_2 + 4;
            var_r3_2 = 1;
loop_9:
            var_r0_3->unk0 = 0;
            var_r0_3->unk1 = 1;
            var_r1_2 = var_r0_3 + 4;
            var_r2_3 = 1;
            var_r0_3 += 0xC;
            var_r3_2 -= 1;
loop_10:
            *var_r1_2 = 0;
            var_r1_2 += 4;
            var_r2_3 -= 1;
            if (var_r2_3 != -1) {
                goto loop_10;
            }
            if (var_r3_2 != -1) {
                goto loop_9;
            }
            var_r2_2 += 0x1C;
            var_r1 -= 1;
            if (var_r1 != -1) {
                goto loop_8;
            }
            var_r0_2 += 0x3C;
            var_r3 -= 1;
            if (var_r3 != -1) {
                goto loop_7;
            }
            var_r2 = sp28;
            var_r4 = sp24;
        } while (var_r4 != -1);
        *sp10 = 0;
        *sp14 = 0;
        *sp18 = 0;
        *sp1C = 0;
        sp4 = 0;
        var_r0_4 = temp_r8;
        if (temp_r8 != sp20) {
            do {
                *var_r0_4 = *sp2C;
                var_r0_4 += 4;
            } while (var_r0_4 != sp20);
        }
        func_08007EC8(spC);
        gUnk_03000408 = temp_r8;
    }
    gUnk_03000408->unk924 = (s32) (gUnk_03000408->unk924 + 1);
    return sp8;
}
