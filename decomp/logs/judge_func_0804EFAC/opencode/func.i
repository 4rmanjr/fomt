# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EFAC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EFAC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EFAC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EFAC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EFAC/opencode/func.c" 2
u32 func_0804E4AC(s32, s32, s32, s32, s32);

s32 func_0804EFAC(void *arg0, s32 arg1) {
    s32 sp4;
    s32 temp_r1;
    s32 var_r0;
    u16 temp_r0;
    u32 temp_r0_2;
    u32 temp_r2;
    u32 var_r0_2;
    u32 var_r0_3;
    void *temp_r7;

    temp_r0 = arg0->unk14;
    var_r0 = arg0->unk16 + arg0->unk18;
    if (var_r0 > 2) {
        var_r0 -= 3;
    }
    temp_r7 = ((var_r0 * 4) + arg0)->unk8 + ((temp_r0 >> 2) * 0x10);
    temp_r2 = temp_r0 & 3;
    if (temp_r2 <= 3U) {
        sp4.unk0 = 4;
        sp4.unk2 = 2;
        temp_r0_2 = func_0804E4AC(sp4, temp_r7->unk0 + 4, (temp_r2 & 3) * 8, 0, arg1);
        if ((u32) (temp_r0_2 - 1) <= 1U) {
            temp_r1 = temp_r7->unk8;
            temp_r7->unkC = (s8) ((u32) ((0 - temp_r1) | temp_r1) >> 0x1F);
        }
        var_r0_2 = temp_r0_2;
    } else {
        var_r0_2 = 0;
    }
    if ((var_r0_2 == 0) || (var_r0_2 > 2U)) {
        return 0;
    }
    var_r0_3 = var_r0_2 + temp_r0;
    if (var_r0_3 > 0x1BU) {
        var_r0_3 = var_r0_3 % 28U;
    }
    arg0->unk14 = (u16) var_r0_3;
    if ((arg1 != 0x20) && (arg1 != 0x8140)) {
        arg0->unk1B = 1;
    }
    arg0->unk1A = 1;
    return 1;
}
