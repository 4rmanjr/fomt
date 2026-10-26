# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080068CC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080068CC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080068CC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080068CC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080068CC/opencode/func.c" 2
void func_080068CC(void *arg0) {
    s32 var_r0;
    s32 var_r1;
    s8 *var_r2;
    u8 var_r1_2;
    u8 var_r2_2;

    arg0->unk4616 = (u16) ((0xFFFFFE00 & arg0->unk4616) | (((arg0->unk4610 * 8) + 0x90) & 0x1FF));
    arg0->unk4614 = 8;
    if ((s32) arg0->unk4605 <= 5) {
        arg0->unk460A = (u16) ((0xFFFFFE00 & arg0->unk460A) | ((arg0->unk4604 * 0x10) & 0x1FF));
        arg0->unk4608 = (s8) ((arg0->unk4605 * 0x10) + 0x20);
        arg0->unk460B = (u8) (0x3F & arg0->unk460B);
        var_r2 = arg0 + 0x4609;
        var_r1 = 0x3F & arg0->unk4609;
        var_r0 = 0x80;
    } else {
        var_r2_2 = 0;
        var_r1_2 = (u8) arg0->unk4604;
        if ((u32) var_r1_2 > 4U) {
            do {
                var_r1_2 -= 5;
                var_r2_2 += 1;
            } while ((u32) var_r1_2 > 4U);
        }
        arg0->unk460A = (u16) ((0xFFFFFE00 & arg0->unk460A) | (((var_r2_2 * 0x50) + 0x18) & 0x1FF));
        arg0->unk4608 = 0x88;
        arg0->unk460B = (u8) ((0x3F & arg0->unk460B) | 0x80);
        var_r2 = arg0 + 0x4609;
        var_r1 = 0x3F & arg0->unk4609;
        var_r0 = 0x40;
    }
    *var_r2 = var_r1 | var_r0;
}
