# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080ABA90/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080ABA90/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080ABA90/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080ABA90/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080ABA90/opencode/func.c" 2
s32 func_080AB85C(void *);
s32 func_080AB8D0(void *);
s32 func_080AB948(void *);
s32 func_080AB9C4(void *);

void func_080ABA90(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;

    if (((s32) arg0->unk20 < (s32) arg1->unk4) && ((s32) arg1->unk0 < (s32) arg0->unk24)) {
        temp_r5 = arg0->unk26 - arg1->unk2;
        if (temp_r5 <= 0) {
            if ((s32) arg0->unk0 > (s32) arg0->unk28) {
                func_080AB85C(arg0);
            }
            if ((s32) (temp_r5 + arg0->unk0) > 0) {
                arg0->unk0 = (s32) (0 - temp_r5);
                if (arg2 == 1) {
                    arg0->unk10 = 0;
                }
            }
        }
        temp_r5_2 = arg0->unk22 - arg1->unk6;
        if (temp_r5_2 >= 0) {
            if ((s64) (arg0->unk4 + arg0->unk28) < 0) {
                func_080AB8D0(arg0);
            }
            if ((s32) (temp_r5_2 + arg0->unk4) < 0) {
                arg0->unk4 = (s32) (0 - temp_r5_2);
                if (arg2 == 1) {
                    arg0->unk11 = 0;
                }
            }
        }
    }
    if (((s32) arg0->unk22 < (s32) arg1->unk6) && ((s32) arg1->unk2 < (s32) arg0->unk26)) {
        temp_r5_3 = arg0->unk20 - arg1->unk4;
        if (temp_r5_3 >= 0) {
            if ((s64) (arg0->unk8 + arg0->unk28) < 0) {
                func_080AB948(arg0);
            }
            if ((s32) (temp_r5_3 + arg0->unk8) < 0) {
                arg0->unk8 = (s32) (0 - temp_r5_3);
                if (arg2 == 1) {
                    arg0->unk12 = 0;
                }
            }
        }
        temp_r5_4 = arg0->unk24 - arg1->unk0;
        if (temp_r5_4 <= 0) {
            if ((s32) arg0->unkC > (s32) arg0->unk28) {
                func_080AB9C4(arg0);
            }
            if ((s32) (temp_r5_4 + arg0->unkC) > 0) {
                arg0->unkC = (s32) (0 - temp_r5_4);
                if (arg2 == 1) {
                    arg0->unk13 = 0;
                }
            }
        }
    }
}
