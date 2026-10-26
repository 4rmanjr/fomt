# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B96AC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B96AC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B96AC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B96AC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B96AC/opencode/func.c" 2
u16 ArcTan2(s32, s32);

s32 func_080B96AC(s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r0;
    s32 var_r3;
    u16 temp_r1;
    u16 temp_r6;
    u8 temp_r5;

    temp_r5 = (u8) arg6;
    temp_r6 = (u16) arg7;
    temp_r3 = ((u32) (arg4 << 0x10) >> 0x18) - ((u32) (arg1 << 0x10) >> 0x18);
    temp_r2 = ((u32) (arg2 << 0x10) >> 0x18) - ((u32) (arg5 << 0x10) >> 0x18);
    if ((s32) ((temp_r3 * temp_r3) + (temp_r2 * temp_r2)) <= (s32) (temp_r5 * temp_r5)) {
        temp_r1 = ArcTan2(temp_r3, temp_r2);
        if (arg3 == 1) {
            if ((u32) temp_r1 >= (u32) temp_r6) {
                var_r0 = 0x10000 - temp_r6;
                goto block_8;
            }
            goto block_9;
        }
        var_r3 = arg3;
        if (var_r3 == 3) {
            var_r3 = 1;
        }
        temp_r3_2 = (var_r3 + 1) << 0xE;
        if ((s32) temp_r1 < (s32) (temp_r6 + temp_r3_2)) {
            var_r0 = temp_r3_2 - temp_r6;
block_8:
            if ((s32) temp_r1 > var_r0) {
block_9:
                return 1;
            }
            goto block_10;
        }
        goto block_10;
    }
block_10:
    return 0;
}
