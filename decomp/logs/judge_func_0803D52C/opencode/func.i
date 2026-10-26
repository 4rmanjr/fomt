# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D52C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D52C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D52C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D52C/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D52C/opencode/func.c" 2
void *func_0803D52C(void *arg0, void *arg1) {
    u32 sp0;
    u32 sp4;
    u8 sp8;
    s32 var_r1;
    s32 var_r2_2;
    s32 var_r6;
    u32 *var_r2;
    u32 temp_r0_2;
    u32 temp_r1;
    u32 temp_r2;
    u32 var_r3;
    u32 var_r4;
    u8 temp_r0;
    u8 temp_r1_2;
    u8 temp_r3;
    u8 temp_r3_2;

    temp_r3 = arg1->unk1;
    sp8 = temp_r3;
    var_r3 = ((u32) (temp_r3 << 0x19) >> 0x1B) + ((((u32) (temp_r3 << 0x1E) >> 0x1E) * 0x1E) + ((((u32) (arg1->unk0 << 0x1D) >> 0x1D) + 6) * 0x78));
    if (var_r3 > 6U) {
        var_r3 = var_r3 % 7U;
    }
    var_r6 = (-8 & saved_reg_r9) | (7 & var_r3);
    sp0 = 0xC8;
    temp_r0 = arg1->unk0;
    temp_r1 = ((temp_r0 >> 3) * 7) + ((u32) (temp_r0 << 0x1D) >> 0x1D);
    sp4 = temp_r1;
    var_r2 = &sp0;
    if (temp_r1 < 0xC8U) {
        var_r2 = &sp4;
    }
    var_r4 = *var_r2;
    if ((u32) ((u32) ((s32) arg1->unk0 << 0xB) >> 0x1B) <= 5U) {
        temp_r3_2 = sp8;
        temp_r2 = (u32) (temp_r3_2 << 0x19) >> 0x1B;
        if (temp_r2 == 0) {
            sp8 = (-4 & temp_r3_2) | ((((u32) (temp_r3_2 << 0x1E) >> 0x1E) - 1) & 3);
            var_r2_2 = 0x1D;
        } else {
            var_r2_2 = temp_r2 - 1;
        }
        sp8 = (-0x7D & sp8) | ((var_r2_2 & 0x1F) * 4);
        temp_r1_2 = sp8;
        if ((((u32) (temp_r1_2 << 0x1E) >> 0x1E) == 3) && (((u32) (temp_r1_2 << 0x19) >> 0x1B) == 0x1D)) {
            var_r4 -= 1;
        }
        temp_r0_2 = (u32) (var_r6 << 0x1D) >> 0x1D;
        var_r1 = 6;
        if ((s32) temp_r0_2 > 1) {
            var_r1 = temp_r0_2 - 1;
        }
        var_r6 = (-8 & var_r6) | (var_r1 & 7);
    }
    arg0->unk0 = (s8) var_r4;
    arg0->unk1 = (s8) ((u32) (sp8 << 0x1E) >> 0x1E);
    arg0->unk2 = (s8) (((u32) (sp8 << 0x19) >> 0x1B) + 1);
    arg0->unk3 = (s8) ((u32) (var_r6 << 0x1D) >> 0x1D);
    return arg0;
}
