# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801CDBC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801CDBC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801CDBC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801CDBC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801CDBC/opencode/func.c" 2
s32 func_0801740C(s32);
s32 func_0801CCE4(void *, s32, s32, s32);
s32 func_080AB68C(s32, s32, s32, s32);
s32 method_08009B68__4FarmUi(s32, s32);
s32 method_0800A78C__C9FieldPlot(s32);

s32 func_0801CDBC(void *arg0, s32 arg1, s32 arg2, ? arg3) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 var_r7;
    s32 var_r8;
    s32 var_sb;

    temp_r4 = arg0->unk1038 + 0x9DC + ((arg1 + (arg2 * 0x2B)) * 4);
    var_r7 = arg1;
    var_r8 = arg2;
    if ((method_0800A78C__C9FieldPlot(temp_r4) << 0x18) != 0) {
        temp_r0 = func_0801740C(temp_r4);
        switch (temp_r0) {
        case 1:
            var_r7 -= 1;
            break;
        case 2:
            var_r8 -= 1;
            break;
        case 3:
            var_r7 -= 1;
            var_r8 -= 1;
            break;
        }
        var_sb = func_0801CCE4(arg0, var_r7, var_r8, arg3);
        temp_r5 = var_r7 + 1;
        func_0801CCE4(arg0, temp_r5, var_r8, arg3);
        temp_r4_2 = var_r8 + 1;
        func_0801CCE4(arg0, var_r7, temp_r4_2, arg3);
        func_0801CCE4(arg0, temp_r5, temp_r4_2, arg3);
    } else {
        var_sb = func_0801CCE4(arg0, var_r7, var_r8, arg3);
    }
    if (arg0->unk0->unk14(arg0) == 2) {
        switch (var_sb) {
        case 1:
            method_08009B68__4FarmUi(arg0->unk1038 + 0x14, 1);
            func_080AB68C(arg0->unk1028, (var_r7 * 0x10) + 0x118, (var_r8 * 0x10) + 0xBB, 4);
            break;
        case 2:
            method_08009B68__4FarmUi(arg0->unk1038 + 0x14, 6);
            func_080AB68C(arg0->unk1028, (var_r7 * 0x10) + 0x120, (var_r8 * 0x10) + 0xD0, 7);
            break;
        }
    }
    return 0;
}
