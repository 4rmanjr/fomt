# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D6A80/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D6A80/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D6A80/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D6A80/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D6A80/opencode/func.c" 2
s32 memcpy(void *, void *, s32);

void *func_080D6A80(void *arg0, void *arg1) {
    s32 *temp_r0;
    s32 *var_r2;
    s32 *var_r3;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r5;
    void *temp_r1_3;
    void *temp_r6;
    void *var_r4;
    void *var_r5;

    arg0->unk0 = 0;
    var_r2 = arg0 + 4;
    temp_r5 = arg1->unk0;
    temp_r0 = arg1 + 4;
    temp_r1 = (temp_r5 * 4) + temp_r0;
    var_r3 = temp_r0;
    if (var_r3 != temp_r1) {
        do {
            if (var_r2 != 0) {
                *var_r2 = *var_r3;
            }
            var_r3 += 4;
            var_r2 += 4;
        } while (var_r3 != temp_r1);
    }
    arg0->unk0 = temp_r5;
    arg0->unk24 = 0;
    temp_r1_2 = arg1->unk24;
    temp_r1_3 = arg1 + 0x28;
    temp_r6 = (temp_r1_2 * 2) + temp_r1_3;
    var_r4 = temp_r1_3;
    var_r5 = arg0 + 0x28;
    if (var_r4 != temp_r6) {
        do {
            if (var_r5 != 0) {
                memcpy(var_r5, var_r4, 2);
            }
            var_r4 += 2;
            var_r5 += 2;
        } while (var_r4 != temp_r6);
    }
    arg0->unk24 = temp_r1_2;
    return arg0;
}
