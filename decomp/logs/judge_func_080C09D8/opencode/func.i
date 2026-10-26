# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C09D8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C09D8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C09D8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C09D8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C09D8/opencode/func.c" 2
s32 rand();
extern ? gUnk_08107FB0;

u16 func_080C09D8(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    u16 *var_r1;
    u16 var_r0;

    temp_r0 = arg0->unk5A0;
    if (temp_r0 != 0) {
        if (temp_r0 != 3) {
            var_r0 = (arg0->unk614 * 0x54) + gUnk_08107FB0.unk6;
        } else {
            temp_r0_2 = arg0->unk5A4;
            if (temp_r0_2 != 0) {
                if (temp_r0_2 != 1) {
                    var_r0 = (arg0->unk614 * 0x54) + gUnk_08107FB0.unk6;
                } else if (arg0->unk60F != 0) {
                    arg0->unk60F = 0U;
                    var_r0 = (arg0->unk614 * 0x54) + gUnk_08107FB0.unk6;
                } else if (arg0->unk60A != 0) {
                    var_r0 = (arg0->unk614 * 0x54) + gUnk_08107FB0.unk0;
                } else {
                    var_r1 = ((((u32) (rand() << 0x10) >> 0x1F) + 1) * 2) + &gUnk_08107FB0;
                    goto block_17;
                }
            } else {
                var_r1 = (((arg0->unk609 * 4) + (arg0->unk5AC + 3)) * 2) + &gUnk_08107FB0;
                goto block_17;
            }
        }
    } else if (arg0->unk612 != 0) {
        var_r0 = (arg0->unk614 * 0x54) + gUnk_08107FB0.unk0;
    } else if (arg0->unk611 != 0) {
        var_r0 = (arg0->unk614 * 0x54) + gUnk_08107FB0.unk4;
    } else {
        var_r1 = (((arg0->unk609 * 4) + (arg0->unk5AC + 3)) * 2) + &gUnk_08107FB0;
block_17:
        var_r0 = (arg0->unk614 * 0x54) + *var_r1;
    }
    return var_r0;
}
