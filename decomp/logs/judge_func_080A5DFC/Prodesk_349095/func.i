# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5DFC/Prodesk_349095/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5DFC/Prodesk_349095/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5DFC/Prodesk_349095/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5DFC/Prodesk_349095/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5DFC/Prodesk_349095/func.c" 2
s32 func_03000C2C(s32, s32, s32, s32);

void func_080A5DFC(void *arg0, s32 arg1, s32 arg2) {
    u32 sp0;
    s32 sp4;
    s32 temp_r5;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    s32 var_r8;
    u32 temp_r1;

    var_r5 = saved_reg_r8;
    sp0 = 0;
    var_r8 = arg0->unk20;
    var_r7 = arg0->unk1C;
    var_r6 = arg0->unk24;
    sp4 = (arg2 & 0x1F) << 5;
    do {
        temp_r5 = (var_r5 & 0xFFFFFF00) | (u8) ((var_r5 & ~0x1F) | (arg1 & 0x1F));
        var_r5 = (temp_r5 & 0xFFFF0000) | (u16) ((temp_r5 & 0xFFFFFC1F) | sp4);
        func_03000C2C(var_r6, var_r7, var_r8, var_r5);
        var_r8 += 0x20;
        var_r7 += 0x20;
        var_r6 += 0x20;
        temp_r1 = sp0 + 1;
        sp0 = temp_r1;
    } while (temp_r1 <= 0xEU);
    arg0->unk2A = 1;
}
