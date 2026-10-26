# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080128D0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080128D0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080128D0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080128D0/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080128D0/opencode/func.c" 2
s32 func_08050E0C(s32, s32, s32, s32, s32, s32, s32, s32);

void func_080128D0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_r2;
    s32 var_r0;
    void *temp_r4;

    temp_r4 = arg0->unk4;
    temp_r2 = temp_r4->unkAC;
    if ((temp_r2 != 0) && (arg1 != 0) && (arg2 != 0)) {
        if (arg3 == 0) {
            func_08050E0C(temp_r2, arg1, arg2, 0, arg3, arg3, arg3, (temp_r4 + 0xAC)->unk4);
        } else {
            if (arg4 == 0) {
                var_r0 = temp_r4->unkB0;
                goto block_11;
            }
            if (arg5 == 0) {
                var_r0 = temp_r4->unkB0;
                goto block_12;
            }
            if (arg6 == 0) {
                var_r0 = temp_r4->unkB0;
block_11:
block_12:
                func_08050E0C(temp_r2, arg1, arg2, var_r0);
            } else {
                func_08050E0C(temp_r2, arg1, arg2, arg4, arg5, arg6, temp_r4->unkB0);
            }
        }
        temp_r4->unk9C = 0x14;
    }
}
