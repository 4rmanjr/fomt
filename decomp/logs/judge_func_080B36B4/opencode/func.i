# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B36B4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B36B4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B36B4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B36B4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B36B4/opencode/func.c" 2
s32 func_08008B6C(void *, s32);
u16 rand();

void func_080B36B4(void *arg0) {
    s32 temp_r0;
    s32 temp_r2_2;
    s32 temp_r2_4;
    s32 var_r7;
    u16 *temp_r2;
    u16 *temp_r3;
    u16 *temp_r3_2;
    u16 temp_r1_4;
    u16 temp_r1_5;
    u16 temp_r1_6;
    u32 temp_r1;
    u8 *temp_r1_2;
    u8 *temp_r1_3;
    u8 *temp_r2_3;
    u8 *temp_r6;
    u8 temp_r0_2;
    u8 temp_r0_3;

    var_r7 = 0;
loop_1:
    temp_r6 = arg0 + 0x915 + var_r7;
    if (*temp_r6 != 0) {
        *(arg0 + 0x8E6 + (var_r7 * 2)) = ((s32) (0xB4 * rand()) >> 0x10) + 0xB4;
        *temp_r6 = 0;
    }
    temp_r0 = var_r7 * 4;
    temp_r1 = *(arg0 + 0x848 + temp_r0) - 1;
    switch (temp_r1) {
    case 2:
        temp_r1_2 = arg0 + 0x8E1 + var_r7;
        temp_r0_2 = *temp_r1_2;
        if ((u32) temp_r0_2 > 0x70U) {
            *temp_r1_2 = temp_r0_2 - 1;
        }
        if (*temp_r1_2 != 0x70) {

        } else {
            *(arg0 + 0x848 + temp_r0) = 1;
            *(arg0 + 0x85C + temp_r0) = 2;
            *(arg0 + 0x915 + var_r7) = 1;
            *(arg0 + 0x8F0 + (var_r7 * 2)) = 0;
            *(arg0 + 0x91A + var_r7) = 1;
            *(arg0 + 0x91F + var_r7) = 1;
        }
        break;
    case 3:
        temp_r1_3 = arg0 + 0x8E1 + var_r7;
        temp_r0_3 = *temp_r1_3 + 1;
        *temp_r1_3 = temp_r0_3;
        if (temp_r0_3 != 0xA8) {

        } else {
            *(arg0 + 0x848 + temp_r0) = 5;
            *(arg0 + 0x85C + temp_r0) = 1;
            arg0->unk90D = (u8) (arg0->unk90D + 1);
            *(arg0 + 0x91A + var_r7) = 1;
            *(arg0 + 0x91F + var_r7) = 1;
            func_08008B6C(arg0 + 0x814, 0xC7);
        }
        break;
    case 5:
        temp_r2 = arg0 + 0x8FC + (var_r7 * 2);
        temp_r1_4 = *temp_r2 + 1;
        *temp_r2 = temp_r1_4;
        if ((temp_r1_4 << 0x10) != 0x012C0000) {

        } else {
            *temp_r2 = 0;
            *(arg0 + 0x848 + temp_r0) = 3;
            *(arg0 + 0x91A + var_r7) = 1;
        }
        break;
    case 0:
        temp_r2_2 = var_r7 * 2;
        temp_r3 = arg0 + 0x8F0 + temp_r2_2;
        temp_r1_5 = *temp_r3 + 1;
        *temp_r3 = temp_r1_5;
        if (temp_r1_5 == ((u16) *(arg0 + 0x8E6 + temp_r2_2) >> 1)) {
            *temp_r3 = 0;
            *(arg0 + 0x848 + temp_r0) = 2;
            *(arg0 + 0x870 + temp_r0) = 1;
            *(arg0 + 0x91A + var_r7) = 1;
        }
        temp_r2_3 = arg0 + 0x924 + var_r7;
        if (*temp_r2_3 != 0) {
            arg0->unk90C = (u8) (arg0->unk90C + 1);
            *temp_r2_3 = 0;
            if ((u32) arg0->unk90C > 5U) {
                func_08008B6C(arg0 + 0x81C, 0xBC);
            }
        }
        break;
    case 1:
        temp_r2_4 = var_r7 * 2;
        temp_r3_2 = arg0 + 0x8F0 + temp_r2_4;
        temp_r1_6 = *temp_r3_2 + 1;
        *temp_r3_2 = temp_r1_6;
        if (temp_r1_6 == ((u16) *(arg0 + 0x8E6 + temp_r2_4) >> 1)) {
            *temp_r3_2 = 0;
            *(arg0 + 0x848 + temp_r0) = 4;
            *(arg0 + 0x870 + temp_r0) = 2;
            *(arg0 + 0x91A + var_r7) = 1;
            func_08008B6C(arg0 + 0x814, 0xA6);
        }
        break;
    }
    var_r7 += 1;
    if (var_r7 <= 4) {
        goto loop_1;
    }
}
