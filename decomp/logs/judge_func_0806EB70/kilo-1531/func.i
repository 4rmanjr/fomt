# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806EB70/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806EB70/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806EB70/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806EB70/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806EB70/kilo-1531/func.c" 2
s32 Unpack(s32, u16 *);
s32 free(u16 *);
u16 *func_080D3BC0(s32);
u16 *malloc(s32);

void func_0806EB70(s32 arg1, s32 arg2) {
    u16 *sp0;
    u16 *sp4;
s32 sp8;
    u16 *spC;
    u16 sp14;
    s32 var_r2;
    u16 *temp_ip;
    u16 *var_r1;
    u16 *var_r3;
    u32 var_r1_2;
    u32 var_r2_2;

    if (arg2 != 0) {
        sp0 = 0;
        sp4 = 0;
        sp8.unk4 = 0;
        var_r1 = malloc(0x1600);
        if (var_r1 == 0) {
            var_r1 = func_080D3BC0(0x1600);
        }
        sp0 = var_r1;
        sp4 = var_r1;
        spC = var_r1 + 0x1600;
        sp14 = 0;
        var_r2 = 0xB00;
        do {
            *var_r1 = sp14;
            var_r2 -= 1;
            var_r1 += 2;
        } while (var_r2 != 0);
        sp0.unk4 = var_r1;
        Unpack(arg2, sp0);
        var_r3 = sp0;
        var_r1_2 = 0;
        temp_ip = var_r3;
        do {
            var_r2_2 = 0;
loop_7:
            *(((((var_r1_2 >> 5) * 2) + (var_r2_2 >> 5) + arg1) << 0xB) + (((var_r1_2 & 0x1F) << 6) + 0x06000000) + ((var_r2_2 & 0x1F) * 2)) = *var_r3;
            var_r3 += 2;
            var_r2_2 += 1;
            if (var_r2_2 <= 0x3FU) {
                goto loop_7;
            }
            var_r1_2 += 1;
        } while (var_r1_2 <= 0x2BU);
        if (temp_ip != 0) {
            free(temp_ip);
        }
    }
}
