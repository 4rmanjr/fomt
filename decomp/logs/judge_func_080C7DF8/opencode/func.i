# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C7DF8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C7DF8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C7DF8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C7DF8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C7DF8/opencode/func.c" 2
s32 func_080088C4();

void func_080C7DF8(void *arg0) {
    s32 *var_r1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r0;

    temp_r2 = func_080088C4();
    temp_r1 = arg0->unk8BC;
    if (temp_r1 <= 7) {
        if ((0x20 & temp_r2) && (temp_r1 != 6) && (temp_r1 != 7) && (temp_r1 != 4)) {
            arg0->unk8BC = 4;
            goto block_22;
        }
        if (0x10 & temp_r2) {
            var_r1 = arg0 + 0x8BC;
            temp_r0 = arg0->unk8BC;
            if ((temp_r0 != 6) && (temp_r0 != 7) && (temp_r0 != 5)) {
                var_r0 = 5;
                goto block_21;
            }
        }
        if (0x40 & temp_r2) {
            var_r1 = arg0 + 0x8BC;
            temp_r0_2 = arg0->unk8BC;
            if ((temp_r0_2 != 4) && (temp_r0_2 != 5) && (temp_r0_2 != 6)) {
                var_r0 = 6;
                goto block_21;
            }
        }
        if (0x80 & temp_r2) {
            var_r1 = arg0 + 0x8BC;
            temp_r0_3 = arg0->unk8BC;
            if ((temp_r0_3 != 4) && (temp_r0_3 != 5) && (temp_r0_3 != 7)) {
                var_r0 = 7;
block_21:
                *var_r1 = var_r0;
block_22:
                arg0->unk8C4 = 1;
            }
        }
    }
}
