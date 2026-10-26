# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_memmove/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_memmove/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_memmove/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_memmove/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_memmove/opencode/func.c" 2
u32 memmove(u32 arg0, u32 arg1, u32 arg2) {
    s32 temp_r0_2;
    s32 var_r2_2;
    s32 var_r2_3;
    u32 temp_r0;
    u32 var_r1;
    u32 var_r2;
    u32 var_r3;
    u32 var_r3_2;
    u32 var_r4;
    u8 *var_r4_2;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r4;
    void *temp_r4_2;

    var_r2 = arg2;
    var_r4 = arg0;
    var_r3 = arg1;
    if ((var_r3 < arg0) && (temp_r0 = var_r3 + var_r2, (arg0 < temp_r0))) {
        var_r3_2 = temp_r0;
        var_r4_2 = arg0 + var_r2;
        var_r2_2 = var_r2 - 1;
        if (var_r2_2 != -1) {
            do {
                var_r4_2 -= 1;
                var_r3_2 -= 1;
                *var_r4_2 = *var_r3_2;
                var_r2_2 -= 1;
            } while (var_r2_2 != -1);
        }
    } else {
        if ((var_r2 > 0xFU) && !((var_r3 | var_r4) & 3)) {
            var_r1 = var_r3;
            do {
                temp_r1 = var_r1 + 4;
                var_r4->unk0 = (s32) var_r1->unk0;
                temp_r4 = var_r4 + 4;
                temp_r1_2 = temp_r1 + 4;
                var_r4->unk4 = (s32) var_r1->unk4;
                temp_r4_2 = temp_r4 + 4;
                temp_r4->unk4 = (s32) temp_r1->unk4;
                var_r1 = temp_r1_2 + 4 + 4;
                temp_r4_2->unk4 = (s32) temp_r1_2->unk4;
                var_r4 = temp_r4_2 + 4 + 4;
                var_r2 -= 0x10;
            } while (var_r2 > 0xFU);
            if (var_r2 > 3U) {
                do {
                    temp_r0_2 = *var_r1;
                    var_r1 += 4;
                    *var_r4 = temp_r0_2;
                    var_r4 += 4;
                    var_r2 -= 4;
                } while (var_r2 > 3U);
            }
            var_r3 = var_r1;
        }
        var_r2_3 = var_r2 - 1;
        if (var_r2_3 != -1) {
            do {
                *var_r4 = (u8) *var_r3;
                var_r3 += 1;
                var_r4 += 1;
                var_r2_3 -= 1;
            } while (var_r2_3 != -1);
        }
    }
    return arg0;
}
