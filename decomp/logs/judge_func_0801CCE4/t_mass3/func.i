# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801CCE4/t_mass3/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801CCE4/t_mass3/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801CCE4/t_mass3/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801CCE4/t_mass3/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801CCE4/t_mass3/func.c" 2
s32 func_080AA6D0(s32, s32, s32, s32, s32);
s32 method_0800A33C__9FieldPloti(s32, s32);
s32 method_0800AF5C__C9FieldPlotPC9FieldPlotT1(s32, s32, s32);

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk4;
    u8 _pad8[12];
    s32 unk14;
    u8 _pad18[4128];
    s32 unk1038;
} GenObj;
s32 func_0801CCE4(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp4;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r3;
    s32 temp_r6;
    s32 temp_sl;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r2;

    temp_r6 = (arg1 + (0x2B * arg2)) * 4;
    temp_r2 = arg0->unk1038 + 0x9DC + temp_r6;
    sp4 = method_0800A33C__9FieldPloti(temp_r2, arg3);
    if (((void (*)(void *,...))(arg0->unk0->unk14))(arg0) == 2) {
        temp_sl = arg0->unk4;
        temp_r2_2 = arg0->unk1038 + 0x9DC;
        temp_r1 = arg2 + 1;
        var_r0 = 0;
        if ((arg1 >= 0) && (temp_r1 >= 0) && (arg1 <= 0x2A) && (temp_r1 <= 0x18)) {
            var_r0 = 1;
        }
        if (var_r0 != 0) {
            var_r1 = temp_r2_2 + ((arg1 + (temp_r1 * 0x2B)) * 4);
        } else {
            var_r1 = 0;
        }
        temp_r3 = arg2 - 1;
        var_r0_2 = 0;
        if ((arg1 >= 0) && (temp_r3 >= 0) && (arg1 <= 0x2A) && (temp_r3 <= 0x18)) {
            var_r0_2 = 1;
        }
        if (var_r0_2 != 0) {
            var_r2 = temp_r2_2 + ((arg1 + (temp_r3 * 0x2B)) * 4);
        } else {
            var_r2 = 0;
        }
        func_080AA6D0(temp_sl, (arg1 * 2) + 0x22, (arg2 * 2) + 0x16, temp_r2, method_0800AF5C__C9FieldPlotPC9FieldPlotT1(temp_r2_2 + temp_r6, var_r1, var_r2));
    }
    return sp4;
}
