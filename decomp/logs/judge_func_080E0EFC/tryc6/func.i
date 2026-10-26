# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E0EFC/tryc6/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E0EFC/tryc6/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E0EFC/tryc6/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E0EFC/tryc6/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E0EFC/tryc6/func.c" 2
void func_080E0EFC(u32 arg0, s32 arg1) {
    register u32 var_r5 asm("r5");
    register s8 *var_r4 asm("r4");
    u32 var_r1;
    u32 temp_r0;

    var_r5 = arg0;
    var_r4 = arg1 + 1;
    var_r1 = 0xA;
    if (9U < var_r5) {

        var_r4 += 1;
loop_2:
        var_r1 *= 0xA;
        if (var_r5 >= var_r1) {
            var_r4 += 1;
            if (var_r1 <= 0x19999999U) {
                goto loop_2;
            }
        }
    }
after:
    *var_r4 = 0;
    do {
        var_r4 -= 1;
        temp_r0 = var_r5 / 10U;
        *var_r4 = (var_r5 - (temp_r0 * 10)) + 0x30;
        var_r5 = temp_r0;
    } while (var_r5 != 0);
}
