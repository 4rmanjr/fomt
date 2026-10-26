# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D71AC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D71AC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D71AC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D71AC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D71AC/opencode/func.c" 2
s32 func_080D6F0C();

void func_080D71AC(void *arg0, u32 arg1, u32 arg2) {
    u32 sp0;
    u32 sp4;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r2;
    s8 var_r2_2;
    u32 *var_r5;
    u32 temp_r0;
    u32 temp_r0_2;

    sp0 = arg2;
    if ((arg1 <= 0x3FU) && (arg2 != 0)) {
        if ((arg1 == 0) && (arg2 > 0x3FU)) {
            func_080D6F0C();
            return;
        }
        if (arg1 <= 0x1FU) {
            temp_r0 = 0x20 - arg1;
            sp4 = temp_r0;
            var_r5 = &sp0;
            if (arg2 > temp_r0) {
                var_r5 = &sp4;
            }
            arg0->unk4 = (s32) (arg0->unk4 & ~(((1 << *var_r5) - 1) << arg1));
        }
        temp_r0_2 = arg1 + arg2;
        if (temp_r0_2 > 0x20U) {
            var_r2 = 0;
            if (arg1 > 0x1FU) {
                var_r2 = arg1 - 0x20;
            }
            arg0->unk8 = (s32) (arg0->unk8 & ~(((1 << ((temp_r0_2 - 0x20) - var_r2)) - 1) << var_r2));
        }
        arg0->unk0 = 0;
        var_r2_2 = 0;
        var_r1 = 0;
        if (arg0->unk4 == 0) {
            var_r1 = 1;
        }
        if (var_r1 != 0) {
            var_r1_2 = 0;
            if (arg0->unk8 == 0) {
                var_r1_2 = 1;
            }
            if (var_r1_2 != 0) {
                var_r2_2 = 1;
            }
        }
        arg0->unk1 = var_r2_2;
    }
}
