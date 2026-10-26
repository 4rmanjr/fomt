# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080074C0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080074C0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080074C0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080074C0/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080074C0/opencode/func.c" 2
extern void *gUnk_03000404;

u32 func_080074C0(s32 arg1) {
    s32 temp_r1;
    s32 var_r2;
    u32 temp_r2;
    u32 var_r0;
    u32 var_r0_2;

    if (arg1 != 0) {
        temp_r2 = (u32) (arg1 << 0x1C) >> 0x1C;
        var_r0_2 = 0;
        if (temp_r2 <= 0xFU) {
            temp_r1 = gUnk_03000404->unk44 & (1 << temp_r2);
            var_r0_2 = (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
        }
        if (var_r0_2 != 0) {
            var_r2 = 0;
            if (((u32) (arg1 << 0xC) >> 0x10) == ((temp_r2 * 4) + gUnk_03000404)->unk6) {
                var_r2 = 1;
            }
            var_r0 = temp_r2;
            if (var_r2 == 0) {
                goto block_7;
            }
        } else {
            goto block_7;
        }
    } else {
block_7:
        var_r0 = -1U;
    }
    return var_r0;
}
