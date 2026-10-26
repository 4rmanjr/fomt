# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809A970/Prodesk_344259/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809A970/Prodesk_344259/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809A970/Prodesk_344259/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809A970/Prodesk_344259/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809A970/Prodesk_344259/func.c" 2
void func_0809A970(s32 arg0, void *arg1, s32 arg2) {
    s32 var_r3;
    u16 *var_r1;
    u16 *var_r2;
    void *temp_r0;

    temp_r0 = arg0 + (arg2 * 0x14);
    arg1->unk0 = (u16) temp_r0->unk0;
    arg1->unk12 = (u16) ((0xFFFFF000 & arg1->unk12) | ((u32) (temp_r0->unk12 << 0x14) >> 0x14));
    arg1->unk13 = (u8) ((-0x11 & arg1->unk13) | (0x10 & temp_r0->unk13));
    var_r2 = temp_r0 + 2;
    var_r1 = arg1 + 2;
    var_r3 = 7;
    do {
        *var_r1 = *var_r2;
        var_r2 += 2;
        var_r1 += 2;
        var_r3 -= 1;
    } while (var_r3 >= 0);
}
