# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075220/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075220/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075220/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075220/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075220/kilo-1531/func.c" 2
s32 func_0804E9F4(s32, s32, s32, s32, s32, s32);
s32 func_0804EDB4(u32, s32, s32, s32, s32);

void func_08075220(void *arg0, u32 arg1, s32 arg2) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 var_r6;
    u32 temp_r0_2;
    u32 temp_r7;
    void *temp_r0;

    var_r6 = 0x1A;
    temp_r0 = arg0->unk4;
    if (arg1 != 0) {
        temp_r0_2 = arg1 % 30U;
        if (temp_r0_2 != 0) {
            temp_r5 = arg2 << 6;
            func_0804E9F4(temp_r0->unk18 + temp_r5 + 0x34, 0x88, 2, 2, 0, 0x20);
            func_0804EDB4(temp_r0_2, temp_r0->unk18 + temp_r5 + 0x32, 0x120, 0, 0x20);
            var_r6 = 0x16;
        }
        temp_r7 = (arg1 / 30U) & 3;
        if (temp_r7 != 0) {
            temp_r6 = var_r6 - 4;
            temp_r5_2 = arg2 << 6;
            func_0804E9F4(temp_r0->unk18 + temp_r5_2 + (temp_r6 * 2), 0x84, 2, 2, 0, 0x20);
            func_0804EDB4(temp_r7, temp_r0->unk18 + temp_r5_2 + ((temp_r6 - 1) * 2), 0x120, 0, 0x20);
            var_r6 = temp_r6 - 6;
        }
        if ((arg1 / 120U) != 0) {
            temp_r6_2 = var_r6 - 6;
            temp_r5_3 = arg2 << 6;
            func_0804E9F4(temp_r0->unk18 + temp_r5_3 + (temp_r6_2 * 2), 0x78, 6, 2, 0, 0x20);
            func_0804EDB4(temp_r7, temp_r0->unk18 + temp_r5_3 + ((temp_r6_2 - 1) * 2), 0x120, 0, 0x20);
        }
    }
}
