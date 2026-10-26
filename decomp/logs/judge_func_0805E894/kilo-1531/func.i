# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E894/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E894/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E894/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E894/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E894/kilo-1531/func.c" 2
s32 func_0805E894(void *arg0) {
    s16 temp_r3;
    s16 var_r1;
    s32 temp_r0;
    s32 var_r2;
    u16 temp_r0_2;
    u16 temp_r2;
    u16 var_r1_2;
    u16 var_r5;

    temp_r3 = arg0->unk10;
    temp_r2 = arg0->unkE;
    if ((temp_r3 != 0) && (temp_r2 != 0)) {
        var_r1 = temp_r3;
        if ((s32) temp_r3 < 0) {
            var_r1 = 0 - temp_r3;
        }
        var_r2 = temp_r2 - var_r1;
        if (var_r2 <= 0) {
            var_r1_2 = arg0->unkC;
            temp_r0 = arg0->unk4;
            var_r5 = 0;
            if (temp_r0 != 0) {
                var_r5 = (arg0 + 4)->unk4;
            }
loop_8:
            if ((s32) temp_r3 > 0) {
                var_r1_2 += 1;
                if ((u32) var_r1_2 >= (u32) var_r5) {
                    goto block_10;
                }
                goto block_13;
            }
            if (var_r1_2 != 0) {
                var_r1_2 -= 1;
block_13:
                temp_r0_2 = (temp_r0 + (var_r1_2 * 4))->unk2;
                if ((temp_r0_2 == 0) || (var_r2 += temp_r0_2 << 8, (var_r2 > 0))) {
                    goto block_15;
                }
                goto loop_8;
            }
block_10:
            return 1;
        }
        goto block_15;
    }
block_15:
    return 0;
}
