# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08059780/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08059780/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08059780/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08059780/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08059780/kilo-1531/func.c" 2
void func_08059780(void *arg0, s32 arg1) {
    s32 var_r3;
    u16 *var_r2;
    u16 temp_r0_2;
    u16 temp_r3;
    u16 var_r3_2;
    u32 var_r2_2;
    void *temp_r0;

    arg0->unk1420 = 0U;
    var_r3 = 0;
    var_r2 = arg0 + 0x1456;
    do {
        if (var_r3 != arg0->unk140A) {
            arg0->unk1420 = (u16) (*var_r2 + arg0->unk1420);
        }
        var_r2 += 0x2C;
        var_r3 += 1;
    } while (var_r3 <= 3);
    var_r2_2 = (u32) (arg0->unk1410 - (0x32 * (s16) arg0->unk1420)) / 50U;
    if ((s32) var_r2_2 > 0x63) {
        var_r2_2 = 0x63;
    }
    temp_r0 = arg0 + (arg0->unk140A * 0x2C);
    temp_r3 = temp_r0->unk1456;
    if (((s16) temp_r0->unk1456 != var_r2_2) || (arg1 <= 0)) {
        if ((temp_r3 == 0) && (arg1 < 0)) {
            var_r3_2 = (u16) var_r2_2;
        } else {
            temp_r0_2 = (s16) temp_r3 + arg1;
            var_r3_2 = temp_r0_2;
            if ((s32) (s16) temp_r0_2 > (s32) var_r2_2) {
                var_r3_2 = (u16) var_r2_2;
            }
            if ((s32) (var_r3_2 << 0x10) < 0) {
                goto block_14;
            }
        }
    } else {
block_14:
        var_r3_2 = 0;
    }
    (arg0 + (arg0->unk140A * 0x2C))->unk1456 = var_r3_2;
    arg0->unk1420 = (u16) ((s16) var_r3_2 + arg0->unk1420);
    arg0->unk1414 = (s32) (arg0->unk1410 - (0x32 * (s16) arg0->unk1420));
}
