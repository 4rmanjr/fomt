# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D240/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D240/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D240/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D240/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D240/opencode/func.c" 2
s32 memcpy(void *, ? *, s32);
s32 memset(s32 *, s32, s32);
extern ? gUnk_0875A440;

void func_0803D240(void **arg0, u32 arg1) {
s32 sp0;
    ? *var_r1_2;
    s32 var_r1;
    u32 temp_r0;
    u32 var_r4;
    void *temp_r6;
    void *var_r0;

    temp_r6 = *arg0;
    var_r1 = 0x1E;
    if (arg1 <= 0xBU) {
        var_r1 = 0x1C;
    }
    memcpy(temp_r6 + 0x104, (var_r1 << 5) + &gUnk_0875A440, 0x20);
    temp_r6->unk18C = 1;
    var_r4 = 0xC;
    if (arg1 != 0xC) {
        var_r4 = arg1;
        if (var_r4 > 0xBU) {
            var_r4 -= 0xC;
        }
    }
    temp_r0 = var_r4 / 10U;
    if ((s32) temp_r0 > 0) {
        var_r1_2 = (temp_r0 << 5) + &gUnk_0875A440;
        var_r0 = temp_r6 + 0x144;
    } else {
        memset(&sp0, 0, 0x20);
        var_r0 = temp_r6 + 0x144;
        var_r1_2 = &sp0;
    }
    memcpy(var_r0, var_r1_2, 0x20);
    temp_r6->unk18C = 1;
    memcpy(temp_r6 + 0x164, ((var_r4 % 10U) << 5) + &gUnk_0875A440, 0x20);
    temp_r6->unk18C = 1;
}
