# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080455D8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080455D8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080455D8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080455D8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080455D8/opencode/func.c" 2
u32 GetPlayerEventCount__C12Bachelorette();
u32 GetRivalEventCount__C12Bachelorette();
s32 func_0809C694(s32, u16);
s32 func_080A0878(s32, s32);

s32 func_080455D8(void *arg0, u16 arg1, s32 arg2, u32 arg3, u8 arg4) {
    u32 var_r0;
    u8 temp_r5;

    temp_r5 = arg4;
    if ((func_0809C694(arg0->unk350 + 0x214C, arg1) << 0x18) != 0) {
        return 1;
    }
    if (func_080A0878(arg0->unk350 + 0x1CD4, arg2) != 0) {
        if (temp_r5 == 0) {
            var_r0 = GetPlayerEventCount__C12Bachelorette();
        } else {
            var_r0 = GetRivalEventCount__C12Bachelorette();
        }
        if (var_r0 < arg3) {
            goto block_7;
        }
        return 2;
    }
block_7:
    return 0;
}
