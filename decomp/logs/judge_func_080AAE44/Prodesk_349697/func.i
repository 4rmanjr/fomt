# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AAE44/Prodesk_349697/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AAE44/Prodesk_349697/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AAE44/Prodesk_349697/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AAE44/Prodesk_349697/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AAE44/Prodesk_349697/func.c" 2
s32 func_080E4304(void **, void *, s32 *);

void *func_080AAE44(void *arg0, void *arg1, s32 arg2) {
    void *sp0;
    void *sp4;
    void *sp8;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r3;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r3;
    void *var_r2;
    void *var_r4;

    sp20 = arg2;
    if (arg2 == 0xD) {
        arg0->unk0 = 0x3E6;
        arg0->unk2 = 0xB;
    } else {
        temp_r1 = arg1 + 8;
        var_r4 = temp_r1->unk4;
        var_r2 = var_r4->unk4;
        if (var_r2 != 0) {
            do {
                var_r3 = 0;
                if ((s32) var_r2->unk10 < arg2) {
                    var_r3 = 1;
                }
                if (var_r3 == 0) {
                    var_r4 = var_r2;
                    var_r2 = var_r4->unk8;
                } else {
                    var_r2 = var_r2->unkC;
                }
            } while (var_r2 != 0);
        }
        temp_r3 = temp_r1->unk4;
        if (var_r4 != temp_r3) {
            var_r2_2 = 0;
            if ((s32) sp20 < (s32) var_r4->unk10) {
                var_r2_2 = 1;
            }
            if (var_r2_2 != 0) {
                goto block_14;
            }
        } else {
block_14:
            var_r4 = temp_r3;
        }
        sp0 = var_r4;
        temp_r1_2 = temp_r1->unk4;
        sp4 = temp_r1_2;
        var_r2_3 = 0;
        if (sp0 == temp_r1_2) {
            var_r2_3 = 1;
        }
        if (var_r2_3 != 0) {
            sp24.unk0 = (s16) arg1->unk0;
            sp24.unk2 = (s8) arg1->unk4;
            sp18 = sp20;
            sp1C = sp24;
            sp10 = sp20;
            sp14 = sp24;
            func_080E4304(&sp8, temp_r1, &sp10);
            sp0 = sp8;
            arg1->unk0 = (s32) (arg1->unk0 + 4);
            arg1->unk4 = (s32) (arg1->unk4 + 1);
        }
        arg0->unk0 = (s32) sp0->unk14;
    }
    return arg0;
}
