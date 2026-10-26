# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008EB8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008EB8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008EB8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008EB8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008EB8/opencode/func.c" 2
s32 func_080D0EBC(s32 *, s32, s32, s32);

void func_08008EB8(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 temp_r3;
    s32 var_r2;

    sp0 = arg0;
    if (arg1 != 0) {
        if ((arg2 != 0) && (temp_r3 = arg1 | arg2, ((1 & temp_r3) == 0))) {
            if (!(temp_r3 & 3)) {
                var_r2 = ((u32) (arg2 << 0xE) >> 0x10) | 0x84000000;
            } else {
                var_r2 = ((u32) (arg2 << 0xF) >> 0x10) | 0x80000000;
            }
        } else {
            var_r2 = 0;
        }
        func_080D0EBC(&sp0, arg1, var_r2 | 0x01000000, 0x040000D4);
    }
}
