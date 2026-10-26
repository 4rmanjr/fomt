# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B09B0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B09B0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B09B0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B09B0/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B09B0/opencode/func.c" 2
extern ? gUnk_0810756C;

void func_080B09B0(void *arg0) {
s32 sp0;
    s8 *var_r1;
    s8 var_r0;
    u8 temp_r1_2;
    void *temp_r0;
    void *temp_r1;

    temp_r0 = &gUnk_0810756C + 0xC;
    sp0.unk0 = (s32) gUnk_0810756C.unk0;
    sp0.unk4 = (s32) gUnk_0810756C.unk4;
    sp0.unk8 = (s32) gUnk_0810756C.unk8;
    temp_r1 = &sp0 + 0xC;
    sp0.unkC = (s32) gUnk_0810756C.unkC;
    temp_r1->unk4 = (s32) temp_r0->unk4;
    temp_r1->unk8 = (s32) temp_r0->unk8;
    temp_r1->unkC = (s32) temp_r0->unkC;
    arg0->unk934 = (s32) *((arg0->unk930 * 4) + sp);
    temp_r1_2 = arg0->unk938;
    if ((u32) temp_r1_2 <= 2U) {
        var_r1 = arg0 + 0x90E;
        var_r0 = 0xA;
    } else if ((u32) (u8) (temp_r1_2 - 3) <= 2U) {
        var_r1 = arg0 + 0x90E;
        var_r0 = 0xF;
    } else if ((u32) (u8) (temp_r1_2 - 6) <= 2U) {
        var_r1 = arg0 + 0x90E;
        var_r0 = 0x14;
    } else if ((u32) (u8) (temp_r1_2 - 9) <= 1U) {
        var_r1 = arg0 + 0x90E;
        var_r0 = 0x1E;
    } else if ((u32) (u8) (temp_r1_2 - 0xB) <= 2U) {
        var_r1 = arg0 + 0x90E;
        var_r0 = 0x23;
    } else if ((u32) (u8) (temp_r1_2 - 0xE) <= 2U) {
        var_r1 = arg0 + 0x90E;
        var_r0 = 0x2D;
    } else if ((u32) (u8) (temp_r1_2 - 0x11) <= 2U) {
        var_r1 = arg0 + 0x90E;
        var_r0 = 0x37;
    } else {
        var_r1 = arg0 + 0x90E;
        var_r0 = 0x3C;
    }
    *var_r1 = var_r0;
}
