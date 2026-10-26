# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809CE8C/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809CE8C/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809CE8C/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809CE8C/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809CE8C/kilo-1531/func.c" 2
void *func_0809CE8C(void *arg0) {
    u32 var_r0;
    u32 var_r3;
    void *var_r2;

    arg0->unk0 = 0;
    arg0->unk624 = 0;
    arg0->unk625 = 0;
    arg0->unk626 = (u8) (-2 & arg0->unk626 & ~2 & ~4 & ~8 & ~0x10 & ~0x20);
    var_r0 = 0;
    do {
        var_r3 = 0;
        var_r2 = (var_r0 * 0x38) + (arg0 + 4);
loop_2:
        var_r2->unk0 = (u8) (-0x10 & var_r2->unk0);
        var_r2->unk0 = (s16) (0xFFFFFC0F & (u16) var_r2->unk0);
        var_r2->unk1 = (u8) (3 & var_r2->unk1);
        var_r2 += 2;
        var_r3 += 1;
        if (var_r3 <= 0x1BU) {
            goto loop_2;
        }
        var_r0 += 1;
    } while (var_r0 <= 0x1BU);
    return arg0;
}
