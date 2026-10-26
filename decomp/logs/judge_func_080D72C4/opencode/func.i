# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D72C4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D72C4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D72C4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D72C4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D72C4/opencode/func.c" 2
s32 func_080D6F3C(void *);
s32 func_080D7240(void *, u32, u32);

void func_080D72C4(void *arg0, u32 arg1, u32 arg2) {
    u32 sp0;
    u32 sp4;
    u32 *var_r2;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 var_r1;
    u32 var_r1_2;
    void *temp_r6;

    sp0 = arg2;
    if ((arg1 <= 0xFFU) && (arg2 != 0)) {
        if ((arg1 == 0) && (arg2 > 0xFFU)) {
            func_080D6F3C(arg0);
            return;
        }
        temp_r6 = arg0 + 4;
        if (arg1 <= 0x7FU) {
            temp_r0 = 0x80 - arg1;
            sp4 = temp_r0;
            var_r2 = &sp0;
            if (sp0 > temp_r0) {
                var_r2 = &sp4;
            }
            func_080D7240(temp_r6, arg1, *var_r2);
        }
        temp_r0_2 = arg1 + sp0;
        if (temp_r0_2 > 0x80U) {
            var_r1 = 0;
            if (arg1 > 0x7FU) {
                var_r1 = arg1 - 0x80;
            }
            func_080D7240(arg0 + 0x20, var_r1, (temp_r0_2 - 0x80) - var_r1);
        }
        arg0->unk0 = 0;
        var_r1_2 = 0;
        if (temp_r6->unk1 != 0) {
            var_r1_2 = (u32) (0 - (arg0 + 0x20)->unk1) >> 0x1F;
        }
        arg0->unk1 = (s8) var_r1_2;
    }
}
