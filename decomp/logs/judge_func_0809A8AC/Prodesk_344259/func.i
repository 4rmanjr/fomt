# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809A8AC/Prodesk_344259/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809A8AC/Prodesk_344259/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809A8AC/Prodesk_344259/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809A8AC/Prodesk_344259/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809A8AC/Prodesk_344259/func.c" 2
extern u16 gUnk_0810110C;

void *func_0809A8AC(void *arg0) {
    s16 *var_r0;
    s32 var_r1;
    s32 var_r4;
    u16 *var_r2_2;
    u16 temp_r1;
    u16 var_r0_2;
    u16 var_r3;
    void *var_r2;

    var_r2 = arg0;
    var_r4 = 0x7F;
    do {
        var_r2->unk0 = 0;
        var_r2->unk12 = (u16) (0xFFFFF000 & var_r2->unk12);
        var_r2->unk13 = (u8) (-0x11 & var_r2->unk13);
        var_r4 -= 1;
        var_r1 = 7;
        var_r0 = var_r2 + 0x10;
loop_2:
        *var_r0 = 0;
        var_r0 -= 2;
        var_r1 -= 1;
        if (var_r1 >= 0) {
            goto loop_2;
        }
        var_r2 += 0x14;
    } while (var_r4 != -1);
    arg0->unkA00 = 0;
    arg0->unkA01 = 0;
    arg0->unkA02 = 0;
    arg0->unkA03 = 0;
    arg0->unkA04 = 0;
    arg0->unkA05 = 0;
    var_r0_2 = 0;
    var_r3 = 0;
    var_r2_2 = &gUnk_0810110C;
loop_8:
    temp_r1 = *var_r2_2;
    if (temp_r1 != 0) {
        if (temp_r1 != var_r0_2) {
            *(arg0 + (var_r3 * 0x14)) = temp_r1;
            var_r3 += 1;
            var_r0_2 = *var_r2_2;
        }
        var_r2_2 += 0x14;
        goto loop_8;
    }
    arg0->unkA06 = (s8) var_r3;
    return arg0;
}
