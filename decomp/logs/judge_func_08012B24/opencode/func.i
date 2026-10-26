# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08012B24/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08012B24/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08012B24/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08012B24/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08012B24/opencode/func.c" 2
extern void *gUnk_0300040C;

void func_08012B24(void *arg1, s32 arg2) {
    s32 *var_r2;
    u32 temp_r0;
    u32 temp_r0_2;
    void *temp_r2;
    void *var_r3;

    switch (arg2) {
    case 0:
        temp_r0 = gUnk_0300040C->unk378;
        if (temp_r0 <= 1U) {
            temp_r2 = gUnk_0300040C + 0x378 + ((temp_r0 * 8) + 4);
            if (temp_r2 != 0) {
                temp_r2->unk0 = (s32) arg1->unk0;
                temp_r2->unk4 = (s32) arg1->unk4;
            }
            gUnk_0300040C->unk378 = (u32) (gUnk_0300040C->unk378 + 1);
            return;
        }
        return;
    case 1:
        var_r2 = gUnk_0300040C + 0x38C;
        temp_r0_2 = gUnk_0300040C->unk38C;
        if (temp_r0_2 <= 0x27U) {
            var_r3 = var_r2 + ((temp_r0_2 * 8) + 4);
block_14:
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) arg1->unk0;
                var_r3->unk4 = (s32) arg1->unk4;
            }
            *var_r2 += 1;
        }
        break;
    case 2:
        var_r2 = gUnk_0300040C + 0x4D0;
        if (gUnk_0300040C->unk4D0 == 0) {
            var_r3 = gUnk_0300040C + 0x4D4;
            goto block_14;
        }
        break;
    }
}
