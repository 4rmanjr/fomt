# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B5318/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B5318/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B5318/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B5318/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B5318/opencode/func.c" 2
s32 func_08008B6C(void *, s32);
s32 func_08008B88(void *, s32);
s32 func_08050DE4(s32);
s32 func_0805E860(s32, s32);
s32 func_080B9464(void *, u16, u16);

void func_080B5318(void *arg0) {
    s16 var_r2;
    s32 *var_r1;
    s32 *var_r1_2;
    s32 temp_r0_4;
    s32 temp_r0_6;
    s32 var_r0;
    u32 temp_r0_2;
    u32 var_r3;
    u8 temp_r0;
    u8 temp_r0_3;
    u8 temp_r0_5;
    u8 temp_r6;
    void *var_r0_2;

    temp_r0 = arg0->unkB3C;
    if ((u32) temp_r0 > 6U) {
        return;
    }
    temp_r0_2 = temp_r0 - 1;
    switch (temp_r0_2) {
    case 0:
        arg0->unkB40 = 0;
        var_r1 = arg0 + 0xB44;
        var_r0 = 1;
block_34:
        *var_r1 = var_r0;
        break;
    case 1:
        arg0->unk6C = 0;
        arg0->unk74 = 2;
        arg0->unkB3B = 0U;
        arg0->unk88 = 0U;
        arg0->unkB40 = 1;
        arg0->unkB44 = 1;
        func_08008B88(arg0 + 0x70C, 0xCC);
        break;
    case 2:
        temp_r6 = arg0->unkB3B;
        if (temp_r6 == 1) {
            func_08008B6C(arg0 + 0x70C, 0xA6);
            func_0805E860(arg0->unk920, 2);
            arg0->unkEB = temp_r6;
        }
        temp_r0_3 = arg0->unkB3B;
        if ((u32) temp_r0_3 <= 0x3BU) {
            arg0->unkB40 = 2;
            arg0->unk88 = (u8) (arg0->unk88 + 1);
            arg0->unk6C = 5;
            var_r1 = arg0 + 0x88 + 0x24;
            var_r0 = 3;
            goto block_34;
        }
        if ((u32) temp_r0_3 <= 0xB3U) {
            arg0->unkB40 = 1;
            arg0->unk6C = 1;
            arg0->unkAC = 1;
            arg0->unkCF = (s8) arg0->unkB64;
            var_r1 = (arg0 + 0xCF) - 0x1B;
            var_r0 = 2;
            goto block_34;
        }
        arg0->unkEB = 0U;
        arg0->unk6C = 0;
        *((arg0 + 0xEB) - 0x3F) = 0;
        arg0->unkB3B = 0xB4U;
        break;
    case 3:
        func_08008B88(arg0 + 0x70C, 0xCC);
        arg0->unkB3B = 0U;
        arg0->unk88 = 0U;
        arg0->unkAC = 2;
        arg0->unkB4 = 1;
        arg0->unk74 = 3;
        temp_r0_4 = func_080B9464(arg0, arg0->unk8A, (arg0 + 0x8A)->unk2);
        arg0->unk84 = temp_r0_4;
        if (temp_r0_4 > 0) {
            arg0->unk6C = 1;
        } else if (temp_r0_4 != 0) {

        } else {
            arg0->unk6C = temp_r0_4;
            func_08050DE4(arg0->unk718);
        }
        break;
    case 4:
        arg0->unkAC = 2;
        (arg0 + 0xAC)->unk8 = 1;
        if (arg0->unkB3B == 1) {
            func_08008B6C(arg0 + 0x70C, 0xA6);
        }
        temp_r0_5 = arg0->unkB3B;
        if ((u32) temp_r0_5 <= 0x3BU) {
            arg0->unkB40 = 2;
            arg0->unk88 = (u8) (arg0->unk88 + 1);
            arg0->unk6C = 5;
        } else if ((u32) temp_r0_5 <= 0xB3U) {
            arg0->unk6C = 1;
            arg0->unkB40 = 1;
        } else {
            arg0->unkB3B = 0xB4U;
        }
        if ((s32) arg0->unk84 >= 0) {
            temp_r0_6 = func_080B9464(arg0, arg0->unk8A, arg0->unk8C);
            arg0->unk84 = temp_r0_6;
            if (temp_r0_6 < 0) {
                func_08050DE4(arg0->unk718);
                arg0->unkB3B = 0xB4U;
                arg0->unk6C = 0;
                if ((u32) ((u16) arg0->unk8C >> 0xB) <= 9U) {
                    arg0->unk95 = 2;
                }
                arg0->unk8C = (u16) (arg0->unk8C + 0x300);
            }
        }
        break;
    case 5:
        arg0->unk88 = 0U;
        arg0->unkB3B = 0U;
        arg0->unk95 = 1;
        var_r3 = 0;
        var_r2 = 0x3A00;
        var_r0_2 = arg0 + 0x8A;
        var_r1_2 = (arg0 + 0x95) - 0x29;
        do {
            *var_r1_2 = 2;
            var_r0_2->unk0 = 0x7800;
            var_r0_2->unk2 = var_r2;
            var_r2 += 0x1800;
            var_r0_2 += 0x40;
            var_r1_2 += 0x40;
            var_r3 += 1;
        } while (var_r3 <= 1U);
        var_r0 = 0;
        arg0->unk74 = 2;
        arg0->unkB4 = 0;
        var_r1 = arg0 + 0xB40;
        goto block_34;
    }
    arg0->unkB3B = (u8) (arg0->unkB3B + 1);
}
