# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08021130/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08021130/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08021130/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08021130/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08021130/opencode/func.c" 2
s32 func_08021130(void *arg0, u32 arg1) {
    s32 sp0;
    s32 sp8;
    s32 spC;
    s16 var_r0;
    s16 var_r1;
    s32 var_r2;
    u8 temp_r0;

    switch (arg1) {
    default:
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        return 0;
    case 1:
        return 0x8000;
    case 2:
        return 0x10000;
    case 12:
        arg0->unk14->unkC(&sp0, arg0);
        sp8 = sp0;
        spC = sp4;
        var_r2 = 0x10;
        temp_r0 = arg0->unk20;
        if ((s32) temp_r0 >= 0) {
            if ((s32) temp_r0 > 1) {
                if ((s32) temp_r0 > 3) {

                } else {
                    var_r0 = sp8.unk4;
                    var_r1 = sp8.unk0;
                    goto block_11;
                }
            } else {
                var_r0 = sp8.unk6;
                var_r1 = sp8.unk2;
block_11:
                var_r2 = (var_r0 - var_r1) + 0x10;
            }
        }
        return (s32) (var_r2 << 0x10) / 30;
    }
}
