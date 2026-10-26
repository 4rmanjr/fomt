# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B9F64/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B9F64/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B9F64/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B9F64/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B9F64/opencode/func.c" 2
u8 func_080B9F64(s32 arg0, u8 arg1, s32 arg2) {
    s32 temp_r1;
    s32 temp_r3;
    s32 var_r0;
    s32 var_r1;
    u8 temp_r0_2;
    u8 temp_r4;
    u8 var_r6;
    void *temp_r0;
    void *temp_r2;

    temp_r4 = arg1;
    var_r6 = 0;
    temp_r2 = arg0 + ((u32) (arg2 << 0x18) >> 0x12);
    temp_r0 = arg0 + (temp_r4 << 6);
    temp_r3 = temp_r2->unk8A - temp_r0->unk8A;
    temp_r1 = temp_r0->unk8C - temp_r2->unk8C;
    if ((temp_r3 <= 0) || (temp_r1 <= 0) || (temp_r1 <= temp_r3)) {
        if (temp_r3 < 0) {
            if (temp_r1 > 0) {
                if ((s64) (temp_r1 + temp_r3) <= 0) {
                    goto block_6;
                }
                goto block_8;
            }
            goto block_9;
        }
block_6:
        if ((temp_r1 > 0) && (temp_r3 == 0)) {
            goto block_8;
        }
block_9:
        if (temp_r3 > 0) {
            if (((temp_r1 > 0) && (temp_r3 > temp_r1)) || ((temp_r1 < 0) && ((s64) (temp_r3 + temp_r1) > 0)) || (temp_r1 == 0)) {
                var_r1 = *(arg0 + 0x74 + (temp_r4 << 6));
                var_r0 = 5;
                goto block_47;
            }
            if ((temp_r1 >= 0) || ((s64) (temp_r3 + temp_r1) >= 0)) {
                goto block_18;
            }
            goto block_23;
        }
block_18:
        if (temp_r3 < 0) {
            if (temp_r1 < 0) {
                if (temp_r3 <= temp_r1) {
                    goto block_21;
                }
                goto block_23;
            }
            goto block_24;
        }
block_21:
        if ((temp_r1 < 0) && (temp_r3 == 0)) {
block_23:
            var_r1 = *(arg0 + 0x74 + (temp_r4 << 6));
            var_r0 = 6;
            goto block_47;
        }
block_24:
        if ((temp_r3 < 0) && (((temp_r1 < 0) && (temp_r3 < temp_r1)) || ((temp_r1 > 0) && ((s64) (temp_r3 + temp_r1) < 0)) || (temp_r1 == 0))) {
            var_r1 = *(arg0 + 0x74 + (temp_r4 << 6));
            var_r0 = 7;
            goto block_47;
        }
        if (temp_r3 > 0) {
            if ((temp_r1 > 0) && (temp_r3 == temp_r1)) {
                var_r1 = *(arg0 + 0x74 + (temp_r4 << 6));
                var_r0 = 0xC;
                goto block_47;
            }
            if ((temp_r3 > 0) && (temp_r1 < 0) && ((temp_r3 + temp_r1) == 0)) {
                var_r1 = *(arg0 + 0x74 + (temp_r4 << 6));
                var_r0 = 0xD;
                goto block_47;
            }
            goto block_39;
        }
block_39:
        if (temp_r3 < 0) {
            if ((temp_r1 < 0) && (temp_r3 == temp_r1)) {
                var_r1 = *(arg0 + 0x74 + (temp_r4 << 6));
                var_r0 = 0xE;
                goto block_47;
            }
            if ((temp_r3 < 0) && (temp_r1 > 0) && ((temp_r3 + temp_r1) == 0)) {
                var_r1 = *(arg0 + 0x74 + (temp_r4 << 6));
                var_r0 = 0xF;
                goto block_47;
            }
        }
    } else {
block_8:
        var_r1 = *(arg0 + 0x74 + (temp_r4 << 6));
        var_r0 = 4;
block_47:
        var_r6 = var_r0 - var_r1;
    }
    temp_r0_2 = var_r6 - 4;
    if ((u32) temp_r0_2 <= 7U) {
        var_r6 = temp_r0_2;
    } else if ((u32) var_r6 > 0xBU) {
        var_r6 -= 8;
    }
    return var_r6;
}
