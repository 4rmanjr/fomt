# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801C6EC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801C6EC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801C6EC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801C6EC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801C6EC/opencode/func.c" 2
s32 func_0800EEF8(s32);
s32 func_08012464(s32, s32, s32);
s32 func_0805E860(s32, s32);
s32 func_080AA6D0(s32, s32, s32, s32, s32);
s32 method_0800A238__9FieldPloti(s32, s32);
s32 method_0800AF5C__C9FieldPlotPC9FieldPlotT1(s32, s32, s32);

s32 func_0801C6EC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 temp_r0;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r4_2;
    s32 temp_r7;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r2_2;
    u32 temp_r6;
    u32 var_r2;
    u8 *var_r5;
    u8 temp_r1;
    void *temp_r0_2;
    void *temp_r4;
    void *var_r4;

    sp4 = arg3;
    sp8 = 0;
    if (arg0->unk0->unk14(arg0) != 2) {

    } else {
        spC = (arg1 * 2) + 0x22;
        temp_r0 = (arg2 * 2) + 0x16;
        var_r2 = 0;
        var_r5 = arg0 + 0x1081;
        var_r4 = arg0 + 0x1084;
loop_3:
        temp_r1 = *var_r5;
        temp_r6 = (u32) (temp_r1 << 0x1E) >> 0x1E;
        if ((temp_r6 == 1) && (spC == var_r4->unk0) && (temp_r0 == var_r4->unk2)) {
            if (((u32) (temp_r1 << 0x1C) >> 0x1E) == 2) {

            } else {
                func_08012464(arg0->unk1054, 0, 0xC0);
                *var_r5 = (*var_r5 & ~0xC) | 8;
                temp_r4 = var_r4->unk4;
                func_0805E860(temp_r4 + 0x28, 0x873);
                temp_r0_2 = temp_r4 + 0x3C;
                temp_r4->unk3C = (s8) temp_r6;
                temp_r0_2->unk2 = 0;
                (temp_r0_2 + 2)->unk1 = (s8) temp_r6;
                func_0800EEF8(arg0->unk1038 + 0x1BD8);
            }
        } else {
            var_r5 += 0xC;
            var_r4 += 0xC;
            var_r2 += 1;
            if (var_r2 > 3U) {
                if (0 == 0) {
                    temp_r4_2 = ((0x2B * arg2) + arg1) * 4;
                    temp_r1_2 = arg0->unk1038 + 0x9DC + temp_r4_2;
                    sp10 = temp_r1_2;
                    sp8 = method_0800A238__9FieldPloti(temp_r1_2, sp4);
                    temp_r7 = arg0->unk4;
                    temp_r3 = arg0->unk1038 + 0x9DC;
                    temp_r1_3 = arg2 + 1;
                    var_r0 = 0;
                    if ((arg1 >= 0) && (temp_r1_3 >= 0) && (arg1 <= 0x2A) && (temp_r1_3 <= 0x18)) {
                        var_r0 = 1;
                    }
                    if (var_r0 != 0) {
                        var_r1 = temp_r3 + (((temp_r1_3 * 0x2B) + arg1) * 4);
                    } else {
                        var_r1 = 0;
                    }
                    temp_r2 = arg2 - 1;
                    var_r0_2 = 0;
                    if ((arg1 >= 0) && (temp_r2 >= 0) && (arg1 <= 0x2A) && (temp_r2 <= 0x18)) {
                        var_r0_2 = 1;
                    }
                    if (var_r0_2 != 0) {
                        var_r2_2 = temp_r3 + (((temp_r2 * 0x2B) + arg1) * 4);
                    } else {
                        var_r2_2 = 0;
                    }
                    func_080AA6D0(temp_r7, spC, temp_r0, sp10, method_0800AF5C__C9FieldPlotPC9FieldPlotT1(temp_r3 + temp_r4_2, var_r1, var_r2_2));
                }
            } else {
                goto loop_3;
            }
        }
    }
    return sp8;
}
