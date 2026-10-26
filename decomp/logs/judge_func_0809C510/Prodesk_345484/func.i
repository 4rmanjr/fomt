# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809C510/Prodesk_345484/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809C510/Prodesk_345484/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809C510/Prodesk_345484/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809C510/Prodesk_345484/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809C510/Prodesk_345484/func.c" 2
extern ? gUnk_081036D4;
extern ? gUnk_08107094;
extern ? gUnk_081070AC;

void *func_0809C510(void *arg0, s32 *arg1, u32 arg2, u8 arg3) {
    ? *var_r0_2;
    s32 temp_r0_2;
    s32 temp_r1;
    u32 var_r0;
    u8 temp_r3;
    u8 var_r1;
    u8 var_r2;
    void *temp_r0;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;

    temp_r3 = arg3;
    var_r0 = 0;
    if (arg2 <= 0xDU) {
        temp_r1 = *arg1 & (1 << (0x1F & arg2));
        var_r0 = (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
    }
    if (var_r0 != 0) {
        if ((arg2 == 0xD) && (temp_r3 != 0)) {
            temp_r0 = &gUnk_081036D4 + 0x9C;
            var_r1 = temp_r0->unk8;
            var_r2 = temp_r0->unk9;
            var_r0_2 = &gUnk_081070AC;
            goto block_11;
        }
        temp_r0_2 = arg2 * 0xC;
        temp_r0_3 = temp_r0_2 + &gUnk_081036D4;
        arg0->unk0 = (s32 *) *(temp_r0_2 + (&gUnk_081036D4 + 4));
        arg0->unk4 = (s32) temp_r0_3->unk8;
        arg0->unk8 = (s32) temp_r0_3->unk9;
    } else {
        if ((arg2 == 0xD) && (temp_r3 != 0)) {
            temp_r0_4 = &gUnk_081036D4 + 0x9C;
            var_r1 = temp_r0_4->unk8;
            var_r2 = temp_r0_4->unk9;
            var_r0_2 = &gUnk_08107094;
        } else {
            temp_r0_5 = (arg2 * 0xC) + &gUnk_081036D4;
            var_r1 = temp_r0_5->unk8;
            var_r2 = temp_r0_5->unk9;
            var_r0_2 = temp_r0_5->unk0;
        }
block_11:
        arg0->unk0 = var_r0_2;
        arg0->unk4 = (s32) var_r1;
        arg0->unk8 = (s32) var_r2;
    }
    return arg0;
}
