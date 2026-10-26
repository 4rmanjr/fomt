# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A607C/Prodesk_349095/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A607C/Prodesk_349095/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A607C/Prodesk_349095/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A607C/Prodesk_349095/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A607C/Prodesk_349095/func.c" 2
s32 func_080A5BD8(void *, ? *, u8, u8);
extern ? gUnk_08106C74;
extern ? gUnk_081073D0;
extern ? gUnk_081073F0;
extern ? gUnk_08107400;
extern ? gUnk_08107420;

void func_080A607C(void *arg0, u32 arg1) {
    ? *var_r0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r3;
    u8 var_r2;
    u8 var_r3;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {
    case 0x26:
        if (arg1 > 0xFU) {
            temp_r0_2 = (arg1 - 0x10) * 2;
            var_r2 = *(temp_r0_2 + &gUnk_081073D0);
            var_r3 = *(temp_r0_2 + (&gUnk_081073D0 + 1));
        } else {
            var_r0 = &gUnk_081073F0;
block_12:
            temp_r3 = arg1 * 2;
            var_r2 = *(temp_r3 + var_r0);
            var_r3 = *(temp_r3 + (var_r0 + 1));
        }
block_13:
        func_080A5BD8(arg0, &gUnk_08106C74, var_r2, var_r3);
        break;
    case 0x27:
        if (arg1 > 0xFU) {
            temp_r0_3 = (arg1 - 0x10) * 2;
            var_r2 = *(temp_r0_3 + &gUnk_081073D0);
            var_r3 = *(temp_r0_3 + (&gUnk_081073D0 + 1));
        } else {
            var_r0 = &gUnk_08107400;
            goto block_12;
        }
        goto block_13;
    case 0x41:
        func_080A5BD8(arg0, &gUnk_08106C74, *(arg1 + &gUnk_08107420), 5U);
        break;
    }
    arg0->unk29 = 1;
}
