# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809DFAC/Prodesk_347047/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809DFAC/Prodesk_347047/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809DFAC/Prodesk_347047/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809DFAC/Prodesk_347047/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809DFAC/Prodesk_347047/func.c" 2
u8 func_0809DFAC(void *arg0) {
    u32 var_r1;
    u8 temp_r2;
    u8 temp_r2_2;

    temp_r2 = arg0->unk625;
    var_r1 = (u32) (temp_r2 << 0x1A) >> 0x1F;
    if ((s32) (temp_r2 << 0x19) < 0) {
        var_r1 += 1;
    }
    if ((temp_r2 >> 7) != 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    temp_r2_2 = arg0->unk626;
    if ((temp_r2_2 << 0x1F) != 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    if ((s32) (temp_r2_2 << 0x1E) < 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    if ((s32) (temp_r2_2 << 0x1D) < 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    if ((s32) (temp_r2_2 << 0x1C) < 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    if ((s32) (temp_r2_2 << 0x1B) < 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    if ((s32) (temp_r2_2 << 0x1A) < 0) {
        var_r1 = (u32) (u8) (var_r1 + 1);
    }
    return (u8) var_r1;
}
