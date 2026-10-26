# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3E90/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3E90/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3E90/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3E90/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3E90/kilo-1531/func.c" 2
s32 func_080A45A8(s32);
s32 rand();
extern ? gUnk_08104E74;

void *func_080A3E90(void *arg0, s32 arg1, u16 *arg2) {
    s32 sp0;
    s32 sp4;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r1;
    s32 var_r4;
    u32 temp_r2;

    temp_r0 = func_080A45A8(arg1);
    sp4 = temp_r0;
    if (temp_r0 == 7) {
        sp0 = 0;
    } else {
        var_r1 = 3;
        temp_r2 = *arg2 << 0x1B;
        if ((u32) ((u32) ((temp_r2 >> 3) + 0xFA000000) >> 0x18) <= 2U) {
            var_r1 = 0;
        } else if ((u32) ((u32) ((temp_r2 >> 3) + 0xF7000000) >> 0x18) <= 7U) {
            var_r1 = 1;
        } else if ((u32) ((u32) ((temp_r2 >> 3) + 0xEF000000) >> 0x18) <= 2U) {
            var_r1 = 2;
        }
        sp0 = (sp0 & 0xFFFF0000) | (u16) (*((var_r1 * 2) + (sp4 * 8) + &gUnk_08104E74) * 0x3C);
        var_r4 = 0;
        temp_r0_2 = rand() >> 8;
        if ((sp4 <= 6) && (sp4 >= 0)) {
            var_r4 = (temp_r0_2 % 6) + 5;
        }
        sp0 = (u16) sp0 | (var_r4 * 0x60000);
    }
    arg0->unk0 = sp0;
    arg0->unk4 = sp4;
    return arg0;
}
