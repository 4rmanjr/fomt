# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000728/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000728/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000728/common.h" 1
# 1 "/home/armanjr/.local/share/decompnet/toolchains/agbcc/include/stdint.h" 1
# 31 "/home/armanjr/.local/share/decompnet/toolchains/agbcc/include/stdint.h"
# 1 "/home/armanjr/.local/share/decompnet/toolchains/agbcc/include/limits.h" 1
# 32 "/home/armanjr/.local/share/decompnet/toolchains/agbcc/include/stdint.h" 2



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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000728/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000728/func.c" 2
extern u16 gUnk_03000400;

void func_08000728(u16 arg1) {
    s32 var_r2;
    u16 temp_r3;

    temp_r3 = arg1;
    switch (temp_r3) {
    case 0x1:
        var_r2 = 1;
block_26:
        gUnk_03000400 |= var_r2;
        return;
    case 0x2:
        var_r2 = 2;
        goto block_26;
    case 0x100:
    case 0x200:
        gUnk_03000400 |= temp_r3;
        return;
    case 0x4:
        var_r2 = 4;
        goto block_26;
    case 0x20:
        var_r2 = 0x20;
        goto block_26;
    case 0x8:
        var_r2 = 8;
        goto block_26;
    case 0x10:
        var_r2 = 0x10;
        goto block_26;
    case 0x40:
        var_r2 = 0x40;
        goto block_26;
    case 0x80:
        var_r2 = 0x80;
        goto block_26;
    }
}
