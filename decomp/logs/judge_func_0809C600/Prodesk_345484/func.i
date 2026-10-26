# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809C600/Prodesk_345484/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809C600/Prodesk_345484/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809C600/Prodesk_345484/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809C600/Prodesk_345484/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809C600/Prodesk_345484/func.c" 2
s32 func_080E3DB4(s32, void *, u16 *);

void func_0809C600(u32 *arg0, u16 arg1) {
    u16 sp0;
    u16 *temp_r1;
    u32 temp_r0;
    void *temp_r4;

    sp0 = arg1;
    temp_r4 = arg0 + ((*arg0 * 2) + 4);
    if (func_080E3DB4(arg0 + 4, temp_r4, &sp0) == temp_r4) {
        temp_r0 = *arg0;
        if (temp_r0 <= 2U) {
            temp_r1 = arg0 + ((temp_r0 * 2) + 4);
            if (temp_r1 != 0) {
                *temp_r1 = sp0;
            }
            *arg0 = temp_r0 + 1;
        }
    }
}
