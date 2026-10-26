# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B3948/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B3948/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B3948/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B3948/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B3948/opencode/func.c" 2
void func_080B3948(s32 arg0) {
    s32 *var_r2;
    s32 temp_r0;
    s32 var_r4;
    u8 temp_r0_2;
    void *var_r1;

    var_r2 = arg0 + 0x85C;
    var_r1 = arg0 + 0x906;
    var_r4 = 4;
    do {
        temp_r0 = *var_r2;
        if ((temp_r0 <= 2) && (temp_r0 >= 1)) {
            temp_r0_2 = var_r1->unk0 + 1;
            var_r1->unk0 = temp_r0_2;
            if (temp_r0_2 == 0x3C) {
                var_r1->unk0 = 0U;
                *var_r2 = 0;
                var_r1->unk19 = 1;
            }
        }
        var_r2 += 4;
        var_r1 += 1;
        var_r4 -= 1;
    } while (var_r4 >= 0);
}
