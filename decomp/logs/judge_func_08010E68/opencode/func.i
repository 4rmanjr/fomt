# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08010E68/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08010E68/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08010E68/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08010E68/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08010E68/opencode/func.c" 2
u32 GetAffection__C6Animal(s32);
u32 GetCapacity__C4Barn(s32);
u32 GetCapacity__C4Coop(s32);
s32 GetChicken__C4CoopUi(s32, u32);
s32 GetCow__C4BarnUi(s32, u32);
s32 GetHorse__C4Farm(s32);
s32 GetSheep__C4BarnUi(s32, u32);

s32 func_08010E68(s32 arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r7;
    u32 var_r4;
    u32 var_r4_2;

    var_r7 = 1;
    if (GetAffection__C6Animal(arg0 + 0x1C70) <= 0xC7U) {
        var_r7 = 0;
    }
    if ((GetHorse__C4Farm(arg0 + 0x14) != 0) && (GetAffection__C6Animal() <= 0xC7U)) {
        var_r7 = 0;
    }
    var_r4 = 0;
    temp_r5 = arg0 + 0x410;
loop_10:
    if (var_r4 < GetCapacity__C4Coop(temp_r5)) {
        if ((GetChicken__C4CoopUi(temp_r5, var_r4) != 0) && (GetAffection__C6Animal() <= 0xC7U)) {
            var_r7 = 0;
        }
        var_r4 += 1;
        goto loop_10;
    }
    var_r4_2 = 0;
    temp_r5_2 = arg0 + 0x5F0;
loop_17:
    if (var_r4_2 < GetCapacity__C4Barn(temp_r5_2)) {
        if (((GetCow__C4BarnUi(temp_r5_2, var_r4_2) != 0) || (GetSheep__C4BarnUi(temp_r5_2, var_r4_2) != 0)) && (GetAffection__C6Animal() <= 0xC7U)) {
            var_r7 = 0;
        }
        var_r4_2 += 1;
        goto loop_17;
    }
    return var_r7;
}
