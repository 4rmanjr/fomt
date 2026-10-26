# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08009268/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08009268/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08009268/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08009268/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08009268/opencode/func.c" 2
s32 func_08009190();

s16 func_08009268(void *arg0) {
    s16 *var_r1;
    s16 temp_r0;
    s16 var_r0;
    s16 var_r3;
    s32 temp_ip;
    u32 var_r2;

    temp_ip = func_08009190();
    var_r3 = 0;
    var_r2 = 0x200;
    var_r1 = arg0 + 0x20;
    do {
        if (arg0->unk0 & var_r2) {
            if (!(temp_ip & var_r2)) {
                temp_r0 = *var_r1;
                if (temp_r0 != arg0->unkA) {
                    var_r0 = temp_r0 + 1;
                } else {
                    var_r3 |= var_r2;
                    var_r0 = temp_r0 - arg0->unkC;
                }
            } else {
                var_r3 |= var_r2;
                var_r0 = 0;
            }
            *var_r1 = var_r0;
        }
        var_r1 -= 2;
        var_r2 = var_r2 >> 1;
    } while (var_r2 != 0);
    arg0->unk8 = var_r3;
    return var_r3;
}
